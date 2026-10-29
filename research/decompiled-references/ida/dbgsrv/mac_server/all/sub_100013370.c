/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100013370
// Address: 0x0000000100013370

//----- (0000000100013370) ----------------------------------------------------
char *__fastcall sub_100013370(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  bool v4; // cf
  unsigned __int64 v5; // rax
  char *result; // rax

  v2 = a1[2];
  v3 = 0;
  v4 = v2 == 0;
  v5 = v2 - 1;
  if ( !v4 )
    v3 = v5;
  result = byte_10008FED8;
  if ( v3 > a2 )
  {
    if ( a1[4] )
      return (char *)(a1[1] + a2);
  }
  return result;
}
