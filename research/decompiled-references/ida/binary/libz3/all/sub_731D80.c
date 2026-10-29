void __fastcall sub_731D80(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rdi
  __int64 *v4; // rbx
  __int64 *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  _QWORD *v9; // rdi
  _QWORD *v10; // rdi

  *a1 = &off_1C53C00;
  v2 = a1[1422];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = (void *)a1[1421];
  if ( v3 )
    sub_186B220(v3);
  v4 = (__int64 *)a1[1418];
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
          v7 = a1[1417];
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
    v4 = (__int64 *)a1[1418];
    if ( v4 )
LABEL_13:
      sub_186B220(v4 - 1);
  }
  sub_8EFC90(a1 + 99);
  v9 = (_QWORD *)a1[21];
  if ( v9 != a1 + 23 )
    operator delete(v9, a1[23] + 1LL);
  v10 = (_QWORD *)a1[17];
  if ( v10 != a1 + 19 )
    operator delete(v10, a1[19] + 1LL);
  sub_18572D0(a1 + 3);
}

