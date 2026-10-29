__int64 (__fastcall **__fastcall sub_BAD920(_QWORD *a1))()
{
  void *v2; // rdi
  void *v3; // rdi
  __int64 *v4; // rbx
  __int64 *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  void *v9; // rdi
  void *v10; // rdi
  __int64 v11; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v13; // rdi

  *a1 = off_1C73998;
  v2 = (void *)a1[19];
  if ( v2 )
    sub_186B220(v2);
  v3 = (void *)a1[16];
  if ( v3 )
    sub_186B220(v3);
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
  v9 = (void *)a1[9];
  if ( v9 )
    sub_186B220(v9);
  v10 = (void *)a1[8];
  if ( v10 )
    sub_186B220(v10);
  v11 = a1[5];
  result = off_1C70148;
  *a1 = off_1C70148;
  if ( v11 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v11 - 8));
  v13 = a1[4];
  if ( v13 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v13 - 8));
  return result;
}

