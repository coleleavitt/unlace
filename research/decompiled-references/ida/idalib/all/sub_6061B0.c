unsigned __int64 __fastcall sub_6061B0(const char *a1)
{
  __int64 v2; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v3[2]; // [rsp+10h] [rbp-38h] BYREF
  __int16 v4; // [rsp+20h] [rbp-28h]
  unsigned __int64 v5; // [rsp+28h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( strstr(a1, "std::nothrow_t")
    && !(unsigned int)get_named_type(0, (unsigned int)"std::nothrow_t", 1, 0, 0, 0, 0, 0, 0) )
  {
    v2 = 0;
    v4 = 0;
    v3[1] = &byte_22F0C30;
    v3[0] = get_idati(0, "std::nothrow_t");
    create_tinfo(&v2, 13, 189, v3);
    save_tinfo(&v2, 0, 0, "std::nothrow_t", 1);
    clear_tinfo_t(&v2);
  }
  return v5 - __readfsqword(0x28u);
}
