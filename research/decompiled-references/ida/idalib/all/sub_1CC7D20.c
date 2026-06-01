__int64 __fastcall sub_1CC7D20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        __m128i *a5,
        __m128i *a6,
        __m128i a7,
        __m128 a8)
{
  __int64 v11; // r14
  __int16 v12; // ax
  unsigned int v13; // eax
  __int64 v14; // r15
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rcx
  _BYTE *v27; // rbp
  unsigned __int8 v28; // cl
  __int64 v30; // r15
  unsigned int v31; // eax
  __m128i v32; // xmm0
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rax
  __int64 v41; // r13
  unsigned int v42; // eax
  unsigned int v43; // eax
  __m128i v44; // xmm3
  __int64 v45; // rax
  unsigned __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rax
  __m128i v49; // xmm6
  __int64 v50; // rax
  unsigned __int64 v51; // rbx
  __int64 v52; // rax
  unsigned __int8 v54; // [rsp+8h] [rbp-120h]
  __m128i v55; // [rsp+10h] [rbp-118h] BYREF
  __int64 v56; // [rsp+20h] [rbp-108h]
  __int64 v57[2]; // [rsp+38h] [rbp-F0h] BYREF
  char v58; // [rsp+4Fh] [rbp-D9h] BYREF
  __int64 v59; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v60; // [rsp+58h] [rbp-D0h] BYREF
  __m128i v61; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+70h] [rbp-B8h]

  v11 = *a4;
  v57[0] = a3;
  v12 = *(_WORD *)v11 & 0x1FF;
  if ( v12 == 20 )
  {
    v13 = sub_EEB7E0(v11, a2, *(double *)a7.m128i_i64);
    sub_168BB30((__int64)&v61, (__int64 *)(a1 + 8), v13, 4u, 0);
    v60 = sub_EEC8C0(v11, a1 + 8, *(double *)a7.m128i_i64);
    sub_1587DB0((__int64)&v61, &v60);
    sub_15F7200(&v61);
    do
    {
      v11 = *(_QWORD *)(v11 + 24);
      v12 = *(_WORD *)v11 & 0x1FF;
    }
    while ( v12 == 20 );
  }
  for ( ; v12 == 8; v12 = *(_WORD *)v11 & 0x1FF )
    v11 = sub_BFB840(*(_QWORD *)(v11 + 16));
  if ( v12 != 4 )
  {
    if ( v12 == 71 )
    {
      v30 = *(_QWORD *)(v11 + 16);
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 33
        && (*(_BYTE *)(v30 + 28) & 0x7F) == 0x2F )
      {
        if ( ((*(_DWORD *)v11 >> 14) & 0xC) == 0 )
        {
          sub_F1D290(v61.m128i_i32, *(_QWORD *)(v11 + 16), v57[0], 0);
          v49 = _mm_load_si128(&v61);
          a5[1].m128i_i64[0] = v62;
          v50 = v57[0];
          *a5 = v49;
          v51 = *(_QWORD *)&byte_8[v50 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)&byte_8[v50 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v50) & 7;
          v52 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
          sub_F1D290(v61.m128i_i32, v52, v51, 0);
          v20 = 0;
          *a6 = _mm_load_si128(&v61);
          a6[1].m128i_i64[0] = v62;
          return v20;
        }
LABEL_21:
        a5->m128i_i64[1] = v11;
        a5->m128i_i64[0] = a5->m128i_i64[0] & 0xFFFFFFFE00000000LL | 8;
        sub_AB6BB0(&v55, *(_QWORD **)(a1 + 248), a5);
        v20 = 0;
        *a6 = _mm_loadu_si128(&v55);
        a6[1].m128i_i64[0] = v56;
        return v20;
      }
    }
    goto LABEL_8;
  }
  if ( *(_BYTE *)(v11 + 2) >> 3 != 4
    || (v14 = *(_QWORD *)(v11 + 16), (*(_WORD *)v14 & 0x1FF) != 0x47)
    || (*(_QWORD *)v14 & 0x80000LL) == 0
    || !*(_QWORD *)(v14 + 32) )
  {
LABEL_8:
    v14 = 0;
    v15 = 0;
    goto LABEL_9;
  }
  v15 = *(_QWORD *)(v14 + 16);
