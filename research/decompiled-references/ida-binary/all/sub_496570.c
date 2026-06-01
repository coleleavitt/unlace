unsigned __int64 __fastcall sub_496570(QT::QAbstractScrollArea *this, __int64 a2, __int16 a3)
{
  QT::QAbstractSlider *v6; // rax
  int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // esi
  int v13; // eax
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  int *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 i; // r13
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int32 v26; // r9d
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // r15d
  __int64 v30; // rax
  __m128i v31; // xmm0
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  int v39; // rdx^4
  int v40; // edx
  int v41; // ecx
  int v42; // eax
  __int64 v44; // rax
  const char **v45; // rdx
  const char *v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // r15
  __m128i v49; // xmm1
  double v50; // xmm0_8
  __m128i v51; // xmm1
  __int64 v52; // rdi
  __int64 v53; // rax
  int v54; // [rsp+Ch] [rbp-BCh]
  __m128i v55; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v56; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+30h] [rbp-98h]
  __int64 v58; // [rsp+40h] [rbp-88h] BYREF
  __int64 v59; // [rsp+48h] [rbp-80h]
  int v60; // [rsp+50h] [rbp-78h] BYREF
  int v61; // [rsp+54h] [rbp-74h]
  unsigned __int64 v62; // [rsp+58h] [rbp-70h]
  __int64 v63; // [rsp+60h] [rbp-68h]
  _BYTE ptr[24]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v65; // [rsp+88h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  v54 = QT::QAbstractItemView::verticalScrollMode(this);
  v6 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::verticalScrollBar(this);
  v7 = QT::QAbstractSlider::value(v6);
  QT::QAbstractItemView::currentIndex((QT::QAbstractItemView *)&v60);
  if ( (a3 & 0x40) != 0 )
  {
    if ( v60 < 0 || v61 < 0 || !v63 )
      goto LABEL_11;
    v8 = (*(__int64 (__fastcall **)(QT::QAbstractScrollArea *, int *))(*(_QWORD *)this + 480LL))(this, &v60);
    if ( (int)v9 >= (int)v8 )
    {
      v10 = v8 >> 32;
      v11 = v9 >> 32;
      if ( (int)v11 >= (int)v10 )
      {
        v12 = v11 + 1 - v10;
        if ( v54 )
          v13 = (v7 + (int)v11) / v12;
        else
          v13 = v7 + (int)v11 / v12;
        *(_DWORD *)(a2 + 24) = v13;
      }
    }
  }
  if ( (a3 & 0x80u) != 0 && v60 >= 0 && v61 >= 0 )
  {
    if ( v63 )
    {
      QT::QAbstractItemView::model(this);
      if ( (v61 | v60) >= 0 )
      {
        if ( v63 )
        {
          if ( HIDWORD(v62) == 0xFFFFFFFF )
          {
            v58 = -1;
            v59 = (unsigned int)v62;
            if ( (_DWORD)v62 )
              goto LABEL_11;
          }
          else
          {
            v58 = HIDWORD(v62);
            v59 = (unsigned int)v62;
          }
          v44 = QT::QAbstractItemView::model(this);
          v45 = *(const char ***)(v44 + 216);
          if ( !v45 )
            v45 = *(const char ***)(v44 + 208);
          memset(ptr, 0, sizeof(ptr));
          v46 = *v45;
          dirtree_get_abspath_by_cursor(ptr, *v45, &v58, 1);
          v47 = *(_QWORD *)(a2 + 32);
          v48 = *(_QWORD *)ptr;
          memset(ptr, 0, sizeof(ptr));
          v49 = _mm_loadu_si128((const __m128i *)&ptr[8]);
          if ( v47 )
          {
            *(_QWORD *)(a2 + 40) = 0;
            v55 = v49;
            v50 = qfree(v47, v46);
            v51 = _mm_load_si128(&v55);
            v52 = *(_QWORD *)ptr;
            *(_QWORD *)(a2 + 32) = v48;
            *(__m128i *)(a2 + 40) = v51;
            if ( v52 )
            {
              *(_QWORD *)&ptr[8] = 0;
              qfree(v52, v46, v50);
            }
          }
          else
          {
            *(_QWORD *)(a2 + 32) = v48;
            *(__m128i *)(a2 + 40) = v49;
          }
        }
      }
    }
  }
