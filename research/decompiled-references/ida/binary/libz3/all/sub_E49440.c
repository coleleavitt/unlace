__int64 __fastcall sub_E49440(__int64 a1, __int64 a2)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 112LL))(*(_QWORD *)(a1 + 104));
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 112) + 112LL))(*(_QWORD *)(a1 + 112), a2);
  sub_185D2A0(
    a2,
    "solver2_timeout",
    0,
    "fallback to solver 1 after timeout even when in incremental model",
    "4294967295",
    "combined_solver");
  sub_185D2A0(a2, "ignore_solver1", 1, "if true, solver 2 is always used", "false", "combined_solver");
  return sub_185D2A0(
           a2,
           "solver2_unknown",
           0,
           "what should be done when solver 2 returns unknown: 0 - just return unknown, 1 - execute solver 1 if quantifie"
           "r free problem, 2 - execute solver 1",
           "1",
           "combined_solver");
}

