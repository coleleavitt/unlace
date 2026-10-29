unsigned __int64 __fastcall sub_123F20(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // ecx
  __int64 v10; // r12
  _QWORD *v11; // rax
  int v12; // eax
  __int64 v13; // r15
  __int64 v14; // r12
  unsigned int *v15; // r13
  __m128i v16; // xmm0
  __m128i v17; // xmm2
  __int64 v18; // r14
  char v19; // al
  char v20; // dl
  char v21; // al
  __int16 v22; // dx
  __int16 v23; // ax
  int v24; // edx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int8 v28[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  sub_11A960(a1);
  switch ( *(_DWORD *)a3 )
  {
    case 1:
      v10 = *(_QWORD *)(a3 + 8);
      *(_BYTE *)a1 = 5;
      v11 = (_QWORD *)j__qalloc_or_throw();
      *v11 = a2;
      v11[1] = v10;
      *(_QWORD *)(a1 + 8) = v11;
      goto LABEL_5;
    case 2:
      if ( !under_debugger )
        sub_37EA20(51149);
      goto LABEL_16;
    case 3:
      v12 = *(_DWORD *)(a3 + 8);
      *(_BYTE *)a1 = 1;
      *(_DWORD *)(a1 + 8) = v12;
      goto LABEL_5;
    case 4:
      sub_122DA0(a1, (unsigned __int16)*(_DWORD *)(a3 + 8), HIWORD(*(_DWORD *)(a3 + 8)), a4 >> 1);
      goto LABEL_5;
    case 5:
      v13 = *(_QWORD *)(a3 + 8);
      v14 = j__qalloc_or_throw();
      *(_QWORD *)(v14 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v14 + 40) = 0;
      *(_QWORD *)(v14 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v14 + 56) = 0;
      *(_QWORD *)(v14 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v14 + 72) = 0;
      sub_32D4D0(v14, -1);
      v15 = *(unsigned int **)(a2 + 1504);
      *(_QWORD *)v28 = 1;
      *(_QWORD *)&v28[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15[20]), _mm_cvtsi32_si128(v15[13])).m128i_u64[0];
      sub_11A960(v14 + 32);
      sub_121540(v14 + 32, v28);
      sub_11A960((__int64)v28);
      v16 = _mm_cvtsi32_si128(v15[21]);
      v17 = _mm_cvtsi32_si128(*(_DWORD *)(v13 + 8));
      *(_DWORD *)v28 = 1;
      *(_QWORD *)&v28[4] = _mm_unpacklo_epi32(v16, v17).m128i_u64[0];
      sub_11A960(v14 + 48);
      sub_121540(v14 + 48, v28);
      sub_11A960((__int64)v28);
      if ( *(_QWORD *)v13 )
      {
        v18 = j__qalloc_or_throw();
        *(_QWORD *)(v18 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v18 + 40) = 0;
        *(_QWORD *)(v18 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v18 + 56) = 0;
        *(_QWORD *)(v18 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v18 + 72) = 0;
        sub_32D4D0(v18, -1);
        v19 = *(_BYTE *)(v18 + 32);
        *(_DWORD *)v18 = 12;
        *(_BYTE *)(v18 + 32) = *(_BYTE *)(v14 + 48);
        v20 = *(_BYTE *)(v14 + 49);
        *(_BYTE *)(v14 + 48) = v19;
        v21 = *(_BYTE *)(v18 + 33);
        *(_BYTE *)(v18 + 33) = v20;
        v22 = *(_WORD *)(v14 + 50);
        *(_BYTE *)(v14 + 49) = v21;
        v23 = *(_WORD *)(v18 + 34);
        *(_WORD *)(v18 + 34) = v22;
        v24 = *(_DWORD *)(v14 + 52);
        *(_WORD *)(v14 + 50) = v23;
        v25 = *(_DWORD *)(v18 + 36);
        *(_DWORD *)(v18 + 36) = v24;
        v26 = *(_QWORD *)(v14 + 56);
        *(_DWORD *)(v14 + 52) = v25;
        v27 = *(_QWORD *)(v18 + 40);
        *(_QWORD *)(v18 + 40) = v26;
        *(_QWORD *)(v14 + 56) = v27;
        sub_11E5D0(v18 + 48, (int)v15, *(_QWORD *)v13, v15[21], -1, 0);
        *(_BYTE *)(v14 + 48) = 4;
        *(_QWORD *)(v14 + 56) = v18;
        *(_DWORD *)(v14 + 52) = v15[21];
      }
      *(_DWORD *)v14 = 2;
      *(_BYTE *)a1 = 4;
      *(_QWORD *)(a1 + 8) = v14;
      goto LABEL_5;
    case 6:
      v6 = *(_QWORD *)(a2 + 1504);
      v7 = *(_QWORD *)(a3 + 8);
      *(_BYTE *)a1 = 6;
      v8 = 8 * *(_DWORD *)(v6 + 84);
      if ( (unsigned __int64)v8 <= 0x3F )
        v7 &= ~(-1LL << v8);
      *(_QWORD *)(a1 + 8) = v7;
LABEL_5:
      *(_DWORD *)(a1 + 4) = a4;
      return v29 - __readfsqword(0x28u);
    default:
      if ( !under_debugger )
        sub_37EA20(51128);
LABEL_16:
      BUG();
  }
}
