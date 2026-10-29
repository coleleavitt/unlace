unsigned __int64 sub_2275E0()
{
  __int64 v1; // [rsp+8h] [rbp-20h] BYREF
  __int64 v2; // [rsp+10h] [rbp-18h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  if ( (unsigned __int8)netnode_inited() )
  {
    v1 = -1;
    netnode_check(&v1, "$ debugger configuration", 0, 1);
    v2 = (unsigned int)dword_8BA5B0;
    netnode_set(v1, &v2, 8);
  }
  return v3 - __readfsqword(0x28u);
}
