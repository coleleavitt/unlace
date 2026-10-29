__int64 (__fastcall **__fastcall sub_447700(_QWORD *a1))()
{
  _QWORD *v2; // rbx
  _QWORD *i; // r13
  void (__fastcall ***v4)(_QWORD); // rbp
  __int64 *v5; // rbx
  __int64 *v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdi
  void *v10; // rdi
  __int64 (__fastcall **result)(); // rax
  void *v12; // rdi
  __int64 v13; // rdi

  v2 = (_QWORD *)a1[3];
  *a1 = &off_1C4E908;
  if ( v2 )
  {
    for ( i = &v2[*((unsigned int *)v2 - 1)]; v2 != i; ++v2 )
    {
      v4 = (void (__fastcall ***)(_QWORD))*v2;
      if ( *v2 )
      {
        (**v4)(*v2);
        sub_186B220(v4);
      }
    }
  }
  v5 = (__int64 *)a1[12];
  if ( v5 )
  {
    v6 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 >= v6 )
      goto LABEL_14;
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
          goto LABEL_13;
      }
      sub_15D7BC0(v8, v7);
      ++v5;
    }
    while ( v5 < v6 );
LABEL_13:
    v5 = (__int64 *)a1[12];
    if ( v5 )
LABEL_14:
      sub_186B220(v5 - 1);
  }
  v10 = (void *)a1[10];
  result = &off_1C62200;
  a1[4] = &off_1C62200;
  if ( v10 )
    result = (__int64 (__fastcall **)())sub_186B220(v10);
  v12 = (void *)a1[7];
  if ( v12 )
    result = (__int64 (__fastcall **)())sub_186B220(v12);
  v13 = a1[3];
  if ( v13 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v13 - 8));
  return result;
}

