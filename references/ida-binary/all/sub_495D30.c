__int64 __fastcall sub_495D30(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  QT::QAbstractItemView *v9; // rbp
  _QWORD **v10; // r13
  __int64 v11; // rax
  _QWORD *v12; // r14
  const char *v13; // rsi
  char v14; // r12
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  const char *v28; // rsi
  __int64 (__fastcall *v29)(__int64, __int64, __int64, __int64, unsigned int, __m128, __m128, __m128, __m128, double, double, __m128, __m128, __int64, char); // rax
  unsigned __int8 v30; // al
  unsigned int v31; // ebx
  unsigned __int8 v33; // al
  __int64 v34; // rsi
  __m128i v35; // xmm0
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __m128 v42; // xmm4
  __m128 v43; // xmm5
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __m128 v48; // xmm4
  __m128 v49; // xmm5
  char v50; // [rsp+0h] [rbp-B8h]
  __m128i v51; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v52; // [rsp+20h] [rbp-98h] BYREF
  __int64 v53; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v54; // [rsp+38h] [rbp-80h]
  __int64 v55; // [rsp+50h] [rbp-68h] BYREF
  __int128 v56; // [rsp+58h] [rbp-60h]
  __m128i v57; // [rsp+68h] [rbp-50h]
  unsigned __int64 v58; // [rsp+78h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  v9 = *(QT::QAbstractItemView **)(a1 + 328);
  if ( !v9 )
    return 0;
  v10 = (_QWORD **)QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a1 + 328));
  v11 = QT::QAbstractItemView::model(v9);
  v12 = *(_QWORD **)(v11 + 216);
  if ( !v12 )
    v12 = *(_QWORD **)(v11 + 208);
  v13 = (const char *)v9;
  v14 = sub_487D60(v9, a1);
  sub_495B00((__int64)&v53, v9, v14, v15, v16, v17, *(double *)a2.m128_u64, a3, a4, a5, v18, v19, a8, a9);
  if ( v54 <= 1 )
  {
    v31 = 1;
  }
  else
  {
    v20 = v53;
    v21 = *v12;
    v55 = -1;
    LOBYTE(v56) = 0;
    dirtree_resolve_path(&v55, v21, v53, *(double *)a2.m128_u64);
    if ( v55 == -1 )
    {
      if ( v14 )
      {
        v55 = 0;
        v28 = *(const char **)(a1 + 200);
        v56 = 0;
        v29 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int, __m128, __m128, __m128, __m128, double, double, __m128, __m128, __int64, char))(*v10)[58];
        if ( v29 == sub_489F80 )
        {
          v30 = dirtree_bulk_move(*v10[26], v28, v20, 0xFFFFFFFFLL, &v55, 0);
          if ( v30 )
          {
            v28 = (const char *)dirtree_errstr(v30);
            sub_169700(
              (int)"Failed move operation: %s\n",
              (__int64)v28,
              v44,
              v45,
              v46,
              v47,
              (__m128)0LL,
              a3,
              a4,
              a5,
              v48,
              v49,
              a8,
              a9,
              v50);
          }
        }
        else
        {
          ((void (__fastcall *)(_QWORD **, const char *, __int64, __int64 *, __int64, _QWORD))v29)(
            v10,
            v28,
            v20,
            &v55,
            -1,
            0);
        }
        if ( v55 )
        {
          *(_QWORD *)&v56 = 0;
          qfree(v55, v28);
        }
      }
      else
      {
        v33 = dirtree_mkdir(*v12, v20);
        if ( v33 )
        {
          v38 = dirtree_errstr(v33);
          v28 = (const char *)v20;
          sub_169700(
            (int)"Cannot create folder \"%s\": %s\n",
            v20,
            v38,
            v39,
            v40,
            v41,
            a2,
            a3,
            a4,
            a5,
            v42,
            v43,
            a8,
            a9,
            v50);
          v31 = 0;
LABEL_13:
          if ( v53 )
          {
            v54 = 0;
            qfree(v53, v28);
          }
          return v31;
        }
        v55 = 0;
        v56 = 0;
        v57 = (__m128i)-1LL;
        v34 = *v12;
        v52 = (__m128i)-1LL;
        dirtree_make_cursor(&v52, v34, v20);
        v35 = _mm_load_si128(&v52);
        v36 = v56;
        v37 = v55;
        v57 = v35;
        if ( *((_QWORD *)&v56 + 1) < (unsigned __int64)(v56 + 1) )
        {
          v51 = v35;
          v55 = qvector_reserve(&v55, v55, v56 + 1, 16);
          v36 = v56;
          v37 = v55;
          v35 = _mm_load_si128(&v51);
        }
        *(__m128i *)(v37 + 16 * v36) = v35;
        v28 = (const char *)&v55;
        *(_QWORD *)&v56 = v56 + 1;
        (*(void (__fastcall **)(QT::QAbstractItemView *, __int64 *, _QWORD, __int64, __int64))(*(_QWORD *)v9 + 792LL))(
          v9,
          &v55,
          0,
          7,
          1);
        if ( v55 )
        {
          *(_QWORD *)&v56 = 0;
          qfree(v55, (const char *)&v55);
        }
      }
      v31 = 1;
      goto LABEL_13;
    }
    v13 = (const char *)v20;
    sub_169700((int)"Directory \"%s\" already exists\n", v20, v22, v23, v24, v25, a2, a3, a4, a5, v26, v27, a8, a9, v50);
    v31 = 0;
  }
  if ( v53 )
  {
    v54 = 0;
    qfree(v53, v13);
  }
  return v31;
}
