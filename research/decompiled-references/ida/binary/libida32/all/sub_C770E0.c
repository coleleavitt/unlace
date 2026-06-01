const char *__fastcall sub_C770E0(__int64 a1)
{
  char v1; // dl
  const char *result; // rax

  v1 = *(_BYTE *)(a1 + 40) & 3;
  if ( v1 == 1 )
    return "__bridge_transfer";
  result = "__bridge";
  if ( v1 )
    return "__bridge_retained";
  return result;
}

