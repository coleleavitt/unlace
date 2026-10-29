unsigned __int64 __fastcall sub_592960(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int i; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  const char *v7; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  const char *v11; // rbx
  _BYTE v12[4104]; // [rsp+0h] [rbp-1028h] BYREF
  unsigned __int64 v13; // [rsp+1008h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( (unsigned __int8)is_cvt64(a1, a2, a3) )
  {
    if ( *(_QWORD *)(*a1 + 56LL) > 1u )
      set_file_ext(v12, 4096, *(_QWORD *)(*a1 + 48LL), "id3");
    else
      v12[0] = 0;
    qunlink(v12);
  }
  for ( i = 0; i != 6; ++i )
  {
    while ( 1 )
    {
      v5 = sub_72B5B0(i);
      if ( *(_QWORD *)(*a1 + 56LL) > 1u )
        break;
      ++i;
      v12[0] = 0;
      qunlink(v12);
      if ( i == 6 )
        goto LABEL_6;
    }
    set_file_ext(v12, 4096, *(_QWORD *)(*a1 + 48LL), v5);
    qunlink(v12);
  }
LABEL_6:
  v6 = a1[2];
  if ( *(_QWORD *)(*a1 + 32LL) )
  {
    v7 = *(const char **)(*a1 + 24LL);
    if ( !v6 )
    {
      if ( strcmp(haystack, v7) )
        return v13 - __readfsqword(0x28u);
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  v7 = haystack;
  if ( v6 )
  {
LABEL_11:
    if ( strcmp((const char *)a1[1], v7) )
      return v13 - __readfsqword(0x28u);
  }
LABEL_12:
  if ( a1[5] > 1u )
  {
    v9 = a1[7];
    if ( v9 )
    {
      qfclose(v9);
      v10 = a1[5] == 0;
      a1[7] = 0;
      v11 = haystack;
      if ( !v10 )
        v11 = (const char *)a1[4];
      if ( (unsigned __int8)qfileexist(v11, v7) && !qfilesize(v11) )
        qunlink(v11);
    }
  }
  return v13 - __readfsqword(0x28u);
}
