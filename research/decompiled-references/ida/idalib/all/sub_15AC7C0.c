__int64 __fastcall sub_15AC7C0(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( (*(_BYTE *)(a1 + 2) & 0x40) != 0 )
    return (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL) >> 16) & 1LL;
  return result;
}
