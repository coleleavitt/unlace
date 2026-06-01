__int64 *__fastcall sub_1E468A0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4, __m128i a5)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbp
  char v9; // r13
  __int64 v10; // rax
  unsigned __int8 v11; // bp
  char v12; // al
  __int64 v13; // rdx
  char v14; // r8
  char v15; // bp
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // rdi
  __int64 *v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  char v26; // al
  char v27; // dl
  __int16 v28; // r14
  __int64 v29; // rax
  __int16 v30; // dx
  __int16 v31; // cx
  __int16 v32; // si
  __int16 v33; // dx
  __int16 v34; // dx
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // rax
  int v38; // edx
  unsigned __int8 v39; // si
  _QWORD *v40; // rdi
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r13
  unsigned int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  const __m128i *v53; // r13
  __int64 v55; // rax
  __int64 v56; // rdx
  unsigned __int64 v57; // rax
  int v58; // edx
  __int16 v59; // si
  __int64 v60; // rax
  __m128 v61; // kr00_16
  __int64 v62; // rdx
  __int64 v63; // rax
  __m128i v64; // xmm3
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rdx
  __m128i v68; // xmm2
  __int64 v69; // rsi
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rdi
  unsigned __int64 v73; // rdi
  char v74; // al
  __int64 v75; // [rsp-10h] [rbp-98h]
  __int64 v76; // [rsp-8h] [rbp-90h]
  const __m128i *v77; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int8 v78; // [rsp+8h] [rbp-80h]
  __m128i v79; // [rsp+10h] [rbp-78h] BYREF
  __m128 v80; // [rsp+20h] [rbp-68h]
  __m128 v81; // [rsp+30h] [rbp-58h]
  __m128i v82; // [rsp+40h] [rbp-48h]
  __m128i v83; // [rsp+50h] [rbp-38h]

  v7 = sub_1E0ADC0(a2);
  v8 = v7;
  if ( v7 )
  {
    v8 = sub_1E38470(*a1, *(_DWORD *)(a2 + 24), v7, a1[4], 0, a3, a4, a5);
    if ( !v8 )
      return nullptr;
  }
  v9 = sub_B97450(a2);
  v10 = *(_QWORD *)(a2 + 128);
  if ( v10 && (*(_BYTE *)(v10 + 10) & 0x20) != 0 )
  {
    v11 = *(_BYTE *)(v10 + 104);
    v12 = sub_B96EF0(a2);
    v13 = *(_QWORD *)(a2 + 128);
    v14 = 0;
    v15 = (v11 >> 3) & 3;
    if ( v13 && (*(_BYTE *)(v13 + 10) & 0x20) != 0 )
      v14 = *(_BYTE *)(v13 + 104) & 3;
    v16 = sub_B9BAE0(*(_QWORD **)(*a1 + 248), a1[3], *(_QWORD *)(v13 + 136), *(_DWORD *)(a2 + 24), v14, v12, v15);
    v19 = v75;
    v20 = *a1;
    v21 = (__int64 *)v16;
    if ( !v9 )
      goto LABEL_11;
  }
  else
  {
    v39 = *(_BYTE *)(a2 + 73);
    v40 = *(_QWORD **)(*a1 + 248);
    v41 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 40) & 7) != 0 )
      v41 = 0;
    v42 = sub_B96A60(v40, v39 >> 5, a1[3], *(_DWORD *)(a2 + 56), *(_DWORD *)(a2 + 24), v41, v8, v9);
    v20 = *a1;
    v21 = (__int64 *)v42;
    v17 = v76;
    if ( !v9 )
      goto LABEL_11;
  }
  v22 = a1[3];
  v23 = v21[6];
  if ( v22 )
  {
    if ( v23 )
      goto LABEL_11;
    if ( v22 != 64 )
    {
      v21[6] = *(_QWORD *)(v22 - 16);
      v20 = *a1;
      goto LABEL_11;
    }
  }
  else if ( v23 )
  {
    goto LABEL_11;
  }
  sub_A7AA70(*(_QWORD *)(v20 + 248), (__int64)v21, v23, v19, v17, v18);
  v20 = *a1;
