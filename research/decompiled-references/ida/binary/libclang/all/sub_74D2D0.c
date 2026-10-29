__int64 __fastcall sub_74D2D0(__int64 a1, __int64 a2)
{
  int v3; // eax
  const char *v4; // rsi

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v3 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v3 = sub_C4A760(a1);
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
  sub_5FF0F0(a2, v4);
  return sub_5FF0F0(a2, &byte_3B9466E);
}

