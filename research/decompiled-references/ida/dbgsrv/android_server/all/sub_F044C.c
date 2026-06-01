/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_F044C
// Address: 0x00000000000F044C

//----- (00000000000F044C) ----------------------------------------------------
__int64 __fastcall sub_F044C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x20
  char v6; // w22
  char *v7; // x0
  char *v8; // x0
  __int64 result; // x0
  unsigned __int64 v10; // [xsp+30h] [xbp+30h] BYREF
  unsigned __int64 v11; // [xsp+38h] [xbp+38h] BYREF

  v5 = a2;
  v6 = sub_F0020(a2);
  v7 = (char *)sub_EFB84(v6, a1);
  sub_EFC44(v6, v7, (char *)(v5 + 8), &v10);
  LOBYTE(v5) = sub_F0020(a3);
  v8 = (char *)sub_EFB84(v5, a1);
  sub_EFC44(v5, v8, (char *)(a3 + 8), &v11);
  if ( v10 >= v11 )
    LODWORD(result) = 0;
  else
    LODWORD(result) = -1;
  if ( v10 > v11 )
    return 1;
  else
    return (unsigned int)result;
}
