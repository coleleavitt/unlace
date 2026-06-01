__int64 __fastcall sub_D10D0(__int64 a1)
{
  __int64 result; // rax
  int v2; // eax

  result = 0;
  if ( *(_DWORD *)a1 )
  {
    v2 = *(_DWORD *)(a1 + 4);
    if ( (v2 & 0x20) != 0 )
    {
      return *(unsigned __int8 *)(a1 + 231);
    }
    else
    {
      if ( (v2 & 2) == 0 )
      {
        sub_D0EB0(a1);
        if ( !(unsigned int)decode_insn() )
          *(_DWORD *)(a1 + 20) = -1;
        *(_DWORD *)(a1 + 4) |= 2u;
      }
      result = is_ret_insn();
      *(_DWORD *)(a1 + 4) |= 0x20u;
      *(_BYTE *)(a1 + 231) = result;
    }
  }
  return result;
}

