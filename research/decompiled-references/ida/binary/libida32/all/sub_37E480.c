unsigned __int64 __fastcall sub_37E480(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // [rsp+0h] [rbp-38h] BYREF
  int v5; // [rsp+8h] [rbp-30h]
  int v6; // [rsp+Ch] [rbp-2Ch]
  int v7; // [rsp+10h] [rbp-28h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 529) & 0xC0) != 0 || (unsigned __int8)is_debugger_on() )
  {
    v4 = 24;
    v7 = 0;
    v6 = 1;
    v5 = getinf(37);
    v2 = *(_QWORD *)(a1 + 528);
    v3 = 7;
    if ( (v2 & 0xC000) == 0x8000 && (~(_WORD)v2 & 0x600) == 0 && (v2 & 0x10000000) == 0 )
      v3 = (unsigned __int8)is_ret_insn(a1 + 212, 2, 7) == 0 ? 263 : 135;
    get_ea_name(a1 + 432, *(unsigned int *)(a1 + 16), v3, &v4);
    if ( *(_QWORD *)(a1 + 440) > 1u )
    {
      tag_addr(a1 + 432, *(unsigned int *)(a1 + 16), 1);
      if ( v7 > 0 )
        *(_DWORD *)(a1 + 144) |= 0x4000u;
    }
  }
  return v8 - __readfsqword(0x28u);
}

