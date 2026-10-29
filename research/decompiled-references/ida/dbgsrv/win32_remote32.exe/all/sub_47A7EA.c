/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A7EA
// Address: 0x0047A7EA

//----- (0047A7EA) --------------------------------------------------------
int sub_47A7EA()
{
  int v0; // esi
  int v2; // [esp+4h] [ebp-4h] BYREF

  v0 = 0;
  v2 = 0;
  if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x80000000) != 0 )
    return 1;
  sub_478E64((int)&v2);
  if ( v2 != 1 )
    return 1;
  return v0;
}
