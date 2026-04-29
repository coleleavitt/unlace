unsigned __int64 __fastcall sub_64B0(_QWORD *a1)
{
  const char *v1; // rdx
  const char *v2; // rdx
  __int64 v4; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v4 = -1;
  netnode_check(&v4, "$ idaclang", 0, 1);
  v1 = s1;
  if ( a1[2] )
    v1 = (const char *)a1[1];
  netnode_supset(v4, 0, v1, 0, 112);
  v2 = s1;
  if ( a1[6] )
    v2 = (const char *)a1[5];
  netnode_supset(v4, 3, v2, 0, 112);
  netnode_supset(v4, 1, a1 + 4, 4, 112);
  netnode_supset(v4, 4, (char *)a1 + 36, 4, 112);
  return v5 - __readfsqword(0x28u);
}
