__int64 sub_13BED0()
{
  __int64 ph; // rbx
  __int64 result; // rax
  int v2; // edx
  __int64 sreg; // [rsp+8h] [rbp-430h] BYREF
  _BYTE v4[1032]; // [rsp+10h] [rbp-428h] BYREF
  unsigned __int64 v5; // [rsp+418h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  ph = get_ph();
  result = 0;
  if ( (*(_BYTE *)(ph + 8) & 1) != 0 )
  {
    sub_13B2E0(ph, (__int64)v4, 1017, "\n");
    sreg = get_sreg();
    v2 = sub_8F810((__int64)v4, &word_254018, &sreg);
    result = 1;
    if ( v2 )
      return (unsigned __int8)split_sreg_range();
  }
  return result;
}

