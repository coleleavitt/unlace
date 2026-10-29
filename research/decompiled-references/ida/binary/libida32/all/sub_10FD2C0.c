__int64 __fastcall sub_10FD2C0(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 246);
  if ( (*(_QWORD *)a1 & ~*(_QWORD *)(a1 + 32) & 0x7E000000000000LL) != 0 )
    return 0;
  if ( (_BYTE)result )
    return *(unsigned __int8 *)(a1 + 313) ^ 1u;
  return result;
}

