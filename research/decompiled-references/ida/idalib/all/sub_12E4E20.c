__int64 __fastcall sub_12E4E20(__int64 a1, unsigned int a2, __int64 a3)
{
  sub_FC5CB0((_DWORD *)a1, a2);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 24) + 56LL))(*(_QWORD *)(a1 + 24), a2, a3);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 32) + 56LL))(
           *(_QWORD *)(a1 + 32),
           a2,
           a3);
}
