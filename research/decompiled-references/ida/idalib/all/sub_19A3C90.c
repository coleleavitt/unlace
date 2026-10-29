__int64 __fastcall sub_19A3C90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  _DWORD v6[8]; // [rsp+8h] [rbp-20h] BYREF

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 97LL) & 0x40) == 0 )
    return 0;
  v4 = sub_B7D390(a2, (__int64)v6, 0, a4);
  if ( (_BYTE)v4 )
    return 0;
  v6[0] = 0;
  if ( sub_B74C70(a2) || !sub_B760E0(a2, v6, nullptr) )
    return v4;
  LOBYTE(v4) = v6[0] != 0;
  return v4;
}
