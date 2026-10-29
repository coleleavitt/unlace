unsigned __int64 sub_370800()
{
  __int64 v0; // rax
  __int64 i; // rbx
  __int64 v3; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  netnode_check(&v3, "$ pv known blobs", 0, 0);
  v0 = netnode_supfirst(v3, 65);
  if ( v0 != -1 )
  {
    for ( i = v0; i != -1; i = netnode_supnext(v3, i, 65) )
      sub_370220(i);
  }
  return v4 - __readfsqword(0x28u);
}
