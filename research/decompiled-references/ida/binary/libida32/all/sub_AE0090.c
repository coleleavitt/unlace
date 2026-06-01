__int64 __fastcall sub_AE0090(__int64 a1, __int64 a2)
{
  int v2; // eax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v2 = sub_F83A90(a1);
  else
    v2 = *(_BYTE *)(a1 + 34) >> 4;
  if ( v2 )
  {
    sub_971800(a2, "[[clang::no_thread_safety_analysis");
    return sub_971800(a2, "]]");
  }
  else
  {
    sub_971800(a2, "__attribute__((no_thread_safety_analysis");
    return sub_971800(a2, "))");
  }
}

