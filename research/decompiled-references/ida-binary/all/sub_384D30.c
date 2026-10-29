__int64 __fastcall srcdbg_place_t__::vfunc_6(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  simpleline_place_t__adjust(a1, *(_QWORD *)(a2 + 80));
  result = sub_384C20(a2, *(_DWORD *)(a1 + 12));
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
