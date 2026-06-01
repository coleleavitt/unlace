__int64 __fastcall IDAApplication__::vfunc_24(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  bool v4; // zf
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // [rsp+18h] [rbp-30h] BYREF
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_DWORD *)(a2 + 84) == 1;
  v10[1] = __readfsqword(0x28u);
  if ( !v4 || !(unsigned __int8)netnode_inited(a4) )
    return sub_4791C0(a1, a2, a3);
  netnode_check(&v9, "$ hidden msg", 0, 1);
  v7 = a3;
  if ( !a3 )
    v7 = 0x80000000LL;
  v8 = *(int *)(a2 + 80);
  v10[0] = v7;
  return netnode_supset(v9, v8, v10, 8, 65);
}
