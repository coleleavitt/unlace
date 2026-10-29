__int64 __fastcall sub_60C640(unsigned __int64 a1)
{
  __int64 v2; // rdi
  __int128 v3; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v3 = 0;
  getinf_buf(26, &v3, 16);
  if ( a1 >= (unsigned __int64)v3 && a1 < *((_QWORD *)&v3 + 1) )
    return v4 - __readfsqword(0x28u);
  v2 = ea2node(a1);
  return netnode_supdel(v2, 30, 83);
}
