__int64 __fastcall sub_3C8720(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  int v6; // edx
  int v7; // r8d
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r12
  unsigned int v14; // eax
  __m128i v15; // xmm0
  __int64 v16; // rcx
  __m128i v17; // xmm1

  v4 = *(_QWORD *)(a2 + 64);
  v6 = *(_DWORD *)(a3 + 24);
  v7 = *(_DWORD *)(a3 + 20);
  if ( v4 )
  {
    if ( (unsigned int)(*(_DWORD *)(v4 + 60) - 1) > 1 )
    {
      v8 = 0;
      v9 = sub_3C8680(0, v7, v6);
      if ( (int)v10 < 0 )
        goto LABEL_10;
      goto LABEL_5;
    }
    v8 = *(_QWORD *)(a2 + 64);
    v9 = sub_3C8680(v4, v7, v6);
  }
  else
  {
    v8 = 0;
    v9 = sub_3C8680(0, v7, v6);
  }
  if ( (int)v10 < 0 )
  {
LABEL_10:
    v13 = 0;
    goto LABEL_8;
  }
LABEL_5:
  v12 = *(_QWORD *)(v11 + 64);
  if ( (int)v10 >= *(_DWORD *)(v12 + 64) )
    goto LABEL_10;
  if ( (unsigned int)v10 >= *(_DWORD *)(v12 + 64) )
    sub_3C5320(v8);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 528) + 8 * v10);
LABEL_8:
  v14 = sub_1351F0(*(_QWORD *)(v13 + 64), v9, *(unsigned int *)(v13 + 72));
  v15 = _mm_cvtsi32_si128(*(_DWORD *)(v13 + 72));
  v16 = *(_QWORD *)(a3 + 48);
  v17 = _mm_cvtsi32_si128(v14);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a3 + 32);
  *(_QWORD *)a1 = v16;
  *(_QWORD *)(a1 + 12) = _mm_unpacklo_epi32(v17, v15).m128i_u64[0];
  return a1;
}
