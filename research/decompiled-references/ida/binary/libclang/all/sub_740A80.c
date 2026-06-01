__int64 __fastcall sub_740A80(__int64 a1, __int64 a2, int a3)
{
  int v5; // eax
  const char *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v5 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v5 = sub_C4A760(a1);
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
  sub_5FF0F0(a2, v6);
  sub_7225D0(a1, a2, a3, v7, v8, v9);
  return sub_5FF0F0(a2, "\n");
}

