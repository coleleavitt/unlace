__int64 __fastcall sub_19D3030(
        __int64 *a1,
        unsigned int a2,
        __m128i a3,
        double a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8)
{
  _QWORD *v11; // r13
  __int64 v12; // rax
  unsigned __int64 *v13; // rdx
  __int64 v15; // r15
  unsigned int v16; // eax
  unsigned __int64 *v17; // [rsp+8h] [rbp-40h] BYREF

  v11 = (_QWORD *)sub_168B6C0((__int64)a1);
  v12 = sub_1E5F010(a7, &v17);
  v13 = v17;
  if ( !v17 )
  {
    v15 = v12;
    v16 = sub_15F0EF0(*a1, a6, 0, a3, a4);
    v13 = sub_A81910(v11, v15, v16);
    v17 = v13;
  }
  return sub_19D2DA0(a1, a2, v13, a8);
}
