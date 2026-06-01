__int64 __fastcall sub_1419260(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  unsigned int v4; // r12d
  unsigned int v5; // ebx

  v4 = a3;
  v5 = a4;
  (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 80LL))(
    *(_QWORD *)(a1 + 8),
    a2,
    a3,
    a4);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 80LL))(
           *(_QWORD *)(a1 + 16),
           a2,
           v4,
           v5);
}
