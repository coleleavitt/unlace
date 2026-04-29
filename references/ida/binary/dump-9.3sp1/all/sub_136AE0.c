__int64 __fastcall sub_136AE0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  int v5; // r15d
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v12; // eax
  unsigned int v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __m128i v21; // xmm0
  __int64 v22; // [rsp+8h] [rbp-60h]
  unsigned __int8 v23[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)(v3 + 4) )
  {
    if ( !sub_125B60((unsigned __int8 *)a2, v3, 0) )
    {
      v16 = *(_QWORD *)(a1 + 48);
      if ( *(_BYTE *)v16 != 14 )
      {
        if ( !under_debugger )
          sub_383060(51729);
        BUG();
      }
      v17 = *(_QWORD *)(v16 + 8);
      sub_123A40((__int64)v23, (unsigned __int8 *)a2, v14, v15);
      if ( !(unsigned __int8)sub_1272B0(
                               (unsigned __int64)v23,
                               *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 112LL),
                               *(_DWORD *)(v17 + 4),
                               0)
        || !sub_125B60(v23, v17, 0)
        || (sub_11CDA0((__int64)v23),
            v18 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL),
            sub_123A40((__int64)v23, (unsigned __int8 *)a2, v19, v20),
            !(unsigned __int8)sub_127850(
                                (unsigned __int64)v23,
                                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 112LL),
                                *(_DWORD *)(v18 + 20),
                                0))
        || !sub_125B60(v23, v18 + 16, 0) )
      {
        sub_11CDA0((__int64)v23);
        goto LABEL_2;
      }
      sub_11CDA0((__int64)v23);
    }
    sub_125180(a2, *(unsigned __int8 **)(a1 + 56));
    *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) |= 0x800u;
    return 1;
  }
LABEL_2:
  v4 = *(_QWORD *)(a1 + 72);
  v22 = v4 + 16LL * *(_QWORD *)(a1 + 80);
  if ( v22 != v4 )
  {
    v5 = 0;
    while ( 1 )
    {
      v8 = v5 + *(_DWORD *)(*(_QWORD *)(a1 + 56) + 8LL);
      if ( sub_125B60((unsigned __int8 *)a2, v4, 0) )
        break;
      sub_123A40((__int64)v23, (unsigned __int8 *)v4, v9, v10);
      if ( (unsigned __int8)sub_1272B0(
                              (unsigned __int64)v23,
                              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 112LL),
                              *(_DWORD *)(a2 + 4),
                              0)
        && sub_125B60(v23, a2, 0) )
      {
        sub_11CDA0((__int64)v23);
        *(_QWORD *)v23 = 1;
        *(_QWORD *)&v23[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 4)), _mm_cvtsi32_si128(v8)).m128i_u64[0];
        sub_125180(a2, v23);
        sub_11CDA0((__int64)v23);
        return 1;
      }
      sub_11CDA0((__int64)v23);
      sub_123A40((__int64)v23, (unsigned __int8 *)v4, v6, v7);
      if ( (unsigned __int8)sub_127850(
                              (unsigned __int64)v23,
                              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 112LL),
                              *(_DWORD *)(a2 + 4),
                              0)
        && sub_125B60(v23, a2, 0) )
      {
        sub_11CDA0((__int64)v23);
        v12 = *(_DWORD *)(a2 + 4);
        v13 = *(_DWORD *)(v4 + 4) + v8 - v12;
        *(_DWORD *)v23 = 1;
        *(_QWORD *)&v23[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(v13)).m128i_u64[0];
        sub_125180(a2, v23);
        sub_11CDA0((__int64)v23);
        return 1;
      }
      v4 += 16;
      sub_11CDA0((__int64)v23);
      v5 += *(_DWORD *)(v4 - 12);
      if ( v22 == v4 )
        return 0;
    }
    v21 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 4));
    *(_DWORD *)v23 = 1;
    *(_QWORD *)&v23[4] = _mm_unpacklo_epi32(v21, _mm_cvtsi32_si128(v8)).m128i_u64[0];
    sub_125180(a2, v23);
    sub_11CDA0((__int64)v23);
    return 1;
  }
  return 0;
}
