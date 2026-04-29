void __fastcall graph_t__::vfunc_3(volatile signed __int32 **this)
{
  QT::QGraphicsScene *v1; // rsi
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int *v6; // rax
  QT::QWidget **v7; // rdx
  QT::QWidget **v8; // rbx
  QT::QWidget **v9; // r12
  QT::QWidget *v10; // rdi
  volatile signed __int32 *v11; // rax
  volatile signed __int32 *v12; // rax
  volatile signed __int32 *v13; // rax
  __int64 v14; // rdi
  _QWORD **v15; // rbx
  _QWORD **v16; // rbx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  QT::QWidget **v18; // [rsp+8h] [rbp-30h]
  __int64 v19; // [rsp+10h] [rbp-28h]
  unsigned __int64 v20; // [rsp+18h] [rbp-20h]

  v1 = (QT::QGraphicsScene *)this;
  v20 = __readfsqword(0x28u);
  *this = (volatile signed __int32 *)&graph_t___vtable;
  QT::QGraphicsScene::views((QT::QGraphicsScene *)&ptr);
  v6 = (int *)ptr;
  if ( !ptr || *(int *)ptr > 1 )
  {
    v1 = nullptr;
    sub_21AD0((__int64)&ptr, 0, 0, 0, v4, v5);
    v6 = (int *)ptr;
  }
  v7 = v18;
  v8 = v18;
  if ( !v6 || *v6 > 1 )
  {
    v1 = nullptr;
    sub_21AD0((__int64)&ptr, 0, 0, 0, v4, v5);
    v7 = v18;
  }
  v9 = &v7[v19];
  while ( v9 != v8 )
  {
    v10 = *v8++;
    QT::QWidget::close(v10);
  }
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  v11 = *(this + 10);
  if ( v11 && !_InterlockedSub(v11, 1u) )
    free((void *)*(this + 10));
  v12 = *(this + 9);
  if ( v12 )
  {
    if ( !_InterlockedSub(v12, 1u) )
    {
      v16 = (_QWORD **)*(this + 9);
      if ( v16 )
      {
        sub_1F160(v16[3]);
        v1 = (QT::QGraphicsScene *)&word_38;
        operator delete(v16, 0x38u);
      }
    }
  }
  v13 = *(this + 8);
  if ( v13 )
  {
    if ( !_InterlockedSub(v13, 1u) )
    {
      v15 = (_QWORD **)*(this + 8);
      if ( v15 )
      {
        sub_1F430(v15[3]);
        v1 = (QT::QGraphicsScene *)&word_38;
        operator delete(v15, 0x38u);
      }
    }
  }
  v14 = (__int64)*(this + 3);
  if ( v14 )
  {
    *(this + 4) = nullptr;
    qfree(v14, v1, v7, v3);
  }
  QT::QGraphicsScene::~QGraphicsScene((QT::QGraphicsScene *)this);
}
