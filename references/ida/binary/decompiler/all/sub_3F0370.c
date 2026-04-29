__int64 __fastcall sub_3F0370(__int64 a1, __int64 *a2, int a3, __int64 a4, unsigned __int8 a5, char a6)
{
  __int64 v6; // r14
  _DWORD *v9; // rax
  __int64 v10; // rcx
  unsigned int v12; // ebp
  unsigned __int8 v13; // dl
  char v14; // r15
  __m128i v15; // xmm0
  __int64 v16; // r13
  __int16 v18; // dx
  char *v19; // rsi
  int v20; // eax
  unsigned int v21; // edx
  int v22; // eax
  char v23; // r9
  __int64 v24; // rcx
  __int64 v26; // [rsp+10h] [rbp-68h] BYREF
  int v27; // [rsp+18h] [rbp-60h]
  int v28; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+24h] [rbp-54h]
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v6 = a3;
  v9 = *(_DWORD **)(a1 + 832);
  v10 = *(_QWORD *)(a1 + 40);
  v30 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 880) == v10 && (unsigned __int8)(*(_BYTE *)(a1 + 40LL * a3 + 65) - 2) <= 2u )
  {
    v12 = v9[117];
    if ( !a6 )
      goto LABEL_20;
    v18 = *(_WORD *)(a1 + 48);
    if ( v18 == 92 )
      goto LABEL_20;
  }
  else
  {
    v12 = sub_3EF260(a1, a3, v9[116]);
    if ( v12 == -1 )
      return 0;
    if ( !a6 )
      goto LABEL_5;
    v18 = *(_WORD *)(a1 + 48);
    if ( v18 == 92 )
      goto LABEL_5;
  }
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 56) - 33) <= 1u
    && (unsigned __int8)(*(_BYTE *)(a1 + 40LL * (int)v6 + 65) - 2) <= 2u )
  {
    if ( v18 == 44 )
    {
      a4 = 0;
      v19 = "inc";
    }
    else
    {
      v19 = "write";
      if ( v18 == 6 )
        v19 = "add";
    }
    v16 = sub_3EC5A0(a1, (__int64)v19, v12, (unsigned __int8 *)a4, 0xFFFFFFFF);
    sub_313730(*(_QWORD *)(v16 + 72) + 152LL, *(_QWORD *)(v16 + 72) + 216LL);
    goto LABEL_9;
  }
LABEL_5:
  v9 = *(_DWORD **)(a1 + 832);
  if ( v9[117] == v12 )
  {
LABEL_20:
    v20 = v9[118];
    v21 = 8;
    v26 = 0x200000001LL;
    v27 = v20;
    v22 = *(_DWORD *)(a1 + 52);
    if ( (v22 & 0x1018) != 0x1010 )
    {
      if ( (v22 & 0x1008) == 0 || (v21 = 2, (v22 & 0x1018) == 0x1008) )
        v21 = 4;
    }
    HIDWORD(v29) = v12;
    v28 = 1;
    LODWORD(v29) = sub_3ED1E0(a1, v12, v21);
    v16 = sub_1D38D0(a1, 1, a4, (unsigned int)&v26, (unsigned int)&v28, v23);
    if ( (unsigned __int8)(a5 - 3) <= 1u || a5 == 15 )
      *(_DWORD *)(v16 + 4) |= 0x10u;
    sub_11A960((__int64)&v28);
    sub_11A960((__int64)&v26);
    goto LABEL_9;
  }
  v13 = *(_BYTE *)a4;
  if ( v9[21] == 8
    && *(_WORD *)(a1 + 48) != 21
    && (v24 = a1 + 40 * v6, (*(_QWORD *)(v24 + 64) & 0xFF000000FF00LL) == 0x20000000100LL)
    && *(_WORD *)(v24 + 70) <= 0xFu )
  {
    v14 = 1;
    if ( v13 == 1 && *(_DWORD *)(a4 + 8) == v12 )
      goto LABEL_32;
  }
  else
  {
    v14 = 0;
    if ( v13 == 1 && *(_DWORD *)(a4 + 8) == v12 )
    {
      v16 = 0;
      goto LABEL_9;
    }
  }
  v15 = _mm_cvtsi32_si128(*(_DWORD *)(a4 + 4));
  v28 = 1;
  v29 = _mm_unpacklo_epi32(v15, _mm_cvtsi32_si128(v12)).m128i_u64[0];
  v16 = sub_1D38D0(a1, 4, a4, 0, (unsigned int)&v28, a6);
  sub_11A960((__int64)&v28);
  if ( v14 )
LABEL_32:
    v16 = sub_1D3CC0(a1, a5, 7, v12, v12, 0);
LABEL_9:
  if ( a2 )
    *a2 = v16;
  return 1;
}
