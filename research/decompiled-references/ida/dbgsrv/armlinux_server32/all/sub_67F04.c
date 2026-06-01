/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67F04
// Address: 0x00067F04

//----- (00067F04) --------------------------------------------------------
ssize_t __fastcall sub_67F04(_DWORD *a1, void *buf, size_t n)
{
  int v5; // r6
  int *v7; // r0
  ssize_t result; // r0
  ssize_t v9; // r4

  v5 = a1[7];
  while ( 1 )
  {
    result = send(v5, buf, n, 0);
    v9 = result;
    if ( result != -1 )
      break;
    v7 = _errno_location();
    if ( *v7 != 4 )
      goto LABEL_6;
  }
  if ( result >= 0 )
    return result;
  v7 = _errno_location();
LABEL_6:
  a1[11] = "send";
  a1[12] = *v7;
  return v9;
}
