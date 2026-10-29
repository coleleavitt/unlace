__int64 __fastcall sub_B02040(__int64 a1, __int64 a2)
{
  int v2; // eax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v2 = sub_FA77D0(a1);
  else
    v2 = *(_BYTE *)(a1 + 34) >> 4;
  if ( v2 == 1 )
    goto LABEL_6;
  if ( v2 )
  {
    if ( v2 == 2 )
    {
LABEL_6:
      sub_995540(a2, "[[gnu::nothrow");
      return sub_995540(a2, "]]");
    }
    sub_995540(a2, "__declspec(nothrow");
    return sub_995540(a2, ")");
  }
  else
  {
    sub_995540(a2, "__attribute__((nothrow");
    return sub_995540(a2, "))");
  }
}
