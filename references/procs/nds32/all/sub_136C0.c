__int64 __fastcall sub_136C0(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 128) = a2;
  set_default_sreg_value(0, 34, a2);
  invalidate_regfinder_cache(-1, -1, 0);
  if ( !a3 )
    return v8 - __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 128);
  v6 = *(_QWORD *)(a1 + 120);
  if ( v5 != -1 )
  {
    v7 = v5 + 1;
    netnode_supset(v6, -2, &v7, 8, 65);
    return v8 - __readfsqword(0x28u);
  }
  return netnode_supdel(v6, -2, 65);
}
