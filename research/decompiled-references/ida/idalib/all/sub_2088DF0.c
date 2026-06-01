__int64 __fastcall sub_2088DF0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int32 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        unsigned int a11,
        int a12)
{
  __int64 v14; // rbx
  __m128 v15; // xmm0
  __int64 v16; // r15
  __int64 v18; // r9
  _QWORD *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rcx
  bool v24; // zf
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // r10
  int v28; // eax
  __int32 v29; // r10d
  unsigned int v30; // eax
  __int64 *v31; // rsi
  __int64 v32; // rdx
  int v33; // edi
  unsigned __int8 v34; // cl
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  _QWORD *v37; // rdx
  __int64 v38; // [rsp-10h] [rbp-F8h]
  __int64 *v39; // [rsp+0h] [rbp-E8h]
  __m128 v40; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v41; // [rsp+20h] [rbp-C8h] BYREF
  int v42; // [rsp+28h] [rbp-C0h]
  __int32 v43; // [rsp+2Ch] [rbp-BCh]
  __int64 v44; // [rsp+30h] [rbp-B8h]
  int v45; // [rsp+38h] [rbp-B0h]
  int v46; // [rsp+3Ch] [rbp-ACh]
  __int64 v47; // [rsp+40h] [rbp-A8h]
  int v48; // [rsp+48h] [rbp-A0h]
  __int32 v49; // [rsp+4Ch] [rbp-9Ch]
  __int64 v50; // [rsp+50h] [rbp-98h] BYREF
  _QWORD *v51; // [rsp+58h] [rbp-90h] BYREF
  __m128 v52; // [rsp+60h] [rbp-88h] BYREF
  __m256i v53; // [rsp+70h] [rbp-78h] BYREF
  __int64 v54; // [rsp+90h] [rbp-58h] BYREF
  int v55; // [rsp+98h] [rbp-50h] BYREF
  int v56; // [rsp+9Ch] [rbp-4Ch] BYREF
  int v57; // [rsp+A0h] [rbp-48h]
  __int64 v58[8]; // [rsp+A8h] [rbp-40h] BYREF

  v14 = *a1;
  v40.m128_u64[0] = a3;
  v41 = a6;
  v42 = a12;
  if ( a11 )
  {
    v40 = _mm_loadh_ps((const double *)v40.m128_u64);
    goto LABEL_3;
  }
  v53.m256i_i32[6] = a5;
  v53.m256i_i64[2] = a4;
  v54 = v41;
  *(__m128 *)v53.m256i_i8 = _mm_loadh_ps((const double *)v40.m128_u64);
  v26 = *(_QWORD *)(v14 + 1048);
  v55 = a7;
  v40 = *(__m128 *)v53.m256i_i8;
  v56 = a8;
  v57 = a9;
  v27 = *(unsigned int *)(v14 + 1064);
  v58[0] = a10;
  if ( !(_DWORD)v27 )
  {
LABEL_33:
    sub_20824C0(&v52, (_QWORD *)(v26 + 8 * v27), (_QWORD *)(v26 + 8 * v27), v14 + 1048, 1);
    v36 = v52.m128_u64[0];
    goto LABEL_34;
  }
  v43 = v27;
  v28 = sub_20745B0(a2, &v53.m256i_i64[1], &v53.m256i_i64[2], &v53.m256i_i32[6], &v54, &v55, &v56, v58);
  v29 = v43 - 1;
  v30 = (v43 - 1) & v28;
  v43 = v53.m256i_i32[6];
  v44 = v54;
  v31 = (__int64 *)(v26 + 8LL * v30);
  v45 = v55;
  v32 = *v31;
  v46 = v56;
  v48 = v57;
  v47 = v58[0];
  v33 = 1;
  if ( v32 == -4096 )
  {
LABEL_32:
    v26 = *(_QWORD *)(v14 + 1048);
    v27 = *(unsigned int *)(v14 + 1064);
    goto LABEL_33;
  }
  v49 = v29;
  while ( 1 )
  {
    if ( v32 == -8192 )
      goto LABEL_20;
    v34 = *(_BYTE *)(v32 - 16);
    if ( (v34 & 2) != 0 )
    {
      v35 = *(_QWORD *)(v32 - 32);
      if ( v53.m256i_i64[0] != *(_QWORD *)v35 )
        goto LABEL_20;
    }
    else
    {
      v35 = v32 + -16 - 8LL * ((v34 >> 2) & 0xF);
      if ( v53.m256i_i64[0] != *(_QWORD *)v35 )
        goto LABEL_20;
    }
    if ( *(_OWORD *)&v53.m256i_u64[1] == *(_OWORD *)(v35 + 8)
      && v43 == *(_DWORD *)(v32 + 16)
      && v44 == *(_QWORD *)(v35 + 24)
      && v45 == *(unsigned __int16 *)(v32 + 20)
      && v46 == *(_DWORD *)(v32 + 24)
      && v48 == *(_DWORD *)(v32 + 4)
      && v47 == *(_QWORD *)(v35 + 32) )
    {
      break;
    }
LABEL_20:
    v30 = v49 & (v33 + v30);
    v31 = (__int64 *)(v26 + 8LL * v30);
    v32 = *v31;
    if ( *v31 == -4096 )
      goto LABEL_32;
    ++v33;
  }
  sub_20824C0(&v52, v31, (_QWORD *)(*(_QWORD *)(v14 + 1048) + 8LL * *(unsigned int *)(v14 + 1064)), v14 + 1048, 1);
  v36 = v52.m128_u64[0];
LABEL_34:
  v39 = (__int64 *)v36;
  v37 = (_QWORD *)(*(_QWORD *)(v14 + 1048) + 8LL * *(unsigned int *)(v14 + 1064));
  sub_20824C0(&v52, v37, v37, v14 + 1048, 1);
  if ( (__int64 *)v52.m128_u64[0] != v39 )
  {
    v16 = *v39;
    if ( *v39 )
      return v16;
  }
  if ( !(_BYTE)v42 )
    return 0;
  v14 = *a1;
LABEL_3:
  v15 = _mm_loadh_ps((const double *)&v41);
  *(__m128i *)v53.m256i_i8 = _mm_load_si128((const __m128i *)&v40);
  *(__m128 *)&v53.m256i_u64[2] = v15;
  v54 = a10;
  v16 = sub_20B4330(32, 5, a11);
  sub_20B2FD0(v16, (_DWORD)a1, 26, a11, (unsigned int)&v53, 5, 0, 0);
  *(_DWORD *)(v16 + 16) = a5;
  *(_WORD *)(v16 + 2) = 52;
  *(_DWORD *)(v16 + 4) = a9;
  v50 = v16;
  *(_WORD *)(v16 + 20) = a7;
  *(_DWORD *)(v16 + 24) = a8;
  if ( !a11 )
  {
    if ( (unsigned __int8)sub_2080E10((__int64 *)(v14 + 1048), &v50, &v51) )
    {
      sub_20824C0(&v52, v51, (_QWORD *)(*(_QWORD *)(v14 + 1048) + 8LL * *(unsigned int *)(v14 + 1064)), v14 + 1048, 1);
      return v50;
    }
    v19 = v51;
    v20 = (unsigned int)(*(_DWORD *)(v14 + 1056) + 1);
    v21 = *(unsigned int *)(v14 + 1064);
    v52.m128_u64[0] = (unsigned __int64)v51;
    v22 = (unsigned int)(4 * v20);
    if ( (unsigned int)v22 >= 3 * (int)v21 )
    {
      sub_2088C10(v14 + 1048, 2 * v21, v20, (unsigned int)(2 * v21), v22, v18);
    }
    else
    {
      v23 = (unsigned int)(v21 - *(_DWORD *)(v14 + 1060) - v20);
      if ( (unsigned int)v23 > (unsigned int)v21 >> 3 )
      {
LABEL_11:
        v24 = *v19 == -4096;
        *(_DWORD *)(v14 + 1056) = v20;
        if ( !v24 )
          --*(_DWORD *)(v14 + 1060);
        *v19 = v50;
        v25 = *(_QWORD *)(v14 + 1048);
        v51 = v19;
        sub_20824C0(&v52, v19, (_QWORD *)(v25 + 8 * v21), v14 + 1048, 1);
        return v50;
      }
      sub_2088C10(v14 + 1048, v21, v20, v23, v22, v18);
    }
    sub_2080E10((__int64 *)(v14 + 1048), &v50, &v52);
    v21 = *(unsigned int *)(v14 + 1064);
    LODWORD(v20) = *(_DWORD *)(v14 + 1056) + 1;
    v19 = (_QWORD *)v52.m128_u64[0];
    goto LABEL_11;
  }
  if ( a11 == 1 )
  {
    sub_20AC2A0(v16, a1, v38);
    return v50;
  }
  return v16;
}
