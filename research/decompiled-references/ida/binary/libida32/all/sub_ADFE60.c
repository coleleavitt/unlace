__int64 __fastcall sub_ADFE60(__int64 a1, __int64 a2)
{
  int v2; // eax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v2 = sub_F83A90(a1);
  else
    v2 = *(_BYTE *)(a1 + 34) >> 4;
  if ( v2 )
  {
    sub_971800(a2, "[[clang::speculative_load_hardening");
    return sub_971800(a2, "]]");
  }
  else
  {
    sub_971800(a2, "__attribute__((speculative_load_hardening");
    return sub_971800(a2, "))");
  }
}

