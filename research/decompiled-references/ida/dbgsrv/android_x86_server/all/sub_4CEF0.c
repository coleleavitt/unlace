/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4CEF0
// Address: 0x0004CEF0

//----- (0004CEF0) --------------------------------------------------------
int __cdecl sub_4CEF0(_DWORD *a1)
{
  char *v1; // ecx

  if ( a1[6] )
    v1 = (char *)a1[5];
  else
    v1 = byte_EF875;
  return sub_4CC80(a1, v1);
}
