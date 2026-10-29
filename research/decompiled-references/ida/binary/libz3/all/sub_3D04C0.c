void __fastcall sub_3D04C0(_QWORD *a1)
{
  void *v2; // rbx
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  void *v8; // rdi
  _QWORD *v9; // rdi

  v2 = (void *)a1[69];
  *a1 = &off_1C4E620;
  if ( v2 )
  {
    sub_4069B0(v2);
    sub_186B220(v2);
  }
  v3 = (__int64 *)a1[74];
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 >= v4 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = a1[73];
          if ( (*(_DWORD *)(v5 + 8))-- == 1 )
            break;
        }
        if ( ++v3 >= v4 )
          goto LABEL_10;
      }
      sub_15D7BC0(v6, v5);
      ++v3;
    }
    while ( v3 < v4 );
LABEL_10:
    v3 = (__int64 *)a1[74];
    if ( v3 )
LABEL_11:
      sub_186B220(v3 - 1);
  }
  v8 = (void *)a1[70];
  if ( v8 )
    sub_186B220(v8);
  sub_63D960(a1 + 38);
  sub_63D960(a1 + 7);
  v9 = (_QWORD *)a1[2];
  *a1 = qword_1C65108;
  if ( v9 != a1 + 4 )
    operator delete(v9, a1[4] + 1LL);
}

