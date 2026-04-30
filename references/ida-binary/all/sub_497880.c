unsigned __int64 __fastcall sub_497880(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rsi
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // rbp
  void *v19; // rax
  void *v20; // rax
  void *v21; // rax
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // r12
  __int64 v25; // r14
  __int64 v26; // rbp
  void *v27; // rax
  size_t n; // [rsp+10h] [rbp-78h]
  size_t na; // [rsp+10h] [rbp-78h]
  __int64 v31; // [rsp+20h] [rbp-68h] BYREF
  __int64 v32; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v33[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v3 = nullptr;
  v34 = __readfsqword(0x28u);
  QT::QAbstractItemModel::QAbstractItemModel((QT::QAbstractItemModel *)a1, nullptr);
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = &dirtree_item_model_base_t___vtable;
  v5 = *(_QWORD *)(a3 + 8);
  if ( v5 )
  {
    v14 = qalloc_or_throw(24 * v5);
    *(_QWORD *)(a1 + 24) = v14;
    v15 = v14;
    v16 = 0;
    *(_QWORD *)(a1 + 40) = v5;
    while ( 1 )
    {
      v17 = 24 * v16 + v15;
      v18 = *(_QWORD *)a3 + 24 * v16;
      *(_QWORD *)v17 = 0;
      *(_OWORD *)(v17 + 8) = 0;
      if ( *(_QWORD *)(v18 + 8) )
      {
        n = *(_QWORD *)(v18 + 8);
        v19 = (void *)qalloc_or_throw(n);
        *(_QWORD *)v17 = v19;
        ++v16;
        *(_QWORD *)(v17 + 16) = n;
        v3 = *(const void **)v18;
        memcpy(v19, *(const void **)v18, n);
        *(_QWORD *)(v17 + 8) = n;
        if ( v5 == v16 )
        {
LABEL_14:
          *(_QWORD *)(a1 + 32) = v5;
          break;
        }
      }
      else if ( v5 == ++v16 )
      {
        goto LABEL_14;
      }
      v15 = *(_QWORD *)(a1 + 24);
    }
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  v6 = *(_QWORD *)(a3 + 32);
  if ( !v6 )
    goto LABEL_3;
  v22 = qalloc_or_throw(24 * v6);
  *(_QWORD *)(a1 + 48) = v22;
  v23 = v22;
  v24 = 0;
  *(_QWORD *)(a1 + 64) = v6;
  while ( 1 )
  {
    v25 = 24 * v24 + v23;
    v26 = *(_QWORD *)(a3 + 24) + 24 * v24;
    *(_QWORD *)v25 = 0;
    *(_OWORD *)(v25 + 8) = 0;
    if ( *(_QWORD *)(v26 + 8) )
      break;
    if ( v6 == ++v24 )
      goto LABEL_20;
LABEL_17:
    v23 = *(_QWORD *)(a1 + 48);
  }
  na = *(_QWORD *)(v26 + 8);
  v27 = (void *)qalloc_or_throw(na);
  *(_QWORD *)v25 = v27;
  ++v24;
  *(_QWORD *)(v25 + 16) = na;
  v3 = *(const void **)v26;
  memcpy(v27, *(const void **)v26, na);
  *(_QWORD *)(v25 + 8) = na;
  if ( v6 != v24 )
    goto LABEL_17;
LABEL_20:
  *(_QWORD *)(a1 + 56) = v6;
LABEL_3:
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  v7 = *(_QWORD *)(a3 + 56);
  if ( v7 )
  {
    v21 = (void *)qalloc_or_throw(8 * v7);
    *(_QWORD *)(a1 + 72) = v21;
    v3 = *(const void **)(a3 + 48);
    *(_QWORD *)(a1 + 88) = v7;
    memcpy(v21, v3, 8 * v7);
    *(_QWORD *)(a1 + 80) = v7;
  }
  *(_QWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  v8 = *(_QWORD *)(a3 + 80);
  if ( v8 )
  {
    v20 = (void *)qalloc_or_throw(4 * v8);
    *(_QWORD *)(a1 + 96) = v20;
    v3 = *(const void **)(a3 + 72);
    *(_QWORD *)(a1 + 112) = v8;
    memcpy(v20, v3, 4 * v8);
    *(_QWORD *)(a1 + 104) = v8;
  }
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a3 + 96);
  QT::QIcon::QIcon((QT::QIcon *)(a1 + 128));
  *(_QWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_BYTE *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = a2;
  *(_QWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 184) = -1;
  if ( !a2 )
  {
    if ( !under_debugger )
      interr(40792, v3, v9, v10, NAN);
    BUG();
  }
  QT::QFileIconProvider::QFileIconProvider((QT::QFileIconProvider *)v33);
  QT::QFileIconProvider::icon(&v31, v33, 5);
  v11 = v31;
  v12 = *(_QWORD *)(a1 + 128);
  v31 = 0;
  *(_QWORD *)(a1 + 128) = v11;
  v32 = v12;
  QT::QIcon::~QIcon((QT::QIcon *)&v32);
  QT::QIcon::~QIcon((QT::QIcon *)&v31);
  QT::QFileIconProvider::~QFileIconProvider((QT::QFileIconProvider *)v33);
  return v34 - __readfsqword(0x28u);
}
