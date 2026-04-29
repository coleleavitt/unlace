unsigned __int64 __fastcall sub_47340(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // [rsp+8h] [rbp-30h]

  v5 = __readfsqword(0x28u);
  if ( a2 < a3 )
  {
    do
      netnode_supset();
    while ( get_item_end() < a3 );
  }
  return v5 - __readfsqword(0x28u);
}
