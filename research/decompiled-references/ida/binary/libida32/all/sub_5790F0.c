unsigned __int64 __fastcall sub_5790F0(_QWORD *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  __int64 v4; // rdx
  const char *v5; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  const char *v9; // rbx
  _BYTE v10[4104]; // [rsp+0h] [rbp-1028h] BYREF
  unsigned __int64 v11; // [rsp+1008h] [rbp-20h]

  v1 = 0;
  v11 = __readfsqword(0x28u);
  do
  {
    while ( 1 )
    {
      v3 = sub_70AFD0(v1);
      if ( *(_QWORD *)(*a1 + 56LL) > 1u )
        break;
      ++v1;
      v10[0] = 0;
      qunlink(v10);
      if ( v1 == 6 )
        goto LABEL_5;
    }
    ++v1;
    set_file_ext(v10, 4096, *(_QWORD *)(*a1 + 48LL), v3);
    qunlink(v10);
  }
  while ( v1 != 6 );
LABEL_5:
  v4 = a1[2];
  if ( *(_QWORD *)(*a1 + 32LL) )
  {
    v5 = *(const char **)(*a1 + 24LL);
    if ( !v4 )
    {
      if ( strcmp(haystack, v5) )
        return v11 - __readfsqword(0x28u);
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v5 = haystack;
  if ( v4 )
  {
LABEL_10:
    if ( strcmp((const char *)a1[1], v5) )
      return v11 - __readfsqword(0x28u);
  }
LABEL_11:
  if ( a1[5] > 1u )
  {
    v7 = a1[7];
    if ( v7 )
    {
      qfclose(v7);
      v8 = a1[5] == 0;
      a1[7] = 0;
      v9 = haystack;
      if ( !v8 )
        v9 = (const char *)a1[4];
      if ( (unsigned __int8)qfileexist(v9, v5) && !qfilesize(v9) )
        qunlink(v9);
    }
  }
  return v11 - __readfsqword(0x28u);
}

