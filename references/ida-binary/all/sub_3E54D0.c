__int64 __fastcall sub_3E54D0(
        _DWORD **a1,
        __int64 *a2,
        _DWORD *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v13; // rbx
  _DWORD *v14; // rdi
  double v15; // xmm4_8
  double v16; // xmm5_8
  unsigned __int64 v17; // r14
  unsigned int v18; // ebx
  size_t v20; // r8
  __int64 v21; // r15
  size_t v22; // r9
  __int64 v23; // rsi
  __int64 v24; // rax
  size_t v25; // [rsp+0h] [rbp-78h]
  size_t v26; // [rsp+8h] [rbp-70h]
  _QWORD v27[4]; // [rsp+10h] [rbp-68h] BYREF
  __int64 *v28; // [rsp+30h] [rbp-48h]
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  sub_3DEF80((__int64)v27, 0);
  v13 = operator new(0x180u);
  sub_3DE430(v13, (__int64)v27, 1);
  v14 = *a1;
  *(_BYTE *)(v13 + 372) = 0;
  *(_QWORD *)v13 = &srcitem_node_t___vtable;
  *(_QWORD *)(v13 + 376) = v14;
  if ( v14 )
    ++v14[2];
  (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v14 + 16LL))(v14, v13 + 80);
  sub_3E2C20(v28, v13, *((_DWORD *)v28 + 6));
  sub_3E5190(v13, (__int64 *)(v13 + 376), qword_8BA5A8, (int *)(v13 + 72), a4, a5, a6, a7, v15, v16, a10, a11);
  if ( !a2 || *(_DWORD *)(v13 + 56) == 4 )
    goto LABEL_17;
  v17 = *(_QWORD *)(v13 + 128);
  if ( v17 )
  {
    v20 = v17 - 1;
    if ( v17 != 1 )
    {
      v21 = a2[1];
      v22 = v17 - 1;
      if ( v21 )
      {
        --v21;
        v22 = v20 + v21;
        v17 += v21;
      }
      v23 = *a2;
      if ( a2[2] < v17 )
      {
        v26 = v20;
        v25 = v22;
        v24 = qvector_reserve(a2, v23, v17, 1);
        v20 = v26;
        v22 = v25;
        *a2 = v24;
        v23 = v24;
      }
      a2[1] = v17;
      *(_BYTE *)(v23 + v22) = 0;
      memcpy((void *)(v21 + *a2), *(const void **)(v13 + 120), v20);
    }
  }
  v18 = *(unsigned __int8 *)(v13 + 168);
  if ( (_BYTE)v18 )
    ++*a3;
  else
LABEL_17:
    v18 = 0;
  v27[0] = &items_tree_model_t___vtable;
  if ( v28 )
    (*(void (__fastcall **)(__int64 *))(*v28 + 8))(v28);
  QT::QAbstractItemModel::~QAbstractItemModel((QT::QAbstractItemModel *)v27);
  return v18;
}
