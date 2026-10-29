__int64 __fastcall sub_406800(__int64 a1)
{
  const char *v2; // rax

  sub_407770(a1, "::tcl::kitpath", sub_406600, 0, 0);
  sub_407770(a1, "::bitrock_get_libc_info", sub_4066B0, 0, 0);
  if ( (unsigned int)sub_46EBD0(a1, "::tcl::kitpath", &src, 132) )
  {
    sub_48B350(a1);
    if ( src )
      return sub_484BA0(a1, "tclkitpath", "1.0", 0);
  }
  else if ( src )
  {
    return sub_484BA0(a1, "tclkitpath", "1.0", 0);
  }
  v2 = (const char *)sub_4A0100();
  sub_406310(v2);
  return sub_484BA0(a1, "tclkitpath", "1.0", 0);
}

