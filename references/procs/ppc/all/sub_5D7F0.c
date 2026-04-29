__int64 __fastcall sub_5D7F0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 flags; // r14
  __int64 v9; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  int v13; // r14d
  __int64 v14; // [rsp+0h] [rbp-68h] BYREF
  __int128 v15; // [rsp+8h] [rbp-60h]
  int v16; // [rsp+18h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  flags = get_flags_ex(a2, 0);
  if ( (unsigned __int8)is_defarg(flags, a3) )
  {
    if ( !(unsigned __int8)is_off(flags, a3) )
      return 0;
    if ( !(unsigned __int8)getinf_flag(10, 0x200000) )
      return 0;
    v11 = getseg(a2);
    v12 = segm_adjust_ea(v11, a4);
    if ( v12 <= 0xFFFF )
      return 0;
    if ( !getseg(v12) )
      return 0;
    if ( !(unsigned __int8)get_refinfo(&v14, a2, a3) )
      return 0;
    if ( v14 != -1 )
      return 0;
    if ( v15 != 0 )
      return 0;
    v13 = v16;
    if ( v13 != (unsigned __int8)get_default_reftype(a2) )
      return 0;
  }
  v9 = 132;
  if ( *(_BYTE *)(a1 + 152) )
    v9 = 4;
  return op_offset(a2, a3, v9, *(_QWORD *)(a1 + 8) - a5, *(_QWORD *)(a1 + 144), a5);
}
