/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47D780
// Address: 0x000000000047D780

//----- (000000000047D780) ----------------------------------------------------
char *__fastcall sub_47D780(__int64 a1, char *a2, char a3)
{
  char *result; // x0

  sub_475C50(a1, a2, a3);
  result = sub_4814C8(a2, &qword_51BBF8, 6);
  if ( (a3 & 2) != 0 )
    return sub_4814C8(a2, &qword_51BBD0, 1);
  return result;
}
// 51BBD0: using guessed type __int64 qword_51BBD0;
// 51BBF8: using guessed type __int64 qword_51BBF8;
