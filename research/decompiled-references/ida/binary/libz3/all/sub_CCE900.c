__int64 __fastcall sub_CCE900(__int64 a1)
{
  sub_185D810(a1);
  sub_185DD20(a1);
  sub_185D2A0(a1, "max_depth", 0, "maximum term depth.", "1024", 0);
  return sub_185D2A0(a1, "propagate_eq", 1, "enable equality propagation from bounds.", "false", 0);
}

