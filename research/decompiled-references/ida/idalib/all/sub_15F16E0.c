__int64 __fastcall sub_15F16E0(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int8 v2; // dl

  v1 = sub_15F1540(a1, 0);
  v2 = *(_BYTE *)(v1 + 8) & 0x7F;
  if ( v2 == 18 || (unsigned int)v2 - 34 <= 5 )
    return sub_B8C1B0(v1);
  else
    return 0;
}
