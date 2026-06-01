/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006C72C
// Address: 0x000000014006C72C

//----- (000000014006C72C) ----------------------------------------------------
void __fastcall sub_14006C72C(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
    free(*(void **)a1);
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0;
}
