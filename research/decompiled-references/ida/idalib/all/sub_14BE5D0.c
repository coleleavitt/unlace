__int64 __fastcall sub_14BE5D0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __m128i a5)
{
  unsigned int v6; // r12d
  __int64 result; // rax
  _BYTE v8[120]; // [rsp+0h] [rbp-78h] BYREF

  v6 = a3;
  if ( (**(_BYTE **)(*(_QWORD *)(a1 + 8) + 56LL) & 1) == 0 )
  {
    sub_1564820(v8, a1, a3, 1949);
    sub_AEA040((__int64)v8);
  }
  sub_1703EE0(a1 + 48, *(unsigned int *)(a1 + 16), a2);
  if ( *(_WORD *)(a1 + 32) == 24 )
    result = sub_14EE310(a1);
  else
    result = sub_14BDAD0(a1, 0, a5);
  if ( result != 1 )
  {
    if ( a2 )
      return sub_18DA2E0(*(_QWORD *)(a1 + 96), v6, a2, a4, result & 0xFFFFFFFFFFFFFFFELL);
  }
  return result;
}
