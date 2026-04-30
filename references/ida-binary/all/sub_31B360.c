__int64 sub_31B360()
{
  int v0; // r9d
  __int64 v2; // rdx
  __int64 v3; // [rsp+8h] [rbp-30h] BYREF
  __int64 wide_word; // [rsp+10h] [rbp-28h] BYREF
  __int64 original_word; // [rsp+18h] [rbp-20h] BYREF
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[1] = __readfsqword(0x28u);
  v3 = xmmword_8CC810;
  wide_word = get_wide_word();
  original_word = get_original_word(v3);
  v6[0] = get_fileregion_offset(v3);
  if ( (unsigned int)sub_507F10(
                       987,
                       (unsigned int)&v3,
                       (unsigned int)v6,
                       (unsigned int)&original_word,
                       (unsigned int)&wide_word,
                       v0) )
  {
    sub_27EB40((__int64)&qword_8CC800, v3);
    patch_word(v3, wide_word);
    sub_31AFE0(v3, 2, v2);
  }
  return 1;
}
