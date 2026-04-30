QT::QAbstractScrollArea *__fastcall sub_3D9A40(
        double a1,
        double a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8)
{
  char v8; // al
  QT::QAbstractScrollArea *v9; // rbx
  __int64 v10; // rax
  __int64 *v11; // rbx
  __int64 i; // rbp
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // r14
  __m128i v20; // xmm0
  __m128 v21; // xmm0
  __int64 v22; // rax
  __m128i *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __m128 si128; // xmm0
  __m128i *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __m128 v36; // xmm4
  __m128 v37; // xmm5
  __m128 v38; // xmm0
  __int32 v39; // eax
  __m128i *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __m128 v45; // xmm4
  __m128 v46; // xmm5
  __m128i v47; // xmm0
  const char *v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // edx
  double v53; // xmm0_8
  double v54; // xmm0_8
  __m128i v56; // [rsp+0h] [rbp-108h] BYREF
  __m128i v57; // [rsp+10h] [rbp-F8h] BYREF
  __m128i v58; // [rsp+20h] [rbp-E8h] BYREF
  int v59; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v60; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v61; // [rsp+48h] [rbp-C0h]
  __int128 v62; // [rsp+58h] [rbp-B0h]
  __int128 v63; // [rsp+68h] [rbp-A0h]
  __int64 v64; // [rsp+78h] [rbp-90h]
  __m128i v65; // [rsp+80h] [rbp-88h]
  __m128 v66; // [rsp+90h] [rbp-78h]
  __int64 v67; // [rsp+A0h] [rbp-68h]
  __int128 v68; // [rsp+A8h] [rbp-60h]
  __m128i *v69; // [rsp+B8h] [rbp-50h]
  __int64 v70; // [rsp+C0h] [rbp-48h]
  char v71; // [rsp+C8h] [rbp-40h]
  __int64 v72; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v73; // [rsp+D8h] [rbp-30h]

  v73 = __readfsqword(0x28u);
  dword_8BDE60 = internal_register_place_class(&qword_8D0C70, 2, 0, 930);
  if ( !qword_8D0C80 || (v8 = sub_479090(QT::QCoreApplication::self + 2, qword_8D0C80, 1), v9 = qword_8D0C80, !v8) )
  {
    v10 = qalloc_or_throw(24);
    *(_OWORD *)(v10 + 8) = 0;
    v11 = (__int64 *)v10;
    *(_QWORD *)v10 = 0;
    netnode_check(&qword_8D0C88, "$ watch list", 0, 1);
    for ( i = netnode_supfirst(qword_8D0C88, 65); i != -1; i = netnode_supnext(v13, i, 65) )
    {
      v14 = node2ea(i);
      v15 = *v11;
      v16 = v14;
      v17 = v11[1];
      if ( v11[2] < (unsigned __int64)(v17 + 1) )
      {
        v18 = qvector_reserve(v11, v15, v17 + 1, 8);
        *v11 = v18;
        v15 = v18;
        v17 = v11[1];
      }
      *(_QWORD *)(v15 + 8 * v17) = v16;
      v13 = qword_8D0C88;
      ++v11[1];
    }
    v60 = 0;
    v19 = -1;
    if ( netnode_valobj(qword_8D0C88, &v60, 8) > 0 )
      v19 = v60;
    v60 = 0;
    v64 = 0;
    v66.m128_u64[0] = 0;
    v66.m128_u64[1] = -1;
    v67 = 0;
    v69 = nullptr;
    v70 = 0;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v65 = 0;
    v68 = 0;
    sub_1E8870((__int64)&v57, 1);
    v20 = _mm_load_si128(&v57);
    v71 = 0;
    v65 = v20;
    v21 = (__m128)_mm_load_si128(&v58);
    LODWORD(v67) = v59;
    v72 = 0;
    v66 = v21;
    sub_1E8790((__int64)&v60, 0, 0, 0, *(double *)v21.m128_u64);
    *((_QWORD *)&v63 + 1) = v11;
    v22 = v11[1];
    v56.m128i_i64[0] = (__int64)watchplace_t___vtable;
    v56.m128i_i32[2] = 0x7FFFFFFF;
    v56.m128i_i32[3] = ((_DWORD)v22 == 0) + (_DWORD)v22 - 1;
    v23 = (__m128i *)qalloc(16);
    if ( !v23 )
      sub_22DB40((int)"watchplace", 0, v24, v25, v26, v27, v21, (__m128)0LL, a3, a4, v28, v29, a7, a8, v56.m128i_i8[0]);
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_8D0C40);
    *v23 = (__m128i)si128;
    *((_QWORD *)&v68 + 1) = v23;
    v31 = (__m128i *)qalloc(16);
    if ( !v31 )
      sub_22DB40(
        (int)"watchplace",
        0,
        v32,
        v33,
        v34,
        v35,
        si128,
        (__m128)0LL,
        a3,
        a4,
        v36,
        v37,
        a7,
        a8,
        v56.m128i_i8[0]);
    v38 = (__m128)_mm_load_si128(&v56);
    *v31 = (__m128i)v38;
    v69 = v31;
    v39 = v56.m128i_i32[3];
    v57.m128i_i64[0] = (__int64)watchplace_t___vtable;
    v57.m128i_i32[2] = 0;
    if ( v56.m128i_u32[3] > v19 )
      v39 = v19;
    v57.m128i_i32[3] = v39;
    if ( (_QWORD)v68 )
    {
      *(double *)v38.m128_u64 = qfree(v68, nullptr, v32, v33, v34, v35, *(_OWORD *)&v56, *(_OWORD *)&v57);
      *(_QWORD *)&v68 = 0;
    }
    v40 = (__m128i *)qalloc(16);
    if ( !v40 )
      sub_22DB40((int)"watchplace", 0, v41, v42, v43, v44, v38, (__m128)0LL, a3, a4, v45, v46, a7, a8, v56.m128i_i8[0]);
    v47 = _mm_load_si128(&v57);
    *v40 = v47;
    *(_QWORD *)&v68 = v40;
    v9 = (QT::QAbstractScrollArea *)operator new(0x3E8u);
    sub_3D9980(v9, "Watch List", (int *)&v60);
    (*(void (__fastcall **)(__m128i *, _QWORD *, _QWORD))(*QT::QCoreApplication::self + 144LL))(
      &v57,
      QT::QCoreApplication::self,
      unk_8CA278);
    QT::QWidget::setWindowIcon(v9, (const QT::QIcon *)&v57);
    QT::QIcon::~QIcon((QT::QIcon *)&v57);
    v48 = nullptr;
    qword_8D0C80 = v9;
    v51 = sub_1F3B50((__int64)v9, 0, v49, v50, *(double *)v47.m128i_i64);
    v52 = -1;
    if ( v51 )
    {
      v48 = (const char *)*(unsigned int *)(v51 + 12);
      if ( (unsigned __int64)v48 < *(_QWORD *)(*((_QWORD *)v9 + 91) + 8LL) )
        v52 = *(_DWORD *)(v51 + 12);
    }
    dword_8BDE64 = v52;
    v53 = qfree(*((_QWORD *)&v68 + 1), v48);
    *((_QWORD *)&v68 + 1) = 0;
    v54 = qfree(v69, v48, v53);
    v69 = nullptr;
    if ( (_QWORD)v68 )
      qfree(v68, v48, v54);
  }
  return v9;
}
