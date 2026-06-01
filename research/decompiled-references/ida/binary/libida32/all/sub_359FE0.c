__int64 __fastcall sub_359FE0(__int64 a1, __int16 a2)
{
  int v3; // eax
  __int64 v4; // rcx

  if ( (a2 & 0xC000) == 0 || (**(_DWORD **)(a1 + 480) & 0x2000000) != 0 || *(_QWORD *)(a1 + 440) <= 1u )
    return 0;
  v3 = *(_DWORD *)(a1 + 144);
  v4 = *(_QWORD *)(a1 + 432);
  BYTE1(v3) = BYTE1(v3) & 0xE7 | 0x10;
  *(_DWORD *)(a1 + 144) = v3;
  return sub_359BD0(a1, 0, (__int64)&unk_22AD21E, v4);
}

