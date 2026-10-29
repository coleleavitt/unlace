__int64 __fastcall sub_41BDC0(unsigned int a1)
{
  unsigned int v1; // ebp

  v1 = 0;
  if ( a1 <= 0x7F )
    return ((*__ctype_b_loc())[a1] & 0x1000) != 0;
  return v1;
}

