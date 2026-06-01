/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_446160
// Address: 0x0000000000446160

//----- (0000000000446160) ----------------------------------------------------
__int64 __fastcall sub_446160(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int128 v11; // rax
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 v14; // r15
  __int64 v15; // r13
  __int64 v16; // rbp
  __int64 v17; // rdi
  _QWORD *v18; // rbx
  double v19; // xmm4_8
  double v20; // xmm5_8
  void *v21; // rdi
  __int64 v22; // rax

  *(_QWORD *)&v11 = sub_43D800(a1, a2);
  v14 = *(_QWORD *)(a1 + 40);
  v15 = *((_QWORD *)&v11 + 1);
  v16 = v11;
  if ( v11 == __PAIR128__(a1 + 8, *(_QWORD *)(a1 + 24)) )
  {
    sub_445BA0(*(_QWORD **)(a1 + 16), a3, a4, a5, a6, v12, v13, a9, a10);
    *(_QWORD *)(a1 + 24) = v15;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = v15;
    *(_QWORD *)(a1 + 40) = 0;
  }
  else if ( (_QWORD)v11 == *((_QWORD *)&v11 + 1) )
  {
    return 0;
  }
  else
  {
    do
    {
      v17 = v16;
      v16 = std::_Rb_tree_increment(v16);
      v18 = (_QWORD *)std::_Rb_tree_rebalance_for_erase(v17, a1 + 8);
      sub_441540((__int64)(v18 + 7), a3, a4, a5, a6, v19, v20, a9, a10);
      v21 = (void *)v18[4];
      if ( v21 )
      {
        v18[5] = 0;
        j__free(v21);
      }
      operator delete(v18, 0x58u);
      v22 = *(_QWORD *)(a1 + 40) - 1LL;
      *(_QWORD *)(a1 + 40) = v22;
    }
    while ( v15 != v16 );
    v14 -= v22;
  }
  return v14;
}
// 44617B: variable 'v11' is possibly undefined
// 4461C0: variable 'v19' is possibly undefined
// 4461C0: variable 'v20' is possibly undefined
// 446223: variable 'v12' is possibly undefined
// 446223: variable 'v13' is possibly undefined
// 4053F0: using guessed type __int64 __fastcall std::_Rb_tree_rebalance_for_erase(_QWORD, _QWORD);
// 405760: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
