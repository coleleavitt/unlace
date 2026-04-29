__int64 __fastcall sub_3E2770(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int16 v6; // ax
  char v7; // cl
  __int64 v8; // rdx
  __int64 result; // rax

  v6 = *(_WORD *)(a1 + 24);
  v7 = v6 - 15;
  v8 = *(_DWORD *)(a1 + 28) & 0x100;
  if ( (unsigned __int16)(v6 - 15) > 0x38u )
    return BYTE1(v8);
  if ( ((1LL << v7) & 0x101014000000000LL) != 0 )
    return 1;
  if ( ((1LL << v7) & 9) == 0 )
    return BYTE1(v8);
  result = 1;
  if ( !(_DWORD)v8 )
    return is_call_insn(a1, a2, v8, 0x101014000000000LL, a5, a6);
  return result;
}
