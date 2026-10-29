__int64 sub_11A480()
{
  int v0; // r9d
  unsigned int v2; // [rsp+0h] [rbp-28h] BYREF
  int fileregion_offset; // [rsp+4h] [rbp-24h] BYREF
  __int64 wide_word; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v5[3]; // [rsp+10h] [rbp-18h] BYREF

  v5[1] = __readfsqword(0x28u);
  v2 = qword_251700;
  wide_word = get_wide_word();
  v5[0] = get_original_word();
  fileregion_offset = get_fileregion_offset();
  if ( (unsigned int)sub_18BA90(
                       987,
                       (unsigned int)&v2,
                       (unsigned int)&fileregion_offset,
                       (unsigned int)v5,
                       (unsigned int)&wide_word,
                       v0) )
  {
    sub_F5430((__int64)&xmmword_2516A0, v2);
    patch_word();
    sub_11A120(v2, 2u);
  }
  return 1;
}

