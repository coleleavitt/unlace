/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7F344
// Address: 0x0007F344

//----- (0007F344) --------------------------------------------------------
int __fastcall sub_7F344(_QWORD *a1)
{
  int result; // r0
  int pipedes[2]; // [sp+4h] [bp-10h] BYREF

  result = pipe(pipedes);
  if ( result )
    return *_errno_location();
  *a1 = *(_QWORD *)pipedes;
  return result;
}
