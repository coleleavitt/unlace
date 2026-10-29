/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461CD0
// Address: 0x0000000000461CD0

//----- (0000000000461CD0) ----------------------------------------------------
char *__fastcall sub_461CD0(__int64 a1, char *a2, char a3)
{
  char *result; // x0

  sub_475C50(a1, a2, a3);
  sub_4814C8(a2, &qword_51AC88, 1);
  result = (char *)*(unsigned __int8 *)(a1 + 136);
  if ( *(_BYTE *)(a1 + 136) )
    return sub_4814C8(a2, &qword_51AC38, 2);
  return result;
}
// 51AC38: using guessed type __int64 qword_51AC38;
// 51AC88: using guessed type __int64 qword_51AC88;
