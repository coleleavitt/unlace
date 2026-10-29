/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BD740
// Address: 0x080BD740

//----- (080BD740) --------------------------------------------------------
ssize_t __cdecl sub_80BD740(_DWORD *a1, void *buf, size_t n)
{
  int v3; // edi
  ssize_t result; // eax
  ssize_t v5; // esi

  v3 = a1[7];
  while ( 1 )
  {
    result = send(v3, buf, n, 0);
    v5 = result;
    if ( result != -1 )
      break;
    if ( *__errno_location() != 4 )
      goto LABEL_5;
  }
  if ( result >= 0 )
    return result;
LABEL_5:
  a1[11] = "send";
  a1[12] = *__errno_location();
  return v5;
}
