unsigned __int64 __fastcall sub_4940C0(__int64 a1, __int64 a2, __m128i *a3, __int64 *a4, __int64 a5)
{
  __int64 v5; // r11
  _QWORD *v8; // r12
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(_QWORD *); // rdx
  __int64 (__fastcall *v11)(__int64); // rax
  __int64 v12; // r14
  unsigned __int64 v13; // r13
  __m128i v14; // xmm0
  char *v15; // rbp
  unsigned __int64 v16; // rdx
  __int64 v17; // r11
  unsigned __int64 v18; // rdi
  __int64 i; // rax
  __int64 v20; // rdx
  char *v21; // r15
  bool v22; // bp
  __int64 v23; // r12
  unsigned int *v24; // r14
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // r10
  __int64 v29; // r8
  __int64 v30; // rbp
  size_t v31; // rdx
  char *v32; // r15
  __int64 v33; // rax
  unsigned __int64 v34; // r8
  __int64 v35; // r9
  bool v36; // al
  __int64 v37; // rax
  char *v38; // rdi
  char *v39; // rdx
  char v40; // r12
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // [rsp+0h] [rbp-108h]
  unsigned int *v44; // [rsp+0h] [rbp-108h]
  __int64 v45; // [rsp+0h] [rbp-108h]
  __int64 v46; // [rsp+0h] [rbp-108h]
  _QWORD *v47; // [rsp+0h] [rbp-108h]
  __int64 v48; // [rsp+0h] [rbp-108h]
  __int64 v49; // [rsp+0h] [rbp-108h]
  __int64 v50; // [rsp+0h] [rbp-108h]
  __int64 v51; // [rsp+0h] [rbp-108h]
  __int64 v52; // [rsp+0h] [rbp-108h]
  __int64 v53; // [rsp+8h] [rbp-100h]
  __int64 v55; // [rsp+18h] [rbp-F0h]
  unsigned int v56; // [rsp+18h] [rbp-F0h]
  __int64 v57; // [rsp+18h] [rbp-F0h]
  __int64 v59; // [rsp+28h] [rbp-E0h]
  __int64 v60; // [rsp+28h] [rbp-E0h]
  __int64 v61; // [rsp+28h] [rbp-E0h]
  __int64 v62; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v63; // [rsp+30h] [rbp-D8h]
  __int64 v64; // [rsp+30h] [rbp-D8h]
  __int64 v65; // [rsp+38h] [rbp-D0h]
  __m128i v66; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v67; // [rsp+50h] [rbp-B8h]
  _QWORD v68[4]; // [rsp+60h] [rbp-A8h] BYREF
  void *src; // [rsp+80h] [rbp-88h] BYREF
  __int128 v70; // [rsp+88h] [rbp-80h]
  unsigned int *v71; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v72; // [rsp+A8h] [rbp-60h]
  __int64 v73; // [rsp+B8h] [rbp-50h]
  int v74; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v75; // [rsp+C8h] [rbp-40h]

  v5 = 0;
  v53 = a2;
  v75 = __readfsqword(0x28u);
  v72 = 0;
  v71 = nullptr;
  v73 = 0;
  v74 = -1;
  if ( a5 )
    v5 = *(_QWORD *)(a5 + 8);
  v8 = *(_QWORD **)a1;
  v9 = (__int64)folder_data_t__::vfunc_8;
  if ( a4 )
    ++a4;
  v10 = *(__int64 (__fastcall **)(_QWORD *))(*v8 + 64LL);
  if ( v10 == folder_data_t__::vfunc_8 )
  {
    v11 = *(__int64 (__fastcall **)(__int64))(*v8 + 24LL);
    if ( v11 == folder_data_t__::vfunc_3 )
    {
      v12 = v8[2];
      goto LABEL_8;
    }
    v51 = v5;
    v42 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64 (__fastcall *)(__int64), __int64 (__fastcall *)(_QWORD *)))v11)(
            v8,
            a2,
            folder_data_t__::vfunc_3,
            folder_data_t__::vfunc_8);
  }
  else
  {
    v51 = v5;
    a2 = *(_QWORD *)(a1 + 8);
    v42 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64 (__fastcall *)(_QWORD *), __int64 (__fastcall *)(_QWORD *)))v10)(
            v8,
            a2,
            v10,
            folder_data_t__::vfunc_8);
  }
  v8 = *(_QWORD **)a1;
  v5 = v51;
  v12 = v42;
