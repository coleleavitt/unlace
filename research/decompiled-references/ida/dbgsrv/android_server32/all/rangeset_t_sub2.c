/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_sub2
// Address: 0x00082E08

//----- (00082E08) --------------------------------------------------------
int __fastcall rangeset_t_sub2(int a1, int a2)
{
  char v3; // r7
  unsigned int *v5; // r6

  v3 = 0;
  if ( 8 * *(_DWORD *)(a2 + 4) )
  {
    v5 = *(unsigned int **)a2;
    v3 = 0;
    do
    {
      v3 |= rangeset_t_sub(a1, v5);
      v5 += 2;
    }
    while ( v5 != (unsigned int *)(*(_DWORD *)a2 + 8 * *(_DWORD *)(a2 + 4)) );
  }
  return v3 & 1;
}
