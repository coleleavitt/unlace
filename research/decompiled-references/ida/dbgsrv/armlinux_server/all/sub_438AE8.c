/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438AE8
// Address: 0x0000000000438AE8

//----- (0000000000438AE8) ----------------------------------------------------
bool __fastcall sub_438AE8(_QWORD *a1, int a2, int a3)
{
  __int64 v3; // x1
  int v4; // w0
  int v5; // w20
  _UNKNOWN **v7; // x3
  int v8; // [xsp+2Ch] [xbp-14h]
  unsigned __int8 v9; // [xsp+37h] [xbp-9h] BYREF

  v9 = 0;
  if ( a2 < 0 )
  {
    if ( qword_520148 <= (unsigned __int64)-a2 )
      return 0;
    v8 = a3;
    v7 = &off_520150[-5 * a2];
    v5 = *((_DWORD *)v7 + 8);
    v4 = sub_43E9E0((const char *)v7[2], (char *)&v9);
    a3 = v8;
  }
  else
  {
    if ( a2 == 0x7FFFFFFF || (unsigned __int64)a2 >= a1[1] )
      return 0;
    v3 = *(_QWORD *)(*a1 + 8LL * a2);
    v4 = *(_DWORD *)(v3 + 24);
    v5 = *(_DWORD *)(v3 + 72);
  }
  if ( v5 + a3 >= v4 )
    return !((v4 < a3) & (v9 ^ 1));
  return 0;
}
// 520148: using guessed type __int64 qword_520148;
// 520150: using guessed type _UNKNOWN **off_520150;
