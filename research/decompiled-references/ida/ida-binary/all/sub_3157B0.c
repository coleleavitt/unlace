unsigned __int64 __fastcall sub_3157B0(QT::QObject *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbp
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rdi
  int *v12; // rsi
  QT::QWidget *v13; // rbp
  __int64 v14; // r8
  __int64 v15; // r9
  volatile signed __int32 *v16; // rax
  QT::QAction *v17; // r14
  __int64 v18; // rax
  QT::QAction *v19; // rbx
  _QWORD *v20; // rdx
  __int64 (__fastcall *v21)(__int64); // rax
  _QWORD *v22; // rdi
  QT::QAction *v23; // r14
  __int64 v24; // r15
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r9
  int *v30; // rax
  _QWORD *v32; // rdx
  __int64 (__fastcall *v33)(__int64); // rax
  _QWORD *v34; // rdi
  __int64 v35; // r14
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r9
  int *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __m128i v44; // xmm0
  void *v45; // rdi
  __m128i ptr; // [rsp+10h] [rbp-58h] BYREF
  __int64 v47; // [rsp+20h] [rbp-48h]
  unsigned __int64 v48; // [rsp+28h] [rbp-40h]

  v6 = *((_QWORD **)a1 + 44);
  v48 = __readfsqword(0x28u);
  v8 = v6[7];
  if ( (int)v8 > 0 )
  {
    v9 = 0;
    v10 = 8LL * (unsigned int)(v8 - 1) + 8;
    do
    {
      v11 = *(_QWORD *)(v6[6] + v9);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11);
      v9 += 8;
    }
    while ( v9 != v10 );
    v8 = v6[7];
  }
  if ( v8 )
  {
    v41 = v6[5];
    v42 = 0;
    if ( v41 )
    {
      if ( *(int *)v41 <= 1 )
      {
        v6[7] = 0;
        goto LABEL_8;
      }
      v42 = *(_QWORD *)(v41 + 8);
    }
    v43 = QT::QArrayData::allocate(&ptr, 8, 16, v42, 1, a6);
    v44 = _mm_loadl_epi64(&ptr);
    v45 = (void *)v6[5];
    v6[7] = 0;
    *(__m128i *)(v6 + 5) = _mm_unpacklo_epi64(v44, (__m128i)(unsigned __int64)v43);
    if ( v45 && !_InterlockedSub((volatile signed __int32 *)v45, 1u) )
      free(v45);
  }
LABEL_8:
  v12 = (int *)sub_53DC50(a1, "File");
  v13 = (QT::QWidget *)v12;
  QT::QWidget::actions((QT::QWidget *)&ptr);
  v16 = (volatile signed __int32 *)ptr.m128i_i64[0];
  if ( !ptr.m128i_i64[0] || *(int *)ptr.m128i_i64[0] > 1 )
  {
    v12 = nullptr;
    sub_1821F0((__int64)&ptr, 0, 0, 0, v14, v15);
    v16 = (volatile signed __int32 *)ptr.m128i_i64[0];
  }
  v17 = *(QT::QAction **)(ptr.m128i_i64[1] + 8 * v47 - 8);
  if ( v16 && !_InterlockedSub(v16, 1u) )
    free((void *)ptr.m128i_i64[0]);
  v18 = sub_5313F0(unk_8C9938);
  v19 = (QT::QAction *)v18;
  if ( v18 )
  {
    if ( v17 == *(QT::QAction **)(v18 + 192) )
    {
      v32 = QT::QCoreApplication::self + 2;
      v33 = *(__int64 (__fastcall **)(__int64))(QT::QCoreApplication::self[2] + 88LL);
      if ( v33 == IDAApplication__::vfunc_11 )
        v34 = QT::QCoreApplication::self + 87;
      else
        v34 = (_QWORD *)((__int64 (__fastcall *)(_QWORD *, int *))v33)(QT::QCoreApplication::self + 2, v12);
      v19 = (QT::QAction *)sub_531DA0(v34, v12, v32);
      QT::QWidget::insertAction(v13, v17, v19);
      v35 = *((_QWORD *)a1 + 44);
      ptr.m128i_i64[0] = (__int64)v19;
      v12 = *(int **)(v35 + 56);
      sub_1825D0((int **)(v35 + 40), v12, ptr.m128i_i64, v36, v37, v38);
      v40 = *(int **)(v35 + 40);
      if ( !v40 || *v40 > 1 )
      {
        v12 = nullptr;
        sub_1821F0(v35 + 40, 0, 0, 0, (__int64)&QT::QCoreApplication::self, v39);
      }
    }
    else
    {
      v19 = nullptr;
    }
  }
  v20 = QT::QCoreApplication::self + 2;
  v21 = *(__int64 (__fastcall **)(__int64))(QT::QCoreApplication::self[2] + 88LL);
  if ( v21 == IDAApplication__::vfunc_11 )
    v22 = QT::QCoreApplication::self + 87;
  else
    v22 = (_QWORD *)((__int64 (__fastcall *)(_QWORD *, int *))v21)(QT::QCoreApplication::self + 2, v12);
  v23 = (QT::QAction *)sub_531DA0(v22, v12, v20);
  QT::QWidget::insertAction(v13, v19, v23);
  v24 = *((_QWORD *)a1 + 44);
  ptr.m128i_i64[0] = (__int64)v23;
  sub_1825D0((int **)(v24 + 40), *(int **)(v24 + 56), ptr.m128i_i64, v25, v26, v27);
  v30 = *(int **)(v24 + 40);
  if ( !v30 || *v30 > 1 )
    sub_1821F0(v24 + 40, 0, 0, 0, v28, v29);
  return sub_315380(a1, v13, v19, 1);
}
