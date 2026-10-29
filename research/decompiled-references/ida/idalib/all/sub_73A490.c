__int64 __fastcall sub_73A490(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  _QWORD *v4; // r12
  __int64 v5; // rdx
  int v7; // ecx
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // r15
  unsigned int *v13; // rbp
  __int64 v14; // rdx
  unsigned int *v15; // rsi
  unsigned int *v16; // r13
  __int64 v17; // rdx
  unsigned int *v18; // rsi

  v3 = *(_QWORD *)(a1 + 2664);
  v4 = *(_QWORD **)(v3 + 8);
  if ( !v4 && *(__int16 *)(a1 + 1634) > 0 )
  {
    v13 = (unsigned int *)(a1 + 1640);
    do
    {
      v14 = *v13;
      v15 = v13;
      LODWORD(v4) = (_DWORD)v4 + 1;
      v13 += 8;
      sub_745040(a1, v15, v14);
    }
    while ( (int)v4 < *(__int16 *)(a1 + 1634) );
    v3 = *(_QWORD *)(a1 + 2664);
    v4 = *(_QWORD **)(v3 + 8);
  }
  sub_7466F0(a1, 3, a2, v4, *(unsigned int *)(v3 + 24), 0);
  v5 = *(unsigned int *)*v4;
  if ( (_DWORD)v5 )
  {
    v7 = *(_DWORD *)(v3 + 24);
    if ( v7 )
    {
      v5 = *(unsigned int *)(*v4 + 6LL * (v7 - 1) + 6);
      if ( !(_DWORD)v5 )
        sub_743130(a1, 3, v5);
    }
    v8 = *(__int16 *)(a1 + 1634);
    if ( v8 > 0x1E )
      sub_743100(24, 0, v5);
    v9 = a1 + 32 * v8 + 1640;
    ++*(_WORD *)(a1 + 1634);
    *(_QWORD *)(a1 + 2664) = v9;
    sub_745040(a1, v9, v5);
    sub_740BA0(a1, 1);
    v10 = *(_QWORD *)(a1 + 2664);
    v11 = *(_QWORD *)(v10 + 8);
    if ( !v11 && *(__int16 *)(a1 + 1634) > 0 )
    {
      v16 = (unsigned int *)(a1 + 1640);
      do
      {
        v17 = *v16;
        v18 = v16;
        LODWORD(v11) = v11 + 1;
        v16 += 8;
        sub_745040(a1, v18, v17);
      }
      while ( (int)v11 < *(__int16 *)(a1 + 1634) );
      v10 = *(_QWORD *)(a1 + 2664);
      v11 = *(_QWORD *)(v10 + 8);
    }
    v12 = sub_745C10(a1, v11, *(unsigned int *)(v10 + 24));
    sub_746320(a1, v11, *(unsigned int *)(v10 + 24));
    sub_745D70(a1, v4, *(unsigned int *)(v3 + 24), v12, 0);
  }
  else
  {
    if ( !*(_BYTE *)(v3 + 28) )
    {
      if ( !under_debugger )
        interr(830);
      BUG();
    }
    sub_746320(a1, v4, *(unsigned int *)(v3 + 24));
  }
  *(_BYTE *)(v3 + 28) = 0;
  *(_WORD *)(v3 + 30) = 0;
  --*(_DWORD *)(a1 + 28);
  sub_73CFE0(a1);
  return 1;
}
