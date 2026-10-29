__int64 __fastcall sub_72F620(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  v2 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v2) <= 8 )
    return sub_26240F0(a2, "_Noreturn", 9);
  *(_BYTE *)(v2 + 8) = 110;
  *(_QWORD *)v2 = 0x72757465726F4E5FLL;
  *(_QWORD *)(a2 + 32) += 9LL;
  return 0x72757465726F4E5FLL;
}

