unsigned __int64 __fastcall sub_81FA40(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi

  v4 = *(unsigned int *)(a1 + 32);
  if ( *(_DWORD *)a1 >> 4 == v4 )
    return *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v4 - 8);
  v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v5 <= 7 )
  {
    v6 = 0;
  }
  else if ( (*(_BYTE *)(v6 + 28) & 0x7Fu) - 57 >= 3 )
  {
    v6 = 0;
  }
  return sub_6E8B00(a2, v6);
}

