/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7EC88
// Address: 0x0007EC88

//----- (0007EC88) --------------------------------------------------------
const char *__fastcall sub_7EC88(const char *a1, unsigned __int8 *a2)
{
  const char *v2; // r7
  int v4; // r6
  size_t v5; // r8
  const char *v6; // r5
  int v7; // t1
  int v8; // r0

  v2 = (const char *)(a2 + 1);
  v4 = toupper(*a2);
  v5 = strlen(v2);
  while ( 1 )
  {
    v6 = a1;
    v7 = *(unsigned __int8 *)a1++;
    v8 = v7;
    if ( !v7 )
      break;
    if ( v4 == toupper(v8) && !strncasecmp(a1, v2, v5) )
      return v6;
  }
  return nullptr;
}
