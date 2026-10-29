__int64 __fastcall sub_3FBE80(__int64 a1)
{
  int v1; // eax
  int v2; // ecx
  int v3; // edx
  __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // eax
  int v7; // ecx
  __int64 v8; // r8
  int v9; // ecx
  __int64 v10; // rax
  int v11; // r9d
  unsigned __int16 v12; // ax
  unsigned __int8 v13; // bl
  int v14; // edx
  char v15; // r15
  int v16; // ebx
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // r9d
  __int16 v20; // ax
  __int64 v21; // r8
  __int64 v22; // rsi
  _BOOL4 v23; // ebx
  int v24; // r9d
  int v26; // r15d
  int dtype_size; // eax
  __int64 v28; // rax
  int v29; // ebx
  int v30; // r14d
  int v31; // eax
  __int64 v32; // rax
  int v33; // ebx
  int v34; // r14d
  int v35; // eax
  int v36; // r14d
  int v37; // r13d
  int v38; // eax
  int v39; // eax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rdx
  char v46; // [rsp+3h] [rbp-10Dh]
  int v47; // [rsp+4h] [rbp-10Ch]
  __int64 flags; // [rsp+8h] [rbp-108h]
  unsigned __int64 v49; // [rsp+10h] [rbp-100h] BYREF
  __int64 v50; // [rsp+18h] [rbp-F8h]
  unsigned __int64 v51; // [rsp+20h] [rbp-F0h] BYREF
  __int64 v52; // [rsp+28h] [rbp-E8h]
  _BYTE v53[12]; // [rsp+30h] [rbp-E0h] BYREF
  __int64 v54; // [rsp+40h] [rbp-D0h] BYREF
  unsigned __int64 v55; // [rsp+48h] [rbp-C8h]
  char v56; // [rsp+50h] [rbp-C0h]
  __int64 v57; // [rsp+60h] [rbp-B0h] BYREF
  unsigned __int64 v58; // [rsp+68h] [rbp-A8h]
  char v59; // [rsp+70h] [rbp-A0h]
  __int64 v60; // [rsp+80h] [rbp-90h] BYREF
  unsigned __int64 v61; // [rsp+88h] [rbp-88h]
  char v62; // [rsp+90h] [rbp-80h]
  __int64 v63; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v64; // [rsp+A8h] [rbp-68h]
  char v65; // [rsp+B0h] [rbp-60h]
  unsigned __int64 v66; // [rsp+C0h] [rbp-50h] BYREF
  unsigned __int64 v67; // [rsp+C8h] [rbp-48h]
  char v68; // [rsp+D0h] [rbp-40h]
  unsigned __int64 v69; // [rsp+D8h] [rbp-38h]

  v69 = __readfsqword(0x28u);
  v1 = *(_DWORD *)(a1 + 52);
  if ( (v1 & 1) != 0 )
    return (unsigned int)-2;
  v50 = 0;
  v2 = v1 & 0x1018;
  v49 = 0xFFFFFFFF00000000LL;
  v51 = 0xFFFFFFFF00000000LL;
  v3 = 8;
  v52 = 0;
  if ( v2 != 4112 )
  {
    if ( (v1 & 0x1008) == 0 || (v3 = 2, v2 == 4104) )
      v3 = 4;
  }
  v4 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)v53 = 1;
  *(_QWORD *)&v53[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), _mm_cvtsi32_si128(*(_DWORD *)(v4 + 388))).m128i_u64[0];
  if ( (v1 & 6) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v5 + 48) )
    {
      v5 = sub_676D0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 0);
      *(_QWORD *)(a1 + 16) = v5;
      v4 = *(_QWORD *)(a1 + 832);
      v3 = *(_DWORD *)&v53[4];
    }
    v6 = *(_DWORD *)(v5 + 72);
    v7 = *(_DWORD *)(v4 + 84);
    LOBYTE(v49) = 7;
    v8 = *(_QWORD *)(a1 + 40);
    LOBYTE(v51) = 6;
    LODWORD(v50) = v6;
    v9 = 8 * v7;
    v10 = v8 + *(unsigned __int16 *)(a1 + 50);
    if ( (unsigned __int64)v9 <= 0x3F )
      v10 &= ~(-1LL << v9);
    v52 = v10;
    v67 = 0;
    v66 = 0xFFFFFFFF00000000LL;
    sub_11E5D0((__int64)&v66, v4, 0, v3, v8, 0);
    sub_1D38D0(a1, 44, (unsigned int)v53, (unsigned int)&v66, (unsigned int)&v51, v11);
    *(_QWORD *)(a1 + 16) = sub_676D0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
    sub_11A960((__int64)&v66);
  }
  v12 = *(_WORD *)(a1 + 48);
  v13 = *(_BYTE *)(a1 + 69);
  if ( v12 != 124 )
  {
    if ( v12 <= 0x7Cu )
    {
      if ( v12 != 28 )
      {
        if ( v12 != 107 )
        {
LABEL_39:
          v46 = 1;
          v15 = 1;
          goto LABEL_17;
        }
        v63 = a1;
        v65 = 0;
        v64 = 0xFFFFFFFF00000001LL;
        sub_3EFA20((int *)&v63, 1, 0);
        if ( !v65 && !(unsigned __int8)sub_3F0150((__int64)&v63) )
          sub_3E07C0(&v63, 1, v41);
        v26 = HIDWORD(v64);
        dtype_size = get_dtype_size();
        sub_1D3790(a1, 4, dtype_size, v26, 346938453, 8, 0);
        v15 = 0;
        v46 = 1;
LABEL_17:
        v47 = get_dtype_size();
        do
        {
          if ( prev_head() == -1 )
            break;
          flags = get_flags_ex();
          if ( (~BYTE1(flags) & 6) != 0 || (unsigned __int8)get_byte() == 0xFC )
            break;
          if ( (unsigned __int8)get_byte() == 0xFD )
          {
            v47 = -v47;
            break;
          }
        }
        while ( (flags & 0x1000) == 0 );
        v16 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL);
        v17 = get_dtype_size();
        sub_1D3790(a1, 3, v17, v47, 346938453, v16, 0);
        if ( v46 )
        {
          v32 = *(_QWORD *)(a1 + 832);
          v33 = *(_DWORD *)(v32 + 408);
          v34 = *(_DWORD *)(v32 + 464);
          v35 = get_dtype_size();
          sub_1D3790(a1, 12, v35, v33, v34, v33, 0);
        }
        if ( v15 )
        {
          v28 = *(_QWORD *)(a1 + 832);
          v29 = *(_DWORD *)(v28 + 404);
          v30 = *(_DWORD *)(v28 + 464);
          v31 = get_dtype_size();
          sub_1D3790(a1, 12, v31, v29, v30, v29, 0);
        }
        v18 = 0;
        if ( (*(_BYTE *)(a1 + 52) & 6) != 0 )
        {
          sub_3F1B90(a1);
          v20 = *(_WORD *)(a1 + 48);
          if ( v20 == 28 || v20 == 167 )
          {
            v21 = *(_QWORD *)(a1 + 40);
            v22 = *(_QWORD *)(a1 + 832);
            v23 = (*(_BYTE *)(a1 + 52) & 4) == 0;
            v63 = 0x100000001LL;
            v66 = 0xFFFFFFFF00000000LL;
            v64 = 1;
            v67 = 0;
            sub_11E5D0((__int64)&v66, v22, 0, 1, v21, 0);
            sub_1D38D0(a1, v23 + 43, (unsigned int)&v63, (unsigned int)&v66, (unsigned int)&v51, v24);
            *(_QWORD *)(a1 + 16) = sub_676D0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
            sub_11A960((__int64)&v66);
            sub_11A960((__int64)&v63);
          }
          sub_1D38D0(a1, 55, (unsigned int)&v49, 0, 0, v19);
          v18 = 1;
        }
        goto LABEL_32;
      }
      v57 = a1;
      v59 = 0;
      v58 = 0xFFFFFFFF00000000LL;
      sub_3EFA20((int *)&v57, 1, 0);
      if ( !v59 && !(unsigned __int8)sub_3F0150((__int64)&v57) )
        sub_3E07C0(&v57, 1, v43);
      v62 = 0;
      v60 = a1;
      v36 = HIDWORD(v58);
      *(_QWORD *)(a1 + 880) = -1;
      v61 = 0xFFFFFFFF00000001LL;
      sub_3EFA20((int *)&v60, 1, 0);
      if ( !v62 && !(unsigned __int8)sub_3F0150((__int64)&v60) )
        sub_3E07C0(&v60, 1, v42);
      v46 = 1;
      v37 = HIDWORD(v61);
    }
    else
    {
      if ( v12 != 167 )
      {
        v46 = 0;
        v14 = 8;
        if ( v12 == 207 )
          goto LABEL_16;
        goto LABEL_39;
      }
      v66 = a1;
      v68 = 0;
      v67 = 0xFFFFFFFF00000000LL;
      sub_3EFA20((int *)&v66, 1, 0);
      if ( !v68 && !(unsigned __int8)sub_3F0150((__int64)&v66) )
        sub_3E07C0(&v66, 1, v44);
      v46 = 0;
      v36 = HIDWORD(v67);
      v37 = 8;
    }
    v38 = get_dtype_size();
    sub_1D3790(a1, 35, v38, v36, v37, 0, 0);
    v39 = get_dtype_size();
    sub_1D3790(a1, 30, v39, v36, v37, 3, 0);
    v40 = get_dtype_size();
    sub_1D3790(a1, 13, v40, v36, v37, v36, 0);
    sub_3F29C0(a1, v36, v13);
    v15 = 1;
    goto LABEL_17;
  }
  v54 = a1;
  v55 = 0xFFFFFFFF00000001LL;
  v56 = 0;
  sub_3EFA20((int *)&v54, 1, 0);
  if ( !v56 && !(unsigned __int8)sub_3F0150((__int64)&v54) )
    sub_3E07C0(&v54, 1, v45);
  v46 = 1;
  v14 = HIDWORD(v55);
  *(_QWORD *)(a1 + 880) = -1;
LABEL_16:
  v15 = sub_3F0710(a1, 0, v14, 1);
  if ( v15 )
    goto LABEL_17;
  v18 = -2;
LABEL_32:
  sub_11A960((__int64)v53);
  sub_11A960((__int64)&v51);
  sub_11A960((__int64)&v49);
  return v18;
}
