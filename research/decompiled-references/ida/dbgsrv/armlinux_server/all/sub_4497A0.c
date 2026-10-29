/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4497A0
// Address: 0x00000000004497A0

//----- (00000000004497A0) ----------------------------------------------------
__int64 __fastcall sub_4497A0(__int64 *a1)
{
  unsigned int v2; // w0
  unsigned int v3; // w21
  int v4; // w0
  const char *v6; // x0
  __int64 v7; // x0
  __int64 v8; // [xsp+20h] [xbp-10h] BYREF

  if ( a1 )
  {
    while ( 1 )
    {
      v2 = *(unsigned __int8 *)a1;
      if ( v2 == 7 )
      {
        if ( a1[2] )
          v6 = (const char *)a1[1];
        else
          v6 = (const char *)&qword_4B2D48;
        v3 = 0;
        v8 = 0;
        sub_49B8B8(v6, "%lli", &v8);
        sub_448310(a1);
        a1[1] = v8;
        return v3;
      }
      if ( v2 <= 7 )
        break;
      if ( v2 == 9 )
      {
        v3 = 0;
        *(_BYTE *)a1 = 2;
        return v3;
      }
      if ( v2 != 10 )
        return (unsigned int)sub_4869C8(1531);
      if ( !sub_448A08(a1, 2) )
        return (unsigned int)sub_4869A0();
    }
    v3 = 0;
    if ( v2 == 2 )
      return v3;
    if ( v2 == 3 )
    {
      v4 = sub_488550(&v8, a1 + 1, 0);
      if ( v4 == 1 )
      {
        v7 = v8;
        *(_BYTE *)a1 = 2;
        a1[1] = v7;
      }
      else
      {
        return (unsigned int)sub_443E38(v4);
      }
      return v3;
    }
  }
  return (unsigned int)sub_4869C8(1531);
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
