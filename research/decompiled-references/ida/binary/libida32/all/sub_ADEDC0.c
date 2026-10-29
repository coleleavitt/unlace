__int64 __fastcall sub_ADEDC0(__int64 a1, __int64 a2)
{
  int v2; // eax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v2 = sub_F83A90(a1);
  else
    v2 = *(_BYTE *)(a1 + 34) >> 4;
  if ( v2 == 1 )
    goto LABEL_6;
  if ( v2 )
  {
    if ( v2 == 2 )
    {
LABEL_6:
      sub_971800(a2, "[[clang::noconvergent");
      return sub_971800(a2, "]]");
    }
    sub_971800(a2, "__declspec(noconvergent");
    return sub_971800(a2, ")");
  }
  else
  {
    sub_971800(a2, "__attribute__((noconvergent");
    return sub_971800(a2, "))");
  }
}

