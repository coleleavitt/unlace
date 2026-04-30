unsigned __int64 __fastcall sub_3676F0(__int64 a1)
{
  int outfile_encoding_idx; // eax
  unsigned __int64 result; // rax

  outfile_encoding_idx = get_outfile_encoding_idx();
  result = sub_3672D0(outfile_encoding_idx, 0, 1u);
  if ( (result & 0x80000000) == 0LL )
  {
    set_outfile_encoding_idx((unsigned int)result);
    return sub_356930(a1);
  }
  return result;
}
