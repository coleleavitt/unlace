__int64 __fastcall sub_241680(__int64 a1, double a2)
{
  __int64 result; // rax
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  result = 0;
  if ( *(_DWORD *)a1 )
  {
    v3 = *(_DWORD *)(a1 + 4);
    if ( (v3 & 0x20) != 0 )
    {
      return *(unsigned __int8 *)(a1 + 379);
    }
    else
    {
      if ( (v3 & 2) == 0 )
      {
        v4 = sub_241540((unsigned int *)a1, a2);
        if ( !(unsigned int)decode_insn(a1 + 16, v4, v5, v6, v7, v8, a2) )
          *(_QWORD *)(a1 + 32) = -1;
        *(_DWORD *)(a1 + 4) |= 2u;
      }
      result = is_ret_insn(a1 + 16, 3);
      *(_DWORD *)(a1 + 4) |= 0x20u;
      *(_BYTE *)(a1 + 379) = result;
    }
  }
  return result;
}