LABEL_11:
  if ( !(unsigned __int8)sub_1DFDC70(v20, a2, (__int64)v21, a1[4]) )
  {
    sub_1E0A3F0(*a1, a1[4], a2, (__int64)v21, v24, v25, a3, a4);
    v26 = *(_BYTE *)(a2 + 29) & 2 | *((_BYTE *)v21 + 29) & 0xFD;
    *((_BYTE *)v21 + 29) = v26;
    v27 = (*(_BYTE *)(a2 + 29) >> 5) & 3;
    if ( v27 != 3 )
      *((_BYTE *)v21 + 29) = (32 * v27) | v26 & 0x9F;
    if ( v9 )
    {
      if ( (*(_WORD *)(a2 + 30) & 0x180) == 0 )
        goto LABEL_24;
    }
    else
    {
      sub_B9B800((__int64)v21, a2, 1);
      if ( (*(_WORD *)(a2 + 30) & 0x180) == 0 )
        goto LABEL_24;
    }
    v28 = *((_WORD *)v21 + 15);
    v29 = (*(__int64 (__fastcall **)(__int64 *))(*v21 + 48))(v21);
    v30 = *((_WORD *)v21 + 15);
    v31 = v30 & 0x3FD9;
    if ( (v28 & 0x102) != 0 )
    {
      v32 = *((_WORD *)v21 + 15) & 0x3ED9 | 0x100;
      v33 = v32 | v30 & 0xC000;
      *((_WORD *)v21 + 15) = v33;
      if ( v29 )
      {
        if ( (*(_BYTE *)(v29 + 30) & 2) != 0 )
        {
          v32 = v31 | 0x106;
          *((_WORD *)v21 + 15) = v31 | 0x106 | v33 & 0xC000;
        }
        if ( (v28 & 0xCA0) == 0 )
          goto LABEL_24;
        v34 = v32 | 0x80 | *((_WORD *)v21 + 15) & 0xC000;
        v31 = v32;
        *((_WORD *)v21 + 15) = v34;
        goto LABEL_22;
      }
      v31 |= 0x100u;
    }
    else
    {
      *((_WORD *)v21 + 15) = v30 & 0xFFD9;
    }
    if ( (v28 & 0xCA0) != 0 )
    {
      HIBYTE(v59) = HIBYTE(v31);
      LOBYTE(v59) = v31 | 0x80;
      v34 = v59 & 0x3FFF | *((_WORD *)v21 + 15) & 0xC000;
      *((_WORD *)v21 + 15) = v34;
      if ( v29 )
      {
LABEL_22:
        if ( (*(_BYTE *)(v29 + 30) & 0x20) != 0 )
        {
          LOBYTE(v31) = v31 | 0xA0;
          *((_WORD *)v21 + 15) = v31 & 0x3FFF | v34 & 0xC000;
        }
      }
    }
LABEL_24:
    if ( (*(_BYTE *)(a2 + 75) & 1) != 0 )
      *((_BYTE *)v21 + 75) |= 1u;
    v35 = a2;
    while ( 1 )
    {
      v36 = *(_QWORD *)(v35 + 16);
      v37 = v36 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v36 & 4) != 0 )
        v37 = *(_QWORD *)v37;
      v38 = *(_BYTE *)(v37 + 8) & 0x7F;
      if ( (unsigned int)(v38 - 59) > 2 )
        break;
      v35 = v37 - 64;
      if ( !v35 )
        goto LABEL_39;
    }
    v43 = *a1;
    if ( (unsigned int)(v38 - 34) <= 5 && v37 != 72 )
    {
      sub_1DC20B0(*(_QWORD *)(v43 + 11280), a2, (__int64)v21, v43);
LABEL_39:
      v43 = *a1;
    }
    v44 = *(_QWORD *)(v43 + 248);
    v45 = sub_A8BD70(v44, a2, 0);
    sub_AB9320(v44, (__int64)v21, v45, v46, v47, v48);
    if ( sub_A681F0(*(_QWORD *)(*a1 + 248)) )
      sub_A681E0(*(_QWORD *)(*a1 + 248));
    if ( sub_A681D0(*(_QWORD *)(*a1 + 248)) )
      sub_A681C0(*(_QWORD *)(*a1 + 248));
    sub_B94AD0((__m128i *)a1[3], (__int64)v21, v49, v50, v51, v52);
    if ( (*(_BYTE *)(a2 + 74) & 1) != 0 )
    {
      v55 = a2;
      while ( 1 )
      {
        v56 = *(_QWORD *)(v55 + 16);
        v57 = v56 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v56 & 4) != 0 )
          v57 = *(_QWORD *)v57;
        v58 = *(_BYTE *)(v57 + 8) & 0x7F;
        if ( (unsigned int)(v58 - 59) > 2 )
          break;
        v55 = v57 - 64;
        if ( !v55 )
          goto LABEL_45;
      }
      v53 = (const __m128i *)*a1;
      if ( (unsigned int)(v58 - 34) > 5 || v57 == 72 )
        goto LABEL_46;
      v77 = (const __m128i *)*a1;
      v78 = 0;
      v79 = 0u;
      v80 = 0u;
      v81 = 0u;
      v82 = 0u;
      v83 = 0u;
      sub_1DFE940(&v79);
      v60 = v81.m128_i64[1];
      v61 = v80;
      a4 = (__m128)_mm_loadu_si128(v53 + 977);
      v53[977].m128i_i64[0] = v81.m128_u64[0];
      v62 = v83.m128i_i64[0];
      v53[977].m128i_i64[1] = v60;
      v63 = v83.m128i_i64[1];
      v81 = a4;
      v64 = _mm_loadu_si128(v53 + 979);
      a3 = (__m128)_mm_loadu_si128(v53 + 976);
      v53[979].m128i_i64[0] = v62;
      v65 = v53[975].m128i_i64[0];
      v53[979].m128i_i64[1] = v63;
      v66 = v79.m128i_i64[0];
      v53[976].m128i_i64[0] = v61.m128_u64[0];
      v79.m128i_i64[0] = v65;
      v67 = v53[975].m128i_i64[1];
      v68 = _mm_loadu_si128(v53 + 978);
      v69 = v82.m128i_i64[0];
      v53[976].m128i_i64[1] = v61.m128_i64[1];
      v53[975].m128i_i64[0] = v66;
      v70 = v82.m128i_i64[1];
      v71 = v79.m128i_i64[1];
      v80 = a3;
      v79.m128i_i64[1] = v67;
      v82 = v68;
      v83 = v64;
      v53[978].m128i_i64[0] = v69;
      v53[978].m128i_i64[1] = v70;
      v53[975].m128i_i64[1] = v71;
      sub_1DD54A0(*a1, *(_DWORD *)(a2 + 24), v21, a2, a1[4], 1, *(double *)a3.m128_u64, a4, 1);
      v72 = *(_QWORD *)(a2 + 16);
      if ( (v72 & 4) != 0 )
        v73 = *(_QWORD *)(v72 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v73 = v72 & 0xFFFFFFFFFFFFFFF8LL;
      v74 = *(_BYTE *)(v73 + 8) & 0x7F;
      if ( v74 == 62 )
        v74 = *(_BYTE *)(sub_B8EAA0(v73) + 8) & 0x7F;
      if ( ((v74 + 70) & 0x7Fu) > 3 )
        sub_1DDD4A0(*a1, *(unsigned int *)(a2 + 24), (unsigned __int64)v21, a1[4], 1u, *(double *)a3.m128_u64, a4);
      sub_1E3CE70((__int64)v77, 1, v78, *(double *)a3.m128_u64, a4);
      sub_1E00130(&v77);
    }
LABEL_45:
    v53 = (const __m128i *)*a1;
LABEL_46:
    sub_17E3530((__int64)v53, (__int64)v21, (__m128i)a3, *(double *)a4.m128_u64);
    return v21;
  }
  return nullptr;
}
