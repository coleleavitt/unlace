void __fastcall sub_322E0(int a1, _QWORD *a2, double a3, __m128i a4)
{
  __m128i *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r12
  QT::QGraphicsItem *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rbx
  volatile signed __int32 *v16; // rax
  __int64 v17; // rax
  volatile signed __int32 *v18; // r15
  volatile signed __int32 *v19; // rax
  __int64 v20; // rax
  _QWORD **v21; // r12
  void *v22; // [rsp+20h] [rbp-D0h]
  void *ptr[4]; // [rsp+30h] [rbp-C0h] BYREF
  __m128i v25; // [rsp+50h] [rbp-A0h] BYREF
  __m128i v26; // [rsp+60h] [rbp-90h] BYREF
  __m128i v27; // [rsp+70h] [rbp-80h] BYREF
  __m128i v28; // [rsp+80h] [rbp-70h] BYREF
  _BYTE v29[40]; // [rsp+90h] [rbp-60h] BYREF
  unsigned __int64 v30; // [rsp+B8h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( a1 != 1 )
      return;
    v4 = (__m128i *)a2[2];
    QT::QLineEdit::text((QT::QLineEdit *)ptr);
    v25 = 0;
    v26 = 0;
    if ( !ptr[2] )
    {
LABEL_17:
      sub_2F360(*(__m128i **)(a2[2] + 48LL), (__int64)v4, v5, v6, v7, v8, _mm_load_si128(&v26), a4);
      QT::QWidget::setFocus(*(_QWORD *)(a2[2] + 48LL), 7);
      if ( ptr[0] )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
      }
      return;
    }
    v9 = *(_QWORD *)(a2[2] + 40LL);
    if ( *(_QWORD *)(v9 + 64) )
    {
      sub_319F0((_QWORD *)(v9 + 64));
    }
    else
    {
      v14 = operator new(0x38u);
      *(_DWORD *)v14 = 0;
      v15 = v14;
      v14 += 16;
      *(_DWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 0;
      *(_QWORD *)(v15 + 32) = v14;
      *(_QWORD *)(v15 + 40) = v14;
      *(_QWORD *)(v15 + 48) = 0;
      v16 = *(volatile signed __int32 **)(v9 + 64);
      if ( v16 )
      {
        if ( !_InterlockedSub(v16, 1u) )
        {
          v21 = *(_QWORD ***)(v9 + 64);
          if ( v21 )
          {
            sub_2DFA0(v21[3]);
            v4 = (__m128i *)&word_38;
            operator delete(v21, 0x38u);
          }
        }
      }
      *(_QWORD *)(v9 + 64) = v15;
      if ( !v15 )
      {
        v11 = 64;
        goto LABEL_25;
      }
      _InterlockedAdd((volatile signed __int32 *)v15, 1u);
    }
    v10 = *(_QWORD *)(v9 + 64);
    v11 = *(_QWORD *)(v10 + 32);
    if ( v10 )
    {
      sub_319F0((_QWORD *)(v9 + 64));
      goto LABEL_9;
    }
LABEL_25:
    v17 = operator new(0x38u);
    v12 = v17 + 16;
    *(_DWORD *)v17 = 0;
    v18 = (volatile signed __int32 *)v17;
    *(_DWORD *)(v17 + 16) = 0;
    *(_QWORD *)(v17 + 24) = 0;
    *(_QWORD *)(v17 + 32) = v17 + 16;
    *(_QWORD *)(v17 + 40) = v17 + 16;
    *(_QWORD *)(v17 + 48) = 0;
    v19 = *(volatile signed __int32 **)(v9 + 64);
    if ( v19 )
    {
      if ( !_InterlockedSub(v19, 1u) )
      {
        v20 = *(_QWORD *)(v9 + 64);
        if ( v20 )
        {
          v22 = *(void **)(v9 + 64);
          sub_2DFA0(*(_QWORD **)(v20 + 24));
          v4 = (__m128i *)&word_38;
          operator delete(v22, 0x38u);
        }
      }
    }
    *(_QWORD *)(v9 + 64) = v18;
    if ( !v18 )
    {
LABEL_10:
      if ( v12 != v11 )
      {
        while ( 1 )
        {
          v13 = *(QT::QGraphicsItem **)(v11 + 40);
          if ( !(unsigned __int8)QT::QGraphicsItem::isVisible(v13) )
            goto LABEL_13;
          if ( QT::QString::indexOf((char *)v13 + 64, ptr, 0, 1) == -1 )
          {
            v4 = nullptr;
            QT::QGraphicsItem::setSelected(v13, 0);
            v11 = std::_Rb_tree_increment(v11, 0);
            if ( v12 == v11 )
              goto LABEL_17;
          }
          else
          {
            QT::QGraphicsItem::setSelected(v13, 1);
            QT::QGraphicsItem::sceneBoundingRect((QT::QGraphicsItem *)v29);
            v4 = &v25;
            QT::QRectF::operator|(&v27, &v25, v29);
            v25 = _mm_load_si128(&v27);
            v26 = _mm_load_si128(&v28);
LABEL_13:
            v11 = std::_Rb_tree_increment(v11, v4);
            if ( v12 == v11 )
              goto LABEL_17;
          }
        }
      }
      goto LABEL_17;
    }
    _InterlockedAdd(v18, 1u);
LABEL_9:
    v12 = *(_QWORD *)(v9 + 64) + 16LL;
    goto LABEL_10;
  }
  if ( a2 )
    operator delete(a2, 0x18u);
}
