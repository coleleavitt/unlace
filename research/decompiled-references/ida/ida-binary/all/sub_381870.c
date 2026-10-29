__int64 __fastcall srcdbg_place_t__::vfunc_2(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = qalloc_or_throw(24);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 12);
  *(_QWORD *)result = &srcdbg_place_t___vtable;
  *(_DWORD *)(result + 12) = v2;
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  return result;
}
