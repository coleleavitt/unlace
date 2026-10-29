void __fastcall sub_FEF280(__int64 a1, char a2)
{
  char v2; // al

  v2 = *(_BYTE *)(a1 + 904);
  if ( (v2 & 4) != 0 || (v2 & 1) == 0 && a2 )
    sub_FED090(a1, a2);
}
