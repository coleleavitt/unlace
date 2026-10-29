const char *__fastcall sub_6960(__int16 a1, int a2, int a3, int a4)
{
  char *v4; // rax
  int i; // r8d
  const char *result; // rax

  v4 = (char *)&unk_22400;
  for ( i = 0; i != 113; ++i )
  {
    if ( *(_WORD *)v4 == a1 && (v4[2] == -1 || a3 == -1 || v4[2] == a3) && a2-- == 0 )
      return *((const char **)&unk_22400 + 2 * i + 1);
    v4 += 16;
  }
  result = "Unknown COFF machine";
  if ( !a4 )
    return nullptr;
  return result;
}

