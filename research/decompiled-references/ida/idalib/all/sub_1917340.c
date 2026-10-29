__int64 __fastcall sub_1917340(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        int a8,
        unsigned int *a9,
        __int64 a10)
{
  __int64 v13; // rax
  _QWORD *v15; // rdx
  _QWORD *v16; // [rsp+8h] [rbp-40h] BYREF

  v13 = sub_1E5F010(a7, &v16);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 1;
  v15 = v16;
  if ( !v16 )
  {
    v15 = sub_A81910(*(_QWORD **)(a1 + 248), v13, a6);
    v16 = v15;
  }
  return sub_19162B0(a1, a5, (__int64)v15, a9, a10, a8, a2, a3);
}
