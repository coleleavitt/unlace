/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140028810
// Address: 0x0000000140028810

//----- (0000000140028810) ----------------------------------------------------
unsigned __int64 __fastcall sub_140028810(__int64 a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 result; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  __int64 v9; // rcx

  if ( a2 > *(_QWORD *)(a1 + 16) )
    *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, a2, 0x20u);
  result = *(_QWORD *)(a1 + 8);
  if ( result < a2 )
  {
    v7 = 32 * result;
    v8 = a2 - result;
    do
    {
      v9 = v7 + *(_QWORD *)a1;
      *(_BYTE *)v9 = 2;
      *(_OWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 24) = 0;
      result = sub_140028E70((char *)v9, a3);
      v7 += 32;
      --v8;
    }
    while ( v8 );
  }
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
