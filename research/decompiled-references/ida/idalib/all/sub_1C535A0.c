__int64 __fastcall sub_1C535A0(_WORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v7; // r12
  __int64 result; // rax
  unsigned __int64 v9; // rbx
  _QWORD *v10; // r14
  unsigned __int64 *v11; // rax
  __int64 *v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int16 v17; // ax
  __int64 v18; // rbx
  __int64 v19; // r13
  __m128i v20; // rax
  _WORD *v21; // r8
  _QWORD *v22; // rdi
  __int64 *v23; // r14
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 **v29; // rax
  __int64 *v30; // rdx
  unsigned __int64 v31; // rax
  __int64 *v32; // rcx
  __int64 v33; // rcx
  __int64 *v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  char v39; // cl
  unsigned int v40; // edx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rax
  _QWORD *v46; // rdx
  unsigned __int64 v47; // rax
  _QWORD *v48; // rcx
  __int64 *v49; // rax
  __int64 *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // [rsp+8h] [rbp-130h]
  unsigned __int8 v53; // [rsp+8h] [rbp-130h]
  _WORD *v54; // [rsp+18h] [rbp-120h] BYREF
  __m128i si128; // [rsp+20h] [rbp-118h] BYREF
  __int64 v56; // [rsp+30h] [rbp-108h]
  void *ptr; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v58; // [rsp+48h] [rbp-F0h]
  _QWORD v59[4]; // [rsp+50h] [rbp-E8h] BYREF
  __m128 v60; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v61; // [rsp+80h] [rbp-B8h]
  __int64 v62; // [rsp+88h] [rbp-B0h]
  __int64 v63; // [rsp+90h] [rbp-A8h]

  v7 = a2[68];
  if ( (*(_BYTE *)(v7 + 8) & 0x7Fu) - 34 > 5 )
    return 0;
  v52 = v7 - 72;
  if ( v7 == 72 || (*(_BYTE *)(v7 - 43) & 1) == 0 )
    return 0;
  v9 = (unsigned __int64)a1;
  v10 = a2;
  v11 = sub_B8C3D0(v7 - 72, (__int64)a2, a3, a4, a5, a6);
  v12 = (__int64 *)*v11;
  v13 = *v11 + 8LL * *((unsigned int *)v11 + 2);
  if ( *v11 >= v13 )
  {
    if ( v12 != (__int64 *)v13 )
    {
      if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) == 267 )
        goto LABEL_18;
      v15 = (__int64 *)(v13 + 8);
      while ( v12 != v15 )
      {
        v16 = *v15++;
        if ( *(_WORD *)(v16 + 36) == 267 )
          goto LABEL_18;
      }
    }
    return 0;
  }
  v14 = *v11;
  while ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 267 )
  {
    v14 += 8LL;
    if ( v13 == v14 )
      return 0;
  }
  if ( v13 == v14 )
    return 0;
