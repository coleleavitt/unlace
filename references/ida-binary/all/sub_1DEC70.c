__int64 __fastcall dbgreg_place_t__::vfunc_2(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = qalloc_or_throw(24);
  v2 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)result = dbgreg_place_t___vtable;
  *(_DWORD *)(result + 8) = v2;
  *(_QWORD *)(result + 12) = *(_QWORD *)(a1 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a1 + 20);
  return result;
}
