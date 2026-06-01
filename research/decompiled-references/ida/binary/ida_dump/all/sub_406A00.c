__int64 __fastcall sub_406A00(__int64 a1)
{
  int v1; // eax
  int v2; // ecx
  int v3; // edx
  __int64 v4; // rsi
  __m128i v5; // xmm1
  double v6; // xmm0_8
  __int64 v7; // rax
  int v8; // eax
  int v9; // ecx
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // rax
  unsigned __int16 v13; // ax
  unsigned __int8 v14; // bl
  int v15; // edx
  char v16; // r15
  __int64 v17; // rbx
  int v18; // eax
  unsigned int v19; // ebx
  __int16 v20; // ax
  __int64 v21; // r8
  __int64 v22; // rsi
  _BOOL4 v23; // ebx
  __int64 v25; // r15
  int dtype_size; // eax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // r14
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // r14
  int v34; // eax
  int v35; // r14d
  __int64 v36; // r13
  int v37; // eax
  int v38; // eax
  int v39; // eax
  char v40; // [rsp+3h] [rbp-10Dh]
  int v41; // [rsp+4h] [rbp-10Ch]
  __int64 flags; // [rsp+8h] [rbp-108h]
  unsigned __int64 v43; // [rsp+10h] [rbp-100h] BYREF
  __int64 v44; // [rsp+18h] [rbp-F8h]
  unsigned __int64 v45; // [rsp+20h] [rbp-F0h] BYREF
  __int64 v46; // [rsp+28h] [rbp-E8h]
  _BYTE v47[12]; // [rsp+30h] [rbp-E0h] BYREF
  __int64 v48; // [rsp+40h] [rbp-D0h] BYREF
  unsigned __int64 v49; // [rsp+48h] [rbp-C8h]
  char v50; // [rsp+50h] [rbp-C0h]
  __int64 v51; // [rsp+60h] [rbp-B0h] BYREF
  unsigned __int64 v52; // [rsp+68h] [rbp-A8h]
  char v53; // [rsp+70h] [rbp-A0h]
  __int64 v54; // [rsp+80h] [rbp-90h] BYREF
  unsigned __int64 v55; // [rsp+88h] [rbp-88h]
  char v56; // [rsp+90h] [rbp-80h]
  __int64 v57; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-68h]
  char v59; // [rsp+B0h] [rbp-60h]
  unsigned __int64 v60; // [rsp+C0h] [rbp-50h] BYREF
  unsigned __int64 v61; // [rsp+C8h] [rbp-48h]
  char v62; // [rsp+D0h] [rbp-40h]
  unsigned __int64 v63; // [rsp+D8h] [rbp-38h]

  v63 = __readfsqword(0x28u);
  v1 = *(_DWORD *)(a1 + 52);
  if ( (v1 & 1) != 0 )
    return (unsigned int)-2;
  v44 = 0;
  v2 = v1 & 0x1018;
  v43 = 0xFFFFFFFF00000000LL;
  v45 = 0xFFFFFFFF00000000LL;
  v3 = 8;
  v46 = 0;
  if ( v2 != 4112 )
  {
    if ( (v1 & 0x1008) == 0 || (v3 = 2, v2 == 4104) )
      v3 = 4;
  }
  v4 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)v47 = 1;
  v5 = _mm_cvtsi32_si128(*(_DWORD *)(v4 + 388));
  *(_QWORD *)&v6 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), v5).m128i_u64[0];
  *(double *)&v47[4] = v6;
  if ( (v1 & 6) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v7 + 48) )
    {
      v7 = sub_67FD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 0);
      *(_QWORD *)(a1 + 16) = v7;
      v4 = *(_QWORD *)(a1 + 832);
      v3 = *(_DWORD *)&v47[4];
    }
    v8 = *(_DWORD *)(v7 + 72);
    v9 = *(_DWORD *)(v4 + 84);
    LOBYTE(v43) = 7;
    v10 = *(_QWORD *)(a1 + 40);
    LOBYTE(v45) = 6;
    LODWORD(v44) = v8;
    v11 = 8 * v9;
    v12 = v10 + *(unsigned __int16 *)(a1 + 50);
    if ( (unsigned __int64)v11 <= 0x3F )
      v12 &= ~(-1LL << v11);
    v46 = v12;
    v61 = 0;
    v60 = 0xFFFFFFFF00000000LL;
    sub_120A10((__int64)&v60, v4, 0, v3, v10, 0);
    sub_1D6450(a1, 44, v47, (unsigned __int8 *)&v60, (unsigned __int8 *)&v45);
    *(_QWORD *)(a1 + 16) = sub_67FD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
    sub_11CDA0((__int64)&v60);
  }
  v13 = *(_WORD *)(a1 + 48);
  v14 = *(_BYTE *)(a1 + 69);
  if ( v13 != 124 )
  {
    if ( v13 <= 0x7Cu )
    {
      if ( v13 != 28 )
      {
        if ( v13 != 107 )
        {
LABEL_39:
          v40 = 1;
          v16 = 1;
          goto LABEL_17;
        }
        v57 = a1;
        v59 = 0;
        v58 = 0xFFFFFFFF00000001LL;
        sub_3FA580((int *)&v57, 1, 0, v6);
        if ( !v59 && !(unsigned __int8)sub_3FACB0((__int64)&v57, v6, (__m128)v5) )
          sub_3EB430(v6);
        v25 = SHIDWORD(v58);
        dtype_size = get_dtype_size();
        sub_1D6310(a1, 4u, dtype_size, v25, 0x3BEA45E214ADDC55LL, 8, 0);
        v16 = 0;
        v40 = 1;
LABEL_17:
        v41 = get_dtype_size();
        do
        {
          if ( prev_head() == -1 )
            break;
          flags = get_flags_ex();
          if ( (~BYTE1(flags) & 6) != 0 || (unsigned __int8)get_byte() == 0xFC )
            break;
          if ( (unsigned __int8)get_byte() == 0xFD )
          {
            v41 = -v41;
            break;
          }
        }
        while ( (flags & 0x1000) == 0 );
        v17 = *(int *)(*(_QWORD *)(a1 + 832) + 464LL);
        v18 = get_dtype_size();
        sub_1D6310(a1, 3u, v18, v41, 0x3BEA45E214ADDC55LL, v17, 0);
        if ( v40 )
        {
          v31 = *(_QWORD *)(a1 + 832);
          v32 = *(int *)(v31 + 408);
          v33 = *(int *)(v31 + 464);
          v34 = get_dtype_size();
          sub_1D6310(a1, 0xCu, v34, v32, v33, v32, 0);
        }
        if ( v16 )
        {
          v27 = *(_QWORD *)(a1 + 832);
          v28 = *(int *)(v27 + 404);
          v29 = *(int *)(v27 + 464);
          v30 = get_dtype_size();
          sub_1D6310(a1, 0xCu, v30, v28, v29, v28, 0);
        }
        v19 = 0;
        if ( (*(_BYTE *)(a1 + 52) & 6) != 0 )
        {
          sub_3FC6F0(a1);
          v20 = *(_WORD *)(a1 + 48);
          if ( v20 == 28 || v20 == 167 )
          {
            v21 = *(_QWORD *)(a1 + 40);
            v22 = *(_QWORD *)(a1 + 832);
            v23 = (*(_BYTE *)(a1 + 52) & 4) == 0;
            v57 = 0x100000001LL;
            v60 = 0xFFFFFFFF00000000LL;
            v58 = 1;
            v61 = 0;
            sub_120A10((__int64)&v60, v22, 0, 1, v21, 0);
            sub_1D6450(a1, v23 + 43, (unsigned __int8 *)&v57, (unsigned __int8 *)&v60, (unsigned __int8 *)&v45);
            *(_QWORD *)(a1 + 16) = sub_67FD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
            sub_11CDA0((__int64)&v60);
            sub_11CDA0((__int64)&v57);
          }
          sub_1D6450(a1, 55, (unsigned __int8 *)&v43, nullptr, nullptr);
          v19 = 1;
        }
        goto LABEL_32;
      }
      v51 = a1;
      v53 = 0;
      v52 = 0xFFFFFFFF00000000LL;
      sub_3FA580((int *)&v51, 1, 0, v6);
      if ( !v53 && !(unsigned __int8)sub_3FACB0((__int64)&v51, v6, (__m128)v5) )
        sub_3EB430(v6);
      v56 = 0;
      v54 = a1;
      v35 = HIDWORD(v52);
      *(_QWORD *)(a1 + 880) = -1;
      v55 = 0xFFFFFFFF00000001LL;
      sub_3FA580((int *)&v54, 1, 0, v6);
      if ( !v56 && !(unsigned __int8)sub_3FACB0((__int64)&v54, v6, (__m128)v5) )
        sub_3EB430(v6);
      v40 = 1;
      v36 = SHIDWORD(v55);
    }
    else
    {
      if ( v13 != 167 )
      {
        v40 = 0;
        v15 = 8;
        if ( v13 == 207 )
          goto LABEL_16;
        goto LABEL_39;
      }
      v60 = a1;
      v62 = 0;
      v61 = 0xFFFFFFFF00000000LL;
      sub_3FA580((int *)&v60, 1, 0, v6);
      if ( !v62 && !(unsigned __int8)sub_3FACB0((__int64)&v60, v6, (__m128)v5) )
        sub_3EB430(v6);
      v40 = 0;
      v35 = HIDWORD(v61);
      v36 = 8;
    }
    v37 = get_dtype_size();
    sub_1D6310(a1, 0x23u, v37, v35, v36, 0, 0);
    v38 = get_dtype_size();
    sub_1D6310(a1, 0x1Eu, v38, v35, v36, 3, 0);
    v39 = get_dtype_size();
    sub_1D6310(a1, 0xDu, v39, v35, v36, v35, 0);
    sub_3FD520(a1, v35, v14);
    v16 = 1;
    goto LABEL_17;
  }
  v48 = a1;
  v49 = 0xFFFFFFFF00000001LL;
  v50 = 0;
  sub_3FA580((int *)&v48, 1, 0, v6);
  if ( !v50 && !(unsigned __int8)sub_3FACB0((__int64)&v48, v6, (__m128)v5) )
    sub_3EB430(v6);
  v40 = 1;
  v15 = HIDWORD(v49);
  *(_QWORD *)(a1 + 880) = -1;
LABEL_16:
  v16 = sub_3FB270(a1, 0, v15, 1, v6, (__m128)v5);
  if ( v16 )
    goto LABEL_17;
  v19 = -2;
LABEL_32:
  sub_11CDA0((__int64)v47);
  sub_11CDA0((__int64)&v45);
  sub_11CDA0((__int64)&v43);
  return v19;
}
