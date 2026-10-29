__int64 __fastcall Z3_fixedpoint_add_constraint(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // r12

  v5 = *(_QWORD *)(a2 + 24);
  sub_654200(v5 + 48, 0);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v5 + 3024) + 160LL))(
           *(_QWORD *)(v5 + 3024),
           a3,
           a4);
}

