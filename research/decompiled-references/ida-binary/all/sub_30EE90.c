__int64 __fastcall sub_30EE90(__int64 a1)
{
  __int64 result; // rax

  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 352) + 16LL) + 104LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 352) + 16LL),
    0);
  result = *(_QWORD *)(a1 + 352);
  *(_DWORD *)(result + 176) = 2;
  return result;
}
