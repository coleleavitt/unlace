__int64 __fastcall sub_205DE40(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v5; // ax
  bool v6; // zf
  __int64 v7; // rax
  int v8; // eax
  __m128i v9; // xmm2
  __m128i v10; // xmm3
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // r10d
  int v14; // r11d
  unsigned int i; // r8d
  __int64 *v16; // r9
  __int64 v17; // r12
  __int64 v18; // rax
  __int16 v19; // dx
  unsigned int v20; // r8d
  __int64 *v21; // r12
  __int64 v22; // rbp
  unsigned int v24; // eax
  _QWORD *v25; // rsi
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  char v29; // al
  __int64 *v30; // r9
  int v31; // r11d
  unsigned int v32; // r8d
  int v33; // r10d
  __int64 v34; // rcx
  char v35; // al
  unsigned __int64 v36; // rdx
  size_t v37; // rdx
  int v38; // eax
  __int64 *v39; // [rsp+0h] [rbp-1C8h]
  __int64 v40; // [rsp+8h] [rbp-1C0h]
  __int64 v41; // [rsp+8h] [rbp-1C0h]
  __int64 v42; // [rsp+8h] [rbp-1C0h]
  __int64 v43; // [rsp+8h] [rbp-1C0h]
  __int64 v44; // [rsp+10h] [rbp-1B8h]
  int v45; // [rsp+10h] [rbp-1B8h]
  int v46; // [rsp+10h] [rbp-1B8h]
  int v47; // [rsp+10h] [rbp-1B8h]
  int v48; // [rsp+10h] [rbp-1B8h]
  unsigned int v49; // [rsp+18h] [rbp-1B0h]
  unsigned int v50; // [rsp+18h] [rbp-1B0h]
  unsigned int v51; // [rsp+18h] [rbp-1B0h]
  unsigned int v52; // [rsp+18h] [rbp-1B0h]
  int v53; // [rsp+24h] [rbp-1A4h]
  int v54; // [rsp+24h] [rbp-1A4h]
  int v55; // [rsp+24h] [rbp-1A4h]
  int v56; // [rsp+24h] [rbp-1A4h]
  __int64 *v57; // [rsp+28h] [rbp-1A0h]
  __int64 *v58; // [rsp+28h] [rbp-1A0h]
  __int64 *v59; // [rsp+28h] [rbp-1A0h]
  __int64 *v60; // [rsp+28h] [rbp-1A0h]
  __int64 v61; // [rsp+30h] [rbp-198h] BYREF
  __m128i v62[2]; // [rsp+40h] [rbp-188h] BYREF
  __m128 v63; // [rsp+60h] [rbp-168h] BYREF
  __int64 v64; // [rsp+70h] [rbp-158h] BYREF
  char v65; // [rsp+80h] [rbp-148h]
  _BYTE v66[48]; // [rsp+90h] [rbp-138h] BYREF
  __int64 v67; // [rsp+C0h] [rbp-108h] BYREF
  __int16 v68; // [rsp+C8h] [rbp-100h]
  __m128i v69; // [rsp+D0h] [rbp-F8h] BYREF
  __m128i v70; // [rsp+E0h] [rbp-E8h] BYREF
  __int64 v71; // [rsp+F0h] [rbp-D8h]
  _BYTE v72[32]; // [rsp+F8h] [rbp-D0h] BYREF
  char v73; // [rsp+118h] [rbp-B0h]
  int v74; // [rsp+120h] [rbp-A8h] BYREF
  __int64 v75; // [rsp+128h] [rbp-A0h]
  __int16 v76; // [rsp+130h] [rbp-98h]
  __m128i v77; // [rsp+138h] [rbp-90h]
  void *s1[2]; // [rsp+148h] [rbp-80h]
  __int64 v79; // [rsp+158h] [rbp-70h]
  __int64 v80; // [rsp+160h] [rbp-68h] BYREF
  unsigned int v81; // [rsp+168h] [rbp-60h]
  __int64 v82; // [rsp+170h] [rbp-58h] BYREF
  unsigned int v83; // [rsp+178h] [rbp-50h]
  char v84; // [rsp+180h] [rbp-48h]

  v5 = *(_WORD *)a3;
  v6 = *(_BYTE *)(a3 + 80) == 0;
  v67 = a2;
  v68 = v5;
  v7 = *(_QWORD *)(a3 + 40);
  v69 = _mm_loadu_si128((const __m128i *)(a3 + 8));
  v70 = _mm_loadu_si128((const __m128i *)(a3 + 24));
  v71 = v7;
  v73 = 0;
  if ( !v6 )
  {
    sub_20150B0((__int64)v72, a3 + 48);
    v73 = 1;
  }
  v8 = sub_2053EA0((__int64)&v67);
  v9 = _mm_load_si128(&v69);
  v84 = 0;
  v10 = _mm_load_si128(&v70);
  v74 = v8;
  v77 = v9;
  *(__m128i *)s1 = v10;
  v75 = v67;
  v76 = v68;
  v79 = v71;
  if ( v73 )
  {
    sub_20150B0((__int64)&v80, (__int64)v72);
    v11 = *(unsigned int *)(a1 + 16);
    v12 = *(_QWORD *)a1;
    v84 = 1;
    if ( (_DWORD)v11 )
      goto LABEL_5;
LABEL_12:
    sub_2059C50(&v63, (_QWORD *)(v12 + 8 * v11), (_QWORD *)(v12 + 8 * v11), a1, 1);
    v21 = (__int64 *)v63.m128_u64[0];
    goto LABEL_13;
  }
  v11 = *(unsigned int *)(a1 + 16);
  v12 = *(_QWORD *)a1;
  if ( !(_DWORD)v11 )
    goto LABEL_12;
LABEL_5:
  v13 = v11 - 1;
  v14 = 1;
  for ( i = (v11 - 1) & v74; ; i = v13 & v20 )
  {
    v16 = (__int64 *)(v12 + 8LL * i);
    v17 = *v16;
    v18 = *v16;
    if ( *v16 != -4096 && v17 != -8192 )
      break;
LABEL_37:
    if ( v18 == -4096 )
    {
      v12 = *(_QWORD *)a1;
      v11 = *(unsigned int *)(a1 + 16);
      goto LABEL_12;
    }
LABEL_10:
    v20 = v14 + i;
    ++v14;
  }
  if ( v75 != *(_QWORD *)(v17 + 8) )
    goto LABEL_10;
  v19 = *(_WORD *)(v17 + 2);
  if ( (unsigned __int8)v76 != v19 )
    goto LABEL_10;
  if ( HIBYTE(v76) != *(_BYTE *)(v17 + 1) >> 1 )
    goto LABEL_10;
  v24 = *(_DWORD *)(v17 + 4) & 0x7FFFFFF;
  if ( v77.m128i_i64[1] != v24 )
    goto LABEL_10;
  if ( v24 )
  {
    v25 = (_QWORD *)(v17 - 32LL * v24);
    if ( *v25 != *(_QWORD *)v77.m128i_i64[0] )
      goto LABEL_10;
    v44 = 8LL * (v24 - 1);
    v26 = 0;
    while ( v26 != v44 )
    {
      v27 = *(_QWORD *)(v77.m128i_i64[0] + v26 + 8);
      v26 += 8LL;
      if ( v27 != v25[v26 / 2] )
        goto LABEL_10;
    }
    v16 = (__int64 *)(v12 + 8LL * i);
    v19 = *(_WORD *)(v17 + 2);
  }
  if ( v19 == 63 )
  {
    v36 = *(unsigned int *)(v17 + 32);
    if ( (void *)v36 != s1[1] )
      goto LABEL_10;
    v37 = 4 * v36;
    if ( v37 )
    {
      v58 = v16;
      v54 = v14;
      v50 = i;
      v46 = v13;
      v41 = v12;
      v38 = memcmp(s1[0], *(const void **)(v17 + 24), v37);
      v12 = v41;
      v13 = v46;
      i = v50;
      v14 = v54;
      v16 = v58;
      if ( v38 )
        goto LABEL_10;
    }
    v28 = v79;
LABEL_51:
    if ( v28 )
      goto LABEL_10;
    v65 = 0;
LABEL_35:
    if ( !v84 )
      goto LABEL_46;
LABEL_36:
    v18 = v17;
    goto LABEL_37;
  }
  if ( s1[1] )
    goto LABEL_10;
  v28 = v79;
  if ( v19 != 34 )
    goto LABEL_51;
  if ( v79 != *(_QWORD *)(v17 + 24) )
    goto LABEL_10;
  v65 = 0;
  if ( !*(_BYTE *)(v17 + 72) )
    goto LABEL_35;
  v59 = v16;
  v55 = v14;
  v51 = i;
  v47 = v13;
  v42 = v12;
  sub_20150B0((__int64)&v63, v17 + 40);
  v34 = v42;
  v33 = v47;
  v65 = 1;
  v32 = v51;
  v31 = v55;
  v30 = v59;
  if ( !v84 )
  {
    sub_200ED00((__int64)&v63);
    v12 = v42;
    v13 = v47;
    i = v51;
    v17 = *v59;
    v14 = v55;
    goto LABEL_36;
  }
  if ( v81 != v63.m128_i32[2]
    || (v81 <= 0x40
      ? (v29 = v80 == v63.m128_u64[0])
      : (v29 = sub_2205D70(&v80, &v63), v30 = v59, v31 = v55, v32 = v51, v33 = v47, v34 = v42),
        !v29
     || (v83 <= 0x40
       ? (v35 = v82 == v64)
       : (v57 = v30,
          v53 = v31,
          v49 = v32,
          v45 = v33,
          v40 = v34,
          v35 = sub_2205D70(&v82, &v64),
          v30 = v57,
          v31 = v53,
          v32 = v49,
          v33 = v45,
          v34 = v40),
         !v35)) )
  {
    v60 = v30;
    v56 = v31;
    v52 = v32;
    v48 = v33;
    v43 = v34;
    sub_200ED00((__int64)&v63);
    v12 = v43;
    v13 = v48;
    i = v52;
    v18 = *v60;
    v14 = v56;
    goto LABEL_37;
  }
  v39 = v30;
  sub_200ED00((__int64)&v63);
  v16 = v39;
LABEL_46:
  sub_2059C50(&v63, v16, (_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 16)), a1, 1);
  v21 = (__int64 *)v63.m128_u64[0];
LABEL_13:
  sub_2059C50(
    &v63,
    (_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 16)),
    (_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 16)),
    a1,
    1);
  if ( (__int64 *)v63.m128_u64[0] == v21 )
  {
    sub_2051AE0((__int64)&v63, a3);
    v22 = sub_20521E0((unsigned __int8 *)&v63, a2);
    v61 = v22;
    sub_205DCD0(&v62, a1, &v61, (__int64)&v74);
    if ( v66[32] )
      sub_200ED00((__int64)v66);
  }
  else
  {
    v22 = *v21;
  }
  if ( v84 )
  {
    sub_200ED00((__int64)&v80);
    if ( !v73 )
      return v22;
LABEL_19:
    sub_200ED00((__int64)v72);
    return v22;
  }
  if ( v73 )
    goto LABEL_19;
  return v22;
}