LABEL_8:
  if ( !a4 )
  {
    v14.m128i_i64[0] = 0;
    src = nullptr;
    v70 = 0;
    goto LABEL_43;
  }
  v13 = a4[1];
  v14.m128i_i64[0] = 0;
  src = nullptr;
  v70 = 0;
  if ( !v13 )
  {
LABEL_43:
    v73 = 0;
    v22 = v5 == 0;
    v21 = nullptr;
    v13 = 0;
    if ( !v12 )
    {
      v56 = -1;
      goto LABEL_26;
    }
    goto LABEL_44;
  }
  a2 = 0;
  v45 = v5;
  src = (void *)qvector_reserve(&src, 0, v13, 9);
  v21 = (char *)src;
  v5 = v45;
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    *(double *)v14.m128i_i64 = qfree(v71, nullptr);
    v71 = nullptr;
    v21 = (char *)src;
    *((_QWORD *)&v72 + 1) = 0;
    v5 = v45;
  }
  v73 = 0;
  v26 = v70;
  v27 = a4[1];
  v28 = 9 * v70;
  v29 = 9 * v27;
  v9 = 9 * v70;
  if ( v27 )
  {
    v30 = *a4;
    v31 = 0;
    if ( *((_QWORD *)&v70 + 1) < (unsigned __int64)(v27 + v70) )
    {
      v65 = 9 * v70;
      v64 = 9 * v27;
      v62 = v27;
      v52 = v5;
      src = (void *)qvector_reserve(&src, v21, v27 + v70, 9);
      v21 = (char *)src;
      v28 = v65;
      v29 = v64;
      v27 = v62;
      v5 = v52;
      v31 = 9 * v70 - v65;
    }
    v32 = &v21[v28];
    v60 = v27;
    a2 = (__int64)v32;
    v57 = v5;
    v46 = v29;
    memmove(&v32[v29], v32, v31);
    v33 = 0;
    v5 = v57;
    do
    {
      *(_QWORD *)&v32[v33] = *(_QWORD *)(v30 + v33);
      v32[v33 + 8] = *(_BYTE *)(v30 + v33 + 8);
      v33 += 9;
    }
    while ( v46 != v33 );
    v21 = (char *)src;
    v26 = v60 + v70;
    *(_QWORD *)&v70 = v26;
    v9 = 9 * v26;
  }
  v15 = &v21[v9];
  if ( &v21[v9] != v21 )
  {
    if ( 0x8E38E38E38E38E39LL * v9 )
    {
      _BitScanReverse64(&v16, 0x8E38E38E38E38E39LL * v9);
      v55 = v9;
      v43 = v5;
      v59 = v26;
      sub_486D20((__int64)v21, (unsigned __int64)&v21[v9], 2LL * (int)v16);
      v17 = v43;
      if ( v55 > 144 )
      {
        a2 = (__int64)(v21 + 144);
        sub_486A80(v21, v21 + 144);
        v9 = (__int64)(v21 + 144);
        v5 = v43;
        if ( v59 == 16 )
          goto LABEL_21;
        while ( 1 )
        {
          v18 = *(_QWORD *)v9;
          a2 = *(unsigned __int8 *)(v9 + 8);
          for ( i = v9; *(_BYTE *)(i - 1) == (_BYTE)a2; *(_BYTE *)(i + 17) = *(_BYTE *)(i + 8) )
          {
            if ( v18 >= *(_QWORD *)(i - 9) )
              goto LABEL_20;
LABEL_17:
            v20 = *(_QWORD *)(i - 9);
            i -= 9;
            *(_QWORD *)(i + 9) = v20;
          }
          if ( (_BYTE)a2 )
            goto LABEL_17;
LABEL_20:
          v9 += 9;
          *(_QWORD *)i = v18;
          *(_BYTE *)(i + 8) = a2;
          if ( v15 == (char *)v9 )
          {
LABEL_21:
            v21 = (char *)src;
            goto LABEL_22;
          }
        }
      }
    }
    else
    {
      v49 = v5;
      sub_486D20((__int64)v21, (unsigned __int64)&v21[v9], -2);
      v17 = v49;
    }
    a2 = (__int64)v15;
    v50 = v17;
    sub_486A80(v21, v15);
    v21 = (char *)src;
    v5 = v50;
  }
