__int64 (__fastcall **__fastcall sub_E0E220(_QWORD *a1))()
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 *v4; // rbx
  __int64 *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  void *v9; // rdi
  __int64 (__fastcall **result)(); // rax
  void *v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi

  v2 = a1[24];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[16];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = (__int64 *)a1[15];
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 >= v5 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = a1[14];
          if ( (*(_DWORD *)(v6 + 8))-- == 1 )
            break;
        }
        if ( ++v4 >= v5 )
          goto LABEL_12;
      }
      sub_15D7BC0(v7, v6);
      ++v4;
    }
    while ( v4 < v5 );
LABEL_12:
    v4 = (__int64 *)a1[15];
    if ( v4 )
LABEL_13:
      sub_186B220(v4 - 1);
  }
  v9 = (void *)a1[13];
  result = &off_1C62200;
  a1[7] = &off_1C62200;
  if ( v9 )
    result = (__int64 (__fastcall **)())sub_186B220(v9);
  v11 = (void *)a1[10];
  if ( v11 )
    result = (__int64 (__fastcall **)())sub_186B220(v11);
  v12 = a1[6];
  if ( v12 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v12 - 8));
  v13 = a1[5];
  if ( v13 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v13 - 8));
  v14 = a1[4];
  if ( v14 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v14 - 8));
  v15 = a1[3];
  if ( v15 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v15 - 8));
  v16 = a1[2];
  if ( v16 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v16 - 8));
  v17 = a1[1];
  if ( v17 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v17 - 8));
  return result;
}

