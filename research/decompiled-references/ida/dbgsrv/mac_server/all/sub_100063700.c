/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100063700
// Address: 0x0000000100063700

//----- (0000000100063700) ----------------------------------------------------
char __fastcall sub_100063700(_QWORD *a1, __int64 a2, char a3, double a4)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _QWORD *v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rsi
  _QWORD *i; // rdx
  unsigned __int64 v13; // rdx

  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 5 )
    return 0;
  v6 = *(_QWORD *)(a2 + 32);
  if ( v6 == -1 )
    v6 = *(_QWORD *)(a2 + 16 * (unsigned int)(*(_QWORD *)(a2 + 24) != -1) + 8);
  v7 = sub_100063550((__int64)a1, *(_DWORD *)(a2 + 4), v6);
  if ( !v7 )
    return 0;
  v8 = (_QWORD *)v7;
  sub_100060FA0((__int64)a1, "%a: bptcnd yielded false\n", a4);
  *(_BYTE *)(a2 + 16) = 1;
  v9 = a1[45];
  v10 = 8 * v9;
  i = (_QWORD *)a1[44];
  if ( 8 * v9 )
  {
    for ( i = (_QWORD *)a1[44]; v6 != *i; ++i )
    {
      v10 -= 8;
      if ( !v10 )
        return sub_100063080(a1, v8, a2, a3, a4);
    }
  }
  if ( i == (_QWORD *)(a1[44] + 8 * v9) )
    return sub_100063080(a1, v8, a2, a3, a4);
  if ( under_debugger == 1 )
    BUG();
  interr(0x269u);
  return sub_100063810(617, v10, v13);
}
// 100063802: variable 'v13' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
