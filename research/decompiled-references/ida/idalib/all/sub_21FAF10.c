__int64 __fastcall sub_21FAF10(__int64 a1, char a2, int a3)
{
  char v3; // al

  v3 = *(_BYTE *)(a1 + 20);
  if ( (v3 & 6) != 0 && (v3 & 7) != 3 )
    return sub_21FAC20(a1, a2, a3);
  else
    return 0;
}
