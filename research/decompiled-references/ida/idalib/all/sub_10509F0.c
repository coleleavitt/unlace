_UNKNOWN **__fastcall sub_10509F0(__int64 a1)
{
  bool v1; // zf
  _UNKNOWN **result; // rax

  v1 = sub_9B4AA0(a1 + 568, "o32") == 0;
  result = &off_2B566E0;
  if ( !v1 )
    return &off_2B56100;
  return result;
}
