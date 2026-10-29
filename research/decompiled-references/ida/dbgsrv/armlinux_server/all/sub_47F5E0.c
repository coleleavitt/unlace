/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F5E0
// Address: 0x000000000047F5E0

//----- (000000000047F5E0) ----------------------------------------------------
__int64 __fastcall sub_47F5E0(__int64 a1, int a2, _WORD *a3)
{
  _WORD *v3; // x22
  __int64 v4; // x21
  __int64 v6; // x19
  unsigned __int8 v7; // w20

  *a3 = 8736;
  v3 = a3 + 1;
  if ( a2 > 0 )
  {
    v4 = (unsigned int)(a2 - 1) + 1LL;
    v6 = 0;
    do
    {
      v7 = *(_BYTE *)(a1 + v6);
      if ( strchr((const char *)&qword_4DD8A8, v7) )
        v7 = 46;
      *((_BYTE *)v3 + v6++) = v7;
    }
    while ( v6 != v4 );
    v3 = (_WORD *)((char *)v3 + v6);
  }
  *v3 = 34;
  return 34;
}
// 4DD8A8: using guessed type __int64 qword_4DD8A8;
