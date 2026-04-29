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
  unsigned int v14; // ebx
  int v15; // edx
  char v16; // r15
  int v17; // edx
  unsigned __int8 v18; // r13
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 head; // rax
  __int64 v25; // rbx
  int v26; // eax
  unsigned int v27; // ebx
  __int16 v28; // ax
  __int64 v29; // r8
  __int64 v30; // rsi
  _BOOL4 v31; // ebx
  __int64 v33; // r15
  int dtype_size; // eax
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // r14
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // r14
  int v42; // eax
  int v43; // r14d
  __int64 v44; // r13
  int v45; // eax
  int v46; // eax
  int v47; // eax
  char v48; // [rsp+3h] [rbp-10Dh]
  int v49; // [rsp+4h] [rbp-10Ch]
  __int64 flags; // [rsp+8h] [rbp-108h]
  unsigned __int64 v51; // [rsp+10h] [rbp-100h] BYREF
  __int64 v52; // [rsp+18h] [rbp-F8h]
  unsigned __int64 v53; // [rsp+20h] [rbp-F0h] BYREF
  __int64 v54; // [rsp+28h] [rbp-E8h]
  _BYTE v55[12]; // [rsp+30h] [rbp-E0h] BYREF
  __int64 v56; // [rsp+40h] [rbp-D0h] BYREF
  unsigned __int64 v57; // [rsp+48h] [rbp-C8h]
  char v58; // [rsp+50h] [rbp-C0h]
  __int64 v59; // [rsp+60h] [rbp-B0h] BYREF
  unsigned __int64 v60; // [rsp+68h] [rbp-A8h]
  char v61; // [rsp+70h] [rbp-A0h]
  __int64 v62; // [rsp+80h] [rbp-90h] BYREF
  unsigned __int64 v63; // [rsp+88h] [rbp-88h]
  char v64; // [rsp+90h] [rbp-80h]
  __int64 v65; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v66; // [rsp+A8h] [rbp-68h]
  char v67; // [rsp+B0h] [rbp-60h]
  unsigned __int64 v68; // [rsp+C0h] [rbp-50h] BYREF
  unsigned __int64 v69; // [rsp+C8h] [rbp-48h]
  char v70; // [rsp+D0h] [rbp-40h]
  unsigned __int64 v71; // [rsp+D8h] [rbp-38h]

  v71 = __readfsqword(0x28u);
  v1 = *(_DWORD *)(a1 + 52);
  if ( (v1 & 1) != 0 )
    return (unsigned int)-2;
  v52 = 0;
  v2 = v1 & 0x1018;
  v51 = 0xFFFFFFFF00000000LL;
  v53 = 0xFFFFFFFF00000000LL;
  v3 = 8;
  v54 = 0;
  if ( v2 != 4112 )
  {
    if ( (v1 & 0x1008) == 0 || (v3 = 2, v2 == 4104) )
      v3 = 4;
  }
  v4 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)v55 = 1;
  v5 = _mm_cvtsi32_si128(*(_DWORD *)(v4 + 388));
  *(_QWORD *)&v6 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), v5).m128i_u64[0];
  *(double *)&v55[4] = v6;
  if ( (v1 & 6) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v7 + 48) )
    {
      v7 = sub_67FD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 0);
      *(_QWORD *)(a1 + 16) = v7;
      v4 = *(_QWORD *)(a1 + 832);
      v3 = *(_DWORD *)&v55[4];
    }
    v8 = *(_DWORD *)(v7 + 72);
    v9 = *(_DWORD *)(v4 + 84);
    LOBYTE(v51) = 7;
    v10 = *(_QWORD *)(a1 + 40);
    LOBYTE(v53) = 6;
    LODWORD(v52) = v8;
    v11 = 8 * v9;
    v12 = v10 + *(unsigned __int16 *)(a1 + 50);
    if ( (unsigned __int64)v11 <= 0x3F )
      v12 &= ~(-1LL << v11);
    v54 = v12;
    v69 = 0;
    v68 = 0xFFFFFFFF00000000LL;
    sub_120A10((__int64)&v68, v4, 0, v3, v10, 0);
    sub_1D6450(a1, 44, v55, (unsigned __int8 *)&v68, (unsigned __int8 *)&v53);
    *(_QWORD *)(a1 + 16) = sub_67FD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
    sub_11CDA0((__int64)&v68);
  }
  v13 = *(_WORD *)(a1 + 48);
  v14 = *(unsigned __int8 *)(a1 + 69);
  if ( v13 != 124 )
  {
    if ( v13 <= 0x7Cu )
    {
      if ( v13 != 28 )
      {
        if ( v13 != 107 )
        {
LABEL_42:
          v48 = 1;
          v16 = 1;
          goto LABEL_18;
        }
        v65 = a1;
        v67 = 0;
        v66 = 0xFFFFFFFF00000001LL;
        sub_3FA580((int *)&v65, 1, 0, v6);
        if ( !v67 && !(unsigned __int8)sub_3FACB0((__int64)&v65, v6, (__m128)v5) )
          sub_3EB430(v6, (__int64)&v65, 1);
        v33 = SHIDWORD(v66);
        dtype_size = get_dtype_size((unsigned __int8)v14);
        sub_1D6310(a1, 4u, dtype_size, v33, 0x3BEA45E214ADDC55LL, 8, 0);
        LOBYTE(v14) = *(_BYTE *)(a1 + 69);
        v16 = 0;
        v48 = 1;
LABEL_18:
        v17 = *(_DWORD *)(a1 + 52);
        v18 = 7;
        if ( (v17 & 0x1018) != 0x1010 )
          v18 = ((v17 & 0x1018) == 4104 || (v17 & 0x1008) == 0) + 1;
        v49 = get_dtype_size((unsigned __int8)v14);
        v19 = *(_QWORD *)(a1 + 40);
        do
        {
          head = prev_head(v19, 0);
          v19 = head;
          if ( head == -1 )
            break;
          flags = get_flags_ex(head, 4);
          if ( (~BYTE1(flags) & 6) != 0 || (unsigned __int8)get_byte(v19, 4, v20, v21) == 0xFC )
            break;
          if ( (unsigned __int8)get_byte(v19, 4, v22, v23) == 0xFD )
          {
            v49 = -v49;
            break;
          }
        }
        while ( (flags & 0x1000) == 0 );
        v25 = *(int *)(*(_QWORD *)(a1 + 832) + 464LL);
        v26 = get_dtype_size(v18);
        sub_1D6310(a1, 3u, v26, v49, 0x3BEA45E214ADDC55LL, v25, 0);
        if ( v48 )
        {
          v39 = *(_QWORD *)(a1 + 832);
          v40 = *(int *)(v39 + 408);
          v41 = *(int *)(v39 + 464);
          v42 = get_dtype_size(v18);
          sub_1D6310(a1, 0xCu, v42, v40, v41, v40, 0);
        }
        if ( v16 )
        {
          v35 = *(_QWORD *)(a1 + 832);
          v36 = *(int *)(v35 + 404);
          v37 = *(int *)(v35 + 464);
          v38 = get_dtype_size(v18);
          sub_1D6310(a1, 0xCu, v38, v36, v37, v36, 0);
        }
        v27 = 0;
        if ( (*(_BYTE *)(a1 + 52) & 6) != 0 )
        {
          sub_3FC6F0(a1);
          v28 = *(_WORD *)(a1 + 48);
          if ( v28 == 28 || v28 == 167 )
          {
            v29 = *(_QWORD *)(a1 + 40);
            v30 = *(_QWORD *)(a1 + 832);
            v31 = (*(_BYTE *)(a1 + 52) & 4) == 0;
            v65 = 0x100000001LL;
            v68 = 0xFFFFFFFF00000000LL;
            v66 = 1;
            v69 = 0;
            sub_120A10((__int64)&v68, v30, 0, 1, v29, 0);
            sub_1D6450(a1, v31 + 43, (unsigned __int8 *)&v65, (unsigned __int8 *)&v68, (unsigned __int8 *)&v53);
            *(_QWORD *)(a1 + 16) = sub_67FD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
            sub_11CDA0((__int64)&v68);
            sub_11CDA0((__int64)&v65);
          }
          sub_1D6450(a1, 55, (unsigned __int8 *)&v51, nullptr, nullptr);
          v27 = 1;
        }
        goto LABEL_35;
      }
      v59 = a1;
      v61 = 0;
      v60 = 0xFFFFFFFF00000000LL;
      sub_3FA580((int *)&v59, 1, 0, v6);
      if ( !v61 && !(unsigned __int8)sub_3FACB0((__int64)&v59, v6, (__m128)v5) )
        sub_3EB430(v6, (__int64)&v59, 1);
      v64 = 0;
      v62 = a1;
      v43 = HIDWORD(v60);
      *(_QWORD *)(a1 + 880) = -1;
      v63 = 0xFFFFFFFF00000001LL;
      sub_3FA580((int *)&v62, 1, 0, v6);
      if ( !v64 && !(unsigned __int8)sub_3FACB0((__int64)&v62, v6, (__m128)v5) )
        sub_3EB430(v6, (__int64)&v62, 1);
      v48 = 1;
      v44 = SHIDWORD(v63);
    }
    else
    {
      if ( v13 != 167 )
      {
        v48 = 0;
        v15 = 8;
        if ( v13 == 207 )
          goto LABEL_16;
        goto LABEL_42;
      }
      v68 = a1;
      v70 = 0;
      v69 = 0xFFFFFFFF00000000LL;
      sub_3FA580((int *)&v68, 1, 0, v6);
      if ( !v70 && !(unsigned __int8)sub_3FACB0((__int64)&v68, v6, (__m128)v5) )
        sub_3EB430(v6, (__int64)&v68, 1);
      v48 = 0;
      v43 = HIDWORD(v69);
      v44 = 8;
    }
    v45 = get_dtype_size(v14);
    sub_1D6310(a1, 0x23u, v45, v43, v44, 0, 0);
    v46 = get_dtype_size(v14);
    sub_1D6310(a1, 0x1Eu, v46, v43, v44, 3, 0);
    v47 = get_dtype_size(v14);
    sub_1D6310(a1, 0xDu, v47, v43, v44, v43, 0);
    sub_3FD520(a1, v43, v14);
    LOBYTE(v14) = *(_BYTE *)(a1 + 69);
    v16 = 1;
    goto LABEL_18;
  }
  v56 = a1;
  v57 = 0xFFFFFFFF00000001LL;
  v58 = 0;
  sub_3FA580((int *)&v56, 1, 0, v6);
  if ( !v58 && !(unsigned __int8)sub_3FACB0((__int64)&v56, v6, (__m128)v5) )
    sub_3EB430(v6, (__int64)&v56, 1);
  v48 = 1;
  v15 = HIDWORD(v57);
  *(_QWORD *)(a1 + 880) = -1;
LABEL_16:
  v16 = sub_3FB270(a1, 0, v15, 1, v6, (__m128)v5);
  if ( v16 )
  {
    LOBYTE(v14) = *(_BYTE *)(a1 + 69);
    goto LABEL_18;
  }
  v27 = -2;
LABEL_35:
  sub_11CDA0((__int64)v55);
  sub_11CDA0((__int64)&v53);
  sub_11CDA0((__int64)&v51);
  return v27;
}
