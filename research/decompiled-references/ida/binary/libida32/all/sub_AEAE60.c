__int64 __fastcall sub_AEAE60(__int64 a1, __int64 a2)
{
  int v3; // eax
  const char *v4; // rsi

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v3 = sub_F83A90(a1);
  else
    v3 = *(_BYTE *)(a1 + 34) >> 4;
  if ( v3 == 1 || (v4 = "[[_Noreturn", !v3) )
    v4 = "[[noreturn";
  sub_971800(a2, v4);
  return sub_971800(a2, "]]");
}

