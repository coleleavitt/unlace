__int64 __fastcall sub_32000(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ebp
  __int64 v4; // r13
  int v5; // r15d
  __int64 v6; // r14
  __int64 v7; // rax
  _QWORD v9[3]; // [rsp+0h] [rbp-68h] BYREF
  int v10; // [rsp+18h] [rbp-50h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 912);
  if ( v2 == -1 )
    return 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = v2 + 16LL * *(_QWORD *)(a1 + 16);
  v3 = is_loaded(*(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL));
  if ( !(_BYTE)v3 )
  {
    return 0;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 392) == -1 )
      **(_DWORD **)(a1 + 376) &= ~0x200u;
    v4 = *(_QWORD *)(a1 + 400);
    v5 = *(_DWORD *)(a1 + 920);
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL);
    v7 = get_flags_ex(v4, 4) & 0xF000000;
    if ( v5 == -1 )
    {
      if ( v7 == 83886080
        && (unsigned __int8)get_refinfo(v9, v4, 1)
        && (v10 & 0x4F) == 2
        && (v10 & 0x80u) != 0
        && v9[0] == -1
        && v6 == v9[1]
        && !v9[2] )
      {
        clr_op_type(v4, 1);
      }
    }
    else if ( !v7 )
    {
      op_offset(v4, 1, (unsigned __int8)v5, v6, 0, 0);
    }
    netnode_supdel(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 152LL), *(_QWORD *)(a1 + 384), 321);
    mark_switch_insns_jpt(a1, a2, 0);
  }
  return v3;
}
