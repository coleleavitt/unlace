/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49A300
// Address: 0x000000000049A300

//----- (000000000049A300) ----------------------------------------------------
__int64 __fastcall sub_49A300(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v8; // w21
  bool v9; // zf
  unsigned __int64 *v10; // x7
  unsigned __int64 v12[2]; // [xsp+48h] [xbp-28h] BYREF
  unsigned __int64 v13[2]; // [xsp+58h] [xbp-18h] BYREF

  v8 = sub_49A1D8(a1, a2, a3, a4);
  if ( v8 )
    v9 = 1;
  else
    v9 = a2 == a3;
  if ( !v9 )
  {
    v12[0] = a2;
    v12[1] = a2 + a4;
    if ( !sub_4963C8((unsigned __int64 **)a1, v12) )
    {
      if ( !under_debugger )
        sub_492270(42);
      __break(0x3E8u);
    }
    sub_4975C8((__int64)a1, v10);
    v13[0] = a3;
    v13[1] = a3 + a4;
    sub_497350((__int64)a1, v13);
  }
  return v8;
}
// 49A388: variable 'v10' is possibly undefined
// 52451C: using guessed type char under_debugger;
