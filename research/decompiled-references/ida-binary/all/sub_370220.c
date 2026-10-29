unsigned __int64 __fastcall sub_370220(__int64 a1)
{
  __int64 v2; // [rsp+8h] [rbp-20h] BYREF
  __int64 v3; // [rsp+10h] [rbp-18h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v2 = a1;
  v4 = __readfsqword(0x28u);
  if ( (unsigned __int8)netnode_exist(&v2) )
  {
    netnode_check(&v3, "$ pv known blobs", 0, 1);
    netnode_supdel(v3, v2, 65);
    netnode_kill(&v2);
  }
  return v4 - __readfsqword(0x28u);
}
