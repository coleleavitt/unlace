__int64 __fastcall sub_75CE00(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  v2 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v2) <= 5 )
    return sub_26240F0(a2, "__uptr", 6);
  *(_DWORD *)v2 = 1886740319;
  *(_WORD *)(v2 + 4) = 29300;
  *(_QWORD *)(a2 + 32) += 6LL;
  return 29300;
}

