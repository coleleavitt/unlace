char *__fastcall sub_730ED0(__int64 a1)
{
  int v1; // eax
  bool v2; // zf
  char *result; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v1 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v1 = sub_C4A760(a1);
  v2 = v1 == 0;
  result = "constant";
  if ( !v2 )
    return "__constant__";
  return result;
}

