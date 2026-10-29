__int64 __fastcall sub_3F6450(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  void (__fastcall *v5)(__m128i *, __int64, _QWORD, _QWORD, __m128i *); // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int8 v8; // dl
  unsigned __int8 v9; // cl
  _QWORD *v10; // rax
  unsigned __int64 v11; // rdx
  QT::QStandardItem *v12; // rax
  QT::QStandardItem *v13; // r12
  unsigned int v14; // r12d
  __int64 v15; // rax
  unsigned __int8 v16; // dl
  __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rsi
  void (__fastcall *v20)(__m128i *, __int64, __m128i *); // r8
  __int64 v21; // rdx
  __m128i v22; // xmm0
  __int64 *v25; // rax
  void *v26; // rdi
  int v27; // eax
  volatile signed __int32 *v28; // r9
  void *ptr; // [rsp+0h] [rbp-E8h]
  unsigned __int8 ptra; // [rsp+0h] [rbp-E8h]
  volatile signed __int32 *ptrb; // [rsp+0h] [rbp-E8h]
  int ptrc; // [rsp+0h] [rbp-E8h]
  int v33; // [rsp+Ch] [rbp-DCh]
  __int64 v34; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v35; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v36; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v37; // [rsp+40h] [rbp-A8h]
  __m128i v38; // [rsp+50h] [rbp-98h] BYREF
  __int64 v39; // [rsp+60h] [rbp-88h]
  __m128i v40; // [rsp+70h] [rbp-78h] BYREF
  __int64 v41; // [rsp+80h] [rbp-68h]
  __m128i v42; // [rsp+90h] [rbp-58h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v44; // [rsp+A8h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 8) != *(_QWORD *)a2 )
  {
    v3 = *(_QWORD *)(a1 + 112);
    v5 = *(void (__fastcall **)(__m128i *, __int64, _QWORD, _QWORD, __m128i *))(*(_QWORD *)v3 + 96LL);
    v42 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
    v43 = 0;
    v5(&v38, v3, 0, 0, &v42);
    if ( (v38.m128i_i32[0] | v38.m128i_i32[1]) >= 0 )
    {
      if ( v39 )
      {
        v6 = QT::QStandardItemModel::itemFromIndex(*(_QWORD *)(a1 + 112), &v38);
        if ( v6 )
        {
          v7 = sub_3F2920(v6);
          v9 = v8;
          v36 = v7;
          if ( v8 )
          {
            v10 = *(_QWORD **)a2;
            if ( v36 == **(_QWORD **)a2 )
            {
              v11 = *(_QWORD *)(a2 + 8) - (_QWORD)v10;
              if ( v11 == 8 )
              {
                ptra = v9;
                (*(void (__fastcall **)(__m128i *, _QWORD, __m128i *))(**(_QWORD **)(a1 + 120) + 408LL))(
                  &v42,
                  *(_QWORD *)(a1 + 120),
                  &v38);
                if ( (v42.m128i_i32[1] | v42.m128i_i32[0]) >= 0 )
                {
LABEL_39:
                  if ( v43 )
                  {
                    QT::QAbstractItemView::setCurrentIndex(*(_QWORD *)(a1 + 104), &v42);
                    (*(void (__fastcall **)(_QWORD, __m128i *, _QWORD))(**(_QWORD **)(a1 + 104) + 488LL))(
                      *(_QWORD *)(a1 + 104),
                      &v42,
                      0);
                    return ptra;
                  }
                }
              }
              else
              {
                v35 = 1;
                if ( v11 > 8 )
                {
                  do
                  {
                    v34 = v10[v35];
                    v12 = (QT::QStandardItem *)QT::QStandardItemModel::itemFromIndex(*(_QWORD *)(a1 + 112), &v38);
                    v13 = v12;
                    if ( !v12 )
                      break;
                    v33 = QT::QStandardItem::rowCount(v12);
                    if ( v33 == 1 )
                    {
                      (*(void (__fastcall **)(__m128i *, _QWORD, _QWORD, _QWORD, __m128i *))(**(_QWORD **)(a1 + 112)
                                                                                           + 96LL))(
                        &v40,
                        *(_QWORD *)(a1 + 112),
                        0,
                        0,
                        &v38);
                      v25 = (__int64 *)QT::QStandardItemModel::itemFromIndex(*(_QWORD *)(a1 + 112), &v40);
                      if ( !v25 )
                        goto LABEL_12;
                      sub_3F6130(&v42, v25);
                      v26 = (void *)v42.m128i_i64[1];
                      if ( !v42.m128i_i64[1] )
                        v26 = &QT::QString::_empty;
                      ptrb = (volatile signed __int32 *)v42.m128i_i64[0];
                      v27 = QT::QString::compare_helper(v26, v43, "Loading...", 10, 1);
                      v28 = ptrb;
                      if ( ptrb && !_InterlockedSub(ptrb, 1u) )
                      {
                        ptrc = v27;
                        free((void *)v28);
                        v27 = ptrc;
                      }
                      if ( v27 )
                        goto LABEL_12;
                      if ( (v38.m128i_i32[1] | v38.m128i_i32[0]) >= 0 && v39 )
                        sub_3F62A0(*(QT::QStandardItem **)(a1 + 112), (__int64)&v38);
                      v33 = QT::QStandardItem::rowCount(v13);
                    }
                    if ( v33 <= 0 )
                      break;
LABEL_12:
                    v14 = 0;
                    while ( 1 )
                    {
                      (*(void (__fastcall **)(__m128i *, _QWORD, _QWORD, _QWORD, __m128i *))(**(_QWORD **)(a1 + 112)
                                                                                           + 96LL))(
                        &v40,
                        *(_QWORD *)(a1 + 112),
                        v14,
                        0,
                        &v38);
                      v15 = QT::QStandardItemModel::itemFromIndex(*(_QWORD *)(a1 + 112), &v40);
                      if ( v15 )
                      {
                        ptr = (void *)v15;
                        v37 = sub_3F2920(v15);
                        if ( v16 )
                        {
                          v17 = (__int64)ptr;
                          if ( v37 == v34 )
                          {
                            ptra = v16;
                            v18 = sub_3F2A90(v17);
                            if ( !BYTE4(v18) || (unsigned int)(v18 - 1) > 1 || *(_DWORD *)(a2 + 24) == (_DWORD)v18 )
                              break;
                          }
                        }
                      }
                      if ( ++v14 == v33 )
                        return 0;
                    }
                    v19 = *(_QWORD *)(a1 + 120);
                    v20 = *(void (__fastcall **)(__m128i *, __int64, __m128i *))(*(_QWORD *)v19 + 408LL);
                    if ( ((__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3) - 1 == v35 )
                    {
                      v20(&v42, v19, &v40);
                      if ( (v42.m128i_i32[1] | v42.m128i_i32[0]) >= 0 )
                        goto LABEL_39;
                      break;
                    }
                    ((void (__fastcall *)(__m128i *, __int64, __m128i *, _QWORD))v20)(&v42, v19, &v38, ptra);
                    if ( (v42.m128i_i32[1] | v42.m128i_i32[0]) >= 0 && v43 )
                      QT::QTreeView::expand(*(_QWORD *)(a1 + 104), &v42);
                    v21 = *(_QWORD *)(a2 + 8);
                    ++v35;
                    v22 = _mm_load_si128(&v40);
                    v39 = v41;
                    v10 = *(_QWORD **)a2;
                    v38 = v22;
                  }
                  while ( v35 < (v21 - (__int64)v10) >> 3 );
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
