__int64 __fastcall sub_11000C0(__int64 a1, __int64 *a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r13
  __int64 v7; // r14
  _QWORD *v8; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r15
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  _QWORD *i; // rcx

  v8 = *(_QWORD **)(a3 + 8);
  v9 = *(unsigned int *)(a3 + 16);
  v10 = (unsigned __int64)&v8[v9];
  if ( v8 == (_QWORD *)v10 )
    goto LABEL_12;
  v7 = a1;
  v5 = a4;
  v6 = a5;
  v9 = v10 - 8;
  if ( !*(_QWORD *)(v10 - 8) )
    goto LABEL_12;
  while ( v8 == (_QWORD *)v10 )
  {
    do
    {
      do
LABEL_12:
        v10 = v9;
      while ( v8 == (_QWORD *)v9 );
      v9 -= 8LL;
    }
    while ( !*(_QWORD *)v9 );
  }
  while ( 1 )
  {
    v11 = *(_QWORD *)(v10 - 8);
    if ( (unsigned __int8)sub_2195AD0(v11, 1781) )
      break;
    if ( (unsigned __int8)sub_2195AD0(v11, 1384) )
    {
      v17 = sub_10FCD60(a2, v11, 0);
      v5 &= ~sub_FE08B0(v17, v18);
      v6 &= ~v19;
    }
LABEL_9:
    v9 = v10 - 8;
    if ( v8 != (_QWORD *)(v10 - 8) )
    {
      for ( i = (_QWORD *)(v10 - 16); !*i; --i )
      {
        v9 = (unsigned __int64)i;
        if ( v8 == i )
          break;
      }
    }
    v10 = v9;
    if ( v8 == (_QWORD *)v9 )
      goto LABEL_12;
  }
  v12 = sub_10FCD60(a2, v11, 0);
  v14 = sub_FE08B0(v12, v13);
  if ( !(v5 & v14 | v6 & v15) )
    goto LABEL_9;
  sub_10FFD00(v7, v11, v5, v6);
  return v7;
}

