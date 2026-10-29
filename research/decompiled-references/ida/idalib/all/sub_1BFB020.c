__int64 __fastcall sub_1BFB020(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __m128 a5,
        __m128 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // r14
  unsigned __int64 *v13; // rbp
  __int64 v14; // r13
  __int64 v15; // rdi
  unsigned __int64 v16; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-50h]
  char v20; // [rsp+10h] [rbp-48h]

  v9 = a2;
  v10 = a1;
  v20 = a3;
  v19 = a3 | 4;
  if ( (_BYTE)a2 )
  {
    LOBYTE(v9) = 0;
    sub_1BFB020(a1, v9, a3, 1);
  }
  if ( (a1 & 4) != 0 )
  {
    do
    {
      v10 &= ~4uLL;
      LOBYTE(v9) = 0;
      LOBYTE(v8) = a4;
      sub_1BFB020(v10, v9, v19, v8);
    }
    while ( (v10 & 4) != 0 );
  }
  v13 = *(unsigned __int64 **)a8;
  v14 = **(_QWORD **)(a8 + 16);
  v15 = *(_QWORD *)(v14 + 248);
  v16 = **(_QWORD **)(a8 + 8);
  if ( a4 )
  {
    v18 = sub_A72BF0(v15, v16);
    v15 = *(_QWORD *)(v14 + 248);
    v16 = v18;
  }
  if ( (v20 & 4) != 0 )
    v16 = v16 & 7 | 4 | v16 & 0xFFFFFFFFFFFFFFF8LL;
  *v13 = sub_A73030(v15, v16, 1u);
  return sub_1BFAC00(
           **(_QWORD **)(a8 + 16),
           *(_QWORD *)a8,
           *(_QWORD *)(*(_QWORD *)(a8 + 16) + 8LL),
           *(_QWORD *)(*(_QWORD *)(a8 + 16) + 16LL),
           *(_QWORD *)(*(_QWORD *)(a8 + 16) + 56LL),
           0,
           a5,
           a6);
}
