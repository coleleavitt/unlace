__int64 __fastcall sub_DF0EE0(__int64 a1, __int64 a2, __int64 a3)
{
  sub_185EC20(a3);
  sub_185D810(a3);
  sub_185D2A0(a3, "print_statistics", 1, "(default: false) print statistics.", 0, 0);
  sub_185D2A0(a3, "print_unsat_core", 1, "(default: false) print unsatisfiable core.", 0, 0);
  sub_185D2A0(a3, "print_proof", 1, "(default: false) print proof.", 0, 0);
  return sub_185D2A0(a3, "print_model", 1, "(default: false) print model.", 0, 0);
}

