__int64 __fastcall sub_4C65B0(__int64 a1)
{
  __int64 result; // rax

  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 104LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL),
    0);
  result = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(result + 72) = 0;
  return result;
}
