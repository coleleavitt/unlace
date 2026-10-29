__int64 __fastcall sub_B00C60(__int64 a1, __int64 a2)
{
  int v3; // eax
  const char *v4; // rsi

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v3 = sub_FA77D0(a1);
  else
    v3 = *(_BYTE *)(a1 + 34) >> 4;
  switch ( v3 )
  {
    case 0:
      v4 = "__read_only";
      break;
    case 1:
      v4 = "read_only";
      break;
    case 2:
      v4 = "__write_only";
      break;
    case 3:
      v4 = "write_only";
      break;
    case 4:
      v4 = "__read_write";
      break;
    case 5:
      v4 = "read_write";
      break;
  }
  sub_995540(a2, v4);
  return sub_995540(a2, &byte_22F0C30);
}
