unsigned __int64 __fastcall sub_BA360(__int64 a1)
{
  unsigned __int64 v2; // [rsp+40h] [rbp-40h]

  v2 = __readfsqword(0x28u);
  netnode_check();
  if ( netnode_qgetblob() > 0 )
    *(_BYTE *)(a1 + 24) = 0;
  return v2 - __readfsqword(0x28u);
}

