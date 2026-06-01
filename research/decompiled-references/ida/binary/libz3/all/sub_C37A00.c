__int64 __fastcall sub_C37A00(__int64 a1, __int64 a2)
{
  sub_185D2A0(a2, "nla2bv_max_bv_size", 0, "(default: inf) maximum bit-vector size used by nla2bv tactic", 0, 0);
  sub_185D2A0(a2, "nla2bv_bv_size", 0, "default bit-vector size used by nla2bv tactic.", "4", 0);
  sub_185D2A0(
    a2,
    "nla2bv_root",
    0,
    "nla2bv tactic encodes reals into bit-vectors using expressions of the form a+b*sqrt(c), this parameter sets the valu"
    "e of c used in the encoding.",
    "2",
    0);
  return sub_185D2A0(a2, "nla2bv_divisor", 0, "nla2bv tactic parameter.", "2", 0);
}

