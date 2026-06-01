/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004D520
// Address: 0x000000010004D520

//----- (000000010004D520) ----------------------------------------------------
void __fastcall sub_10004D520(__int64 *a1)
{
  __int64 v2; // rdi

  v2 = *a1;
  *a1 = 0;
  if ( v2 )
  {
    if ( *((_BYTE *)a1 + 16) == 1 && (*(_BYTE *)(v2 + 16) & 1) != 0 )
      operator delete(*(void **)(v2 + 32));
    operator delete((void *)v2);
  }
}
