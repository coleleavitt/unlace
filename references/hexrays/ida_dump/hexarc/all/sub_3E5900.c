__int64 __fastcall sub_3E5900(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // al

  v5 = *(_BYTE *)(a1 + 40LL * a2 + 65);
  if ( (unsigned __int8)(v5 - 2) > 2u && (unsigned __int8)(v5 - 6) > 1u )
    return 0xFFFFFFFFLL;
  else
    return sub_3E57E0(a1, a2, 0x118u, a4, a5);
}
