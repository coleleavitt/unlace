__int64 __fastcall IDAApplication__::vfunc_25(__int64 a1, double a2)
{
  _QWORD v3[5]; // [rsp+0h] [rbp-28h] BYREF

  v3[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)netnode_inited(a2) )
  {
    netnode_check(v3, "$ hidden msg", 0, 0);
    netnode_kill(v3);
  }
  return sub_4782F0(a1);
}
