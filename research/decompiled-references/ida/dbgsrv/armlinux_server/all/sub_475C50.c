/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475C50
// Address: 0x0000000000475C50

//----- (0000000000475C50) ----------------------------------------------------
char *__fastcall sub_475C50(__int64 a1, char *a2, char a3)
{
  char *result; // x0

  result = sub_4814C8(a2, &qword_51B9A0, 5);
  if ( (a3 & 1) != 0 )
    return sub_4814C8(a2, &qword_51B978, 1);
  return result;
}
// 51B978: using guessed type __int64 qword_51B978;
// 51B9A0: using guessed type __int64 qword_51B9A0;
