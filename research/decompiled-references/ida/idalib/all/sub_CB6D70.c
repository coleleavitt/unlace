__int64 __fastcall sub_CB6D70(__int64 a1, __int64 a2)
{
  __int64 v3[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( (*(_BYTE *)(sub_CE6170(*(_QWORD *)(a1 + 1264)) + 2) & 1) != 0
    || (*(_BYTE *)(a2 + 1) & 6) != 0
    || (unsigned __int8)sub_F67430(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), **(_QWORD **)(a1 + 1264)) )
  {
    return 1;
  }
  v3[0] = a2 | 4;
  return sub_D005D0(a1, *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), v3);
}
