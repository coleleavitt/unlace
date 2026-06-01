void __fastcall TStructureOffsetsForm::load_offsets_table(__int64 a1, __int64 a2, __int64 *a3)
{
  const char *v4; // rsi
  bool v6; // zf
  __int64 v7; // rdi
  int v9; // eax
  __int64 v10; // rax
  __int64 *v11; // r9
  __int64 *v12; // r12
  __int64 v13; // r8
  __int64 *v14; // r10
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  char *v22; // rbx
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // rsi
  const char *v31; // r12
  QT::QComboBox *v32; // rbp
  size_t v33; // rax
  size_t v34; // rdx
  int v35; // r14d
  char v36[8]; // [rsp+8h] [rbp-80h] BYREF
  void *ptr[4]; // [rsp+10h] [rbp-78h] BYREF
  _BYTE v38[40]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v39; // [rsp+58h] [rbp-30h]

  v4 = &s1;
  v6 = *(_QWORD *)(a2 + 8) == 0;
  v7 = *(_QWORD *)(a1 + 8);
  v39 = __readfsqword(0x28u);
  if ( !v6 )
    v4 = *(const char **)a2;
  v9 = sub_38C820(v7, v4);
  if ( v9 == -1 )
  {
    v28 = operator new(0x18u);
    *(_QWORD *)(v28 + 16) = 0;
    v29 = v28;
    *(_OWORD *)v28 = 0;
    sub_392920(v28, nullptr, a3);
    v30 = v29;
    v31 = &s1;
    v32 = *(QT::QComboBox **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL) + 48LL);
    sub_1C7F30((QT::QVariant *)v38, v30);
    v33 = *(_QWORD *)(a2 + 8);
    LOBYTE(v34) = 0;
    if ( v33 )
    {
      --v33;
      v31 = *(const char **)a2;
      v34 = v33 >> 63;
      if ( !*(_QWORD *)a2 )
        goto LABEL_27;
    }
    else if ( !&s1 )
    {
      goto LABEL_27;
    }
    if ( !(_BYTE)v34 )
    {
LABEL_22:
      QT::QString::fromUtf8(ptr, v33, v31);
      v35 = QT::QComboBox::count(v32);
      QT::QIcon::QIcon((QT::QIcon *)v36);
      QT::QComboBox::insertItem(v32, v35, (const QT::QIcon *)v36, (const QT::QString *)ptr, (const QT::QVariant *)v38);
      QT::QIcon::~QIcon((QT::QIcon *)v36);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      QT::QVariant::~QVariant((QT::QVariant *)v38);
      return;
    }
LABEL_27:
    v33 = 0;
    if ( v31 )
      v33 = strlen(v31);
    goto LABEL_22;
  }
  v10 = sub_38B570(*(_QWORD *)(a1 + 8), v9);
  v11 = *(__int64 **)(v10 + 8);
  v12 = *(__int64 **)v10;
  v13 = v10;
  v14 = *(__int64 **)(v10 + 16);
  v15 = (__int64)v11 - *(_QWORD *)v10;
  v16 = v15 >> 3;
  if ( v15 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v17 = v16 >> 1;
        v18 = &v12[v16 >> 1];
        if ( *(_QWORD *)(*a3 + 8) < *(_QWORD *)(*v18 + 8) )
          break;
        v12 = v18 + 1;
        v16 = v16 - 1 - v17;
        if ( v16 <= 0 )
          goto LABEL_9;
      }
      v16 >>= 1;
    }
    while ( v17 > 0 );
  }
LABEL_9:
  if ( v11 == v14 )
  {
    sub_392920(v13, v12, a3);
  }
  else if ( v11 == v12 )
  {
    *v11 = *a3;
    *a3 = 0;
    *(_QWORD *)(v13 + 8) += 8LL;
  }
  else
  {
    v19 = *(v11 - 1);
    *(v11 - 1) = 0;
    *v11 = v19;
    v20 = *(_QWORD *)(v13 + 8);
    v21 = v20 + 8;
    v22 = (char *)(v20 - 8);
    *(_QWORD *)(v13 + 8) = v21;
    v23 = (v22 - (char *)v12) >> 3;
    if ( v22 - (char *)v12 > 0 )
    {
      do
      {
        v24 = *((_QWORD *)v22 - 1);
        v25 = *(_QWORD *)v22;
        v22 -= 8;
        *(_QWORD *)v22 = 0;
        *((_QWORD *)v22 + 1) = v24;
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
        --v23;
      }
      while ( v23 );
    }
    v26 = *a3;
    *a3 = 0;
    v27 = *v12;
    *v12 = v26;
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
  }
}
