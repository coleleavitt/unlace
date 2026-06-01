/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4498D8
// Address: 0x00000000004498D8

//----- (00000000004498D8) ----------------------------------------------------
__int64 __fastcall sub_4498D8(__int64 *a1)
{
  unsigned int v2; // w0
  int v3; // w0
  const char *v5; // x0
  __int64 v6; // x1
  __int64 v7; // [xsp+20h] [xbp-10h] BYREF

  if ( !a1 )
    return sub_4869C8(1531);
  while ( 1 )
  {
    v2 = *(unsigned __int8 *)a1;
    if ( v2 == 7 )
    {
      if ( a1[2] )
        v5 = (const char *)a1[1];
      else
        v5 = (const char *)&qword_4B2D48;
      v7 = 0;
      sub_49B8B8(v5, "%lli", &v7);
      sub_448310(a1);
LABEL_16:
      v6 = v7;
      *(_BYTE *)a1 = 9;
      a1[1] = v6;
      return 0;
    }
    if ( v2 <= 7 )
      break;
    if ( v2 == 9 )
      return 0;
    if ( v2 != 10 )
      return sub_4869C8(1531);
    if ( !sub_448A08(a1, 2) )
      return sub_4869A0();
  }
  if ( v2 != 2 )
  {
    if ( v2 != 3 )
      return sub_4869C8(1531);
    v3 = sub_4885B8(&v7, a1 + 1, 0);
    if ( v3 != 1 )
      return sub_443E38(v3);
    goto LABEL_16;
  }
  *(_BYTE *)a1 = 9;
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
