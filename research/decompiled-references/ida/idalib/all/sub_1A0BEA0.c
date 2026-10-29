__int64 __fastcall sub_1A0BEA0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // al
  __int64 v6; // r12
  unsigned int v7; // eax

  if ( (*(_BYTE *)(a2 + 1) & 6) != 0 )
    return a2;
  v5 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL);
  if ( (v5 & 0x10) == 0 && (v5 & 8) != 0 )
    return a2;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = sub_C00A40(a2, a2, a3, a4, a5);
  if ( (unsigned __int8)sub_1E63CF0(a1, v7, v6, 1, 3968) )
    return 1;
  else
    return sub_1A0BDC0(a1, *(_QWORD *)(a2 + 8), a2, 0);
}
