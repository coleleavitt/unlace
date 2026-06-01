__int64 __fastcall sub_DF0F80(__int64 a1, __int64 a2, __int64 a3)
{
  sub_185D2A0(a3, "print", 1, "(default: true) print resultant goals.", 0, 0);
  sub_185D2A0(a3, "print_model_converter", 1, "(default: false) print model converter.", 0, 0);
  sub_185D2A0(a3, "print_benchmark", 1, "(default: false) display resultant goals as a SMT2 benchmark.", 0, 0);
  sub_185D2A0(
    a3,
    "print_dependencies",
    1,
    "(default: false) print dependencies when displaying the resultant set of goals.",
    0,
    0);
  sub_185EC20(a3);
  sub_185D810(a3);
  return sub_185D2A0(a3, "print_statistics", 1, "(default: false) print statistics.", 0, 0);
}

