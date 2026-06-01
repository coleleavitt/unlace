/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C407
// Address: 0x0047C407

//----- (0047C407) --------------------------------------------------------
__int16 __cdecl sub_47C407(__int16 Buffer)
{
  DWORD v1; // ecx
  DWORD NumberOfCharsWritten; // [esp+0h] [ebp-4h] BYREF

  NumberOfCharsWritten = v1;
  if ( sub_4812C0() && sub_4812F6(&Buffer, 1u, &NumberOfCharsWritten) )
    return Buffer;
  else
    return -1;
}
// 47C40C: variable 'v1' is possibly undefined
