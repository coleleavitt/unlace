unsigned __int64 __fastcall sub_4A8BF0(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  _BYTE *v13; // rdi
  __int64 (*v14)(void); // rax
  unsigned __int64 v15; // r13
  void *v16; // r14
  __int64 v17; // rax
  __m128 v18; // xmm0
  unsigned int v19; // ebx
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  __int64 (__fastcall *v22)(__int64); // rax
  QT::QAbstractScrollArea *v23; // rsi
  unsigned __int64 (__fastcall *v24)(__int64); // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __int64 *v30; // rbx
  int v31; // r14d
  __int64 *v32; // r12
  const void *v33; // rdi
  __int64 v34; // rbp
  __int64 v35; // rbx
  const void *v37; // r13
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rax
  unsigned __int64 v41; // rsi
  const void *v42; // r12
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+10h] [rbp-B0h]
  __int64 v47; // [rsp+18h] [rbp-A8h]
  __int64 v48; // [rsp+28h] [rbp-98h] BYREF
  __m128i v49; // [rsp+30h] [rbp-90h]
  __int64 v50; // [rsp+40h] [rbp-80h]
  const void *v51; // [rsp+48h] [rbp-78h] BYREF
  __int128 v52; // [rsp+50h] [rbp-70h]
  __int64 v53; // [rsp+60h] [rbp-60h]
  __int128 v54; // [rsp+68h] [rbp-58h]
  char v55; // [rsp+78h] [rbp-48h]
  unsigned __int64 v56; // [rsp+80h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  v49 = 0;
  v48 = 0;
  v50 = -1;
  if ( a2 )
  {
    v13 = *(_BYTE **)(a1 + 2392);
    v14 = *(__int64 (**)(void))(*(_QWORD *)v13 + 72LL);
    if ( (v13[12] & 4) != 0 )
    {
      if ( (char *)v14 == (char *)exc_chooser_t__::vfunc_9 )
      {
        v15 = *(_QWORD *)(a2 + 8);
        v16 = nullptr;
        if ( v15 )
        {
          v16 = (void *)qalloc_or_throw(8 * v15);
          memcpy(v16, *(const void **)a2, 8 * v15);
        }
        v48 = (__int64)v16;
        v49 = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
      }
      else
      {
        ((void (__fastcall *)(_BYTE *, __int64 *, __int64))v14)(v13, &v48, a2);
      }
    }
    else
    {
      if ( (char *)v14 == (char *)addon_chooser_t__::vfunc_9 )
        v37 = *(const void **)a2;
      else
        v37 = (const void *)v14();
      v38 = sub_4A0DB0(a1);
      if ( (__int64)v37 >= 0 && v38 > 0 )
      {
        v39 = v38;
        LODWORD(v42) = v38 - 1;
        v40 = v49.m128i_i64[0];
        v41 = v48;
        v42 = (const void *)(int)v42;
        if ( v39 > (__int64)v37 )
          v42 = v37;
        v51 = v42;
        if ( v49.m128i_i64[1] < (unsigned __int64)(v49.m128i_i64[0] + 1) )
        {
          v48 = qvector_reserve(&v48, v48, v49.m128i_i64[0] + 1, 8);
          v41 = v48;
          v40 = v49.m128i_i64[0];
        }
        *(_QWORD *)(v41 + 8 * v40) = v42;
        ++v49.m128i_i64[0];
      }
    }
  }
  else
  {
    sub_4A6F30((__int64 *)a1, &v48, 0.0, a5, a6, a7, a8, a9, a10, a11);
  }
  v17 = *(_QWORD *)a1;
  v18 = 0;
  v51 = nullptr;
  v53 = 0;
  v55 = 0;
  v52 = 0;
  v54 = 0;
  *(double *)v18.m128_u64 = (*(double (__fastcall **)(__int64, const void **, __int64))(v17 + 624))(a1, &v51, 7);
  v19 = 2 * (a3 ^ 1);
  sub_4A15E0(
    a1,
    (unsigned __int64)&v51,
    (unsigned __int64 *)&v48,
    3,
    *(double *)v18.m128_u64,
    a5,
    a6,
    a7,
    v20,
    v21,
    a10,
    a11);
  v22 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 560LL);
  if ( v22 == sub_4A88B0 )
  {
    v23 = (QT::QAbstractScrollArea *)&v51;
    vault_files_dirtree_widget_t__::vfunc_30(a1 + 104);
    v24 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 568LL);
    if ( v24 == sub_4A76D0 )
    {
      if ( *(_DWORD *)(a1 + 2376) == 2 )
        v23 = *(QT::QAbstractScrollArea **)(a1 + 2384);
      else
        v23 = *(QT::QAbstractScrollArea **)(a1 + 2472);
      sub_4A72C0(a1, v23);
    }
    else
    {
      ((void (__fastcall *)(__int64, const void **))v24)(a1, &v51);
    }
  }
  else
  {
    v23 = (QT::QAbstractScrollArea *)&v51;
    ((void (__fastcall *)(__int64, const void **, _QWORD))v22)(a1, &v51, v19);
  }
  if ( !v49.m128i_i64[0] )
  {
LABEL_35:
    v43 = *(_QWORD *)(a1 + 2472);
    v46 = 0;
    v47 = 0;
    v23 = (QT::QAbstractScrollArea *)&v45;
    v45 = -1;
    QT::QAbstractItemView::setCurrentIndex(v43, &v45);
    v44 = *(_QWORD *)(a1 + 2384);
    if ( v44 )
    {
      v23 = (QT::QAbstractScrollArea *)&v45;
      v45 = -1;
      v46 = 0;
      v47 = 0;
      QT::QAbstractItemView::setCurrentIndex(v44, &v45);
    }
    goto LABEL_17;
  }
  v30 = (__int64 *)v48;
  v31 = *(_DWORD *)(a1 + 2376);
  v32 = (__int64 *)(v48 + 8 * v49.m128i_i64[0]);
  if ( v32 == (__int64 *)v48 )
  {
LABEL_34:
    if ( !v31 )
      goto LABEL_17;
    goto LABEL_35;
  }
  while ( 1 )
  {
    v23 = (QT::QAbstractScrollArea *)*v30;
    if ( sub_4A0960(a1, *v30, 1, v18, a5, a6, a7, v28, v29, a10, a11, v25, v26, v27) != -1 )
      break;
    if ( v32 == ++v30 )
      goto LABEL_34;
  }
LABEL_17:
  sub_4DE2C0();
  v33 = v51;
  if ( v51 )
  {
    v34 = v52;
    if ( (_QWORD)v52 )
    {
      v35 = 0;
      do
      {
        ++v35;
        sub_4DE2C0();
        v33 = v51;
      }
      while ( v34 != v35 );
    }
    *(_QWORD *)&v52 = 0;
    *(double *)v18.m128_u64 = qfree(v33, (const char *)v23);
  }
  if ( v48 )
  {
    v49.m128i_i64[0] = 0;
    qfree(v48, (const char *)v23, *(double *)v18.m128_u64);
  }
  return v56 - __readfsqword(0x28u);
}
