char *__fastcall sub_746B40(__int64 a1)
{
  unsigned int v1; // eax
  bool v2; // cf
  char *result; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v1 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v1 = sub_C4A760(a1);
  v2 = v1 < 5;
  result = "no_stack_protector";
  if ( !v2 )
    return "safebuffers";
  return result;
}

