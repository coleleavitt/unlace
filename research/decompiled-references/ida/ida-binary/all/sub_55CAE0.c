__int64 __fastcall sub_55CAE0(__m128i *a1, __int64 a2, bool *a3)
{
  __int64 v4; // rsi
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  __int64 v8; // r10
  unsigned int v9; // ebp
  __int64 v10; // rbx
  __int64 v11; // rsi
  int v12; // r11d
  int v13; // edi
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdi
  _DWORD *v17; // rdi
  bool v18; // cf
  int v19; // edx
  unsigned int v20; // ecx
  bool v21; // zf
  int v22; // ebx
  unsigned int v23; // esi
  unsigned int v24; // r11d
  int v25; // ebp
  __int64 v26; // rdx
  __int64 v27; // rdi
  char v28; // dl
  _DWORD *v29; // r9
  int v30; // r8d
  int v31; // edi
  int v32; // edx
  int v33; // esi
  __int64 v35; // rdi

  v4 = a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
    return 0;
  v5 = a1[1].m128i_u32[3];
  v6 = *(_DWORD *)(v4 + 36);
  if ( v5 == v6 )
    return 0;
  v8 = 0;
  if ( (a1->m128i_i8[0] & 1) == 0 )
    v8 = v4 - 8LL * v6;
  v9 = a1[2].m128i_u32[0];
  v10 = v8 + 8LL * v5;
  v11 = *(__int64 *)((char *)&a1[1].m128i_i64[1] + 4);
  v12 = a1[2].m128i_i32[1];
  *(_QWORD *)(a2 + 8) = a1[1].m128i_i64[0];
  v13 = a1[1].m128i_i32[2];
  *(_QWORD *)(a2 + 20) = v11;
  v14 = *(_QWORD *)v10;
  *(_QWORD *)a2 = v10;
  *(_DWORD *)(a2 + 16) = v13;
  *(_DWORD *)(a2 + 28) = v12;
  if ( (v14 & 1) != 0 )
  {
    v15 = (v14 >> 1) & 1;
    *a3 = (v14 & 2) != 0;
    v35 = (v14 >> 3) & 1;
  }
  else
  {
    LOBYTE(v15) = *(_BYTE *)(v14 + 44) & 1;
    *a3 = v15;
    LOBYTE(v35) = (*(_BYTE *)(v14 + 44) & 4) != 0;
  }
  if ( !(_BYTE)v35 )
  {
    v16 = a1[2].m128i_i64[1];
    if ( v16 )
    {
      LOBYTE(v15) = ((unsigned __int8)v15 | *(unsigned __int16 *)(v16 + 2LL * v9)) != 0;
      *a3 = v15;
    }
    a1[2].m128i_i32[0] = v9 + 1;
  }
  v17 = *(_DWORD **)v10;
  if ( (*(_QWORD *)v10 & 1) == 0 && v17[9] )
    v12 += v17[14];
  v18 = (_BYTE)v15 == 0;
  v19 = a1[1].m128i_i32[0];
  v20 = *(unsigned __int8 *)(v10 + 7);
  v21 = (v14 & 1) == 0;
  v22 = a1[1].m128i_i32[2];
  a1[2].m128i_i32[1] = v12 - (v18 - 1);
  v23 = v20 + v19;
  v24 = a1[1].m128i_u32[1];
  if ( v21 && (v25 = v17[5], v20 = v17[6], v23 = v17[4] + v19, v25) )
    v24 += v25;
  else
    v20 += v22;
  v26 = v5 + 1;
  a1[1] = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), _mm_cvtsi32_si128(v24)),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v20), _mm_cvtsi32_si128(v26)));
  if ( (unsigned int)v26 < v6 )
  {
    v27 = v8 + 8 * v26;
    v28 = *(_BYTE *)(v27 + 5);
    v29 = *(_DWORD **)v27;
    v30 = *(unsigned __int8 *)(v27 + 4);
    v31 = *(unsigned __int8 *)(v27 + 6);
    v32 = v28 & 0xF;
    if ( ((unsigned __int8)v29 & 1) == 0 )
    {
      v31 = v29[1];
      v32 = v29[2];
      v30 = v29[3];
    }
    v33 = v31 + v23;
    if ( v32 )
      v24 += v32;
    else
      v30 += v20;
    a1[1].m128i_i32[0] = v33;
    a1[1].m128i_i32[1] = v24;
    a1[1].m128i_i32[2] = v30;
  }
  return 1;
}
