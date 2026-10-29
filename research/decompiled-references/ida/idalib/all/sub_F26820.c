__int64 __fastcall sub_F26820(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 1096);
  v2 = *(_QWORD *)(v1 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(v1 + 24) - v2) <= 8 )
    return sub_227BF10(v1, " implicit", 9);
  *(_BYTE *)(v2 + 8) = 116;
  *(_QWORD *)v2 = 0x6963696C706D6920LL;
  *(_QWORD *)(v1 + 32) += 9LL;
  return 0x6963696C706D6920LL;
}
