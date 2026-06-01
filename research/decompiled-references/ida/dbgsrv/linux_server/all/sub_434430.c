/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_434430
// Address: 0x0000000000434430

//----- (0000000000434430) ----------------------------------------------------
_BOOL8 __fastcall sub_434430(_QWORD *a1)
{
  int v1; // edx
  _BOOL8 result; // rax

  v1 = sub_433170(a1, -1);
  result = 1;
  if ( !v1 )
  {
    sub_42E970(a1);
    return (unsigned int)sub_434330((__int64)a1, 0, 0) != 0;
  }
  return result;
}
