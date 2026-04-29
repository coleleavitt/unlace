__int64 __fastcall sub_3FAED0(
        __int64 a1,
        __int64 *a2,
        int a3,
        __int64 a4,
        unsigned __int8 a5,
        char a6,
        double a7,
        __m128 a8)
{
  __int64 v8; // r14
  _DWORD *v11; // rax
  __int64 v12; // rcx
  unsigned int v14; // ebp
  unsigned __int8 v15; // dl
  char v16; // r15
  __m128i v17; // xmm0
  __int64 v18; // r13
  __int16 v20; // dx
  char *v21; // rsi
  int v22; // eax
  unsigned int v23; // edx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v27; // [rsp+10h] [rbp-68h] BYREF
  int v28; // [rsp+18h] [rbp-60h]
  int v29; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+24h] [rbp-54h]
  unsigned __int64 v31; // [rsp+38h] [rbp-40h]

  v8 = a3;
  v11 = *(_DWORD **)(a1 + 832);
  v12 = *(_QWORD *)(a1 + 40);
  v31 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 880) == v12 && (unsigned __int8)(*(_BYTE *)(a1 + 40LL * a3 + 65) - 2) <= 2u )
  {
    v14 = v11[117];
    if ( !a6 )
      goto LABEL_20;
    v20 = *(_WORD *)(a1 + 48);
    if ( v20 == 92 )
      goto LABEL_20;
  }
  else
  {
    v14 = sub_3F9DC0(a1, a3, v11[116], a7);
    if ( v14 == -1 )
      return 0;
    if ( !a6 )
      goto LABEL_5;
    v20 = *(_WORD *)(a1 + 48);
    if ( v20 == 92 )
      goto LABEL_5;
  }
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 56) - 33) <= 1u
    && (unsigned __int8)(*(_BYTE *)(a1 + 40LL * (int)v8 + 65) - 2) <= 2u )
  {
    if ( v20 == 44 )
    {
      a4 = 0;
      v21 = "inc";
    }
    else
    {
      v21 = "write";
      if ( v20 == 6 )
        v21 = "add";
    }
    v18 = sub_3F7170(a1, (__int64)v21, v14, (unsigned __int8 *)a4, 0xFFFFFFFF, a5, a7, a8);
    sub_316CB0((__int64 *)(*(_QWORD *)(v18 + 72) + 152LL), (__int64 **)(*(_QWORD *)(v18 + 72) + 216LL));
    goto LABEL_9;
  }
LABEL_5:
  v11 = *(_DWORD **)(a1 + 832);
  if ( v11[117] == v14 )
  {
LABEL_20:
    v22 = v11[118];
    v23 = 8;
    v27 = 0x200000001LL;
    v28 = v22;
    v24 = *(_DWORD *)(a1 + 52);
    if ( (v24 & 0x1018) != 0x1010 )
    {
      if ( (v24 & 0x1008) == 0 || (v23 = 2, (v24 & 0x1018) == 0x1008) )
        v23 = 4;
    }
    HIDWORD(v30) = v14;
    v29 = 1;
    LODWORD(v30) = sub_3F7DA0(a1, v14, v23);
    v18 = sub_1D6450(a1, 1, (unsigned __int8 *)a4, (unsigned __int8 *)&v27, (unsigned __int8 *)&v29);
    if ( (unsigned __int8)(a5 - 3) <= 1u || a5 == 15 )
      *(_DWORD *)(v18 + 4) |= 0x10u;
    sub_11CDA0((__int64)&v29);
    sub_11CDA0((__int64)&v27);
    goto LABEL_9;
  }
  v15 = *(_BYTE *)a4;
  if ( v11[21] == 8
    && *(_WORD *)(a1 + 48) != 21
    && (v25 = a1 + 40 * v8, (*(_QWORD *)(v25 + 64) & 0xFF000000FF00LL) == 0x20000000100LL)
    && *(_WORD *)(v25 + 70) <= 0xFu )
  {
    v16 = 1;
    if ( v15 == 1 && *(_DWORD *)(a4 + 8) == v14 )
      goto LABEL_32;
  }
  else
  {
    v16 = 0;
    if ( v15 == 1 && *(_DWORD *)(a4 + 8) == v14 )
    {
      v18 = 0;
      goto LABEL_9;
    }
  }
  v17 = _mm_cvtsi32_si128(*(_DWORD *)(a4 + 4));
  v29 = 1;
  v30 = _mm_unpacklo_epi32(v17, _mm_cvtsi32_si128(v14)).m128i_u64[0];
  v18 = sub_1D6450(a1, 4, (unsigned __int8 *)a4, nullptr, (unsigned __int8 *)&v29);
  sub_11CDA0((__int64)&v29);
  if ( v16 )
LABEL_32:
    v18 = sub_1D6840(a1, a5, 7u, v14, v14, 0);
LABEL_9:
  if ( a2 )
    *a2 = v18;
  return 1;
}
