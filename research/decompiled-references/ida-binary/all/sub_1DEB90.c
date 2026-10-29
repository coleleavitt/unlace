__int64 __fastcall dbgreg_place_t__::vfunc_3(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 12) = *(_QWORD *)(a2 + 12);
  result = *(unsigned int *)(a2 + 20);
  *(_DWORD *)(a1 + 20) = result;
  return result;
}