LABEL_11:
  if ( (a3 & 0x100) != 0 )
  {
    v14 = QT::QAbstractItemView::selectionModel(this);
    QT::QItemSelectionModel::selectedRows((QT::QItemSelectionModel *)ptr, v14);
    v17 = *(int **)ptr;
    if ( !*(_QWORD *)ptr || (int)**(_DWORD **)ptr > 1 )
    {
      sub_3FB980((__m128i *)ptr, 0, 0, 0, v15, v16);
      v17 = *(int **)ptr;
    }
    v18 = *(_QWORD *)&ptr[8];
    v19 = *(_QWORD *)&ptr[8];
    if ( !v17 || *v17 > 1 )
    {
      sub_3FB980((__m128i *)ptr, 0, 0, 0, v15, v16);
      v18 = *(_QWORD *)&ptr[8];
    }
    for ( i = v18 + 24LL * *(_QWORD *)&ptr[16]; i != v19; v19 += 24 )
    {
      v21 = (*(__int64 (__fastcall **)(QT::QAbstractScrollArea *, __int64))(*(_QWORD *)this + 480LL))(this, v19);
      if ( (int)v21 <= (int)v22 )
      {
        v23 = v21 >> 32;
        v24 = v22 >> 32;
        if ( (int)v23 <= (int)v24 )
        {
          v25 = *(_QWORD *)a2;
          v26 = (int)v24 / ((int)v24 + 1 - (int)v23) + v7;
          v27 = *(_QWORD *)(a2 + 8);
          if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v27 + 1) )
          {
            v55.m128i_i32[0] = v26;
            v53 = qvector_reserve(a2, v25, v27 + 1, 4);
            *(_QWORD *)a2 = v53;
            v25 = v53;
            v26 = v55.m128i_i32[0];
            v27 = *(_QWORD *)(a2 + 8);
          }
          *(_DWORD *)(v25 + 4 * v27) = v26;
          ++*(_QWORD *)(a2 + 8);
        }
      }
    }
    if ( *(_QWORD *)ptr && !_InterlockedSub(*(volatile signed __int32 **)ptr, 1u) )
      free(*(void **)ptr);
  }
  QT::QAbstractItemView::rootIndex((QT::QAbstractItemView *)ptr);
  if ( *(int *)ptr >= 0 && *(int *)&ptr[4] >= 0 && *(_QWORD *)&ptr[16] )
  {
    do
    {
      v28 = QT::QAbstractItemView::model(this);
      v29 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v28 + 120LL))(v28, ptr);
      if ( !v29 )
        break;
      v30 = QT::QAbstractItemView::model(this);
      (*(void (__fastcall **)(__m128i *, __int64, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)v30 + 96LL))(
        &v56,
        v30,
        (unsigned int)(v29 - 1),
        0,
        ptr);
      v31 = _mm_loadu_si128(&v56);
      v32 = _mm_cvtsi128_si32(v31);
      *(__m128i *)ptr = v31;
      *(_QWORD *)&ptr[16] = v57;
      if ( (v31.m128i_i32[1] | v32) < 0 )
        goto LABEL_37;
      if ( !v57 )
        goto LABEL_38;
      v33 = QT::QAbstractItemView::model(this);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v33 + 136LL))(v33, ptr) )
        break;
    }
    while ( (unsigned __int8)QT::QTreeView::isExpanded(this, ptr, v34, v35, v36, v37) );
    v32 = *(_DWORD *)ptr;
LABEL_37:
    if ( v32 < 0 )
      return v65 - __readfsqword(0x28u);
LABEL_38:
    if ( *(int *)&ptr[4] >= 0 )
    {
      if ( *(_QWORD *)&ptr[16] )
      {
        v38 = (*(__int64 (__fastcall **)(QT::QAbstractScrollArea *, _BYTE *))(*(_QWORD *)this + 480LL))(this, ptr);
        if ( (int)v38 <= v40 && v39 >= SHIDWORD(v38) )
        {
          v41 = v39 + 1 - HIDWORD(v38);
          if ( v54 )
            v42 = (v7 + v39) / v41 + 1;
          else
            v42 = v7 + v39 / v41 + 1;
          *(_DWORD *)(a2 + 28) = v42;
        }
      }
    }
  }
  return v65 - __readfsqword(0x28u);
}