LABEL_22:
  v22 = v5 == 0;
  if ( v12 )
  {
LABEL_44:
    v34 = 0;
    v35 = 0;
    v56 = -1;
    v36 = !v22 || v13 != 0;
    if ( v36 )
    {
      while ( 1 )
      {
        a2 = v8[1] + 9 * v35;
        if ( !v22 && *(_QWORD *)a2 == *(_QWORD *)v5 && *(_BYTE *)(a2 + 8) == *(_BYTE *)(v5 + 8) )
        {
          v56 = v35;
          v22 = v36;
        }
        v37 = v70;
        v47 = v8;
        v38 = v21;
        while ( v37 > 0 )
        {
          v9 = v37 >> 1;
          v39 = &v38[9 * (v37 >> 1)];
          v40 = v39[8];
          if ( v40 == *(_BYTE *)(a2 + 8) )
          {
            if ( *(_QWORD *)v39 >= *(_QWORD *)a2 )
              goto LABEL_58;
          }
          else if ( !v40 )
          {
LABEL_58:
            v37 >>= 1;
            continue;
          }
          v38 = v39 + 9;
          v37 = v37 - 1 - v9;
        }
        v8 = v47;
        v41 = v35 + 1;
        if ( v38 != &v21[9 * (_QWORD)v70] && *(_QWORD *)v38 == *(_QWORD *)a2 && v38[8] == *(_BYTE *)(a2 + 8) )
        {
          v63 = v34;
          a2 = (__int64)v68;
          v61 = v5;
          v68[0] = v35;
          v68[1] = v35 + 1;
          v48 = v35 + 1;
          rangeset_t_add(&v71, v68, v41, v9, v34, v35);
          v21 = (char *)src;
          v5 = v61;
          v41 = v48;
          v34 = v63 + 1;
        }
        if ( v12 == v41 )
          break;
        v35 = v41;
        v36 = !v22 || v34 < v13;
        if ( !v36 )
          goto LABEL_56;
      }
    }
    else
    {
LABEL_56:
      v22 = 1;
    }
    goto LABEL_24;
  }
  v56 = -1;
LABEL_24:
  if ( v21 )
  {
    *(_QWORD *)&v70 = 0;
    *(double *)v14.m128i_i64 = qfree(v21, (const char *)a2, *(double *)v14.m128i_i64);
  }
LABEL_26:
  v23 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a1 + 8));
  v24 = v71;
  v44 = &v71[4 * v72];
  if ( v44 != v71 )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD, _QWORD, double))(*(_QWORD *)v23 + 96LL))(
        v68,
        v23,
        *v24,
        *(unsigned int *)(a1 + 24),
        *(_QWORD *)(a1 + 16),
        *(double *)v14.m128i_i64);
      (*(void (__fastcall **)(void **, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v23 + 96LL))(
        &src,
        v23,
        v24[2] - 1,
        *(unsigned int *)(a1 + 24),
        *(_QWORD *)(a1 + 16));
      a2 = (__int64)v68;
      QT::QItemSelection::select(v53, v68, &src);
      v24 += 4;
    }
    while ( v44 != v24 );
  }
  if ( a5 && v22 )
  {
    a2 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a1 + 8));
    (*(void (__fastcall **)(__m128i *, __int64, _QWORD, _QWORD, _QWORD, double))(*(_QWORD *)a2 + 96LL))(
      &v66,
      a2,
      v56,
      *(unsigned int *)(a1 + 24),
      *(_QWORD *)(a1 + 16),
      *(double *)v14.m128i_i64);
    v14 = _mm_loadu_si128(&v66);
    *a3 = v14;
    a3[1].m128i_i64[0] = v67;
  }
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    qfree(v71, (const char *)a2, *(double *)v14.m128i_i64);
  }
  return v75 - __readfsqword(0x28u);
}
