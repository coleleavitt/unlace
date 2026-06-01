unsigned __int64 __fastcall sub_5CA510(__int64 a1)
{
  unsigned __int64 v2; // [rsp+18h] [rbp-C0h]

  v2 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 729) & 1) == 0 )
    sub_5C61D0(a1);
  return v2 - __readfsqword(0x28u);
}