LABEL_9:
  v16 = sub_1CC7360((__int64 *)a1, a2, v57[0], *a4, v15, (__int64)a6, a7, a8);
  if ( v16 == 1 )
  {
    v31 = sub_C00A40(*a4, a2, v17, v18, v19);
    sub_168B9F0((__int64)&v61, (__int64 *)(a1 + 8), v31, 0x1A7Cu, 0);
    sub_15F7200(&v61);
    sub_F1D250((__int64)&v61, v57[0], 1, 0);
    v32 = _mm_load_si128(&v61);
    a5[1].m128i_i64[0] = v62;
    v33 = v57[0];
    *a5 = v32;
    sub_F1D250(
      (__int64)&v61,
      *(_QWORD *)&byte_8[v33 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
    | ((unsigned __int8)*(_QWORD *)&byte_8[v33 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v33) & 7,
      1,
      0);
    v20 = 0;
    *a6 = _mm_load_si128(&v61);
    a6[1].m128i_i64[0] = v62;
    return v20;
  }
  v20 = 1;
  if ( v16 != 2 )
  {
    v21 = *(_QWORD *)(v57[0] & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v21 + 16) - 43 <= 1
      || (v37 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
          (unsigned int)v37 <= 1)
      && (v21 = sub_F63050(*(_QWORD *)(v57[0] & 0xFFFFFFFFFFFFFFF0LL), a2, v37, v18)) != 0 )
    {
      while ( 1 )
      {
        v22 = *(_QWORD *)(v21 + 32);
        if ( (*(_BYTE *)(v21 + 18) & 0x10) == 0 )
          break;
        while ( 1 )
        {
          v21 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
          v23 = (unsigned int)*(unsigned __int8 *)(v21 + 16) - 43;
          if ( (unsigned int)v23 <= 1 )
            break;
          v24 = sub_F63050(v21, a2, v23, v18);
          v22 = *(_QWORD *)(v24 + 32);
          if ( (*(_BYTE *)(v24 + 18) & 0x10) == 0 )
            goto LABEL_15;
        }
      }
    }
    else
    {
      v22 = v57[0];
    }
LABEL_15:
    v25 = *(_QWORD *)(*a4 + 8);
    if ( sub_1BD41F0(a1, v25, v22, 0, &v58) )
    {
      v25 = *a4;
      *a4 = sub_160A600(
              a1,
              *a4,
              v57[0],
              5u,
              (*(_BYTE *)(*a4 + 1) >> 1) & 3,
              0,
              *(double *)a7.m128i_i64,
              *(double *)a8.m128_u64,
              0)
          & 0xFFFFFFFFFFFFFFFELL;
    }
    else
    {
      v34 = *(_QWORD *)(v57[0] & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v34 + 16) - 43 <= 1
        || (v38 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                - 43,
            (unsigned int)v38 <= 1)
        && (v34 = sub_F63050(*(_QWORD *)(v57[0] & 0xFFFFFFFFFFFFFFF0LL), v25, v38, v26)) != 0 )
      {
        while ( 1 )
        {
          v35 = *(_QWORD *)(v34 + 32);
          if ( (*(_BYTE *)(v34 + 18) & 0x10) == 0 )
            break;
          v34 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF0LL);
          v36 = (unsigned int)*(unsigned __int8 *)(v34 + 16) - 43;
          if ( (unsigned int)v36 > 1 )
            v34 = sub_F63050(v34, v25, v36, v26);
        }
      }
      else
      {
        v35 = v57[0];
      }
      if ( *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(*a4 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)&byte_8[v35 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
      {
        v39 = sub_EEB7E0(*a4, v25, *(double *)a7.m128i_i64);
        sub_168B9F0((__int64)&v61, (__int64 *)(a1 + 8), v39, 0x13EDu, 0);
        v59 = *(_QWORD *)(*a4 + 8);
        v40 = sub_162B6D0((__int64)&v61, &v59);
        v41 = sub_1605D30(v40, v57);
        v60 = sub_EEC8C0(*a4, (__int64)v57, *(double *)a7.m128i_i64);
        sub_1587DB0(v41, &v60);
        sub_15F7200(&v61);
        sub_1CC6E20(a1, a2);
        return 1;
      }
    }
    if ( !v14 )
    {
      v43 = sub_EEB7E0(v11, v25, *(double *)a7.m128i_i64);
      sub_168B9F0((__int64)&v61, (__int64 *)(a1 + 8), v43, 0x13F2u, 0);
      v60 = sub_EEC8C0(v11, a1 + 8, *(double *)a7.m128i_i64);
      v54 = *(_BYTE *)(sub_1587DB0((__int64)&v61, &v60) + 120);
      sub_15F7200(&v61);
      return v54;
    }
    v27 = *(_BYTE **)(v14 + 16);
    v28 = v27[28] & 0x7F;
    if ( v28 > 0x33u || ((0xE007900000000uLL >> v28) & 1) == 0 )
    {
      v42 = sub_EEB7E0(v11, v25, *(double *)a7.m128i_i64);
      sub_168B9F0((__int64)&v61, (__int64 *)(a1 + 8), v42, 0x13F2u, 0);
      v60 = sub_EEC8C0(v11, a1 + 8, *(double *)a7.m128i_i64);
      sub_1587DB0((__int64)&v61, &v60);
      sub_15F7200(&v61);
      sub_168B9F0((__int64)&v61, (__int64 *)(a1 + 8), *(_DWORD *)(*(_QWORD *)(v14 + 16) + 24LL), 0x18EEu, 0);
      sub_15F7200(&v61);
      return 1;
    }
    if ( ((*(_DWORD *)v11 >> 14) & 0xC) == 0 )
    {
      sub_F1D290(v61.m128i_i32, (__int64)v27, v57[0], 0);
      v44 = _mm_load_si128(&v61);
      a5[1].m128i_i64[0] = v62;
      v45 = v57[0];
      *a5 = v44;
      v46 = *(_QWORD *)&byte_8[v45 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v45 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v45) & 7;
      v47 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v27 + 32LL))(v27);
      sub_F1D290(v61.m128i_i32, v47, v46, 0);
      v48 = v62;
      v20 = 0;
      *a6 = _mm_load_si128(&v61);
      a6[1].m128i_i64[0] = v48;
      return v20;
    }
    goto LABEL_21;
  }
  return v20;
}
