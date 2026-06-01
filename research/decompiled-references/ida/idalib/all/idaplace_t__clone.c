__int64 __fastcall idaplace_t__clone(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = qalloc_or_throw(24);
  v2 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)result = off_2B25850;
  *(_DWORD *)(result + 8) = v2;
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  return result;
}
