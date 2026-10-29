__int64 __fastcall Z3_fixedpoint_add_callback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // r15

  v10 = *(_QWORD *)(a2 + 24);
  sub_654200(v10 + 48, 0);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64))(**(_QWORD **)(v10 + 3024) + 152LL))(
           *(_QWORD *)(v10 + 3024),
           a3,
           a4,
           a5,
           a6);
}

