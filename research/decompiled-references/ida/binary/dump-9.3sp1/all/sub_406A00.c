__int64 __fastcall sub_406A00(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
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
  __int64 v13; // rcx
  unsigned __int16 v14; // ax
  unsigned __int8 v15; // bl
  int v16; // edx
  char v17; // r15
  __int64 v18; // rbx
  int v19; // eax
  unsigned int v20; // ebx
  __int16 v21; // ax
  __int64 v22; // r8
  __int64 v23; // rsi
  _BOOL4 v24; // ebx
  __int64 v25; // rcx
  __int64 v27; // r15
  int dtype_size; // eax
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // r14
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // r14
  int v36; // eax
  int v37; // r14d
  __int64 v38; // r13
  int v39; // eax
  int v40; // eax
  int v41; // eax
  char v42; // [rsp+3h] [rbp-10Dh]
  int v43; // [rsp+4h] [rbp-10Ch]
  __int64 flags; // [rsp+8h] [rbp-108h]
  unsigned __int64 v45; // [rsp+10h] [rbp-100h] BYREF
  __int64 v46; // [rsp+18h] [rbp-F8h]
  unsigned __int64 v47; // [rsp+20h] [rbp-F0h] BYREF
  __int64 v48; // [rsp+28h] [rbp-E8h]
  _BYTE v49[12]; // [rsp+30h] [rbp-E0h] BYREF
  __int64 v50; // [rsp+40h] [rbp-D0h] BYREF
  unsigned __int64 v51; // [rsp+48h] [rbp-C8h]
  char v52; // [rsp+50h] [rbp-C0h]
  __int64 v53; // [rsp+60h] [rbp-B0h] BYREF
  unsigned __int64 v54; // [rsp+68h] [rbp-A8h]
  char v55; // [rsp+70h] [rbp-A0h]
  __int64 v56; // [rsp+80h] [rbp-90h] BYREF
  unsigned __int64 v57; // [rsp+88h] [rbp-88h]
  char v58; // [rsp+90h] [rbp-80h]
  __int64 v59; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-68h]
  char v61; // [rsp+B0h] [rbp-60h]
  unsigned __int64 v62; // [rsp+C0h] [rbp-50h] BYREF
  unsigned __int64 v63; // [rsp+C8h] [rbp-48h]
  char v64; // [rsp+D0h] [rbp-40h]
  unsigned __int64 v65; // [rsp+D8h] [rbp-38h]

  v65 = __readfsqword(0x28u);
  v1 = *(_DWORD *)(a1 + 52);
  if ( (v1 & 1) != 0 )
    return (unsigned int)-2;
  v46 = 0;
  v2 = v1 & 0x1018;
  v45 = 0xFFFFFFFF00000000LL;
  v47 = 0xFFFFFFFF00000000LL;
  v3 = 8;
  v48 = 0;
  if ( (_DWORD)v2 != 4112 )
  {
    if ( (v1 & 0x1008) == 0 || (v3 = 2, (_DWORD)v2 == 4104) )
      v3 = 4;
  }
  v4 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)v49 = 1;
  v5 = _mm_cvtsi32_si128(*(_DWORD *)(v4 + 388));
  *(_QWORD *)&v6 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), v5).m128i_u64[0];
  *(double *)&v49[4] = v6;
  if ( (v1 & 6) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v7 + 48) )
    {
      v7 = sub_67FD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 0, v2);
      *(_QWORD *)(a1 + 16) = v7;
      v4 = *(_QWORD *)(a1 + 832);
      v3 = *(_DWORD *)&v49[4];
    }
    v8 = *(_DWORD *)(v7 + 72);
    v9 = *(_DWORD *)(v4 + 84);
    LOBYTE(v45) = 7;
    v10 = *(_QWORD *)(a1 + 40);
    LOBYTE(v47) = 6;
    LODWORD(v46) = v8;
    v11 = 8 * v9;
    v12 = v10 + *(unsigned __int16 *)(a1 + 50);
    if ( (unsigned __int64)v11 <= 0x3F )
      v12 &= ~(-1LL << v11);
    v48 = v12;
    v63 = 0;
    v62 = 0xFFFFFFFF00000000LL;
    sub_120A10((__int64)&v62, v4, 0, v3, v10, 0);
    sub_1D6450(a1, 44, v49, (unsigned __int8 *)&v62, (unsigned __int8 *)&v47);
    *(_QWORD *)(a1 + 16) = sub_67FD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2, v13);
    sub_11CDA0((__int64)&v62);
  }
  v14 = *(_WORD *)(a1 + 48);
  v15 = *(_BYTE *)(a1 + 69);
  if ( v14 != 124 )
  {
    if ( v14 <= 0x7Cu )
    {
      if ( v14 != 28 )
      {
        if ( v14 != 107 )
        {
LABEL_39:
          v42 = 1;
          v17 = 1;
          goto LABEL_17;
        }
        v59 = a1;
        v61 = 0;
        v60 = 0xFFFFFFFF00000001LL;
        sub_3FA580((int *)&v59, 1, 0, v6);
        if ( !v61 && !(unsigned __int8)sub_3FACB0((__int64)&v59, v6, (__m128)v5) )
          sub_3EB430(v6);
        v27 = SHIDWORD(v60);
        dtype_size = get_dtype_size();
        sub_1D6310(a1, 4u, dtype_size, v27, 0x3BEA45E214ADDC55LL, 8, 0);
        v17 = 0;
        v42 = 1;
LABEL_17:
        v43 = get_dtype_size();
        do
        {
          if ( prev_head() == -1 )
            break;
          flags = get_flags_ex();
          if ( (~BYTE1(flags) & 6) != 0 || (unsigned __int8)get_byte() == 0xFC )
            break;
          if ( (unsigned __int8)get_byte() == 0xFD )
          {
            v43 = -v43;
            break;
          }
        }
        while ( (flags & 0x1000) == 0 );
        v18 = *(int *)(*(_QWORD *)(a1 + 832) + 464LL);
        v19 = get_dtype_size();
        sub_1D6310(a1, 3u, v19, v43, 0x3BEA45E214ADDC55LL, v18, 0);
        if ( v42 )
        {
          v33 = *(_QWORD *)(a1 + 832);
          v34 = *(int *)(v33 + 408);
          v35 = *(int *)(v33 + 464);
          v36 = get_dtype_size();
          sub_1D6310(a1, 0xCu, v36, v34, v35, v34, 0);
        }
        if ( v17 )
        {
          v29 = *(_QWORD *)(a1 + 832);
          v30 = *(int *)(v29 + 404);
          v31 = *(int *)(v29 + 464);
          v32 = get_dtype_size();
          sub_1D6310(a1, 0xCu, v32, v30, v31, v30, 0);
        }
        v20 = 0;
        if ( (*(_BYTE *)(a1 + 52) & 6) != 0 )
        {
          sub_3FC6F0(a1);
          v21 = *(_WORD *)(a1 + 48);
          if ( v21 == 28 || v21 == 167 )
          {
            v22 = *(_QWORD *)(a1 + 40);
            v23 = *(_QWORD *)(a1 + 832);
            v24 = (*(_BYTE *)(a1 + 52) & 4) == 0;
            v59 = 0x100000001LL;
            v62 = 0xFFFFFFFF00000000LL;
            v60 = 1;
            v63 = 0;
            sub_120A10((__int64)&v62, v23, 0, 1, v22, 0);
            sub_1D6450(
              a1,
              (unsigned int)(v24 + 43),
              (unsigned __int8 *)&v59,
              (unsigned __int8 *)&v62,
              (unsigned __int8 *)&v47);
            *(_QWORD *)(a1 + 16) = sub_67FD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2, v25);
            sub_11CDA0((__int64)&v62);
            sub_11CDA0((__int64)&v59);
          }
          sub_1D6450(a1, 55, (unsigned __int8 *)&v45, nullptr, nullptr);
          v20 = 1;
        }
        goto LABEL_32;
      }
      v53 = a1;
      v55 = 0;
      v54 = 0xFFFFFFFF00000000LL;
      sub_3FA580((int *)&v53, 1, 0, v6);
      if ( !v55 && !(unsigned __int8)sub_3FACB0((__int64)&v53, v6, (__m128)v5) )
        sub_3EB430(v6);
      v58 = 0;
      v56 = a1;
      v37 = HIDWORD(v54);
      *(_QWORD *)(a1 + 880) = -1;
      v57 = 0xFFFFFFFF00000001LL;
      sub_3FA580((int *)&v56, 1, 0, v6);
      if ( !v58 && !(unsigned __int8)sub_3FACB0((__int64)&v56, v6, (__m128)v5) )
        sub_3EB430(v6);
      v42 = 1;
      v38 = SHIDWORD(v57);
    }
    else
    {
      if ( v14 != 167 )
      {
        v42 = 0;
        v16 = 8;
        if ( v14 == 207 )
          goto LABEL_16;
        goto LABEL_39;
      }
      v62 = a1;
      v64 = 0;
      v63 = 0xFFFFFFFF00000000LL;
      sub_3FA580((int *)&v62, 1, 0, v6);
      if ( !v64 && !(unsigned __int8)sub_3FACB0((__int64)&v62, v6, (__m128)v5) )
        sub_3EB430(v6);
      v42 = 0;
      v37 = HIDWORD(v63);
      v38 = 8;
    }
    v39 = get_dtype_size();
    sub_1D6310(a1, 0x23u, v39, v37, v38, 0, 0);
    v40 = get_dtype_size();
    sub_1D6310(a1, 0x1Eu, v40, v37, v38, 3, 0);
    v41 = get_dtype_size();
    sub_1D6310(a1, 0xDu, v41, v37, v38, v37, 0);
    sub_3FD520(a1, v37, v15);
    v17 = 1;
    goto LABEL_17;
  }
  v50 = a1;
  v51 = 0xFFFFFFFF00000001LL;
  v52 = 0;
  sub_3FA580((int *)&v50, 1, 0, v6);
  if ( !v52 && !(unsigned __int8)sub_3FACB0((__int64)&v50, v6, (__m128)v5) )
    sub_3EB430(v6);
  v42 = 1;
  v16 = HIDWORD(v51);
  *(_QWORD *)(a1 + 880) = -1;
LABEL_16:
  v17 = sub_3FB270(a1, 0, v16, 1, v6, (__m128)v5);
  if ( v17 )
    goto LABEL_17;
  v20 = -2;
LABEL_32:
  sub_11CDA0((__int64)v49);
  sub_11CDA0((__int64)&v47);
  sub_11CDA0((__int64)&v45);
  return v20;
}
