/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E786B
// Address: 0x00000000000E786B

//----- (00000000000E786B) ----------------------------------------------------
char *__fastcall sub_E786B(char *a1, _QWORD *a2)
{
  char *result; // rax
  __int64 v3; // rdx
  unsigned int v4; // ecx
  char v5; // di
  unsigned __int64 v6; // r8

  result = a1;
  v3 = 0;
  v4 = 0;
  do
  {
    v5 = *result++;
    v6 = (unsigned __int64)(v5 & 0x7F) << v4;
    v4 += 7;
    v3 |= v6;
  }
  while ( v5 < 0 );
  if ( v4 <= 0x3F && (v5 & 0x40) != 0 )
    v3 |= -1LL << v4;
  *a2 = v3;
  return result;
}
