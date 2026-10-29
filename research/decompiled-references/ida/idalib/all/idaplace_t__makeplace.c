__int64 __fastcall idaplace_t__makeplace(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax

  result = qalloc_or_throw(24);
  *(_DWORD *)(result + 8) = a4;
  *(_QWORD *)result = off_2B25850;
  *(_QWORD *)(result + 16) = a3;
  return result;
}
