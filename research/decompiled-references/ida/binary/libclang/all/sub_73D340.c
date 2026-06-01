__int64 __fastcall sub_73D340(__int64 a1, __int64 a2)
{
  void *v2; // rdx

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  v2 = *(void **)(a2 + 32);
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v2 <= 0xAu )
    return sub_26240F0(a2, ":SV_GroupID", 11);
  qmemcpy(v2, ":SV_GroupID", 11);
  *(_QWORD *)(a2 + 32) += 11LL;
  return 0x756F72475F56533ALL;
}

