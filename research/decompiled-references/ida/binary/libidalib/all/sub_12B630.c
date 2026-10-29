unsigned __int64 __fastcall sub_12B630(__int64 a1, __int64 **a2)
{
  unsigned __int64 v3; // [rsp+18h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  if ( (unsigned __int8)get_mapping() )
  {
    sub_94440(*a2);
    sub_94440(*a2 + 3);
    sub_94440(*a2 + 6);
    sub_94440(*a2 + 9);
  }
  return v3 - __readfsqword(0x28u);
}

