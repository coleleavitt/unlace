__int64 __fastcall sub_5983D0(__int64 a1, const char *a2, char a3)
{
  __int64 v4; // rdx
  const char *v5; // rdi
  int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  const char *v10; // rdi
  __int64 result; // rax
  const char *v12; // rdi
  const char *file_ext; // rax
  const char *v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rcx
  const char *v17; // rdx
  const char *v18; // rdi
  char v19; // dl
  const char *v20; // rdi
  const char *errdesc; // rsi
  char src[4104]; // [rsp+10h] [rbp-1048h] BYREF
  unsigned __int64 v23; // [rsp+1018h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  sub_5941D0((_QWORD *)a1, (__int64)a2, a3);
  if ( !(unsigned __int8)sub_592D70(*(__m128i **)(a1 + 1544), (__int64)a2, v4) )
    return 2;
  v5 = haystack;
  if ( *(_QWORD *)(a1 + 56) )
  {
    v5 = *(const char **)(a1 + 48);
    v6 = sub_7BA150(v5);
    if ( (unsigned __int8)is_cvt64(v5, a2, v15) )
      goto LABEL_4;
  }
  else
  {
    v6 = sub_7BA150(haystack);
    if ( (unsigned __int8)is_cvt64(haystack, a2, v7) )
    {
LABEL_4:
      if ( v6 == 2 )
        sub_378C70((__int64)"Conversion failed: cannot access the database");
      if ( v6 != 3 && v6 )
        sub_378C70((__int64)"Conversion failed: database is corrupted\n"
                            "Please repair the database and run the conversion again");
      v9 = *(_QWORD *)(a1 + 56);
      if ( v9 > 1 )
      {
        set_file_ext(src, 4096, *(_QWORD *)(a1 + 48), "id3");
        v9 = *(_QWORD *)(a1 + 56);
      }
      else
      {
        src[0] = 0;
      }
      v10 = haystack;
      if ( v9 )
        v10 = *(const char **)(a1 + 48);
      if ( (unsigned int)qrename(v10, src) )
      {
        get_qerrno();
        errdesc = (const char *)get_errdesc(src);
        sub_378C70((__int64)"Conversion failed: %s", errdesc);
      }
      return 1;
    }
  }
  if ( v6 != 2 )
  {
    if ( v6 == 3 )
    {
      if ( !(unsigned __int8)is_cvt64(v5, a2, v8) )
      {
        v17 = haystack;
        if ( *(_QWORD *)(a1 + 56) )
          v17 = *(const char **)(a1 + 48);
        sub_590EC0(1, 17, (__int64)v17, v16);
      }
      sub_62F970();
      if ( *(_QWORD *)(a1 + 56) )
        sub_593F40(src, 4096, *(const char **)(a1 + 48), "$$$");
      else
        sub_593F40(src, 4096, haystack, "$$$");
      qunlink(src);
      sub_387AC0();
    }
    if ( v6 )
    {
      v12 = haystack;
      if ( *(_QWORD *)(a1 + 8) )
        v12 = *(const char **)a1;
      file_ext = (const char *)get_file_ext(v12);
      v14 = file_ext;
      if ( !file_ext || strcasecmp(file_ext, "i64") && (a2 = (const char *)sub_72B5B0(0), strcasecmp(v14, a2)) )
      {
        v20 = haystack;
        if ( *(_QWORD *)(a1 + 8) )
          v20 = *(const char **)a1;
        if ( (unsigned __int8)qfileexist(v20, a2) )
          sub_387B90();
      }
      sub_387B90();
    }
    return 1;
  }
  if ( (unsigned int)get_qerrno() == 1 && *__errno_location() == 13 )
    sub_378D50();
  v18 = haystack;
  if ( *(_QWORD *)(a1 + 56) )
    v18 = *(const char **)(a1 + 48);
  v19 = qfileexist(v18, a2);
  result = 0;
  if ( v19 )
    sub_378D50();
  return result;
}
