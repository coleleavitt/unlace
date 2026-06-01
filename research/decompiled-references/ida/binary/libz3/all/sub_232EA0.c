void __fastcall sub_232EA0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 *v4; // rbx
  __int64 *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  void *v9; // rdi
  void *v10; // rdi

  *a1 = qword_1C63778;
  sub_180C0E0();
  v2 = a1[14];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[13];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = (__int64 *)a1[12];
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
          v7 = a1[11];
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
    v4 = (__int64 *)a1[12];
    if ( v4 )
LABEL_13:
      sub_186B220(v4 - 1);
  }
  v9 = (void *)a1[10];
  a1[4] = &off_1C62200;
  if ( v9 )
    sub_186B220(v9);
  v10 = (void *)a1[7];
  if ( v10 )
    sub_186B220(v10);
  operator delete(a1, 0xA0u);
}

