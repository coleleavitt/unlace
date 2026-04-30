__int64 __fastcall sub_1FB9E0(__m128i *a1, char *a2, __int64 a3, __int64 a4, double a5, __m128 a6)
{
  __int64 v7; // rdi
  __m128i v8; // xmm0
  __int32 v9; // eax
  __m128i v11; // xmm0
  const char *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // ebp
  unsigned int v16; // r13d
  __int64 v17; // rbx
  __int32 v19; // r8d
  __int64 v20; // rdx
  int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // r15
  __int64 v25; // rax
  QT::QAbstractItemView *v26; // rax
  QT::QAbstractItemView *v27; // r14
  __int64 v28; // rax
  _QWORD *v29; // r15
  __m128 v30; // xmm0
  __int64 v31; // rsi
  __int64 v32; // rbp
  __int64 v33; // rsi
  __int64 v34; // rsi
  void *v35; // rax
  __int64 v36; // r15
  _BYTE *v37; // rsi
  size_t v38; // r8
  __int64 v39; // rdx
  struct _Unwind_Exception *v40; // rbx
  void *src; // [rsp+8h] [rbp-160h]
  int v42; // [rsp+14h] [rbp-154h]
  __int64 v43; // [rsp+28h] [rbp-140h] BYREF
  __int64 v44; // [rsp+35h] [rbp-133h] BYREF
  char v45; // [rsp+3Dh] [rbp-12Bh]
  __int64 v46; // [rsp+3Eh] [rbp-12Ah] BYREF
  char v47; // [rsp+46h] [rbp-122h]
  __int64 v48; // [rsp+47h] [rbp-121h] BYREF
  char v49; // [rsp+4Fh] [rbp-119h]
  __m128i v50; // [rsp+50h] [rbp-118h] BYREF
  __m128i v51; // [rsp+60h] [rbp-108h] BYREF
  void *v52; // [rsp+70h] [rbp-F8h] BYREF
  __int128 v53; // [rsp+78h] [rbp-F0h]
  _OWORD v54[2]; // [rsp+90h] [rbp-D8h] BYREF
  __int32 v55; // [rsp+B0h] [rbp-B8h]
  __int64 v56; // [rsp+B8h] [rbp-B0h]
  __int128 v57; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+D0h] [rbp-98h]
  __int64 v59; // [rsp+D8h] [rbp-90h]
  __int64 v60; // [rsp+E0h] [rbp-88h]
  __int64 v61; // [rsp+E8h] [rbp-80h]
  __int64 v62; // [rsp+F0h] [rbp-78h] BYREF
  __int128 v63; // [rsp+F8h] [rbp-70h]
  unsigned __int64 v64; // [rsp+128h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  v7 = a1[26].m128i_i64[1];
  if ( !v7 )
  {
    v40 = (struct _Unwind_Exception *)sub_1E69C0(a5, 0, (__int64)a2, a3, a4);
    if ( v52 )
    {
      *(_QWORD *)&v53 = 0;
      a5 = qfree(v52, a2);
    }
    if ( v56 )
      qfree(v56, a2, a5);
    _Unwind_Resume(v40);
  }
  v8 = _mm_loadu_si128(a1 + 24);
  v9 = a1[26].m128i_i32[0];
  v56 = 0;
  v54[0] = v8;
  v11 = _mm_loadu_si128(a1 + 25);
  v55 = v9;
  v54[1] = v11;
  v12 = (const char *)v54;
  v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v15 = sub_1F9600(a1->m128i_i64, (__int64)v54);
  v16 = v15;
  if ( v15 == -1 )
    v16 = sub_1F96C0(a1->m128i_i64, (__int64)v54, v13, v14);
  if ( v16 <= 0x3FF )
  {
    v19 = a1[35].m128i_i32[2];
    v20 = a1[37].m128i_i64[1];
    v52 = nullptr;
    v53 = 0;
    v21 = v19 & 2;
    if ( !v20 )
      goto LABEL_19;
    v22 = a1[37].m128i_i64[0];
    v23 = v22 + 80 * v20;
    if ( v22 == v23 )
      goto LABEL_19;
    while ( (*(_BYTE *)(v22 + 72) & 4) != 0 )
    {
      v22 += 80;
      if ( v23 == v22 )
        goto LABEL_19;
    }
    if ( !v22
      || &v52 == (void **)(v22 + 8)
      || (v24 = *(_QWORD *)(v22 + 16), v24 <= 1)
      || (v42 = v21,
          src = *(void **)(v22 + 8),
          v35 = (void *)qvector_reserve(&v52, 0, v24, 1),
          *(_QWORD *)&v53 = v24,
          v52 = v35,
          memmove(v35, src, v24 - 1),
          v21 = v42,
          *((char *)v52 + v24 - 1) = 0,
          v36 = v53,
          (unsigned __int64)v53 <= 1) )
    {
LABEL_19:
      if ( v21 )
        (**(void (__fastcall ***)(__int64, void **, __int64))v56)(v56, &v52, a1[45].m128i_i64[1]);
    }
    else if ( !v42 )
    {
      v37 = v52;
      v38 = v53 - 1;
      v39 = v53 + 1;
      if ( *((_QWORD *)&v53 + 1) < (unsigned __int64)(v53 + 1) )
      {
        v52 = (void *)qvector_reserve(&v52, v52, v39, 1);
        v38 = v36 - 1;
        v37 = v52;
        v39 = v36 + 1;
      }
      *(_QWORD *)&v53 = v39;
      v37[v36] = 0;
      memmove((char *)v52 + 1, v52, v38);
      *(_BYTE *)v52 = 1;
    }
    v25 = a1->m128i_i64[0];
    v12 = (const char *)&v43;
    v58 = 0;
    v59 = -1;
    v60 = 0;
    v61 = 0;
    v57 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__m128i *, __int64 *, __int128 *, _OWORD *, _QWORD))(v25 + 680))(
           a1,
           &v43,
           &v57,
           v54,
           0) )
    {
      v26 = (QT::QAbstractItemView *)sub_1FB940((QT::QObject *)a1);
      v27 = v26;
      if ( v15 == -1 || !v26 )
        goto LABEL_37;
      v28 = QT::QAbstractItemView::model(v26);
      v29 = *(_QWORD **)(v28 + 216);
      if ( !v29 )
        v29 = *(_QWORD **)(v28 + 208);
      if ( (v44 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v56 + 8LL))(v56, a1[45].m128i_i64[1]),
            v45 = 0,
            v50 = (__m128i)-1LL,
            dirtree_find_entry(&v50, v29, &v44),
            v30 = (__m128)_mm_load_si128(&v50),
            v30.m128_u64[0] == -1)
        && _mm_movehl_ps(a6, v30).m128_u64[0]
        || (v31 = *v29, v47 = 0, v46 = -1, dirtree_resolve_cursor(&v46, v31, &v50), v46 == -1)
        || !v47
        && ((v33 = *v29,
             v51 = (__m128i)-1LL,
             dirtree_get_parent_cursor(&v51, v33, &v50),
             v50 = _mm_load_si128(&v51),
             v34 = *v29,
             v48 = -1,
             v49 = 0,
             dirtree_resolve_cursor(&v48, v34, &v50),
             v48 == -1)
         || !v49) )
      {
LABEL_37:
        v32 = 0;
      }
      else
      {
        v62 = 0;
        v63 = 0;
        dirtree_get_abspath_by_cursor(&v62, *v29, &v50, 0);
        v32 = v62;
      }
      sub_496080(&v62, v27, v32);
      v16 = bookmarks_t_mark(v43, v16, 0, v52, a1[45].m128i_i64[1]);
      v12 = (const char *)a1[45].m128i_i64[1];
      v17 = (*(__int64 (__fastcall **)(_QWORD, const char *))(**(_QWORD **)(v43 + 40) + 8LL))(
              *(_QWORD *)(v43 + 40),
              v12);
      sub_490100(&v62);
      if ( v32 )
        qfree(v32, v12);
    }
    else
    {
      v16 = -1;
      v17 = -1;
    }
    if ( v61 )
      qfree(v61, v12);
    if ( v52 )
    {
      *(_QWORD *)&v53 = 0;
      qfree(v52, v12);
    }
  }
  else
  {
    v17 = -1;
  }
  if ( a2 )
    *(_QWORD *)a2 = v17;
  if ( v56 )
    qfree(v56, v12);
  return v16;
}
