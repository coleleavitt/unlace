unsigned __int64 __fastcall sub_C41C0(__int64 a1, _BYTE *a2)
{
  unsigned __int64 v3; // [rsp+8h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  netnode_check();
  if ( *a2 )
    netnode_hashset();
  else
    netnode_hashdel();
  return v3 - __readfsqword(0x28u);
}

