unsigned __int64 __fastcall sub_6B570(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v5; // [rsp+28h] [rbp-30h]

  v5 = __readfsqword(0x28u);
  if ( a4 || netnode_supval() < 0 )
  {
    pack_dd();
    pack_dq();
    pack_dq();
    pack_dw();
    netnode_supset();
  }
  return v5 - __readfsqword(0x28u);
}
