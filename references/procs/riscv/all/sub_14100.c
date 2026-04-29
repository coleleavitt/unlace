__int64 __fastcall sub_14100(__int64 a1, __int64 a2)
{
  unsigned __int64 *v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edx
  __int64 v14; // rax
  __int16 v15; // si
  unsigned __int16 v16; // si
  unsigned __int16 v17; // si
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __m128i v25; // xmm0
  int v26; // eax
  __int128 v27; // [rsp+0h] [rbp-188h] BYREF
  __int64 v28; // [rsp+10h] [rbp-178h]
  __int64 v29; // [rsp+18h] [rbp-170h]
  __int64 v30; // [rsp+20h] [rbp-168h]
  char v31; // [rsp+28h] [rbp-160h] BYREF
  __int16 v32; // [rsp+2Eh] [rbp-15Ah]
  __int16 v33; // [rsp+56h] [rbp-132h]
  __int64 v34; // [rsp+80h] [rbp-108h]
  unsigned __int64 v35; // [rsp+168h] [rbp-20h] BYREF

  v35 = __readfsqword(0x28u);
  v3 = (unsigned __int64 *)&v31;
  v27 = -1;
  v28 = -1;
  v4.m128i_i64[0] = 0;
  v29 = 0;
  v30 = 0;
  do
  {
    *(_WORD *)v3 = 0;
    v3 += 5;
    *((_WORD *)v3 - 19) = 0;
    *((_WORD *)v3 - 18) = 0;
    *((_DWORD *)v3 - 2) = 0;
    *((_WORD *)v3 - 17) = 0;
    *((_OWORD *)v3 - 2) = 0;
    *(v3 - 2) = 0;
  }
  while ( &v35 != v3 );
  v5 = *(_QWORD *)(a1 + 504);
  v6 = *(unsigned __int16 *)(a2 + 26);
  v7 = *(_QWORD *)(a2 + 16);
  if ( v5 )
    *(_QWORD *)(v5 + 8) = v6;
  v8 = ((__int64 (__fastcall *)(__int128 *, __int64, double))decode_insn)(&v27, v7 + v6, 0.0);
  v12 = 0;
  if ( v8 )
  {
    if ( (unsigned __int16)(*(_WORD *)(a2 + 24) - 1) <= 1u )
    {
      if ( v32 != v33 )
        return v12;
      v14 = *(_QWORD *)(a2 + 88);
      v15 = WORD1(v29);
      *(_WORD *)(a2 + 24) = 122;
      *(_QWORD *)(a2 + 88) = v34 + (int)((_DWORD)v14 << 12);
      v16 = *(_WORD *)(a2 + 26) + v15;
      LODWORD(v14) = (*(_WORD *)(a2 + 34) & 4) == 0 ? 0xFFFFFFFB : 0;
      *(_WORD *)(a2 + 26) = v16;
      *(_BYTE *)(a2 + 85) = v14 + 7;
    }
    else
    {
      if ( *(_BYTE *)(a2 + 81) != 1 || *(_WORD *)(a2 + 86) || (_WORD)v29 != 25 )
        return v12;
      v25 = _mm_loadu_si128((const __m128i *)(a2 + 120));
      v16 = *(_WORD *)(a2 + 26);
      *(_BYTE *)(a2 + 121) = 0;
      *(_WORD *)(a2 + 24) = 122;
      v26 = *(_DWORD *)(a2 + 152);
      *(__m128i *)(a2 + 80) = v25;
      v4 = _mm_loadu_si128((const __m128i *)(a2 + 136));
      *(_DWORD *)(a2 + 112) = v26;
      LOWORD(v26) = *(_WORD *)(a2 + 34);
      *(_BYTE *)(a2 + 80) = 1;
      *(__m128i *)(a2 + 96) = v4;
      *(_BYTE *)(a2 + 85) = (v26 & 4) == 0 ? 2 : 7;
    }
    while ( 1 )
    {
      v21 = *(_QWORD *)(a1 + 504);
      v22 = *(_QWORD *)(a2 + 16);
      if ( v21 )
        *(_QWORD *)(v21 + 8) = v16;
      if ( !(unsigned int)((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64, double))decode_insn)(
                            &v27,
                            v22 + v16,
                            v22,
                            v9,
                            v10,
                            v11,
                            *(double *)v4.m128i_i64)
        || (_WORD)v29 != 25
        || *(_WORD *)(a2 + 46) != v33
        || v33 != v32 )
      {
        break;
      }
      v17 = *(_WORD *)(a2 + 26) + WORD1(v29);
      v18 = v34;
      v19 = *(_QWORD *)(a2 + 16);
      *(_WORD *)(a2 + 26) = v17;
      *(_QWORD *)(a2 + 88) <<= v18;
      v20 = *(_QWORD *)(a1 + 504);
      if ( v20 )
        *(_QWORD *)(v20 + 8) = v17;
      if ( !(unsigned int)((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64, double))decode_insn)(
                            &v27,
                            v19 + v17,
                            v19,
                            v18,
                            v23,
                            v24,
                            *(double *)v4.m128i_i64)
        || (_WORD)v29 != 19
        || *(_WORD *)(a2 + 46) != v33
        || v33 != v32 )
      {
        break;
      }
      v16 = *(_WORD *)(a2 + 26) + WORD1(v29);
      *(_QWORD *)(a2 + 88) += v34;
      *(_WORD *)(a2 + 26) = v16;
    }
    return 1;
  }
  return v12;
}
