unsigned __int64 __fastcall sub_126420(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // ecx
  __int64 v12; // r12
  _QWORD *v13; // rax
  int v14; // eax
  __int64 v15; // r15
  __int64 v16; // r12
  unsigned int *v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __m128i v20; // xmm0
  __m128i v21; // xmm2
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r14
  char v27; // al
  char v28; // dl
  char v29; // al
  __int16 v30; // dx
  __int16 v31; // ax
  int v32; // edx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int8 v36[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  sub_11CDA0(a1);
  switch ( *(_DWORD *)a3 )
  {
    case 1:
      v12 = *(_QWORD *)(a3 + 8);
      *(_BYTE *)a1 = 5;
      v13 = (_QWORD *)j__qalloc_or_throw(16, a2, v6, v7);
      *v13 = a2;
      v13[1] = v12;
      *(_QWORD *)(a1 + 8) = v13;
      goto LABEL_5;
    case 2:
      if ( !under_debugger )
        sub_383060(51149);
      goto LABEL_16;
    case 3:
      v14 = *(_DWORD *)(a3 + 8);
      *(_BYTE *)a1 = 1;
      *(_DWORD *)(a1 + 8) = v14;
      goto LABEL_5;
    case 4:
      sub_1252A0(a1, (unsigned __int16)*(_DWORD *)(a3 + 8), HIWORD(*(_DWORD *)(a3 + 8)), a4 >> 1);
      goto LABEL_5;
    case 5:
      v15 = *(_QWORD *)(a3 + 8);
      v16 = j__qalloc_or_throw(80, a2, v6, v7);
      *(_QWORD *)(v16 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v16 + 40) = 0;
      *(_QWORD *)(v16 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v16 + 56) = 0;
      *(_QWORD *)(v16 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v16 + 72) = 0;
      sub_330970(v16, -1);
      v17 = *(unsigned int **)(a2 + 1504);
      *(_QWORD *)v36 = 1;
      *(_QWORD *)&v36[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17[20]), _mm_cvtsi32_si128(v17[13])).m128i_u64[0];
      sub_11CDA0(v16 + 32);
      sub_123A40(v16 + 32, v36, v18, v19);
      sub_11CDA0((__int64)v36);
      v20 = _mm_cvtsi32_si128(v17[21]);
      v21 = _mm_cvtsi32_si128(*(_DWORD *)(v15 + 8));
      *(_DWORD *)v36 = 1;
      *(_QWORD *)&v36[4] = _mm_unpacklo_epi32(v20, v21).m128i_u64[0];
      sub_11CDA0(v16 + 48);
      sub_123A40(v16 + 48, v36, v22, v23);
      sub_11CDA0((__int64)v36);
      if ( *(_QWORD *)v15 )
      {
        v26 = j__qalloc_or_throw(80, (__int64)v36, v24, v25);
        *(_QWORD *)(v26 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v26 + 40) = 0;
        *(_QWORD *)(v26 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v26 + 56) = 0;
        *(_QWORD *)(v26 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v26 + 72) = 0;
        sub_330970(v26, -1);
        v27 = *(_BYTE *)(v26 + 32);
        *(_DWORD *)v26 = 12;
        *(_BYTE *)(v26 + 32) = *(_BYTE *)(v16 + 48);
        v28 = *(_BYTE *)(v16 + 49);
        *(_BYTE *)(v16 + 48) = v27;
        v29 = *(_BYTE *)(v26 + 33);
        *(_BYTE *)(v26 + 33) = v28;
        v30 = *(_WORD *)(v16 + 50);
        *(_BYTE *)(v16 + 49) = v29;
        v31 = *(_WORD *)(v26 + 34);
        *(_WORD *)(v26 + 34) = v30;
        v32 = *(_DWORD *)(v16 + 52);
        *(_WORD *)(v16 + 50) = v31;
        v33 = *(_DWORD *)(v26 + 36);
        *(_DWORD *)(v26 + 36) = v32;
        v34 = *(_QWORD *)(v16 + 56);
        *(_DWORD *)(v16 + 52) = v33;
        v35 = *(_QWORD *)(v26 + 40);
        *(_QWORD *)(v26 + 40) = v34;
        *(_QWORD *)(v16 + 56) = v35;
        sub_120A10(v26 + 48, (__int64)v17, *(_QWORD *)v15, v17[21], -1, 0);
        *(_BYTE *)(v16 + 48) = 4;
        *(_QWORD *)(v16 + 56) = v26;
        *(_DWORD *)(v16 + 52) = v17[21];
      }
      *(_DWORD *)v16 = 2;
      *(_BYTE *)a1 = 4;
      *(_QWORD *)(a1 + 8) = v16;
      goto LABEL_5;
    case 6:
      v8 = *(_QWORD *)(a2 + 1504);
      v9 = *(_QWORD *)(a3 + 8);
      *(_BYTE *)a1 = 6;
      v10 = 8 * *(_DWORD *)(v8 + 84);
      if ( (unsigned __int64)v10 <= 0x3F )
        v9 &= ~(-1LL << v10);
      *(_QWORD *)(a1 + 8) = v9;
LABEL_5:
      *(_DWORD *)(a1 + 4) = a4;
      return v37 - __readfsqword(0x28u);
    default:
      if ( !under_debugger )
        sub_383060(51128);
LABEL_16:
      BUG();
  }
}
