unsigned __int64 __fastcall sub_144D30(__int64 a1, __int64 **a2)
{
  unsigned __int64 v3; // [rsp+8h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  if ( (unsigned __int8)getn_selector() )
  {
    sub_94360(*a2);
    sub_94360(*a2 + 3);
  }
  return v3 - __readfsqword(0x28u);
}

