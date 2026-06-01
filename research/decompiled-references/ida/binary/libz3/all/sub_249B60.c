__int64 (__fastcall **__fastcall sub_249B60(_QWORD *a1))()
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 *v5; // rbx
  __int64 *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  void *v10; // rdi
  __int64 (__fastcall **result)(); // rax
  void *v12; // rdi

  v2 = a1 + 15;
  *(v2 - 15) = qword_1C63778;
  sub_180C0E0(v2);
  v3 = a1[14];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[13];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = (__int64 *)a1[12];
  if ( v5 )
  {
    v6 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 >= v6 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = a1[11];
          if ( (*(_DWORD *)(v7 + 8))-- == 1 )
            break;
        }
        if ( ++v5 >= v6 )
          goto LABEL_12;
      }
      sub_15D7BC0(v8, v7);
      ++v5;
    }
    while ( v5 < v6 );
LABEL_12:
    v5 = (__int64 *)a1[12];
    if ( v5 )
LABEL_13:
      sub_186B220(v5 - 1);
  }
  v10 = (void *)a1[10];
  result = &off_1C62200;
  a1[4] = &off_1C62200;
  if ( v10 )
    result = (__int64 (__fastcall **)())sub_186B220(v10);
  v12 = (void *)a1[7];
  if ( v12 )
    return (__int64 (__fastcall **)())sub_186B220(v12);
  return result;
}

