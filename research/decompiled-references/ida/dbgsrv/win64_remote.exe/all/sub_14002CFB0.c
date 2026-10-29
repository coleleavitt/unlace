/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002CFB0
// Address: 0x000000014002CFB0

//----- (000000014002CFB0) ----------------------------------------------------
size_t __fastcall sub_14002CFB0(const char *a1, char *a2)
{
  char v4; // bl
  size_t result; // rax
  __int64 i; // r8

  v4 = 0;
  result = strlen(a1);
  for ( i = (int)result; i > 0; v4 = 1 )
  {
    if ( a1[i - 1] != 4 )
      break;
    result = (unsigned int)(result - 1);
    --i;
  }
  if ( a2 )
    *a2 = v4;
  return result;
}
