__int64 __fastcall sub_A8A870(__int64 *a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v3; // r12
  _DWORD *v4; // rax
  unsigned int v5; // r12d
  unsigned int v6; // eax
  __int64 v7; // r14
  unsigned int v8; // ebp
  __int64 v9; // r13
  unsigned int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 result; // rax
  _DWORD *v15; // r13
  unsigned int v16; // [rsp+Ch] [rbp-5Ch]
  __int64 v17; // [rsp+18h] [rbp-50h]
  unsigned int *v18[8]; // [rsp+28h] [rbp-40h] BYREF

  if ( *(_WORD *)(a2 + 4)
    || (v2 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr
    || *v2 != 5
    || v2[1] != 20
    || *(_DWORD *)(a2 + 24) != 1 )
  {
    sub_1872CE0("");
    sub_1873130(114, 1199);
  }
  v15 = *(_DWORD **)(a2 + 32);
  v3 = *a1;
  sub_15E1A70(a1[2]);
  v4 = (_DWORD *)sub_15E1A70(a1[2]);
  v5 = sub_966380(v3, v4, v15);
  v6 = sub_B645B0(*(_QWORD *)(*a1 + 16), a2);
  v7 = *a1;
  v8 = v6;
  v9 = *(_QWORD *)(*a1 + 24);
  v10 = v6 ^ 1;
  if ( *(_QWORD *)(v9 + 912) )
  {
    v11 = sub_186B270(0x10u);
    v18[0] = (unsigned int *)(v11 + 8);
    *(_QWORD *)v11 = 0x200000002LL;
    *(_QWORD *)(v11 + 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v10), _mm_cvtsi32_si128(v5)).m128i_u64[0];
    sub_966E60(v7, v18);
    if ( v18[0] )
      sub_186B220(v18[0] - 2);
    v12 = *(_QWORD *)(*a1 + 24);
    v16 = v5 ^ 1;
    if ( *(_QWORD *)(v12 + 912) )
    {
      v17 = *a1;
      v18[0] = nullptr;
      v13 = sub_186B270(0x10u);
      v18[0] = (unsigned int *)(v13 + 8);
      *(_QWORD *)v13 = 0x200000002LL;
      *(_QWORD *)(v13 + 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v8), _mm_cvtsi32_si128(v16)).m128i_u64[0];
      sub_966E60(v17, v18);
      if ( v18[0] )
        sub_186B220(v18[0] - 2);
    }
  }
  else
  {
    v12 = *(_QWORD *)(*a1 + 24);
    v16 = v5 ^ 1;
  }
  sub_A7A430((__int64)a1, v10, v5);
  result = sub_A7A430((__int64)a1, v8, v16);
  if ( *(_QWORD *)(v12 + 912) )
    result = std::__ostream_insert<char,std::char_traits<char>>();
  if ( *(_QWORD *)(v9 + 912) )
    return std::__ostream_insert<char,std::char_traits<char>>();
  return result;
}

