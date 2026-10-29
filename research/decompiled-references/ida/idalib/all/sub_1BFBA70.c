__int64 __fastcall sub_1BFBA70(__int64 a1, char a2, char a3, __m128 a4, __m128 a5)
{
  unsigned __int64 *v7; // r12
  __int64 v8; // rbp
  unsigned __int64 *v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  unsigned __int64 v13; // rax

  v7 = *(unsigned __int64 **)a1;
  v8 = **(_QWORD **)(a1 + 16);
  v9 = *(unsigned __int64 **)(a1 + 8);
  v10 = *(_QWORD *)(v8 + 248);
  v11 = *v9;
  if ( a3 )
  {
    v13 = sub_A72BF0(v10, v11);
    v10 = *(_QWORD *)(v8 + 248);
    v11 = v13;
  }
  if ( (a2 & 4) != 0 )
    v11 = v11 & 7 | 4 | v11 & 0xFFFFFFFFFFFFFFF8LL;
  *v7 = sub_A73030(v10, v11, 1u);
  return sub_1BFAC00(
           **(_QWORD **)(a1 + 16),
           *(_QWORD *)a1,
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL),
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL),
           0,
           a4,
           a5);
}
