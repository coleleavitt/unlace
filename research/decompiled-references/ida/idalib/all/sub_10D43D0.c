__int64 __fastcall sub_10D43D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v7; // rbp
  __m128 v9; // xmm0
  __m128 v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // esi
  __int64 result; // rax
  _BOOL8 v16; // rdi
  __int64 v17; // [rsp+0h] [rbp-28h] BYREF
  double v18[4]; // [rsp+8h] [rbp-20h] BYREF

  v7 = a1 + 32;
  *(_QWORD *)(a1 + 112) = a1 + 128;
  *(_QWORD *)&v18[0] = a3;
  v17 = a5;
  *(_QWORD *)(a1 + 120) = 0x300000000LL;
  v9 = _mm_loadh_ps(v18);
  *(_QWORD *)(a1 + 152) = a1 + 168;
  *(__m128 *)a1 = v9;
  *(_QWORD *)&v18[0] = a4;
  *(_QWORD *)(a1 + 160) = 0x400000000LL;
  v10 = _mm_loadh_ps((const double *)&v17);
  *(_QWORD *)(a1 + 224) = a1 + 208;
  *(_QWORD *)(a1 + 232) = a1 + 208;
  *(__m128 *)(a1 + 72) = v10;
  *(_QWORD *)(a1 + 248) = a1 + 264;
  *(_OWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = a1 + 32;
  *(_QWORD *)(a1 + 56) = a1 + 32;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 256) = 0x1000000000LL;
  *(_QWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  *(_DWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 416) = 0;
  *(_QWORD *)(a1 + 424) = 0;
  *(_DWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0;
  *(_DWORD *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 480) = 0;
  *(_QWORD *)(a1 + 504) = 0;
  *(_BYTE *)(a1 + 520) = 0;
  *(_BYTE *)(a1 + 521) = a6;
  *(_BYTE *)(a1 + 522) = 0;
  *(_OWORD *)(a1 + 464) = 0;
  v11 = operator new(0x30u);
  v12 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(v11 + 32) = 1;
  *(_QWORD *)(v11 + 40) = a3;
  if ( !v12 )
  {
    v12 = a1 + 32;
    v16 = 1;
    goto LABEL_9;
  }
  while ( 1 )
  {
    v14 = *(_DWORD *)(v12 + 32);
    if ( v14 <= 1 )
      break;
    v13 = *(_QWORD *)(v12 + 16);
    if ( !v13 )
      goto LABEL_7;
LABEL_4:
    v12 = v13;
  }
  v13 = *(_QWORD *)(v12 + 24);
  if ( v13 )
    goto LABEL_4;
LABEL_7:
  v16 = 1;
  if ( v12 != v7 )
    v16 = v14 > 1;
LABEL_9:
  result = std::_Rb_tree_insert_and_rebalance(v16, v11, v12, v7);
  ++*(_QWORD *)(a1 + 64);
  return result;
}
