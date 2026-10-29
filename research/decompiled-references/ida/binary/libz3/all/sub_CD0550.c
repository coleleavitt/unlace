__int64 __fastcall sub_CD0550(__int64 a1, __int64 a2)
{
  sub_185D810(a2);
  sub_185DD20(a2);
  sub_185D2A0(a2, "max_depth", 0, "maximum term depth.", "1024", 0);
  return sub_185D2A0(a2, "propagate_eq", 1, "enable equality propagation from bounds.", "false", 0);
}

