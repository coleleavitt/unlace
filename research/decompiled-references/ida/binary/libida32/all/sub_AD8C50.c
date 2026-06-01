__int64 __fastcall sub_AD8C50(__int64 a1, __int64 a2)
{
  int v3; // eax
  const char *v4; // rsi
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v3 = sub_F83A90(a1);
  else
    v3 = *(_BYTE *)(a1 + 34) >> 4;
  switch ( v3 )
  {
    case 0:
    case 4:
      v4 = "[[maybe_unused";
      goto LABEL_5;
    case 1:
      sub_971800(a2, "__attribute__((unused");
      result = sub_971800(a2, "))");
      break;
    case 2:
    case 3:
      v4 = "[[gnu::unused";
LABEL_5:
      sub_971800(a2, v4);
      result = sub_971800(a2, "]]");
      break;
  }
  return result;
}

