__int64 sub_11A8A0()
{
  int v0; // r9d
  __int64 v2; // [rsp+8h] [rbp-30h] BYREF
  __int64 wide_word; // [rsp+10h] [rbp-28h] BYREF
  __int64 original_word; // [rsp+18h] [rbp-20h] BYREF
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[1] = __readfsqword(0x28u);
  v2 = xmmword_2528A0;
  wide_word = get_wide_word();
  original_word = get_original_word();
  v5[0] = get_fileregion_offset();
  if ( (unsigned int)sub_18C660(
                       987,
                       (unsigned int)&v2,
                       (unsigned int)v5,
                       (unsigned int)&original_word,
                       (unsigned int)&wide_word,
                       v0) )
  {
    sub_F62B0((__int64)&xmmword_252840, v2);
    patch_word();
    sub_11A520(v2, 2);
  }
  return 1;
}

