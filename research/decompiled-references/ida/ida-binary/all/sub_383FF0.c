__int64 sub_383FF0()
{
  __int64 result; // rax

  result = (unsigned int)dword_8BCA58;
  if ( dword_8BCA58 < 0 )
  {
    dword_8BCA58 = internal_register_place_class(&qword_8CF1A0, 3, 0, 930);
    register_loc_converter2("simpleline_place_t", "srcdbg_place_t", sub_384E00);
    return register_loc_converter2("idaplace_t", "srcdbg_place_t", sub_386450);
  }
  return result;
}
