/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7F1DC
// Address: 0x0007F1DC

//----- (0007F1DC) --------------------------------------------------------
int __fastcall sub_7F1DC(_QWORD *a1)
{
  int result; // r0
  int pipedes[2]; // [sp+4h] [bp-10h] BYREF

  result = pipe(pipedes);
  if ( result )
    return *_errno_location();
  *a1 = *(_QWORD *)pipedes;
  return result;
}
