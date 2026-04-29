unsigned __int64 __fastcall sub_31ED0(__int64 a1)
{
  int isChecked; // ebp
  int v2; // ebx
  int v3; // ebx
  int v4; // ebx
  int v5; // ebp
  _QWORD *v6; // rax
  void *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r13
  int v16; // ebp
  __int64 v17; // r12
  volatile signed __int32 *v18; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rbx
  volatile signed __int32 *v23; // rax
  __int64 v24; // rax
  volatile signed __int32 *v25; // r15
  volatile signed __int32 *v26; // rax
  __int64 v27; // rax
  _QWORD **v28; // r13
  void *v29; // [rsp+8h] [rbp-80h]
  void *v30[4]; // [rsp+10h] [rbp-78h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int64 v32; // [rsp+38h] [rbp-50h]
  __int64 v33; // [rsp+40h] [rbp-48h]
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  isChecked = (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(a1 + 56));
  v2 = (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(a1 + 64));
  v3 = (4 * (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(a1 + 72))) | (2 * v2);
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 112LL) = isChecked
                                            | v3
                                            | (8
                                             * (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(a1 + 80)));
  v4 = (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(a1 + 88));
  v5 = (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(a1 + 96));
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 108LL) = v4
                                            | (2 * v5)
                                            | (4
                                             * (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(a1 + 104)));
  QT::QLineEdit::text((QT::QLineEdit *)&ptr);
  v6 = *(_QWORD **)(a1 + 40);
  v7 = (void *)v6[10];
  v6[10] = ptr;
  ptr = v7;
  v8 = v6[11];
  v6[11] = v32;
  v9 = v33;
  v32 = v8;
  v10 = v6[12];
  v6[12] = v33;
  v33 = v10;
  if ( v7 && !_InterlockedSub((volatile signed __int32 *)v7, 1u) )
    free(ptr);
  v11 = *(_QWORD *)(a1 + 40);
  *(_BYTE *)(v11 + 116) = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(a1 + 120));
  sub_20A10(*(_QWORD *)(a1 + 40));
  v12 = *(_QWORD *)(a1 + 40);
  if ( *(_QWORD *)(v12 + 64) )
  {
    sub_319F0((_QWORD *)(v12 + 64));
  }
  else
  {
    v21 = operator new(0x38u);
    *(_DWORD *)v21 = 0;
    v22 = v21;
    v21 += 16;
    *(_DWORD *)v21 = 0;
    *(_QWORD *)(v21 + 8) = 0;
    *(_QWORD *)(v22 + 32) = v21;
    *(_QWORD *)(v22 + 40) = v21;
    *(_QWORD *)(v22 + 48) = 0;
    v23 = *(volatile signed __int32 **)(v12 + 64);
    if ( v23 )
    {
      if ( !_InterlockedSub(v23, 1u) )
      {
        v28 = *(_QWORD ***)(v12 + 64);
        if ( v28 )
        {
          sub_2DFA0(v28[3]);
          v9 = 56;
          operator delete(v28, 0x38u);
        }
      }
    }
    *(_QWORD *)(v12 + 64) = v22;
    if ( !v22 )
    {
      v14 = 64;
      goto LABEL_24;
    }
    _InterlockedAdd((volatile signed __int32 *)v22, 1u);
  }
  v13 = *(_QWORD *)(v12 + 64);
  v14 = *(_QWORD *)(v13 + 32);
  if ( v13 )
  {
    sub_319F0((_QWORD *)(v12 + 64));
    v15 = *(_QWORD *)(v12 + 64) + 16LL;
    goto LABEL_8;
  }
LABEL_24:
  v24 = operator new(0x38u);
  v15 = v24 + 16;
  *(_DWORD *)v24 = 0;
  v25 = (volatile signed __int32 *)v24;
  *(_DWORD *)(v24 + 16) = 0;
  *(_QWORD *)(v24 + 24) = 0;
  *(_QWORD *)(v24 + 32) = v24 + 16;
  *(_QWORD *)(v24 + 40) = v24 + 16;
  *(_QWORD *)(v24 + 48) = 0;
  v26 = *(volatile signed __int32 **)(v12 + 64);
  if ( v26 )
  {
    if ( !_InterlockedSub(v26, 1u) )
    {
      v27 = *(_QWORD *)(v12 + 64);
      if ( v27 )
      {
        v29 = *(void **)(v12 + 64);
        sub_2DFA0(*(_QWORD **)(v27 + 24));
        v9 = 56;
        operator delete(v29, 0x38u);
      }
    }
  }
  *(_QWORD *)(v12 + 64) = v25;
  if ( v25 )
  {
    _InterlockedAdd(v25, 1u);
    v15 = *(_QWORD *)(v12 + 64) + 16LL;
  }
LABEL_8:
  if ( v14 == v15 )
    goto LABEL_18;
  v16 = 0;
  do
  {
    v16 += (unsigned __int8)QT::QGraphicsItem::isVisible(*(QT::QGraphicsItem **)(v14 + 40)) ^ 1;
    v14 = std::_Rb_tree_increment(v14, v9);
  }
  while ( v15 != v14 );
  if ( !v16 )
  {
LABEL_18:
    v20 = *(_QWORD *)(a1 + 128);
    QT::QString::fromUtf8(&ptr, 0, "");
    QT::QLabel::setText(v20, &ptr);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
  }
  else
  {
    v17 = *(_QWORD *)(a1 + 128);
    QT::QString::fromUtf8(v30, 17, "%1 nodes filtered");
    QT::QString::arg(&ptr, v30, v16, 0, 10, 32);
    QT::QLabel::setText(v17, &ptr);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    {
      free(ptr);
      v18 = (volatile signed __int32 *)v30[0];
      if ( !v30[0] )
        return v34 - __readfsqword(0x28u);
    }
    else
    {
      v18 = (volatile signed __int32 *)v30[0];
      if ( !v30[0] )
        return v34 - __readfsqword(0x28u);
    }
    if ( !_InterlockedSub(v18, 1u) )
      free(v30[0]);
  }
  return v34 - __readfsqword(0x28u);
}
