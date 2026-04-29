__int64 __fastcall sub_328F0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ebp
  __int64 v5; // r13
  int v6; // r15d
  __int64 v7; // r14
  __int64 v8; // rax
  _QWORD v9[3]; // [rsp+0h] [rbp-68h] BYREF
  int v10; // [rsp+18h] [rbp-50h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 912);
  if ( v2 != -1
    && (*(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = v2 + 16LL * *(_QWORD *)(a1 + 16),
        v3 = is_loaded(*(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL)),
        (_BYTE)v3) )
  {
    v5 = *(_QWORD *)(a1 + 392);
    v6 = *(_DWORD *)(a1 + 920);
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL);
    v8 = get_flags_ex(v5, 4) & 0xF000000;
    if ( v6 == -1 )
    {
      if ( v8 == 83886080
        && (unsigned __int8)get_refinfo(v9, v5, 1)
        && (v10 & 0x4F) == 2
        && (v10 & 0x80u) != 0
        && v9[0] == -1
        && v7 == v9[1]
        && !v9[2] )
      {
        clr_op_type(v5, 1);
      }
    }
    else if ( !v8 )
    {
      op_offset(v5, 1, (unsigned __int8)v6, v7, 0, 0);
    }
    netnode_supdel(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 152LL), *(_QWORD *)(a1 + 384), 321);
    mark_switch_insns_jpt(a1, a2, 0);
  }
  else
  {
    return 0;
  }
  return v3;
}
