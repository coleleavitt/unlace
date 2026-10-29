__int64 __fastcall sub_743E60(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v2 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v2 = sub_C4A760(a1);
  if ( v2 > 2 )
  {
    sub_5FF0F0(a2, "__declspec(naked");
    return sub_5FF0F0(a2, ")");
  }
  else if ( v2 )
  {
    sub_5FF0F0(a2, "[[gnu::naked");
    return sub_5FF0F0(a2, "]]");
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((naked");
    return sub_5FF0F0(a2, "))");
  }
}

