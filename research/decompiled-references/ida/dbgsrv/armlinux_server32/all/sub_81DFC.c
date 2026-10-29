/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81DFC
// Address: 0x00081DFC

//----- (00081DFC) --------------------------------------------------------
int __fastcall sub_81DFC(int *a1, void *s, unsigned int a3, size_t n)
{
  int v4; // r7
  int v5; // r4
  bool v6; // zf
  unsigned int v7; // r4
  int v10; // r4
  int v11; // r5
  int v12; // t1

  v4 = *a1;
  v5 = *(_DWORD *)(*a1 - 12);
  v6 = v5 == 0;
  if ( v5 )
    v6 = n == 0;
  if ( v6 )
    return -1;
  v7 = v5 - 1;
  if ( v7 >= a3 )
    v7 = a3;
  v10 = v7 + 1 + v4;
  while ( 1 )
  {
    v11 = ~v4 + v10;
    v12 = *(unsigned __int8 *)--v10;
    if ( memchr(s, v12, n) )
      break;
    if ( v10 == v4 )
      return -1;
  }
  return v11;
}
