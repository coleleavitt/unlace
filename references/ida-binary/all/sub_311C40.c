__int64 __fastcall sub_311C40(
        QT::QObject *a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rax
  unsigned int v10; // ebp
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 result; // rax
  double v14; // xmm4_8
  double v15; // xmm5_8

  v9 = QT::QObject::sender(a1);
  v10 = *(_DWORD *)(v9 + 24);
  v11 = v9;
  v12 = sub_1EA560(*(_QWORD *)(v9 + 16) + 384LL);
  result = navstack_t_stack_index(v12);
  if ( (unsigned int)result < v10 )
    return sub_1FB570(*(_QWORD *)(v11 + 16) + 384LL, 1, v10 - (unsigned int)result, a2, a3, a4, a5, v14, v15, a8, a9);
  if ( v10 < (unsigned int)result )
    return sub_1FB570(*(_QWORD *)(v11 + 16) + 384LL, 0, (unsigned int)result - v10, a2, a3, a4, a5, v14, v15, a8, a9);
  return result;
}
