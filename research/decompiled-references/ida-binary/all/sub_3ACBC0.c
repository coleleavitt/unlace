__int64 __fastcall sub_3ACBC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rax

  *(_QWORD *)(a2 + 208) = a2 + 368;
  v5 = sub_1EA680(a1 + 384, a2, a3, a4, a5);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v5 + 40) + 200LL))(
           *(_QWORD *)(v5 + 40),
           *(_QWORD *)(a2 + 208),
           *(_QWORD *)(a1 + 1000));
}
