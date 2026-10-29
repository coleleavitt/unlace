char __fastcall sub_10FD210(__int64 a1)
{
  char result; // al
  __int64 v2; // rdx
  __int64 v3; // rsi

  if ( (*(_QWORD *)a1 & 0x800000058411LL) != 0 )
    return 0;
  v2 = *(_QWORD *)a1 & ~*(_QWORD *)(a1 + 32);
  if ( (v2 & 0x7E000000000000LL) == 0 || !*(_BYTE *)(a1 + 246) || (result = *(_BYTE *)(a1 + 313)) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( (v3 & 0x200) == 0 || (result = *(_BYTE *)(a1 + 312)) != 0 )
    {
      result = 1;
      if ( !(v2 & 0x607E7EFDFFF80000LL | (unsigned __int8)(v3 & ~(unsigned __int8)*(_QWORD *)(a1 + 40)) & 0xC9) )
        return *(_DWORD *)(a1 + 224) != 0;
    }
  }
  return result;
}

