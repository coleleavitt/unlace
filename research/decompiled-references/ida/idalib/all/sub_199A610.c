__int64 __fastcall sub_199A610(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r14

  v8 = sub_1998500(a1, *(unsigned __int16 **)(a2 + 8), 1, a3, a4, a6, a7, a8);
  if ( v8 == 1 )
    return 1;
  v10 = v8;
  v14 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 16), *(double *)a3.m128_u64, a4);
  if ( v14 == 1 )
    return 1;
  v15 = sub_1998500(a1, *(unsigned __int16 **)(a2 + 24), 0, a3, a4, v11, v12, v13);
  if ( v15 == 1 )
    return 1;
  v16 = v14 & 0xFFFFFFFFFFFFFFFELL;
  v17 = v15 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v10 & 0xFFFFFFFFFFFFFFFELL) != *(_QWORD *)(a2 + 8)
    || *(_QWORD *)(a2 + 16) != v16
    || (result = a2, *(_QWORD *)(a2 + 24) != v17) )
  {
    result = sub_1A89A90(
               *(_QWORD *)(*a1 + 736),
               *(unsigned int *)(a2 + 32),
               v10 & 0xFFFFFFFFFFFFFFFELL,
               v16,
               *(unsigned int *)(a2 + 36));
    if ( result != 1 )
      return sub_1A86060(*(_QWORD *)(*a1 + 736), result & 0xFFFFFFFFFFFFFFFELL, v17);
  }
  return result;
}
