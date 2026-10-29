/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_449FB8
// Address: 0x0000000000449FB8

//----- (0000000000449FB8) ----------------------------------------------------
__int64 __fastcall sub_449FB8(unsigned __int8 *a1)
{
  unsigned int v2; // w1
  __int64 v3; // x1
  __int64 result; // x0
  _BOOL8 v5; // x20

  v2 = *a1;
  if ( v2 == 5 )
  {
    sub_448310((__int64 *)a1);
    *((_QWORD *)a1 + 1) = 1;
    return 1;
  }
  if ( v2 > 5 )
  {
    if ( v2 == 7 )
    {
      v5 = *((_QWORD *)a1 + 2) > 1u;
      sub_448310((__int64 *)a1);
      *((_QWORD *)a1 + 1) = v5;
      return 1;
    }
    if ( v2 == 9 )
    {
      v3 = *((_QWORD *)a1 + 1);
      result = 1;
      *a1 = 2;
      *((_QWORD *)a1 + 1) = v3 != 0;
      return result;
    }
LABEL_9:
    sub_4869C8(61);
    return 0;
  }
  result = 1;
  if ( v2 != 2 )
    goto LABEL_9;
  return result;
}
