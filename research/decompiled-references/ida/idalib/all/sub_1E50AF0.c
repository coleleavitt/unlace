__int64 __fastcall sub_1E50AF0(__int64 a1, __int64 a2, unsigned int a3, __m128 a4, double a5)
{
  _QWORD *v6; // rax
  __int64 *v8; // [rsp+8h] [rbp-20h] BYREF

  sub_1E5F010(a2, &v8);
  if ( v8 && (v6 = sub_1E509C0(a1, v8, a3, 0, a4)) != nullptr )
    return sub_1E61050(a1, *v6, v6, *(double *)a4.m128_u64, a5);
  else
    return 0;
}
