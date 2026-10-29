__int64 __fastcall sub_489F80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13,
        __int64 a14,
        char a15)
{
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5

  result = dirtree_bulk_move(**(_QWORD **)(a1 + 208), a2, a3, a5, a4, 0);
  if ( (_BYTE)result )
  {
    v16 = dirtree_errstr((unsigned __int8)result);
    return sub_169700(
             (int)"Failed move operation: %s\n",
             v16,
             v17,
             v18,
             v19,
             v20,
             a6,
             a7,
             a8,
             a9,
             v21,
             v22,
             a12,
             a13,
             a15);
  }
  return result;
}
