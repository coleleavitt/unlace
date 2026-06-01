__m128 *__fastcall sub_1886CC0(__int64 a1, __int32 a2, __m128 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  unsigned __int64 *v9; // rdx
  __int64 v10; // rbp
  __m128i *v11; // rax
  __int64 v12; // rsi
  unsigned int v13; // r12d
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // r12
  __int64 v17; // rbx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r13
  __int64 v20; // rbx
  __m128 *v21; // rbp
  __int64 v22; // rdi
  __int64 (*v23)(void); // rax
  __int64 v24; // r14
  __int64 (__fastcall *v25)(__int64); // rax
  __int64 v26; // rax
  __int64 *v27; // r14
  __int64 v28; // rdi
  unsigned __int64 v29; // rbp
  int v30; // ecx
  __m128 v31; // xmm0
  char v32; // bp
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 *v39; // rax
  __int64 v40; // rbx
  __m128 *v41; // r14
  __int64 v42; // rdi
  _BYTE *v43; // rbp
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // r14
  unsigned __int64 v47; // rdx
  unsigned int v48; // ecx
  _QWORD *v49; // rdi
  __int64 v50; // rsi
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rbp
  unsigned __int64 v55; // rax
  __m128 v56; // xmm2
  unsigned __int64 v57; // rbx
  __m128 *v58; // r14
  __m128 *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 *v65; // rdx
  __int64 v66; // [rsp+0h] [rbp-1E8h]
  __int64 *v67; // [rsp+0h] [rbp-1E8h]
  __m128 *v68; // [rsp+8h] [rbp-1E0h] BYREF
  unsigned __int64 v69; // [rsp+10h] [rbp-1D8h]
  __int64 v70; // [rsp+18h] [rbp-1D0h]
  __m128 v71; // [rsp+20h] [rbp-1C8h] BYREF
  __m128i *v72; // [rsp+30h] [rbp-1B8h]
  void **p_ptr; // [rsp+38h] [rbp-1B0h]
  _BYTE *v74; // [rsp+40h] [rbp-1A8h]
  _BYTE *v75; // [rsp+48h] [rbp-1A0h]
  __int64 v76; // [rsp+50h] [rbp-198h] BYREF
  unsigned int v77; // [rsp+58h] [rbp-190h]
  __int64 v78; // [rsp+60h] [rbp-188h] BYREF
  _BYTE v79[16]; // [rsp+70h] [rbp-178h] BYREF
  __int64 v80; // [rsp+80h] [rbp-168h]
  unsigned int v81; // [rsp+90h] [rbp-158h]
  __m128i v82; // [rsp+A0h] [rbp-148h] BYREF
  int v83; // [rsp+B8h] [rbp-130h]
  __m128 *v84; // [rsp+D8h] [rbp-110h]
  void *ptr; // [rsp+120h] [rbp-C8h] BYREF
  __int64 v86; // [rsp+128h] [rbp-C0h]
  _BYTE v87[184]; // [rsp+130h] [rbp-B8h] BYREF

  v8 = *(_QWORD *)(a4 + 16);
  v71.m128_i32[0] = a2;
  v70 = a4;
  v9 = (unsigned __int64 *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
  v69 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v8 & 4) != 0 )
    v69 = *v9;
  v10 = a3[2].m128_i64[1];
  v11 = (__m128i *)(v69 - 64);
  if ( !v69 )
    v11 = nullptr;
  v12 = a3[2].m128_i64[1];
  v13 = *(_DWORD *)(v70 + 24);
  v69 = (unsigned __int64)v11;
  v72 = v11 + 4;
  v14 = sub_B94670((unsigned __int64)&v11[4], v12, (__int64)v9, a4, a5, a6);
  if ( v14 )
  {
    v66 = v10;
    v15 = v14;
    LODWORD(v68) = v13;
    v16 = (__int64)a3;
    while ( 1 )
    {
      v17 = v15;
      v18 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      v19 = v18;
      v20 = (v17 >> 2) & 1;
      if ( (_DWORD)v20 )
      {
        if ( !v18 )
          goto LABEL_20;
        v21 = *(__m128 **)v18;
        if ( (*(_BYTE *)(*(_QWORD *)v18 + 87LL) & 0x20) == 0 )
          goto LABEL_19;
        v22 = v21[11].m128_i64[1];
        if ( !v22 )
          goto LABEL_19;
        if ( v16 == v22 )
          goto LABEL_44;
      }
      else
      {
        if ( (*(_BYTE *)(v18 + 87) & 0x20) == 0 || (v22 = *(_QWORD *)(v18 + 184)) == 0 )
        {
LABEL_20:
          a3 = (__m128 *)v16;
          v10 = v66;
          v13 = (unsigned int)v68;
          break;
        }
        v21 = (__m128 *)v18;
        if ( v16 == v22 )
          goto LABEL_44;
      }
      v23 = *(__int64 (**)(void))(*(_QWORD *)v22 + 32LL);
      if ( (char *)v23 == (char *)sub_B94CC0 )
        v24 = sub_B709C0(v22);
      else
        v24 = v23();
      v25 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL);
      if ( v25 == sub_B94CC0 )
        v26 = sub_B709C0(v16);
      else
        v26 = v25(v16);
      if ( v24 == v26 )
      {
LABEL_44:
        v68 = v21;
        return v21;
      }
      if ( !(_DWORD)v20 || !v19 )
        goto LABEL_20;
LABEL_19:
      v15 = *(_QWORD *)(v19 + 8);
      if ( !v15 )
        goto LABEL_20;
    }
  }
  v76 = v10;
  v77 = v13;
  sub_B85890(&v78, v10);
  v27 = sub_A81910(*(_QWORD **)(a1 + 248), a3[3].m128_i64[0], v13);
  v28 = *v27;
  v67 = v27 + 1;
  if ( !(*v27 & 7 | (*v27 >> 3) & 1) && *(_BYTE *)(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 40 )
  {
    sub_F6D010(v28, (unsigned __int64)(v27 + 1));
    v67 = v65;
  }
  v74 = v79;
  sub_1885FB0((__int64)v79, a1, v71.m128_u32[0], v70);
  if ( (a3[5].m128_i8[4] & 3) != 0 && (unsigned __int8)sub_1888F20(a1, v69, 0, 0, a3, v74) )
  {
    v55 = a3[3].m128_u64[1];
    if ( (v55 & 4) != 0 )
    {
      v71.m128_u64[0] = (unsigned __int64)a3;
      v68 = (__m128 *)((v55 & 0xFFFFFFFFFFFFFFF8LL) + 40);
      v71 = _mm_loadh_ps((const double *)v71.m128_u64);
    }
    else
    {
      v68 = a3;
      v56 = _mm_loadh_ps((const double *)&v68);
      v68 = (__m128 *)&xmmword_23DED40;
      v71 = v56;
    }
    v30 = a3[5].m128_i8[4] & 3;
  }
  else
  {
    v29 = a3[3].m128_u64[1];
    if ( (v29 & 4) != 0 )
    {
      v71.m128_u64[0] = (unsigned __int64)a3;
      v30 = 0;
      v68 = (__m128 *)((v29 & 0xFFFFFFFFFFFFFFF8LL) + 40);
      v71 = _mm_loadh_ps((const double *)v71.m128_u64);
    }
    else
    {
      v68 = a3;
      v30 = 0;
      v31 = _mm_loadh_ps((const double *)&v68);
      v68 = (__m128 *)&xmmword_23DED40;
      v71 = v31;
    }
  }
  LODWORD(p_ptr) = v30;
  v32 = sub_C1BE80((int *)(a1 + 224));
  v33 = sub_B709C0((__int64)a3);
  v34 = *(char *)(v33 + 87);
  if ( (v34 & 0x40) != 0 )
    v35 = *(_QWORD *)(v33 + 16LL * ((v34 & 0x20) != 0) + 176);
  else
    v35 = v34 >> 63;
  v36 = v69;
  v68 = sub_B98D00(
          *(_QWORD **)(a1 + 248),
          v69,
          v13,
          &v76,
          *v27,
          (__int64)v27,
          v35,
          v32,
          1u,
          1,
          (char)p_ptr,
          v71.m128_i64[0],
          v71.m128_i64[1],
          (__int64)v68);
  if ( *(char *)(v70 + 28) < 0 )
  {
    v36 = 1;
    sub_B88650((__int64)v68, 1);
  }
  v39 = (__int64 *)(*v27 & 0xFFFFFFFFFFFFFFF0LL);
  v40 = *v39;
  if ( *(_BYTE *)(*v39 + 16) != 26 )
    v40 = sub_F63050(*v39, v36, v37, v38);
  sub_A5E110((__m128 *)&v82, v40);
  v41 = v68;
  v83 = 9;
  v42 = *(_QWORD *)(a1 + 248);
  v43 = v87;
  v84 = v68;
  v44 = sub_A73610(v42, *(_QWORD *)(v40 + 24), (__int64 *)(v40 + 48), *(unsigned __int16 *)(v40 + 22), &v82, 0);
  ptr = v87;
  v41[3].m128_u64[0] = v44;
  p_ptr = &ptr;
  v86 = 0x1000000000LL;
  LODWORD(v69) = *(unsigned __int16 *)(v40 + 22);
  if ( (_DWORD)v69 )
  {
    v45 = (__int64)&v41[4].m128_i64[1];
    v75 = v87;
    v46 = 0;
    v70 = v45;
    do
    {
      v49 = *(_QWORD **)(a1 + 248);
      v50 = *(_QWORD *)(v40 + 8 * v46 + 48);
      v71.m128_u64[0] = 8 * v46;
      v51 = sub_A81910(v49, v50, v13);
      v52 = sub_B74530(*(_QWORD *)(a1 + 248), v70, v13, v13, 0, *(_QWORD *)(v40 + 8 * v46 + 48), (__int64)v51, 0, 0);
      v53 = v52;
      *(_DWORD *)(v52 + 96) &= 0xFFF01FFF;
      if ( v46 <= 0xFE )
        *(_WORD *)(v52 + 98) = (16 * (unsigned __int8)v46) | *(_WORD *)(v52 + 98) & 0xF00F;
      else
        sub_B74850(v52, v46);
      *(_BYTE *)(v53 + 29) |= 2u;
      sub_17C44D0((__int64 *)a1, (__int64 *)v53, *(_QWORD *)(a3[7].m128_u64[1] + 8 * v46), 1u);
      v47 = (unsigned int)v86 + 1LL;
      if ( v47 > HIDWORD(v86) )
        sub_2237220(p_ptr, v75, v47, 8);
      *((_QWORD *)ptr + (unsigned int)v86) = v53;
      v48 = v86 + 1;
      LODWORD(v86) = v86 + 1;
      v67[v46++ + 2] = v53;
    }
    while ( (_DWORD)v69 != (_DWORD)v46 );
    v43 = ptr;
    v57 = v48;
  }
  else
  {
    v57 = 0;
  }
  v58 = v68;
  v59 = v68;
  v68[1].m128_i8[13] = a3[1].m128_i8[13] & 0x60 | v68[1].m128_i8[13] & 0x9F;
  v60 = sub_B8C330((__int64)v59);
  sub_B7C440((__int64)v58, v60, v43, v57);
  sub_B94AD0(v72, (__int64)v58, v61, v62, v63, v64);
  if ( v58[1].m128_i8[12] >= 0 && (unsigned __int8)sub_1887DE0(a1, v58, 0, v74, 0) )
    sub_1869020(a1, (__int64)v58, v13, 0);
  if ( ptr != p_ptr + 2 )
    free(ptr);
  operator delete(v80, 16LL * v81, 8);
  return v68;
}
