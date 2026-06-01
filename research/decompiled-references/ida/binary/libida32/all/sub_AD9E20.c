__int64 __fastcall sub_AD9E20(__int64 a1, __int64 a2)
{
  int v2; // eax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v2 = sub_F83A90(a1);
  else
    v2 = *(_BYTE *)(a1 + 34) >> 4;
  if ( v2 )
  {
    sub_971800(a2, "[[clang::swift_async_context");
    return sub_971800(a2, "]]");
  }
  else
  {
    sub_971800(a2, "__attribute__((swift_async_context");
    return sub_971800(a2, "))");
  }
}

