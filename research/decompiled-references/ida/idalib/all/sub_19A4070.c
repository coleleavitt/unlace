unsigned __int64 __fastcall sub_19A4070(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  __int16 v11; // ax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  int v21; // ecx
  __int64 v22; // r12
  unsigned int v23; // r15d
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r13
  unsigned __int64 v30; // rdi
  int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // r13
  __int64 v34; // rcx
  unsigned __int64 v35; // r12
  __int64 i; // r14
  __int64 v37; // rax
  _QWORD *v38; // rsi
  __int64 v39; // r14
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int v43; // eax
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  unsigned int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  unsigned __int8 *v54; // rsi
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // rdx
  unsigned int *v58; // rdx
  unsigned int v59; // ecx
  __int64 v60; // rdx
  unsigned __int64 v61; // [rsp+8h] [rbp-70h]
  unsigned __int64 v62; // [rsp+10h] [rbp-68h]
  __int64 *v63; // [rsp+10h] [rbp-68h]
  __int64 v64; // [rsp+18h] [rbp-60h]
  __int64 v65; // [rsp+18h] [rbp-60h]
  unsigned __int8 *v66; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v67; // [rsp+28h] [rbp-50h]

  v9 = sub_1907C70(a1, a2, (__m128i)a7, a8, a3, a4, a5, a6);
  if ( v9 == 1 )
    return 1;
  v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
  v61 = v9 & 0xFFFFFFFFFFFFFFFELL;
  v11 = *(_WORD *)(v9 & 0xFFFFFFFFFFFFFFFELL) & 0x1FF;
  if ( v11 == 20 )
  {
    v12 = sub_19A4070(a1, *(_QWORD *)(v10 + 24));
    if ( v12 != 1 )
    {
      v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
      if ( v13 == *(_QWORD *)(v10 + 24) )
        return v10;
      return sub_190C990(a1, *(_DWORD *)(v10 + 16), *(_DWORD *)(v10 + 20), v13, *(double *)a7.m128_u64, a8);
    }
    return 1;
  }
  if ( ((v11 + 394) & 0x1FFu) > 1 )
  {
    v17 = *(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640;
    if ( v11 == 116 )
    {
      v62 = *(_QWORD *)(v10 + 24);
      if ( ((*(_WORD *)v62 + 423) & 0x1FFu) <= 4 )
      {
        *(_DWORD *)(v17 + 592) = 4;
        sub_18C38A0(a1, v62);
        if ( v62 == 1 )
          return 1;
        v10 = v62 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_12;
      }
    }
LABEL_11:
    *(_DWORD *)(v17 + 592) = 4;
    sub_18C38A0(a1, v10);
    v62 = 0;
    v61 = 0;
LABEL_12:
    if ( (**(_BYTE **)(a1 + 232) & 0x20) != 0 )
      return v10;
    v18 = *(unsigned int *)(a1 + 4624);
    v19 = *(_QWORD *)(a1 + 4616);
    v20 = v19 + 640 * v18 - 640;
    v21 = *(_DWORD *)(v20 + 136);
    if ( v21 )
    {
      v22 = 0;
      v64 = 8LL * (unsigned int)(v21 - 1) + 8;
      do
      {
        v20 = v19 + 640 * v18 - 640;
        v25 = *(_QWORD *)(*(_QWORD *)(v20 + 128) + v22);
        if ( v25 != v62 )
        {
          v26 = sub_BFBC70(*(_QWORD *)(v25 + 32));
          v29 = v26;
          if ( v26 && (*(_BYTE *)(v26 + 28) & 0x7Fu) - 34 >= 6 )
            v29 = 0;
          if ( (*(_BYTE *)(v25 + 3) & 1) != 0 )
          {
            v23 = *(_DWORD *)(v25 + 24);
          }
          else if ( *(char *)(v25 + 2) >= 0
                 || (v23 = sub_EEB7E0(
                             *(_QWORD *)(v25 + 8 * (((*(_BYTE *)(v25 + 2) & 8) != 0) + 1LL) + 32),
                             v19,
                             *(double *)a7.m128_u64)) == 0 )
          {
            v23 = sub_EEB7E0(*(_QWORD *)(v25 + 32), v19, *(double *)a7.m128_u64);
            if ( !v23 )
            {
              v27 = *(unsigned int *)(v25 + 16);
              if ( (_DWORD)v27 )
              {
                v30 = *(_QWORD *)(v25 + 8 * (((*(_BYTE *)(v25 + 2) & 8) != 0) + 1LL) + 32);
                if ( v30 )
                  v23 = sub_EEB7E0(v30, v19, *(double *)a7.m128_u64);
              }
            }
          }
          v24 = sub_BFB6C0(v25, *(_QWORD *)(a1 + 248), v27, v28);
          if ( (unsigned __int8)sub_18C4140(a1, v24, v23, v25, v29) )
            return 1;
          v18 = *(unsigned int *)(a1 + 4624);
          v19 = *(_QWORD *)(a1 + 4616);
          v20 = v19 + 640 * v18 - 640;
        }
        v22 += 8;
      }
      while ( v64 != v22 );
    }
    v31 = *(_DWORD *)(v20 + 216);
    if ( !v31 )
      return v10;
    v32 = (unsigned int)(v31 - 1);
    v33 = 0;
    v34 = 8 * v32;
    v65 = 8 * v32;
LABEL_36:
    v35 = *(_QWORD *)(*(_QWORD *)(v19 + 640 * v18 - 432) + v33);
    if ( v35 == v61 )
      goto LABEL_47;
    v63 = *(__int64 **)(v35 + 16);
    for ( i = *(_QWORD *)(*(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          ;
          i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
    {
      if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) > 4u )
      {
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u
          || (v37 = sub_F63050(i, v19, v32, v34)) == 0 )
        {
          v38 = sub_F63270(i, v19, v32, v34, v15, v16);
          v39 = sub_1A69EF0(a1, v38);
          *v63 = v39;
          v43 = sub_C00A40(v35, (__int64)v38, v40, v41, v42);
          sub_1910D40(a1, v43, v39, 1, v44, v45, a7, a8);
          sub_168B9B0((__int64)&v66, a1 + 8, 2950);
          v46 = *(_QWORD *)(v35 + 8);
          sub_AE9DF0(&v66, v46, 8u);
          v50 = sub_C00A40(v35, v46, v47, v48, v49);
          sub_16602B0((_QWORD *)a1, v50, v39, (__int64)&v66, 0);
          v54 = v66;
          if ( v66 )
          {
            if ( v67 )
              sub_1580C40(v67, (unsigned __int64)v66);
          }
          LODWORD(v66) = sub_C00A40(v35, (__int64)v54, v51, v52, v53);
          if ( !(unsigned __int8)sub_18F5260(
                                   a1,
                                   v39,
                                   (int *)&v66,
                                   1u,
                                   0,
                                   0,
                                   (__m128i)a7,
                                   *(double *)a8.m128_u64,
                                   0,
                                   0,
                                   0) )
          {
            *(_WORD *)(a1 + 4512) = 257;
LABEL_47:
            if ( v33 != v65 )
            {
              v19 = *(_QWORD *)(a1 + 4616);
              v33 += 8;
              v18 = *(unsigned int *)(a1 + 4624);
              goto LABEL_36;
            }
            return v10;
          }
          return 1;
        }
        i = v37;
      }
    }
  }
  if ( ((*(_WORD *)(v10 + 2) >> 3) & 0x3F) != 0x20 )
  {
    v17 = *(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640;
    goto LABEL_11;
  }
  v55 = sub_19A4070(a1, *(_QWORD *)(v10 + 24));
  if ( v55 == 1 )
    return 1;
  v56 = v55 & 0xFFFFFFFFFFFFFFFELL;
  if ( v56 == *(_QWORD *)(v10 + 24) )
    return v10;
  if ( (*(_BYTE *)(v10 + 3) & 2) != 0 )
  {
    v57 = 48;
    if ( (*(_WORD *)v10 & 0x1FF) != 0x77 )
      v57 = 32;
    v58 = (unsigned int *)(v10 + v57);
    v59 = *v58;
    v60 = v58[1];
  }
  else
  {
    v60 = 0;
    v59 = 0;
  }
  return sub_C09F10(
           *(_QWORD **)(a1 + 248),
           *(_QWORD *)(v10 + 16),
           v56,
           32,
           *(_QWORD *)(v10 + 8),
           (*(_BYTE *)(v10 + 1) >> 1) & 3,
           (*(_BYTE *)(v10 + 1) >> 3) & 7,
           *(_DWORD *)(v10 + 4),
           (v60 << 32) | v59);
}
