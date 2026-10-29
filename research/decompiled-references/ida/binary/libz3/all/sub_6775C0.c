__int64 __fastcall sub_6775C0(__int64 *a1)
{
  void *v2; // rdi
  _QWORD **v3; // rbx
  _QWORD **v4; // r13
  _QWORD *v5; // r12
  void *v6; // rdi
  __int64 *v7; // rbx
  __int64 *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi

  *a1 = (__int64)qword_1C691B0;
  v2 = (void *)a1[15];
  if ( v2 )
    sub_186B220(v2);
  v3 = (_QWORD **)a1[14];
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 == v4 )
      goto LABEL_11;
    do
    {
      v5 = *v3;
      if ( *v3 )
      {
        v6 = (void *)v5[2];
        if ( v6 )
          sub_186B220(v6);
        sub_186B220(v5);
      }
      ++v3;
    }
    while ( v4 != v3 );
    v4 = (_QWORD **)a1[14];
    if ( v4 )
    {
LABEL_11:
      *((_DWORD *)v4 - 1) = 0;
      sub_186B220(v4 - 1);
    }
  }
  sub_2334C0(a1 + 10);
  sub_2334C0(a1 + 8);
  v7 = (__int64 *)a1[7];
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_20;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = a1[6];
          if ( (*(_DWORD *)(v9 + 8))-- == 1 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_19;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_19:
    v7 = (__int64 *)a1[7];
    if ( v7 )
LABEL_20:
      sub_186B220(v7 - 1);
  }
  return sub_2334C0(a1 + 4);
}

