char __fastcall sub_388000(__int64 a1)
{
  char result; // al
  char *v2; // rbx
  char *v3; // rdi

  result = 0;
  if ( !*(_BYTE *)(a1 + 274) )
  {
    result = *(_BYTE *)(a1 + 280);
    if ( !result )
    {
      v2 = *(char **)(a1 + 72);
      if ( v2 )
      {
        v3 = strchr(*(const char **)(a1 + 72), 64);
        if ( !v3 )
          v3 = v2;
        return strchr(v3, 43) != nullptr;
      }
    }
  }
  return result;
}
