__int64 __fastcall sub_75C1B0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdx

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  v2 = *(_QWORD **)(a2 + 32);
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v2 <= 7u )
    return sub_26240F0(a2, "_Nonnull", 8);
  *v2 = 0x6C6C756E6E6F4E5FLL;
  *(_QWORD *)(a2 + 32) += 8LL;
  return 0x6C6C756E6E6F4E5FLL;
}

