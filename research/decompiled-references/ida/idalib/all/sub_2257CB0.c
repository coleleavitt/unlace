__int64 __fastcall sub_2257CB0(__int64 a1, void (__fastcall *a2)(__int64), __int64 a3)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 16) )
  {
    a2(a3);
    return (*(__int64 (__fastcall **)(_QWORD, void (__fastcall *)(__int64), __int64))(**(_QWORD **)(a1 + 16) + 120LL))(
             *(_QWORD *)(a1 + 16),
             a2,
             a3);
  }
  return result;
}
