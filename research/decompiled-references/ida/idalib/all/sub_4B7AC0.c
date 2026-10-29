__int64 __fastcall sub_4B7AC0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  const char *v9; // rax
  signed int v10; // ebp
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // xmm0_8
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // [rsp+8h] [rbp-40h]

  v9 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 120LL))(a2);
  v10 = sub_4B7980(a1, v9);
  if ( v10 < 0 )
  {
    v10 = *(_DWORD *)(a1 + 80);
    v12 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 80) = v10 + 1;
    v13 = *(_QWORD *)(a1 + 32);
    v14 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v10), _mm_cvtsi32_si128(a3)).m128i_u64[0];
    v15 = v13 + 1;
    if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v13 + 1) )
    {
      v18 = v14;
      v17 = qvector_reserve(a1 + 24, v12, v15, 32);
      *(_QWORD *)(a1 + 24) = v17;
      v12 = v17;
      v13 = *(_QWORD *)(a1 + 32);
      v15 = v13 + 1;
    }
    *(_QWORD *)(a1 + 32) = v15;
    v16 = 32 * v13 + v12;
    *(_QWORD *)v16 = a2;
    *(_QWORD *)(v16 + 8) = a4;
    *(_DWORD *)(v16 + 24) = a5;
    *(_QWORD *)(v16 + 16) = v14;
  }
  return (unsigned int)v10;
}
