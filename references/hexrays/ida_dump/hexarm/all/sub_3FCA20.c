__int64 __fastcall sub_3FCA20(__int64 a1, int a2, double a3)
{
  char v3; // al

  v3 = *(_BYTE *)(a1 + 40LL * a2 + 65);
  if ( (unsigned __int8)(v3 - 2) > 2u && (unsigned __int8)(v3 - 6) > 1u )
    return 0xFFFFFFFFLL;
  else
    return sub_3FB520(a1, a2, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 628LL), a3);
}
