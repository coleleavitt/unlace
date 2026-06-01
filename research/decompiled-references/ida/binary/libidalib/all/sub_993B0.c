unsigned __int64 sub_993B0()
{
  unsigned __int64 v1; // [rsp+68h] [rbp-10h]

  v1 = __readfsqword(0x28u);
  reg_bin_op();
  reg_str_set();
  reg_str_set();
  return v1 - __readfsqword(0x28u);
}

