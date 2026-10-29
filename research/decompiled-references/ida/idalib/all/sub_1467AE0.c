__int64 __fastcall sub_1467AE0(__int64 a1, __m128i *a2, double a3, __m128 a4)
{
  unsigned int v4; // r12d
  __int64 v5; // r8
  __int64 v6; // r14
  __int64 v7; // rdx
  __m128i v8; // xmm0
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v13; // rsi
  __int16 v14; // ax
  char v15; // r13
  __int64 v16; // rdi
  unsigned int v18; // ecx
  unsigned int v19; // edi
  unsigned int v20; // eax
  bool v21; // dl
  char v22; // al
  char v23; // cl
  __int16 v24; // si
  __int16 v25; // dx
  __int16 v26; // si
  __int16 v27; // cx
  __int16 v28; // dx
  __int16 v29; // cx
  __int16 v30; // ax
  __int64 v31; // r12
  char v32; // al
  unsigned int v33; // edi
  __int64 *v34; // r9
  __int64 v35; // rdx
  int v36; // ecx
  __int64 v37; // rcx
  unsigned int v38; // edx
  unsigned int v39; // eax
  __int32 v40; // eax

  v4 = *(_DWORD *)(a1 + 36);
  v5 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 32) == v4 )
  {
    if ( *(_QWORD *)a1 )
      *(_BYTE *)(*(_QWORD *)a1 + 36LL) &= ~0x40u;
    a2->m128i_i64[0] = 0;
    a2[1].m128i_i32[0] = 0;
    v32 = *(_BYTE *)(a1 + 64);
    a2->m128i_i64[1] = 0;
    if ( (v32 & 1) != 0 )
    {
      v34 = (_QWORD *)(&dword_0 + 1);
      v35 = 3;
      v36 = 3;
      a2[1].m128i_i16[1] = 1;
      v33 = 1;
    }
    else
    {
      v33 = 0;
      v34 = nullptr;
      v35 = 2;
      v36 = 2;
    }
    if ( (v32 & 2) == 0 && (v32 & 4) == 0 )
    {
      v36 = (int)v34;
      v35 = v33;
    }
    v37 = v36 | 0x10u;
    if ( !v4 )
      v35 = (unsigned int)v37;
    a2[1].m128i_i16[1] = v35;
    return sub_143F060(v5, (__int64)a2, v35, v37, v5, v34);
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 88);
    v7 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 36) = v4 + 1;
    v8 = _mm_loadu_si128((const __m128i *)(v7 + 24LL * v4));
    *a2 = v8;
    a2[1].m128i_i32[0] = *(_DWORD *)(v7 + 24LL * v4 + 16);
    if ( (*(_BYTE *)(a1 + 64) & 0x20) != 0 )
      a2[1].m128i_i16[1] |= 0x800u;
    v9 = *(unsigned int *)(a1 + 32);
    v10 = *(unsigned int *)(a1 + 36);
    if ( (_DWORD)v9 == (_DWORD)v10 || !*(_QWORD *)a1 )
    {
      v15 = 0;
    }
    else
    {
      v13 = v7 + 24 * v10;
      v14 = *(_WORD *)(v13 + 16);
      if ( v14 == 68
        || (v15 = 0, (**(_BYTE **)(v5 + 56) & 0x20) != 0)
        && a2[1].m128i_i16[0] == 5
        && (v16 = *(_QWORD *)(a2->m128i_i64[1] + 16), *(_DWORD *)v16 == 1)
        && *(_BYTE *)(v16 + 16) == 76
        && (unsigned __int16)(v14 - 7) <= 0xCu
        && (*(_BYTE *)(v13 + 19) & 1) != 0 )
      {
        v15 = 1;
        if ( (unsigned __int8)sub_1466A30(
                                a1,
                                (__int64)a2,
                                v7,
                                v9,
                                (unsigned int *)(a1 + 36),
                                *(double *)v8.m128i_i64,
                                a4) )
          return 1;
      }
    }
    if ( *(_DWORD *)(a1 + 40) )
    {
      v18 = *(_DWORD *)(v6 + 316);
      v19 = *(_DWORD *)(a1 + 52);
      v20 = a2->m128i_i32[0] & 0x7FFFFFFF;
      v21 = v18 <= v20;
      if ( v18 <= v20 == v19 >= v18 )
        v21 = v19 > v20;
      if ( v21 )
      {
        if ( a2[1].m128i_i16[0] == 4 )
        {
          v40 = sub_10209A0(v6, a2->m128i_i32[0], *(_DWORD *)(a1 + 40), *(_DWORD *)(a1 + 44), a2->m128i_i32[1], 1, 0, 0);
        }
        else
        {
          v38 = *(_DWORD *)(a1 + 56) & 0x7FFFFFFF;
          if ( v20 >= v38 + *(_DWORD *)(a1 + 60) || v20 < v38 )
            v39 = 0;
          else
            v39 = v20 - v38;
          v40 = *(_DWORD *)(a1 + 48) + v39;
        }
        a2->m128i_i32[0] = v40;
      }
    }
    v22 = *(_BYTE *)(a1 + 64);
    v23 = v22 & 1;
    if ( v4 )
    {
      if ( v23 )
        a2[1].m128i_i16[1] |= 1u;
      if ( (v22 & 2) != 0 )
        a2[1].m128i_i16[1] |= 2u;
    }
    else
    {
      v24 = a2[1].m128i_i16[1];
      v25 = v24 & 0xFFFE;
      v26 = v24 | 1;
      if ( v23 )
        v25 = v26;
      v27 = v25;
      v28 = v25 | 2;
      v29 = v27 & 0xFFFD;
      if ( (v22 & 2) == 0 )
        v28 = v29;
      a2[1].m128i_i16[1] = v28;
    }
    *(_BYTE *)(a1 + 64) &= 0xFCu;
    if ( sub_10CCDE0(a2[1].m128i_i16[0]) )
      return 1;
    v30 = a2[1].m128i_i16[0];
    if ( (unsigned __int16)(v30 - 7) <= 0xCu )
      return 1;
    if ( v30 == 1 )
      return 1;
    v31 = a2->m128i_i64[1];
    if ( !v31 )
      return 1;
    a2[1].m128i_i16[0] = *(_WORD *)v31 & 0x1FF;
    if ( (*(_BYTE *)(v31 + 3) & 0x20) != 0 && v15 )
      sub_1460C00(*(_QWORD *)(a1 + 16), (__int64)a2);
    if ( (*(_BYTE *)(a1 + 64) & 0x10) != 0 || *(char *)(v31 + 3) >= 0 )
      return 1;
    return sub_1461090(*(_QWORD *)(a1 + 16), a2, v8, *(double *)a4.m128_u64);
  }
}
