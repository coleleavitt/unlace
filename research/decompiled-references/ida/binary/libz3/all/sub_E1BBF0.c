__int64 __fastcall sub_E1BBF0(__int64 a1, __int64 a2, __int64 a3)
{
  sub_14B6210(a3);
  sub_185EC20(a3);
  sub_185D2A0(a3, "print", 1, "(default: true)  print the simplified term.", 0, 0);
  sub_185D2A0(
    a3,
    "print_proofs",
    1,
    "(default: false) print a proof showing the original term is equal to the resultant one.",
    0,
    0);
  return sub_185D2A0(a3, "print_statistics", 1, "(default: false) print statistics.", 0, 0);
}

