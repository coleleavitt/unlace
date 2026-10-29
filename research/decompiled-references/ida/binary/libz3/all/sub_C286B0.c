__int64 __fastcall sub_C286B0(__int64 a1, __int64 a2)
{
  sub_185D2A0(
    a2,
    "complete",
    1,
    "add constraints to make sure that any interpretation of a underspecified arithmetic operators is a function. The res"
    "ult will include additional uninterpreted functions/constants: /0, div0, mod0, 0^0, neg-root",
    "true",
    0);
  sub_185D2A0(a2, "elim_root_objects", 1, "eliminate root objects.", "true", 0);
  sub_185D2A0(a2, "elim_inverses", 1, "eliminate inverse trigonometric functions (asin, acos, atan).", "true", 0);
  return sub_14B6210(a2);
}

