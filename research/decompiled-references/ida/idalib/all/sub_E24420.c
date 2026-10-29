__int64 __fastcall sub_E24420(__int64 a1, const __m128i *a2, __int64 a3)
{
  char v5; // al
  const __m128i *v6; // rdx
  char v7; // al
  __m128i v8; // xmm5
  __m128i v9; // xmm6
  __int32 v10; // eax
  __m128i v11; // xmm7
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  __m128i v14; // xmm3
  __int64 v15; // rax
  __m128i v16; // xmm4
  __int64 v17; // rdi
  __int64 v18; // rax
  __m128i v19; // xmm5
  __int64 v20; // rdi
  __int32 v21; // r8d
  __m128i v22; // xmm1
  __m128i v23; // xmm2
  __int32 v24; // eax
  __int64 v25; // rax
  __m128i v26; // xmm3
  __int64 v27; // rdi
  __int64 v28; // rax
  __m128i si128; // xmm4
  __int64 v30; // rdi
  __int32 v31; // eax
  const __m128i *v32; // [rsp+0h] [rbp-198h]
  const __m128i *v33; // [rsp+0h] [rbp-198h]
  __int64 v35; // [rsp+10h] [rbp-188h] BYREF
  __int128 v36; // [rsp+18h] [rbp-180h]
  int v37; // [rsp+28h] [rbp-170h]
  __m128i v38; // [rsp+30h] [rbp-168h] BYREF
  __int64 v39; // [rsp+40h] [rbp-158h] BYREF
  __int128 v40; // [rsp+48h] [rbp-150h]
  __int32 v41; // [rsp+58h] [rbp-140h]
  __m128i v42; // [rsp+60h] [rbp-138h] BYREF
  __int64 v43; // [rsp+70h] [rbp-128h] BYREF
  __int128 v44; // [rsp+78h] [rbp-120h]
  int v45; // [rsp+88h] [rbp-110h]
  __m128i v46; // [rsp+90h] [rbp-108h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-F8h] BYREF
  __int128 v48; // [rsp+A8h] [rbp-F0h]
  __int32 v49; // [rsp+B8h] [rbp-E0h]
  __m128i v50; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v51; // [rsp+D0h] [rbp-C8h] BYREF
  __int128 v52; // [rsp+D8h] [rbp-C0h]
  int v53; // [rsp+E8h] [rbp-B0h]
  __int64 v54; // [rsp+F0h] [rbp-A8h]
  __int32 v55; // [rsp+F8h] [rbp-A0h]
  __int64 v56; // [rsp+100h] [rbp-98h] BYREF
  __int128 v57; // [rsp+108h] [rbp-90h]
  int v58; // [rsp+118h] [rbp-80h]
  __m128i v59; // [rsp+120h] [rbp-78h] BYREF
  __int64 v60; // [rsp+130h] [rbp-68h] BYREF
  __int128 v61; // [rsp+138h] [rbp-60h]
  __int32 v62; // [rsp+148h] [rbp-50h]
  __m128i v63[4]; // [rsp+150h] [rbp-48h] BYREF

  if ( a2[1].m128i_i32[2]
    || *(_DWORD *)(a3 + 24)
    || a2[2].m128i_i64[0] != *(_QWORD *)(a3 + 32)
    || (v5 = sub_CFE580((__int64)a2), v6 = (const __m128i *)a3, v5)
    && (v7 = sub_CFE580(a3), v6 = (const __m128i *)a3, v7) )
  {
    *(_BYTE *)(a1 + 96) = 0;
    return a1;
  }
  if ( v6[2].m128i_i32[2] == a2[2].m128i_i32[2] && v6->m128i_i64[0] == a2->m128i_i64[0] )
  {
    v22 = _mm_loadu_si128(a2 + 2);
    v33 = v6;
    v56 = a2->m128i_i64[0];
    v57 = 0;
    v58 = 0;
    v59 = v22;
    sub_E22AB0((__int64)&v56);
    v61 = 0;
    v23 = _mm_loadu_si128(v33 + 2);
    v60 = v33->m128i_i64[0];
    v24 = v33[1].m128i_i32[2];
    v63[0] = v23;
    v62 = v24;
    if ( !v24 )
      sub_E22AB0((__int64)&v60);
    v25 = v56;
    v26 = _mm_load_si128(&v59);
    *(_OWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = v25;
    LODWORD(v25) = v58;
    *(__m128i *)(a1 + 32) = v26;
    *(_DWORD *)(a1 + 24) = v25;
    if ( !(_DWORD)v25 )
    {
      v27 = *(_QWORD *)(a1 + 32);
      if ( v27 )
        sub_E1E440(v27, (double *)&v56, a1);
    }
    v28 = v60;
    si128 = _mm_load_si128(v63);
    *(_OWORD *)(a1 + 56) = 0;
    *(_QWORD *)(a1 + 48) = v28;
    LODWORD(v28) = v62;
    *(__m128i *)(a1 + 80) = si128;
    *(_DWORD *)(a1 + 72) = v28;
    if ( (_DWORD)v28 )
    {
      *(_BYTE *)(a1 + 96) = 1;
      goto LABEL_90;
    }
    v30 = *(_QWORD *)(a1 + 80);
    if ( v30 )
    {
      sub_E1E440(v30, (double *)&v60, a1 + 48);
      v31 = v62;
      *(_BYTE *)(a1 + 96) = 1;
      if ( v31 )
        goto LABEL_90;
    }
    else
    {
      *(_BYTE *)(a1 + 96) = 1;
    }
    sub_E22AD0(&v60);
LABEL_90:
    if ( !v58 )
      sub_E22AD0(&v56);
    return a1;
  }
  v8 = _mm_loadu_si128(a2 + 2);
  v32 = v6;
  v35 = a2->m128i_i64[0];
  v36 = 0;
  v37 = 0;
  v38 = v8;
  sub_E22AB0((__int64)&v35);
  v40 = 0;
  v9 = _mm_loadu_si128(v32 + 2);
  v39 = v32->m128i_i64[0];
  v10 = v32[1].m128i_i32[2];
  v42 = v9;
  v41 = v10;
  if ( !v10 )
    sub_E22AB0((__int64)&v39);
  v11 = _mm_load_si128(&v38);
  v44 = 0;
  v43 = v35;
  v46 = v11;
  v45 = v37;
  if ( !v37 )
    sub_E22AB0((__int64)&v43);
  v12 = _mm_load_si128(&v42);
  v48 = 0;
  v47 = v39;
  v50 = v12;
  v49 = v41;
  if ( !v41 )
    sub_E22AB0((__int64)&v47);
  while ( 1 )
  {
    if ( v38.m128i_i32[2] <= (unsigned __int32)v42.m128i_i32[2] )
    {
      sub_E23300((__int64)&v47, (const __m128i *)&v39);
      if ( v41
        || (!*(_BYTE *)(sub_CFDF60((__int64)&v39) + 60) || v42.m128i_u32[2] == v39)
        && (v42.m128i_i32[2] <= 0xFu || *(char *)(v42.m128i_i64[0] + v42.m128i_u32[2] + 28) >= 0) )
      {
        sub_D8B030((__int64)&v51, (__int64)&v39);
      }
      else
      {
        sub_CFE160((__int64)&v56, (__int64)&v39);
        if ( v59.m128i_i32[2] == -1 )
          v51 = 0;
        else
          v51 = v59.m128i_u32[2];
        v54 = v59.m128i_i64[0];
        v52 = 0;
        v53 = 0;
        v55 = v59.m128i_i32[2];
        if ( v59.m128i_i64[0] )
          sub_E1E330(v59.m128i_i64[0], (__int64)&v51);
        if ( !v58 )
          sub_E22AD0(&v56);
      }
      sub_E23300((__int64)&v39, (const __m128i *)&v51);
      if ( !v53 )
LABEL_23:
        sub_E22AD0(&v51);
    }
    else
    {
      sub_E23300((__int64)&v43, (const __m128i *)&v35);
      if ( v37
        || (!*(_BYTE *)(sub_CFDF60((__int64)&v35) + 60) || v38.m128i_u32[2] == v35)
        && (v38.m128i_i32[2] <= 0xFu || *(char *)(v38.m128i_i64[0] + v38.m128i_u32[2] + 28) >= 0) )
      {
        sub_D8B030((__int64)&v51, (__int64)&v35);
      }
      else
      {
        sub_CFE160((__int64)&v56, (__int64)&v35);
        if ( v59.m128i_i32[2] == -1 )
          v51 = 0;
        else
          v51 = v59.m128i_u32[2];
        v54 = v59.m128i_i64[0];
        v52 = 0;
        v53 = 0;
        v55 = v59.m128i_i32[2];
        if ( v59.m128i_i64[0] )
          sub_E1E330(v59.m128i_i64[0], (__int64)&v51);
        if ( !v58 )
          sub_E22AD0(&v56);
      }
      sub_E23300((__int64)&v35, (const __m128i *)&v51);
      if ( !v53 )
        goto LABEL_23;
    }
    if ( v41 != v37 )
      goto LABEL_28;
    if ( v37 == 1 )
      break;
    if ( v37 != 2 )
    {
      if ( v42.m128i_i64[0] != v38.m128i_i64[0] || v42.m128i_i32[2] != v38.m128i_i32[2] )
        goto LABEL_28;
      goto LABEL_60;
    }
    if ( v42.m128i_i64[0] == v38.m128i_i64[0] )
      goto LABEL_60;
LABEL_28:
    if ( (unsigned __int8)sub_CFE580((__int64)&v35) && (unsigned __int8)sub_CFE580((__int64)&v39) )
    {
      *(_BYTE *)(a1 + 96) = 0;
      goto LABEL_31;
    }
  }
  if ( *(_OWORD *)&v42 != *(_OWORD *)&v38 )
    goto LABEL_28;
LABEL_60:
  if ( v39 != v35 )
    goto LABEL_28;
  v13 = _mm_load_si128(&v46);
  v57 = 0;
  v56 = v43;
  v59 = v13;
  v58 = v45;
  if ( !v45 )
    sub_E22AB0((__int64)&v56);
  v14 = _mm_load_si128(&v50);
  v61 = 0;
  v60 = v47;
  v63[0] = v14;
  v62 = v49;
  if ( !v49 )
    sub_E22AB0((__int64)&v60);
  v15 = v56;
  v16 = _mm_load_si128(&v59);
  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = v15;
  LODWORD(v15) = v58;
  *(__m128i *)(a1 + 32) = v16;
  *(_DWORD *)(a1 + 24) = v15;
  if ( !(_DWORD)v15 )
  {
    v17 = *(_QWORD *)(a1 + 32);
    if ( v17 )
      sub_E1E440(v17, (double *)&v56, a1);
  }
  v18 = v60;
  v19 = _mm_load_si128(v63);
  *(_OWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 48) = v18;
  LODWORD(v18) = v62;
  *(__m128i *)(a1 + 80) = v19;
  *(_DWORD *)(a1 + 72) = v18;
  if ( (_DWORD)v18 )
  {
    *(_BYTE *)(a1 + 96) = 1;
    goto LABEL_70;
  }
  v20 = *(_QWORD *)(a1 + 80);
  if ( v20 )
  {
    sub_E1E440(v20, (double *)&v60, a1 + 48);
    v21 = v62;
    *(_BYTE *)(a1 + 96) = 1;
    if ( !v21 )
      goto LABEL_80;
  }
  else
  {
    *(_BYTE *)(a1 + 96) = 1;
LABEL_80:
    sub_E22AD0(&v60);
  }
LABEL_70:
  if ( !v58 )
    sub_E22AD0(&v56);
LABEL_31:
  if ( !v49 )
    sub_E22AD0(&v47);
  if ( !v45 )
    sub_E22AD0(&v43);
  if ( !v41 )
    sub_E22AD0(&v39);
  if ( !v37 )
    sub_E22AD0(&v35);
  return a1;
}
