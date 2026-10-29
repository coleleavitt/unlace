__int64 __fastcall sub_678B70(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // rax
  __int64 *v9; // rax
  unsigned int v10; // r13d
  unsigned __int32 v12; // ebx
  const __m128i *v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r14

  sub_655BA0(a1, a2);
  v6 = *(_QWORD *)(a2 + 120);
  if ( (v6 & 4) != 0 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = (const __m128i *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v12 >= v13[1].m128i_i32[0] )
        break;
      v14 = v12++;
      sub_673240(a1, *(_QWORD *)(v13[1].m128i_i64[1] + 8 * v14), a3, a4, a5, a6);
      v6 = *(_QWORD *)(a2 + 120);
      if ( (v6 & 4) == 0 )
        goto LABEL_2;
    }
    a4 = _mm_loadu_si128(v13);
    v7 = sub_674510(a1, a4.m128i_i64[0], a4.m128i_i64[1], a3, a4, a5, a6);
  }
  else
  {
LABEL_2:
    a3 = 0.0;
    v7 = sub_674510(a1, 0, 0, 0.0, a4, a5, a6);
  }
  if ( !v7 )
    return 0;
  v8 = *(_QWORD *)(a2 + 128);
  if ( v8 )
  {
    if ( (v8 & 4) != 0 )
    {
      v9 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v9 )
      {
        if ( !(unsigned __int8)sub_673BB0(a1, *v9, (unsigned __int64)(v9 + 1), a3, a4, a5, a6) )
          return 0;
      }
    }
  }
  v10 = sub_66F3A0(a1, a2 + 64, a3, a4, a5, a6);
  if ( !(_BYTE)v10 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v15 = nullptr;
    v16 = sub_79A2B0(a2);
    v17 = *(_QWORD *)v16 + 8LL * *(unsigned int *)(v16 + 8);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v15 = *(__int64 **)sub_79A2B0(a2);
    if ( (__int64 *)v17 != v15 )
    {
      while ( (unsigned __int8)sub_6777E0(a1, *v15, a3, a4, a5, a6) )
      {
        if ( (__int64 *)v17 == ++v15 )
          return v10;
      }
      return 0;
    }
  }
  return v10;
}

