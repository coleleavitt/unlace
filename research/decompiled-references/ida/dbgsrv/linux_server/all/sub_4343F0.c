/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4343F0
// Address: 0x00000000004343F0

//----- (00000000004343F0) ----------------------------------------------------
_BOOL8 __fastcall sub_4343F0(_QWORD *a1)
{
  int v1; // edx
  _BOOL8 result; // rax

  v1 = sub_433170(a1, 1);
  result = 1;
  if ( !v1 )
  {
    sub_42E970(a1);
    return (unsigned int)sub_434330((__int64)a1, 0, 0) != 0;
  }
  return result;
}
