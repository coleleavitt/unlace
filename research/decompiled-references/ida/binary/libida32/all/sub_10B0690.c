__int64 __fastcall sub_10B0690(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __m128 v7; // xmm0
  __m128 v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  double v14[4]; // [rsp+8h] [rbp-20h] BYREF

  *(_QWORD *)(a1 + 112) = a1 + 128;
  *(_QWORD *)&v14[0] = a3;
  v13 = a5;
  *(_QWORD *)(a1 + 120) = 0x300000000LL;
  v7 = _mm_loadh_ps(v14);
  *(_QWORD *)(a1 + 152) = a1 + 168;
  *(__m128 *)a1 = v7;
  *(_QWORD *)&v14[0] = a4;
  *(_QWORD *)(a1 + 160) = 0x400000000LL;
  v8 = _mm_loadh_ps((const double *)&v13);
  *(_QWORD *)(a1 + 224) = a1 + 208;
  *(_QWORD *)(a1 + 232) = a1 + 208;
  *(__m128 *)(a1 + 72) = v8;
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
  v9 = operator new(0x30u);
  v10 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(v9 + 32) = 1;
  *(_QWORD *)(v9 + 40) = a3;
  if ( v10 )
  {
    while ( 1 )
    {
      if ( *(int *)(v10 + 32) > 1 )
      {
        v11 = *(_QWORD *)(v10 + 16);
        if ( !v11 )
          break;
      }
      else
      {
        v11 = *(_QWORD *)(v10 + 24);
        if ( !v11 )
          break;
      }
      v10 = v11;
    }
  }
  result = std::_Rb_tree_insert_and_rebalance();
  ++*(_QWORD *)(a1 + 64);
  return result;
}

