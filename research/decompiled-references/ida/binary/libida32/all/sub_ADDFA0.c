__int64 __fastcall sub_ADDFA0(__int64 a1, __int64 a2)
{
  int v2; // eax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v2 = sub_F83A90(a1);
  else
    v2 = *(_BYTE *)(a1 + 34) >> 4;
  if ( v2 )
  {
    sub_971800(a2, "[[clang::os_returns_retained");
    return sub_971800(a2, "]]");
  }
  else
  {
    sub_971800(a2, "__attribute__((os_returns_retained");
    return sub_971800(a2, "))");
  }
}

