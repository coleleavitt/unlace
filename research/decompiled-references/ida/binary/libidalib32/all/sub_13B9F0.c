__int64 sub_13B9F0()
{
  __int64 ph; // rbx
  __int16 v2; // [rsp+Eh] [rbp-42Ah] BYREF
  _BYTE v3[1032]; // [rsp+10h] [rbp-428h] BYREF
  unsigned __int64 v4; // [rsp+418h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  ph = get_ph();
  sub_13AD00(
    ph,
    (__int64)v3,
    1018,
    "\n<~A~pply to all segments:C>>\n\nThis value will be used when the\nregister value is not known.\n\n\n");
  v2 = 0;
  if ( (unsigned int)sub_8F730((__int64)v3, &word_252E78, &unk_2440B0, &v2) )
  {
    if ( !v2 )
      getseg();
    set_default_sreg_value();
  }
  return 1;
}

