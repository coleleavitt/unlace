__int64 __fastcall sub_5F0670(unsigned int a1)
{
  __int64 v2; // rdi
  __int64 v3; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v3 = 0;
  getinf_buf(26, &v3, 8);
  if ( a1 >= (unsigned int)v3 && a1 < HIDWORD(v3) )
    return v4 - __readfsqword(0x28u);
  v2 = (unsigned int)ea2node(a1);
  return netnode_supdel(v2, 30, 83);
}

