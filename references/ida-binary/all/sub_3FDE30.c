__int64 __fastcall sub_3FDE30(QT::QAbstractProxyModel *this, unsigned int a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __m128i si128; // xmm0
  __int64 v13; // rax
  void *v14; // rdx
  void *v15; // rdx
  void *v16; // rdx
  __int64 v17; // rax
  void *v18; // rdx
  void *v19; // rdx
  void *v20; // rdx
  __int64 v21; // rax
  void *v22; // rdx
  void *v23; // rdx
  void *v24; // rdx
  __int64 v25; // rax
  void *v26; // rdx
  void *v27; // rdx
  void *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  void *v33; // rdx
  void *v34; // rdx
  void *v35; // rdx
  unsigned int v36; // ebp
  const QT::QObject *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rbx
  const void *v41; // rdi
  _QWORD *v42; // rax
  __int64 (__fastcall *v43)(__int64); // rdx
  const char *v44; // rsi
  _BYTE v45[32]; // [rsp+40h] [rbp-3E8h] BYREF
  void *ptr[2]; // [rsp+60h] [rbp-3C8h] BYREF
  __int64 v47; // [rsp+70h] [rbp-3B8h]
  _BYTE v48[32]; // [rsp+80h] [rbp-3A8h] BYREF
  void *v49[4]; // [rsp+A0h] [rbp-388h] BYREF
  _BYTE v50[32]; // [rsp+C0h] [rbp-368h] BYREF
  void *v51[4]; // [rsp+E0h] [rbp-348h] BYREF
  _BYTE v52[32]; // [rsp+100h] [rbp-328h] BYREF
  void *v53[4]; // [rsp+120h] [rbp-308h] BYREF
  void *v54[4]; // [rsp+140h] [rbp-2E8h] BYREF
  void *v55[2]; // [rsp+160h] [rbp-2C8h] BYREF
  __int64 v56; // [rsp+170h] [rbp-2B8h]
  void *v57[4]; // [rsp+180h] [rbp-2A8h] BYREF
  void *v58[4]; // [rsp+1A0h] [rbp-288h] BYREF
  void *v59[4]; // [rsp+1C0h] [rbp-268h] BYREF
  void *v60[60]; // [rsp+1E0h] [rbp-248h] BYREF
  _BYTE v61[40]; // [rsp+3C0h] [rbp-68h] BYREF
  unsigned __int64 v62; // [rsp+3E8h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  v4 = QT::QAbstractProxyModel::sourceModel(this);
  (*(void (__fastcall **)(_BYTE *, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v4 + 96LL))(v45, v4, a2, 0, a3);
  v5 = QT::QAbstractProxyModel::sourceModel(this);
  (*(void (__fastcall **)(_BYTE *, __int64, _BYTE *, __int64))(*(_QWORD *)v5 + 144LL))(v61, v5, v45, 18790);
  QT::QVariant::toString((QT::QVariant *)ptr);
  QT::QVariant::~QVariant((QT::QVariant *)v61);
  v6 = QT::QAbstractProxyModel::sourceModel(this);
  (*(void (__fastcall **)(_BYTE *, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v6 + 96LL))(v48, v6, a2, 1, a3);
  v7 = QT::QAbstractProxyModel::sourceModel(this);
  (*(void (__fastcall **)(_BYTE *, __int64, _BYTE *, _QWORD))(*(_QWORD *)v7 + 144LL))(v61, v7, v48, 0);
  QT::QVariant::toString((QT::QVariant *)v49);
  QT::QVariant::~QVariant((QT::QVariant *)v61);
  v8 = QT::QAbstractProxyModel::sourceModel(this);
  (*(void (__fastcall **)(_BYTE *, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v8 + 96LL))(v50, v8, a2, 2, a3);
  v9 = QT::QAbstractProxyModel::sourceModel(this);
  (*(void (__fastcall **)(_BYTE *, __int64, _BYTE *, _QWORD))(*(_QWORD *)v9 + 144LL))(v61, v9, v50, 0);
  QT::QVariant::toString((QT::QVariant *)v51);
  QT::QVariant::~QVariant((QT::QVariant *)v61);
  v10 = QT::QAbstractProxyModel::sourceModel(this);
  (*(void (__fastcall **)(_BYTE *, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v10 + 96LL))(v52, v10, a2, 3, a3);
  v11 = QT::QAbstractProxyModel::sourceModel(this);
  (*(void (__fastcall **)(_BYTE *, __int64, _BYTE *, _QWORD))(*(_QWORD *)v11 + 144LL))(v61, v11, v52, 0);
  QT::QVariant::toString((QT::QVariant *)v53);
  QT::QVariant::~QVariant((QT::QVariant *)v61);
  si128 = _mm_load_si128((const __m128i *)ptr);
  v56 = v47;
  *(__m128i *)v55 = si128;
  if ( si128.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)si128.m128i_i64[0], 1u);
  QT::QString::append(v55, " ", 1);
  v13 = QT::QString::append((QT::QString *)v55, (const QT::QString *)v49);
  v14 = *(void **)v13;
  *(_QWORD *)v13 = 0;
  v57[0] = v14;
  v15 = *(void **)(v13 + 8);
  *(_QWORD *)(v13 + 8) = 0;
  v57[1] = v15;
  v16 = *(void **)(v13 + 16);
  *(_QWORD *)(v13 + 16) = 0;
  v57[2] = v16;
  v17 = QT::QString::append(v57, " ", 1);
  v18 = *(void **)v17;
  *(_QWORD *)v17 = 0;
  v58[0] = v18;
  v19 = *(void **)(v17 + 8);
  *(_QWORD *)(v17 + 8) = 0;
  v58[1] = v19;
  v20 = *(void **)(v17 + 16);
  *(_QWORD *)(v17 + 16) = 0;
  v58[2] = v20;
  v21 = QT::QString::append((QT::QString *)v58, (const QT::QString *)v51);
  v22 = *(void **)v21;
  *(_QWORD *)v21 = 0;
  v59[0] = v22;
  v23 = *(void **)(v21 + 8);
  *(_QWORD *)(v21 + 8) = 0;
  v59[1] = v23;
  v24 = *(void **)(v21 + 16);
  *(_QWORD *)(v21 + 16) = 0;
  v59[2] = v24;
  v25 = QT::QString::append(v59, " ", 1);
  v26 = *(void **)v25;
  *(_QWORD *)v25 = 0;
  v60[0] = v26;
  v27 = *(void **)(v25 + 8);
  *(_QWORD *)(v25 + 8) = 0;
  v60[1] = v27;
  v28 = *(void **)(v25 + 16);
  *(_QWORD *)(v25 + 16) = 0;
  v60[2] = v28;
  v29 = QT::QString::append((QT::QString *)v60, (const QT::QString *)v53);
  v33 = *(void **)v29;
  *(_QWORD *)v29 = 0;
  v54[0] = v33;
  v34 = *(void **)(v29 + 8);
  *(_QWORD *)(v29 + 8) = 0;
  v54[1] = v34;
  v35 = *(void **)(v29 + 16);
  *(_QWORD *)(v29 + 16) = 0;
  v54[2] = v35;
  if ( v60[0] && !_InterlockedSub((volatile signed __int32 *)v60[0], 1u) )
    free(v60[0]);
  if ( v59[0] && !_InterlockedSub((volatile signed __int32 *)v59[0], 1u) )
    free(v59[0]);
  if ( v58[0] && !_InterlockedSub((volatile signed __int32 *)v58[0], 1u) )
    free(v58[0]);
  if ( v57[0] && !_InterlockedSub((volatile signed __int32 *)v57[0], 1u) )
    free(v57[0]);
  if ( v55[0] && !_InterlockedSub((volatile signed __int32 *)v55[0], 1u) )
    free(v55[0]);
  if ( !(unsigned __int8)sub_3FDDB0(
                           (__int64)this,
                           (__int64)v54,
                           *(double *)si128.m128i_i64,
                           (__int64)v35,
                           v30,
                           v31,
                           v32)
    || (v36 = sub_3F2CB0(this, a2, a3), !(_BYTE)v36) )
  {
LABEL_19:
    v36 = 0;
    goto LABEL_20;
  }
  v38 = (const QT::QObject *)QT::QAbstractProxyModel::sourceModel(this);
  v39 = QT::QMetaObject::cast((QT::QMetaObject *)&off_893560, v38);
  v40 = v39;
  if ( v39 )
  {
    v41 = (const void *)QT::QStandardItemModel::itemFromIndex(v39, v45);
    if ( v41 )
    {
      v42 = __dynamic_cast(
              v41,
              (const struct __class_type_info *)&`typeinfo for'QT::QStandardItem,
              (const struct __class_type_info *)&`typeinfo for'xref_tree_item_t,
              0);
      if ( v42 )
      {
        v43 = *(__int64 (__fastcall **)(__int64))(*v42 + 80LL);
        v44 = (const char *)(v43 == sub_3EDDF0 ? v42[2] : v43((__int64)v42));
        if ( v44 != (const char *)-1LL )
        {
          sub_40E9B0(v60, v44);
          if ( (*(_BYTE *)(v40 + 73) || !(unsigned __int8)sub_40B7D0(v60))
            && (*(_BYTE *)(v40 + 74) || !(unsigned __int8)sub_40B7E0(v60) && !(unsigned __int8)sub_40B7F0(v60)) )
          {
            sub_3EFED0((__int64)v60, v44);
            goto LABEL_20;
          }
          sub_3EFED0((__int64)v60, v44);
          goto LABEL_19;
        }
      }
    }
  }
LABEL_20:
  if ( v54[0] && !_InterlockedSub((volatile signed __int32 *)v54[0], 1u) )
    free(v54[0]);
  if ( v53[0] && !_InterlockedSub((volatile signed __int32 *)v53[0], 1u) )
    free(v53[0]);
  if ( v51[0] && !_InterlockedSub((volatile signed __int32 *)v51[0], 1u) )
    free(v51[0]);
  if ( v49[0] && !_InterlockedSub((volatile signed __int32 *)v49[0], 1u) )
    free(v49[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v36;
}