LABEL_18:
  v59[0] = a1;
  ptr = v59;
  v58 = 0x400000000LL;
  v17 = *a1 & 0x1FF;
  if ( v17 == 98 )
  {
LABEL_32:
    v23 = v10 + 1;
    v24 = sub_EEB7E0(v9, (__int64)a2, a7);
    sub_168B9F0((__int64)&v60, v23, v24, 0xC21u, 0);
    sub_15F7200(&v60);
    if ( (*(_BYTE *)(v7 - 43) & 1) != 0 )
    {
      v29 = (__int64 **)sub_B8C3D0(v52, (__int64)v23, v25, v26, v27, v28);
      v30 = *v29;
      v31 = (unsigned __int64)&(*v29)[*((unsigned int *)v29 + 2)];
      if ( (unsigned __int64)v30 >= v31 )
      {
        if ( v30 != (__int64 *)v31 )
        {
          if ( *(_WORD *)(*(_QWORD *)v31 + 36LL) == 267 )
          {
LABEL_38:
            v33 = *v30;
            if ( *(_WORD *)(*v30 + 36) != 267 )
            {
              v34 = v30 + 1;
              do
                v33 = *v34++;
              while ( *(_WORD *)(v33 + 36) != 267 );
            }
            goto LABEL_41;
          }
          v50 = (__int64 *)(v31 + 8);
          while ( v30 != v50 )
          {
            v51 = *v50++;
            if ( *(_WORD *)(v51 + 36) == 267 )
              goto LABEL_38;
          }
        }
      }
      else
      {
        v32 = v30;
        while ( *(_WORD *)(*v32 + 36) != 267 )
        {
          if ( (__int64 *)v31 == ++v32 )
            goto LABEL_86;
        }
        if ( (__int64 *)v31 != v32 )
          goto LABEL_38;
      }
    }
LABEL_86:
    BUG();
  }
  while ( v17 != 71 || (*(_BYTE *)(*(_QWORD *)(v9 + 16) + 28LL) & 0x7F) != 0x2B )
  {
    a2 = (_QWORD *)v9;
    sub_EE9E50(&v60, v9);
    v20.m128i_i64[0] = v60.m128_u64[0];
    v18 = v62;
    si128 = _mm_load_si128((const __m128i *)&v60);
    v19 = v63;
    v56 = v61;
    v20.m128i_i64[1] = si128.m128i_i64[1];
LABEL_22:
    if ( v18 == v20.m128i_i64[0] )
      goto LABEL_29;
    do
    {
      do
      {
        if ( (v20.m128i_i8[8] & 3) != 0 )
        {
          v21 = *(_WORD **)sub_EF2B30((__int64)&si128);
          if ( !v21 )
            goto LABEL_26;
        }
        else
        {
          v21 = *(_WORD **)v20.m128i_i64[0];
          if ( !*(_QWORD *)v20.m128i_i64[0] )
            goto LABEL_45;
        }
        if ( ((*v21 + 509) & 0x1FFu) <= 0x7E )
        {
          v35 = (unsigned int)v58;
          v36 = (unsigned int)v58 + 1LL;
          if ( v36 > HIDWORD(v58) )
          {
            v54 = v21;
            a2 = v59;
            sub_2237220(&ptr, v59, v36, 8);
            v35 = (unsigned int)v58;
            v21 = v54;
          }
          *((_QWORD *)ptr + v35) = v21;
          LODWORD(v58) = v58 + 1;
        }
LABEL_26:
        v20.m128i_i64[1] = si128.m128i_i64[1];
        if ( (si128.m128i_i8[8] & 3) == 0 )
        {
          v20.m128i_i64[0] = si128.m128i_i64[0];
LABEL_45:
          v20.m128i_i64[0] += 8;
          si128.m128i_i64[0] = v20.m128i_i64[0];
          goto LABEL_22;
        }
        if ( (si128.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        {
          a2 = (_QWORD *)(&dword_0 + 1);
          sub_EF2750((unsigned __int64 *)&si128, 1);
          v20 = si128;
          goto LABEL_22;
        }
        sub_EF2960((__int64)&si128);
        v20 = si128;
      }
      while ( v18 != si128.m128i_i64[0] );
LABEL_29:
      ;
    }
    while ( v19 != v20.m128i_i64[1] );
    v22 = ptr;
    if ( !(_DWORD)v58 )
    {
      result = 0;
      goto LABEL_42;
    }
    v9 = *((_QWORD *)ptr + (unsigned int)v58 - 1);
    LODWORD(v58) = v58 - 1;
    v17 = *(_WORD *)v9 & 0x1FF;
    if ( v17 == 98 )
      goto LABEL_32;
  }
  v23 = v10 + 1;
  if ( (*(_QWORD *)v9 & 0x80000LL) != 0 )
  {
    v37 = *(_QWORD *)(v9 + 32);
    if ( v37 )
    {
      v54 = *(_WORD **)(v9 + 40);
      v60 = _mm_loadh_ps((const double *)&v54);
      v38 = *(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v38 )
      {
        v60.m128_u64[0] = v38;
        v39 = 0;
        while ( (*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v39 = 1;
          v38 = *(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        }
        if ( v39 )
          v60.m128_u64[0] = v38;
      }
      v40 = sub_E90530((__int64 *)&v60);
    }
    else
    {
      v40 = 0;
    }
  }
  else
  {
    v40 = *(_DWORD *)(v9 + 4);
  }
  sub_168B9F0((__int64)&v60, v23, v40, 0xC20u, 0);
  sub_15F7200(&v60);
  if ( (*(_BYTE *)(v7 - 43) & 1) == 0 )
LABEL_87:
    BUG();
  v45 = sub_B8C3D0(v52, (__int64)v23, v41, v42, v43, v44);
  v46 = (_QWORD *)*v45;
  v47 = *v45 + 8LL * *((unsigned int *)v45 + 2);
  if ( (unsigned __int64)v46 >= v47 )
  {
    for ( ; v46 != (_QWORD *)v47; v47 += 8LL )
    {
      if ( *(_WORD *)(*(_QWORD *)v47 + 36LL) == 267 )
        goto LABEL_68;
    }
    goto LABEL_87;
  }
  v48 = v46;
  while ( *(_WORD *)(*v48 + 36LL) != 267 )
  {
    if ( (_QWORD *)v47 == ++v48 )
      goto LABEL_87;
  }
  if ( (_QWORD *)v47 == v48 )
    goto LABEL_87;
LABEL_68:
  v33 = *v46;
  if ( *(_WORD *)(*v46 + 36LL) != 267 )
  {
    v49 = v46 + 1;
    do
      v33 = *v49++;
    while ( *(_WORD *)(v33 + 36) != 267 );
  }
LABEL_41:
  sub_168B9F0((__int64)&v60, v23, *(_DWORD *)(v33 + 24), 0x16A6u, 0);
  sub_15F7200(&v60);
  v22 = ptr;
  result = 1;
LABEL_42:
  if ( v22 != v59 )
  {
    v53 = result;
    free(v22);
    return v53;
  }
  return result;
}
