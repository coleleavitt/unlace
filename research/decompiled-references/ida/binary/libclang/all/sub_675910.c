__int64 __fastcall sub_675910(__int64 *a1, __int64 a2, __int64 *a3, double a4, __m128i a5, double a6, __m128 a7)
{
  int v7; // eax
  unsigned __int64 v8; // rsi
  __int64 result; // rax
  unsigned int v10; // ecx
  double v11; // xmm0_8
  __int64 v12; // [rsp+8h] [rbp-10h] BYREF

  v7 = a2 & 7;
  if ( v7 == 7 )
  {
    v8 = a2 & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_DWORD *)v8 )
    {
      return 1;
    }
    else
    {
      v11 = sub_B03930(&v12, *(_QWORD *)(v8 + 16));
      return sub_673A50(a1, v12, v11, a5, a6, a7);
    }
  }
  else
  {
    v10 = v7 - 3;
    result = 1;
    if ( v10 <= 2 && a3 )
      return sub_673BB0(a1, *a3, (unsigned __int64)(a3 + 1), a4, a5, a6, a7);
  }
  return result;
}

