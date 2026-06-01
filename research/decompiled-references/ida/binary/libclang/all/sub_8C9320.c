const char *__fastcall sub_8C9320(__int64 a1)
{
  const char *v1; // rcx
  char v2; // dl

  v1 = "__bridge_transfer";
  v2 = *(_BYTE *)(a1 + 40) & 3;
  if ( v2 == 1 )
    return v1;
  v1 = "__bridge_retained";
  if ( v2 == 2 )
    return v1;
  else
    return "__bridge";
}

