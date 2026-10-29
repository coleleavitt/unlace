__int64 __fastcall sub_4A52A0(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rax
  void (*v12)(void); // rax
  __int64 v13; // r13
  _QWORD *v15; // rdi
  __int64 v16; // rbp
  __m128 v17; // xmm0
  bool v18; // zf
  __int64 v19; // rax
  const char **v20; // r14
  const char *v21; // rdx
  const char *v22; // rsi
  __int64 v23; // r14
  QT::QAbstractItemView *v24; // rdi
  _QWORD *v25; // rax
  __m256i *v26; // rsi
  __int64 v27; // r8
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // r14
  __int64 v33; // r15
  __int64 v34; // rax
  int v35; // r14d
  __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  _QWORD *v41; // rdx
  __int64 v42; // [rsp+20h] [rbp-E8h] BYREF
  char v43; // [rsp+28h] [rbp-E0h]
  __int64 v44; // [rsp+30h] [rbp-D8h] BYREF
  int v45; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD *v46; // [rsp+40h] [rbp-C8h]
  int *v47; // [rsp+48h] [rbp-C0h]
  int *v48; // [rsp+50h] [rbp-B8h]
  __int64 v49; // [rsp+58h] [rbp-B0h]
  __m256i v50; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+80h] [rbp-88h]
  __int128 v52; // [rsp+88h] [rbp-80h]
  __int64 v53; // [rsp+98h] [rbp-70h]
  __int64 v54; // [rsp+A0h] [rbp-68h]
  __int16 v55; // [rsp+A8h] [rbp-60h]
  __int64 v56; // [rsp+B0h] [rbp-58h]
  __int64 v57; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v58; // [rsp+C8h] [rbp-40h]

  v11 = *(_QWORD *)a1;
  v58 = __readfsqword(0x28u);
  v12 = *(void (**)(void))(v11 + 672);
  if ( v12 != nullsub_263 )
    v12();
  if ( a2 == -2 )
  {
    v16 = (int)sub_4A0DB0(a1);
    v17 = 0;
    v13 = operator new(0x20u);
    *(_QWORD *)v13 = &chooser_flat_bucket_data_t___vtable;
    *(_QWORD *)(v13 + 8) = 0;
    *(_OWORD *)(v13 + 16) = 0;
    if ( v16 )
    {
      v34 = qvector_reserve(v13 + 8, 0, v16, 8);
      v35 = *(_DWORD *)(a1 + 2376);
      v45 = 0;
      *(_QWORD *)(v13 + 8) = v34;
      v46 = nullptr;
      v47 = &v45;
      v48 = &v45;
      v49 = 0;
      if ( v35 != 1 )
        goto LABEL_23;
    }
    else
    {
      v15 = nullptr;
      v18 = *(_DWORD *)(a1 + 2376) == 1;
      v45 = 0;
      v46 = nullptr;
      v47 = &v45;
      v48 = &v45;
      v49 = 0;
      if ( !v18 )
        goto LABEL_7;
    }
    v19 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a1 + 2384));
    v20 = *(const char ***)(v19 + 216);
    if ( !v20 )
      v20 = *(const char ***)(v19 + 208);
    memset(&v50, 0, 24);
    dirtree_getcwd(&v50, *v20);
    v21 = &s1;
    if ( v50.m256i_i64[1] )
      v21 = (const char *)v50.m256i_i64[0];
    v22 = *v20;
    v43 = 0;
    v42 = -1;
    dirtree_resolve_path(&v42, v22, v21, 0.0);
    v23 = v42;
    if ( v50.m256i_i64[0] )
    {
      v50.m256i_i64[1] = 0;
      qfree(v50.m256i_i64[0], v22);
    }
    v24 = *(QT::QAbstractItemView **)(a1 + 2384);
    v17 = 0;
    memset(&v50.m256i_u64[1], 0, 24);
    v51 = 0;
    v50.m256i_i64[0] = (__int64)&folder_data_t___vtable;
    v53 = -1;
    v54 = -256;
    v55 = 255;
    v56 = 0;
    v57 = 0;
    v52 = 0;
    v25 = (_QWORD *)QT::QAbstractItemView::model(v24);
    v26 = &v50;
    sub_48BC30(v25, (__int64)&v50, v23);
    v30 = v50.m256i_i64[1];
    v31 = 9 * v50.m256i_i64[2];
    v32 = v50.m256i_i64[1];
    v33 = v50.m256i_i64[1] + 9 * v50.m256i_i64[2];
    if ( v33 != v50.m256i_i64[1] )
    {
      do
      {
        if ( !*(_BYTE *)(v32 + 8) )
        {
          v26 = (__m256i *)&v42;
          v42 = *(_QWORD *)v32;
          sub_2AB280(&v44, (unsigned __int64 *)&v42);
        }
        v32 += 9;
      }
      while ( v32 != v33 );
    }
    v50.m256i_i64[0] = (__int64)&folder_data_t___vtable;
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      *(double *)v17.m128_u64 = qfree(v51, v26->m256i_i8);
    }
    if ( v50.m256i_i64[1] )
    {
      v50.m256i_i64[2] = 0;
      *(double *)v17.m128_u64 = qfree(v50.m256i_i64[1], v26->m256i_i8);
    }
    if ( v16 )
    {
      v35 = 1;
LABEL_23:
      v36 = 0;
      while ( v35 != 1 )
      {
LABEL_26:
        v37 = *(_QWORD *)(v13 + 16);
        v38 = *(_QWORD *)(v13 + 8);
        if ( *(_QWORD *)(v13 + 24) < (unsigned __int64)(v37 + 1) )
        {
          v39 = qvector_reserve(v13 + 8, v38, v37 + 1, 8);
          *(_QWORD *)(v13 + 8) = v39;
          v38 = v39;
          v37 = *(_QWORD *)(v13 + 16);
        }
        *(_QWORD *)(v38 + 8 * v37) = v36++;
        ++*(_QWORD *)(v13 + 16);
        if ( v36 == v16 )
          goto LABEL_6;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v40 = sub_4A0960(a1, v36, 0, v17, a4, a5, a6, v28, v29, a9, a10, v30, v27, v31);
          v15 = v46;
          v31 = (__int64)&v45;
          v41 = v46;
          if ( v46 )
            break;
LABEL_30:
          if ( v16 == ++v36 )
            goto LABEL_7;
        }
        do
        {
          v30 = v41[2];
          if ( v41[4] < v40 )
          {
            v41 = (_QWORD *)v41[3];
          }
          else
          {
            v31 = (__int64)v41;
            v41 = (_QWORD *)v41[2];
          }
        }
        while ( v41 );
        if ( (int *)v31 != &v45 )
        {
          if ( v40 >= *(_QWORD *)(v31 + 32) )
            goto LABEL_26;
          goto LABEL_30;
        }
        if ( ++v36 == v16 )
          goto LABEL_7;
      }
    }
LABEL_6:
    v15 = v46;
LABEL_7:
    sub_49CE10(v15);
    return v13;
  }
  v13 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a1 + 2384));
  if ( v13 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 456LL))(v13, a2);
  return v13;
}
