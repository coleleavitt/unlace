__int64 __fastcall tchooser_persistence_helper_t__::vfunc_5(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  v2 = sub_3A2B10(a1, 1u);
  result = 0;
  if ( v2 != -1 )
  {
    v4[0] = a2 + 1;
    return netnode_supset(v2, 0, v4, 8, 65);
  }
  return result;
}
