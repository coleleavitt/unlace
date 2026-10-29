unsigned __int64 sub_99270()
{
  unsigned __int64 v1; // [rsp+48h] [rbp-10h]

  v1 = __readfsqword(0x28u);
  reg_bin_op();
  reg_str_set();
  reg_str_set();
  return v1 - __readfsqword(0x28u);
}

