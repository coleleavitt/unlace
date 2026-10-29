/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438C80
// Address: 0x0000000000438C80

//----- (0000000000438C80) ----------------------------------------------------
unsigned __int64 __fastcall sub_438C80(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx
  unsigned __int64 result; // rax

  v1 = a1[1];
  if ( v1 <= 2 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(278);
LABEL_7:
    BUG();
  }
  v2 = v1 - 2;
  result = *(__int16 *)(*a1 + v1 - 2);
  a1[3] = v2 - result;
  if ( result >= v2 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(279);
    goto LABEL_7;
  }
  return result;
}
// 4C94E1: using guessed type char byte_4C94E1;
