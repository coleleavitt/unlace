__int64 __fastcall get_basic_file_type(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[7]; // [rsp+0h] [rbp-38h] BYREF

  v2[5] = __readfsqword(0x28u);
  qlseek(a1, 0, 0);
  if ( qlread(a1, v2, 28) != 28 )
    return (unsigned __int8)sub_5787F0(a1) == 0 ? 2 : 15;
  result = 14;
  if ( LODWORD(v2[0]) != 67324752 )
  {
    result = 16;
    if ( v2[0] != 0xA3E686372613C21LL && v2[0] != 0xA3E74756F623C21LL && v2[0] != 0xA3E5F666C653C21LL )
    {
      result = 24;
      if ( v2[0] != 0xA3E66666169613CLL && v2[0] != 0xA3E66616769623CLL )
        return (unsigned __int8)sub_5787F0(a1) == 0 ? 2 : 15;
    }
  }
  return result;
}

