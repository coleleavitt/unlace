unsigned __int64 sub_625F20()
{
  unsigned int v1; // eax
  unsigned __int64 v2; // [rsp+18h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  if ( (getinf(57) & 0xF) == 0 )
  {
    v1 = getinf(5);
    if ( v1 <= 0x17 )
    {
      if ( byte_238D4C0[v1] )
        set_compiler();
    }
  }
  return v2 - __readfsqword(0x28u);
}

