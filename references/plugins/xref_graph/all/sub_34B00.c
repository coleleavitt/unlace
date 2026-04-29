__int64 __fastcall fit_in_view_ah_t__::vfunc_4(double a1, __m128i a2, __int64 a3, __m128i *a4, __m128i *a5)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 i; // r12
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+28h] [rbp-C0h]
  __int64 v17; // [rsp+30h] [rbp-B8h]
  __m128i v18; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v19; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v20[32]; // [rsp+60h] [rbp-88h] BYREF
  __m128i v21; // [rsp+80h] [rbp-68h] BYREF
  __m128i v22; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+A8h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v18 = 0;
  v19 = 0;
  QT::QGraphicsScene::selectedItems((QT::QGraphicsScene *)&ptr);
  v10 = (int *)ptr;
  if ( !ptr || *(int *)ptr > 1 )
  {
    a5 = nullptr;
    sub_34720((__int64)&ptr, 0, 0, 0, v8, v9);
    v10 = (int *)ptr;
  }
  v11 = v16;
  v12 = v16;
  if ( !v10 || *v10 > 1 )
  {
    a5 = nullptr;
    sub_34720((__int64)&ptr, 0, 0, 0, v8, v9);
    v11 = v16;
  }
  for ( i = v11 + 8 * v17; i != v12; v19 = _mm_load_si128(&v22) )
  {
    QT::QGraphicsItem::sceneBoundingRect((QT::QGraphicsItem *)v20);
    a5 = &v18;
    v12 += 8;
    QT::QRectF::operator|(&v21, &v18, v20);
    v18 = _mm_load_si128(&v21);
  }
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  sub_2F360(a4, (__int64)a5, v11, v7, v8, v9, _mm_load_si128(&v19), a2);
  return 1;
}
