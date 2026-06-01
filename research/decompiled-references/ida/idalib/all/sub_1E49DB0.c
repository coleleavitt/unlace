unsigned __int64 __fastcall sub_1E49DB0(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v5; // r14
  char v6; // al
  unsigned __int64 v7; // rdx
  int v8; // eax
  __int64 *v9; // rbx
  __int64 v10; // rdx
  void **v11; // rcx
  void **v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  char *v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // r12
  void **v20; // r14
  unsigned __int64 v21; // r9
  __int64 v22; // rcx
  unsigned __int64 v23; // r12
  __int64 v24; // rax
  char v25; // al
  __int64 v27; // rsi
  void **v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 *v31; // rax
  unsigned __int64 *v32; // rax
  void *v33; // rdx
  unsigned __int64 v34; // rsi
  __int64 v35; // rbp
  __int64 v36; // rdx
  __int64 v37; // rbx
  __int64 *v38; // rax
  int v39; // r8d
  __int64 *v40; // rax
  unsigned int v41; // ebx
  __int64 *v42; // rax
  __int64 *v43; // rax
  _QWORD *v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rdi
  int v51; // edx
  int v52; // ebp
  __int64 v53; // r14
  void **v54; // rdx
  void **v55; // rax
  int v56; // ebx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rsi
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rdx
  int v62; // eax
  __int64 v63; // rbp
  __int32 v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rsi
  __int64 v67; // rcx
  __int64 v68; // rax
  int v69; // eax
  __m128 v70; // [rsp+0h] [rbp-198h] BYREF
  void **p_ptr; // [rsp+10h] [rbp-188h]
  void **v72; // [rsp+18h] [rbp-180h]
  void **v73; // [rsp+20h] [rbp-178h]
  __int64 v74; // [rsp+28h] [rbp-170h]
  unsigned __int64 v75; // [rsp+30h] [rbp-168h]
  __int64 v76; // [rsp+38h] [rbp-160h]
  char v77; // [rsp+4Ah] [rbp-14Eh] BYREF
  char v78; // [rsp+4Bh] [rbp-14Dh] BYREF
  int v79; // [rsp+4Ch] [rbp-14Ch] BYREF
  void *v80; // [rsp+50h] [rbp-148h] BYREF
  __int64 v81; // [rsp+58h] [rbp-140h]
  _BYTE v82[32]; // [rsp+60h] [rbp-138h] BYREF
  void *v83; // [rsp+80h] [rbp-118h] BYREF
  __int64 v84; // [rsp+88h] [rbp-110h]
  _BYTE v85[64]; // [rsp+90h] [rbp-108h] BYREF
  __m128i v86; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v87; // [rsp+E0h] [rbp-B8h] BYREF
  unsigned __int64 v88[7]; // [rsp+E8h] [rbp-B0h] BYREF
  void *ptr; // [rsp+120h] [rbp-78h] BYREF
  __int64 v90; // [rsp+128h] [rbp-70h]
  __int64 v91; // [rsp+130h] [rbp-68h] BYREF
  __int64 v92; // [rsp+138h] [rbp-60h]
  __int16 v93; // [rsp+140h] [rbp-58h]
  char v94; // [rsp+142h] [rbp-56h]
  __int64 v95; // [rsp+148h] [rbp-50h]

  v5 = a2;
  v74 = *(_QWORD *)(a2 + 56);
  v73 = &v83;
  v84 = 0x800000000LL;
  v6 = *(_BYTE *)(a2 + 80);
  v83 = v85;
  if ( (v6 & 4) == 0 )
  {
    if ( (v6 & 2) != 0 && sub_BBD670(v74) )
    {
      v48 = *(_QWORD *)(a2 + 56);
      v49 = *a1;
      v72 = &v80;
      v81 = 0x200000000LL;
      v80 = v82;
      sub_1DFDDC0(v49, v48, (__int64)&v80);
      v50 = *a1;
      v77 = 1;
      LODWORD(v48) = *(_DWORD *)(v5 + 24);
      v51 = *(_DWORD *)(v74 + 8);
      v78 = 0;
      v79 = 0;
      if ( (unsigned __int8)sub_1E54D70(
                              v50,
                              v48,
                              v51,
                              (_DWORD)v80,
                              v81,
                              a1[4],
                              (__int64)&v77,
                              (__int64)&v78,
                              (__int64)&v79) )
        goto LABEL_76;
      if ( v77 )
      {
        if ( v79 == 1 )
        {
LABEL_66:
          if ( v80 != v72 + 2 )
            free(v80);
          goto LABEL_24;
        }
        v76 = v5;
        v52 = 0;
        p_ptr = &ptr;
        v70.m128_u64[0] = (unsigned __int64)&v91;
        while ( 1 )
        {
          v53 = *a1;
          ++v52;
          v54 = p_ptr;
          v55 = (void **)&v87;
          v56 = *(_DWORD *)(*a1 + 12632);
          *(_DWORD *)(*a1 + 12632) = v52;
          v86.m128i_i64[1] = 1;
          v57 = *a1;
          v86.m128i_i64[0] = *a1;
          do
          {
            *v55 = (void *)-4096LL;
            v55 += 2;
          }
          while ( v55 != v54 );
          ptr = (void *)v70.m128_u64[0];
          v90 = 0x100000000LL;
          v58 = *(_QWORD *)(v57 + 11280);
          v93 = 0;
          v59 = v74;
          v92 = v58;
          v94 = 0;
          v95 = 0;
          *(_QWORD *)(v57 + 11280) = &v86;
          v60 = sub_1E48E00((__int64)a1, v59);
          if ( !v60 )
            break;
          v61 = (unsigned int)v84 + 1LL;
          if ( v61 > HIDWORD(v84) )
          {
            v75 = v60;
            sub_2237220(v73, v73 + 2, v61, 8);
            *((_QWORD *)v83 + (unsigned int)v84) = v75;
            LODWORD(v84) = v84 + 1;
            sub_1CB3BA0((__int64)&v86);
            v69 = v79;
            *(_DWORD *)(v53 + 12632) = v56;
            if ( v52 == v69 - 1 )
            {
LABEL_65:
              v5 = v76;
              goto LABEL_66;
            }
          }
          else
          {
            *((_QWORD *)v83 + (unsigned int)v84) = v60;
            LODWORD(v84) = v84 + 1;
            sub_1CB3BA0((__int64)&v86);
            v62 = v79;
            *(_DWORD *)(v53 + 12632) = v56;
            if ( v62 - 1 == v52 )
              goto LABEL_65;
          }
        }
        sub_1CB3BA0((__int64)&v86);
        *(_DWORD *)(v53 + 12632) = v56;
LABEL_76:
        if ( v80 != v72 + 2 )
          free(v80);
        v23 = 0;
        goto LABEL_28;
      }
      v63 = *a1;
      v64 = *(_DWORD *)(*a1 + 12632);
      *(_DWORD *)(*a1 + 12632) = 0;
      v65 = *a1;
      v70.m128_i32[0] = v64;
      v86.m128i_i64[0] = v65;
      sub_1DFE9C0(&v86.m128i_i64[1]);
      v66 = v74;
      ptr = &v91;
      v90 = 0x100000000LL;
      v68 = *(_QWORD *)(v67 + 11280);
      v93 = 0;
      v92 = v68;
      v94 = 0;
      v95 = 0;
      *(_QWORD *)(v67 + 11280) = &v86;
      v23 = sub_1E48E00((__int64)a1, v66);
      if ( !v23 )
      {
        sub_1CB3BA0((__int64)&v86);
        *(_DWORD *)(v63 + 12632) = v70.m128_i32[0];
        goto LABEL_76;
      }
      sub_1CB3BA0((__int64)&v86);
      *(_DWORD *)(v63 + 12632) = v70.m128_i32[0];
      if ( v80 != v82 )
        free(v80);
    }
    else
    {
      v27 = *a1;
      v86.m128i_i64[1] = 1;
      v28 = (void **)&v87;
      v86.m128i_i64[0] = v27;
      do
      {
        *v28 = (void *)-4096LL;
        v28 += 2;
      }
      while ( v28 != &ptr );
      ptr = &v91;
      v90 = 0x100000000LL;
      v29 = *(_QWORD *)(v27 + 11280);
      v94 = 0;
      v92 = v29;
      v93 = 0;
      v95 = 0;
      *(_QWORD *)(v27 + 11280) = &v86;
      v23 = sub_1E48E00((__int64)a1, v74);
      if ( !v23 )
      {
        sub_1CB3BA0((__int64)&v86);
        goto LABEL_28;
      }
      sub_1CB3BA0((__int64)&v86);
    }
    v30 = 0;
    if ( (*(_QWORD *)(v5 + 40) & 7) == 0 )
      v30 = *(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    v23 = sub_BBEBE0(
            *(_QWORD **)(*a1 + 248),
            a1[3],
            *(_DWORD *)(v5 + 24),
            (*(_DWORD *)(v5 + 64) & 0xFFFFFu) - *(_DWORD *)(a1[4] + 8),
            *(_WORD *)(v5 + 66) >> 4,
            (*(_BYTE *)(v5 + 80) & 2) != 0,
            v30,
            *(_BYTE *)(v5 + 80) & 1,
            v23);
    v24 = *(_QWORD *)(v5 + 72);
    if ( (v24 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_27;
LABEL_39:
    if ( ((v24 >> 1) & 3) != 1 )
    {
      v31 = sub_A5EFB0(v5);
      if ( (*(_DWORD *)v31 & 0x7FFFFFFFu) - 6 > 1 )
      {
        v33 = nullptr;
        v34 = 0;
      }
      else
      {
        v32 = (unsigned __int64 *)(v31[3] & 0xFFFFFFFFFFFFFFFCLL);
        v33 = (void *)v32[1];
        v34 = *v32;
      }
      v35 = sub_1DEB190(*a1, v34, v33, a1[4]);
      v37 = v36;
      v70.m128_u64[0] = *a1;
      p_ptr = (void **)a1[4];
      v38 = sub_A5EFB0(v5);
      v39 = 0;
      if ( (*(_DWORD *)v38 & 0x7FFFFFFFu) - 6 <= 1 )
        v39 = *(_DWORD *)((v38[3] & 0xFFFFFFFFFFFFFFFCLL) + 16);
      LODWORD(v72) = v39;
      v40 = sub_A5EFB0(v5);
      sub_F22A90(&v86, v40[1]);
      v80 = (void *)sub_1DD8B70(v70.m128_i64[0], v35, v37, v86.m128i_i64[0], (unsigned int)v72, (__int64)p_ptr, a3, a4);
      if ( !sub_F22B30(&v80) )
      {
        v41 = 0;
        v42 = sub_A5EFB0(v5);
        if ( (*(_DWORD *)v42 & 0x7FFFFFFFu) - 6 <= 1 )
          v41 = *(_DWORD *)((v42[3] & 0xFFFFFFFFFFFFFFFCLL) + 16);
        v43 = sub_A5EFB0(v5);
        if ( (*(_DWORD *)v43 & 0x7FFFFFFFu) - 6 > 1 )
          v70.m128_u64[0] = 0;
        else
          v70.m128_u64[0] = *(_QWORD *)((v43[3] & 0xFFFFFFFFFFFFFFFCLL) + 8);
        v44 = *(_QWORD **)(*a1 + 248);
        v70 = _mm_loadh_ps((const double *)v70.m128_u64);
        v86.m128i_i64[0] = 6;
        v86.m128i_i64[1] = (__int64)v80;
        sub_F1ECA0(v88, v44, v70.m128_u64[0], v70.m128_u64[1], v41, 0);
        sub_BC4990(v23, *(_QWORD **)(*a1 + 248), &v86, v45, v46, v47);
      }
    }
LABEL_27:
    v25 = *(_BYTE *)(v23 + 29) & 0x9D;
    *(_BYTE *)(v23 + 29) &= 0x9Fu;
    *(_BYTE *)(v23 + 29) = *(_BYTE *)(v5 + 29) & 2 | v25;
    sub_1DC20B0(*(_QWORD *)(*a1 + 11280), v5, v23, v22);
    goto LABEL_28;
  }
  v7 = *(unsigned int *)(a2 + 84);
  v8 = *(_DWORD *)(a2 + 84);
  if ( v7 <= 8 )
  {
    if ( (_DWORD)v7 )
      goto LABEL_4;
LABEL_24:
    v21 = 0;
    if ( (*(_QWORD *)(v5 + 40) & 7) == 0 )
      v21 = *(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    v23 = sub_BBED70(
            *(_QWORD **)(*a1 + 248),
            a1[3],
            *(_DWORD *)(v5 + 24),
            (*(_DWORD *)(v5 + 64) & 0xFFFFFu) - *(_DWORD *)(a1[4] + 8),
            *(_WORD *)(v5 + 66) >> 4,
            v21,
            *(_BYTE *)(v5 + 80) & 1,
            v74,
            v83,
            (unsigned int)v84);
    v24 = *(_QWORD *)(v5 + 72);
    if ( (v24 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_27;
    goto LABEL_39;
  }
  sub_2237220(v73, v85, v7, 8);
  v8 = *(_DWORD *)(a2 + 84);
  if ( !v8 )
    goto LABEL_24;
LABEL_4:
  v76 = a2;
  v9 = (__int64 *)(a2 + 88);
  v72 = (void **)(a2 + 8LL * (unsigned int)(v8 - 1) + 96);
  p_ptr = &ptr;
  v70.m128_u64[0] = (unsigned __int64)&v91;
  while ( 1 )
  {
    v10 = *a1;
    v11 = p_ptr;
    v12 = (void **)&v87;
    v86.m128i_i64[1] = 1;
    v86.m128i_i64[0] = v10;
    do
    {
      *v12 = (void *)-4096LL;
      v12 += 2;
    }
    while ( v12 != v11 );
    ptr = (void *)v70.m128_u64[0];
    v90 = 0x100000000LL;
    v13 = *(_QWORD *)(v10 + 11280);
    v93 = 0;
    v92 = v13;
    v94 = 0;
    v95 = 0;
    *(_QWORD *)(v10 + 11280) = &v86;
    v14 = sub_1E48E00((__int64)a1, *v9);
    if ( !v14 )
      break;
    v15 = (unsigned int)v84;
    v16 = (unsigned int)v84 + 1LL;
    if ( v16 > HIDWORD(v84) )
    {
      v75 = v14;
      sub_2237220(v73, v73 + 2, v16, 8);
      v15 = (unsigned int)v84;
      v14 = v75;
    }
    *((_QWORD *)v83 + v15) = v14;
    v17 = (char *)ptr;
    LODWORD(v84) = v84 + 1;
    if ( !(_BYTE)v93 )
    {
      v17 = (char *)ptr;
      if ( (_DWORD)v90 )
      {
        v18 = 0;
        v19 = 8LL * (unsigned int)(v90 - 1) + 8;
        do
        {
          v20 = *(void ***)&v17[v18];
          if ( v20 )
          {
            if ( *v20 != v20 + 2 )
              free(*v20);
            operator delete(v20, 0x30u);
            v17 = (char *)ptr;
          }
          v18 += 8;
        }
        while ( v18 != v19 );
      }
      *(_QWORD *)(v86.m128i_i64[0] + 11280) = v92;
      LOBYTE(v93) = 1;
    }
    if ( v17 != (char *)v70.m128_u64[0] )
      free(v17);
    if ( (v86.m128i_i8[8] & 1) != 0 )
    {
      if ( v72 == (void **)++v9 )
      {
LABEL_23:
        v5 = v76;
        goto LABEL_24;
      }
    }
    else
    {
      ++v9;
      operator delete(v87, 16LL * LODWORD(v88[0]), 8);
      if ( v9 == (__int64 *)v72 )
        goto LABEL_23;
    }
  }
  v23 = 0;
  sub_1CB3BA0((__int64)&v86);
LABEL_28:
  if ( v83 != v73 + 2 )
    free(v83);
  return v23;
}
