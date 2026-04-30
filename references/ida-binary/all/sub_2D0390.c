__int64 __fastcall hintplace_t__::vfunc_4(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax

  result = qalloc_or_throw(16);
  *(_QWORD *)result = hintplace_t___vtable;
  *(_DWORD *)(result + 8) = a4;
  return result;
}
