__int64 __fastcall google_breakpad::LinuxDumper::EnumerateMappings(google_breakpad::LinuxDumper *this)
{
  google_breakpad::LineReader *v2; // rbx
  bool v4; // al
  __int64 v5; // rbx
  __int64 v6; // rax
  char v7; // al
  unsigned __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 *v10; // rbx
  __int64 v11; // [rsp+10h] [rbp-1B0h] BYREF
  __int64 v12; // [rsp+18h] [rbp-1A8h] BYREF
  __int64 v13; // [rsp+20h] [rbp-1A0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-198h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-18Ch] BYREF
  char *v16; // [rsp+38h] [rbp-188h] BYREF
  char v17[260]; // [rsp+40h] [rbp-180h] BYREF
  _DWORD n[3]; // [rsp+144h] [rbp-7Ch]
  _BYTE *v19; // [rsp+150h] [rbp-70h]
  char v20; // [rsp+15Fh] [rbp-61h]
  _BYTE *v21; // [rsp+160h] [rbp-60h]
  _BYTE *v22; // [rsp+168h] [rbp-58h]
  unsigned __int64 *v23; // [rsp+170h] [rbp-50h]
  google_breakpad::LineReader *v24; // [rsp+178h] [rbp-48h]
  int v25; // [rsp+184h] [rbp-3Ch]
  unsigned __int64 v26; // [rsp+188h] [rbp-38h]
  __int64 v27; // [rsp+190h] [rbp-30h]
  unsigned __int64 j; // [rsp+198h] [rbp-28h]
  unsigned __int64 i; // [rsp+1A0h] [rbp-20h]
  void *src; // [rsp+1A8h] [rbp-18h]

  if ( (*(unsigned __int8 (__fastcall **)(google_breakpad::LinuxDumper *, char *, _QWORD, const char *))(*(_QWORD *)this + 72LL))(
         this,
         v17,
         *((unsigned int *)this + 2),
         "maps") != 1 )
    return 0;
  v27 = *(_QWORD *)std::vector<unsigned long,google_breakpad::PageStdAllocator<unsigned long>>::operator[](
                     (char *)this + 208,
                     33);
  v26 = *(_QWORD *)std::vector<unsigned long,google_breakpad::PageStdAllocator<unsigned long>>::operator[](
                     (char *)this + 208,
                     9);
  v25 = sub_1ADB9E(v17, 0, 0);
  if ( v25 < 0 )
    return 0;
  v2 = (google_breakpad::LineReader *)operator new(0x20Cu, (google_breakpad::LinuxDumper *)((char *)this + 72));
  google_breakpad::LineReader::LineReader(v2, v25);
  v24 = v2;
  while ( (unsigned __int8)google_breakpad::LineReader::GetNextLine(v24, (const char **)&v16, &v15) )
  {
    v22 = (_BYTE *)my_read_hex_ptr(&v14, v16);
    if ( *v22 != 45 )
      goto LABEL_35;
    v21 = (_BYTE *)my_read_hex_ptr(&v13, v22 + 1);
    if ( *v21 != 32 )
      goto LABEL_35;
    v20 = v21[3] == 120;
    v19 = (_BYTE *)my_read_hex_ptr(&v12, v21 + 6);
    if ( *v19 != 32 )
      goto LABEL_35;
    src = nullptr;
    src = (void *)my_strchr(v16, 47);
    if ( !src && v27 && v27 == v14 )
    {
      src = "linux-gate.so";
      v12 = 0;
    }
    v4 = src
      && (unsigned __int8)std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::empty((char *)this + 160) != 1;
    if ( v4
      && ((*(_QWORD *)&n[1] = *(_QWORD *)std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::back((char *)this + 160),
           *(_QWORD *)(*(_QWORD *)&n[1] + 8LL) + **(_QWORD **)&n[1] != v14)
       || (v5 = my_strlen(src), v5 != my_strlen(*(_QWORD *)&n[1] + 41LL))
       || (v6 = my_strlen(src), (unsigned int)my_strncmp(src, *(_QWORD *)&n[1] + 41LL, v6))
       || v20 != *(_BYTE *)(*(_QWORD *)&n[1] + 40LL) && (*(_BYTE *)(*(_QWORD *)&n[1] + 40LL) == 1 || !v20)
        ? (v7 = 0)
        : (v7 = 1),
          v7) )
    {
      *(_QWORD *)(*(_QWORD *)&n[1] + 24LL) = v13;
      *(_QWORD *)(*(_QWORD *)&n[1] + 8LL) = v13 - **(_QWORD **)&n[1];
      *(_BYTE *)(*(_QWORD *)&n[1] + 40LL) |= v20;
      google_breakpad::LineReader::PopLine(v24, v15);
    }
    else
    {
      v11 = operator new(0x128u, (google_breakpad::LinuxDumper *)((char *)this + 72));
      std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::push_back(
        (char *)this + 160,
        &v11);
      my_memset(v11, 0, 296);
      *(_QWORD *)(v11 + 16) = v14;
      *(_QWORD *)(v11 + 24) = v13;
      *(_QWORD *)v11 = v14;
      *(_QWORD *)(v11 + 8) = v13 - v14;
      *(_QWORD *)(v11 + 32) = v12;
      *(_BYTE *)(v11 + 40) = v20;
      if ( src )
      {
        n[0] = my_strlen(src);
        if ( n[0] <= 0xFEu )
          memcpy((void *)(v11 + 41), src, n[0]);
      }
LABEL_35:
      google_breakpad::LineReader::PopLine(v24, v15);
    }
  }
  if ( v26 )
  {
    for ( i = 0; ; ++i )
    {
      v8 = std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::size((char *)this + 160);
      if ( i >= v8 )
        break;
      v23 = *(unsigned __int64 **)std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::operator[](
                                    (char *)this + 160,
                                    i);
      if ( v26 >= *v23 && v26 < *v23 + v23[1] )
      {
        for ( j = i; j; --j )
        {
          v9 = *(_QWORD *)std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::operator[](
                            (char *)this + 160,
                            j - 1);
          *(_QWORD *)std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::operator[](
                       (char *)this + 160,
                       j) = v9;
        }
        v10 = v23;
        *(_QWORD *)std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::operator[](
                     (char *)this + 160,
                     0) = v10;
        break;
      }
    }
  }
  sub_1ADAB0(v25);
  return (unsigned int)std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::empty((char *)this + 160)
       ^ 1;
}

