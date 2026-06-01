__int64 __fastcall sub_73D0A0(__int64 a1, __int64 a2)
{
  const char *v4; // rsi
  __int64 v5; // rdi
  unsigned __int8 v6; // al
  __int64 v7; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  sub_5FF0F0(a2, "[[hlsl::resource_class");
  sub_5FF0F0(a2, "(");
  v4 = "CBuffer";
  v5 = sub_5FF0F0(a2, "\"");
  v6 = *(_BYTE *)(a1 + 35);
  if ( v6 != 2 )
  {
    v4 = "Sampler";
    if ( v6 <= 2u )
    {
      v4 = "SRV";
      if ( v6 )
        v4 = "UAV";
    }
  }
  v7 = sub_5FF0F0(v5, v4);
  sub_5FF0F0(v7, "\"");
  sub_5FF0F0(a2, ")");
  return sub_5FF0F0(a2, "]]");
}

