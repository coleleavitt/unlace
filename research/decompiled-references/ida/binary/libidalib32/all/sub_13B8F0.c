__int64 sub_13B8F0()
{
  __int64 ph; // rbx
  __int64 result; // rax
  int v2; // edx
  int sreg; // [rsp+Ch] [rbp-42Ch] BYREF
  _BYTE v4[1032]; // [rsp+10h] [rbp-428h] BYREF
  unsigned __int64 v5; // [rsp+418h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  ph = get_ph();
  result = 0;
  if ( (*(_BYTE *)(ph + 8) & 1) != 0 )
  {
    sub_13AD00(ph, (__int64)v4, 1017, "\n");
    sreg = get_sreg();
    v2 = sub_8F730((__int64)v4, &word_252E78, &sreg);
    result = 1;
    if ( v2 )
      return (unsigned __int8)split_sreg_range();
  }
  return result;
}

