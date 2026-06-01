__int64 __fastcall sub_75C490(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  v2 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v2) <= 8 )
    return sub_26240F0(a2, "_Nullable", 9);
  *(_BYTE *)(v2 + 8) = 101;
  *(_QWORD *)v2 = 0x6C62616C6C754E5FLL;
  *(_QWORD *)(a2 + 32) += 9LL;
  return 0x6C62616C6C754E5FLL;
}

