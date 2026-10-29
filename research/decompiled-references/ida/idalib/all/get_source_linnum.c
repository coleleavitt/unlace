__int64 __fastcall get_source_linnum(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v1 = -1;
  v4[1] = __readfsqword(0x28u);
  if ( (get_aflags(a1) & 1) != 0 )
  {
    v2 = ea2node(a1);
    if ( netnode_supval(v2, 9, v4, 8, 65) > 0 )
      return v4[0] - 1LL;
  }
  return v1;
}
