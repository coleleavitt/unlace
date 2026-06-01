__int64 __fastcall sub_2C64A0(__int64 a1)
{
  sub_26B6B0(a1, 3);
  sub_26B490(a1, 2);
  sub_26B5C0(a1, 1);
  sub_26B5C0(a1, 0);
  return Z3_solver_check_assumptions();
}

