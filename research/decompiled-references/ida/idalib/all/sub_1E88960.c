__int64 __fastcall sub_1E88960(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 *v14; // [rsp+8h] [rbp-30h] BYREF

  v11 = sub_1E5F010(a4, &v14);
  v12 = v14;
  if ( !v14 )
  {
    v12 = sub_A81910(*(_QWORD **)(a1 + 248), v11, 0);
    v14 = v12;
  }
  return sub_1E885A0(a1, a2, a3, v12, a5, a6, a7, a8);
}
