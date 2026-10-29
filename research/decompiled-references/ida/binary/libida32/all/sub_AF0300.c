__int64 __fastcall sub_AF0300(__int64 a1, __int64 a2, int a3)
{
  int v5; // eax
  const char *v6; // rsi

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v5 = sub_F83A90(a1);
  else
    v5 = *(_BYTE *)(a1 + 34) >> 4;
  switch ( v5 )
  {
    case 0:
      v6 = "#pragma clang loop";
      break;
    case 1:
      v6 = "#pragma unroll";
      break;
    case 2:
      v6 = "#pragma nounroll";
      break;
    case 3:
      v6 = "#pragma unroll_and_jam";
      break;
    case 4:
      v6 = "#pragma nounroll_and_jam";
      break;
  }
  sub_971800(a2, v6);
  sub_AE1AB0(a1, a2, a3);
  return sub_971800(a2, "\n");
}

