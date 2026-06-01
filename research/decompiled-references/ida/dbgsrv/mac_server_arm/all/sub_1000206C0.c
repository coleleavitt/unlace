/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000206C0
// Address: 0x00000001000206C0

//----- (00000001000206C0) ----------------------------------------------------
__int64 __fastcall sub_1000206C0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // x8
  FILE *v3; // x0
  __int64 v4; // x19
  __int64 v5; // x0

  v2 = *(_QWORD *)(a1 + 8);
  if ( qword_10009D928 > v2 && (v3 = *(FILE **)(qword_10009D920 + 8 * v2)) != nullptr )
  {
    *(_BYTE *)a2 = 9;
    v4 = a2;
    v5 = qfsize(v3);
    a2 = v4;
  }
  else
  {
    v5 = -1;
  }
  *(_QWORD *)(a2 + 8) = v5;
  return 0;
}
// 10009D920: using guessed type __int64 qword_10009D920;
// 10009D928: using guessed type __int64 qword_10009D928;
