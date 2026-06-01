/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43C470
// Address: 0x000000000043C470

//----- (000000000043C470) ----------------------------------------------------
__int64 __fastcall sub_43C470(_QWORD *a1, __int64 a2, const char *a3, __int64 a4)
{
  unsigned int v5; // w21
  __int64 v7; // [xsp+38h] [xbp-28h] BYREF
  __int64 v8; // [xsp+40h] [xbp-20h]
  __int64 v9; // [xsp+48h] [xbp-18h]
  __int64 v10; // [xsp+50h] [xbp-10h]

  LOBYTE(v7) = 2;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v5 = sub_43C350(&v7, a2, a3, a4);
  if ( (_BYTE)v5 )
  {
    sub_4497A0(&v7);
    *a1 = v8;
  }
  sub_448310(&v7);
  return v5;
}
