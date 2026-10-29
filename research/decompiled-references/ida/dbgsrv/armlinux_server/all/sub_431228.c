/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431228
// Address: 0x0000000000431228

//----- (0000000000431228) ----------------------------------------------------
__int64 __fastcall sub_431228(__int64 a1, __int64 *a2)
{
  char *v3; // x2
  __int64 v4; // x1

  if ( *(_QWORD *)(a1 + 48) )
  {
    v3 = *(char **)(a1 + 40);
    v4 = a1;
  }
  else
  {
    v4 = a1;
    v3 = (char *)&qword_4B2D48;
  }
  return sub_44DA00(a2, v4, v3, 0);
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
