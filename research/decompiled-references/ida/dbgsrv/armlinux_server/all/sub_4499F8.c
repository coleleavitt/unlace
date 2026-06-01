/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4499F8
// Address: 0x00000000004499F8

//----- (00000000004499F8) ----------------------------------------------------
__int64 __fastcall sub_4499F8(unsigned __int8 *a1)
{
  unsigned int v2; // w0
  const char *v4; // x20

  if ( !a1 )
    return sub_4869C8(1531);
  while ( 1 )
  {
    v2 = *a1;
    if ( v2 == 7 )
      break;
    if ( v2 <= 7 )
    {
      if ( v2 != 2 )
      {
        if ( v2 != 3 )
          return sub_4869C8(1531);
        return sub_4497A0((__int64 *)a1);
      }
      return 0;
    }
    if ( v2 == 9 )
      return 0;
    if ( v2 != 10 )
      return sub_4869C8(1531);
    if ( !sub_448A08((__int64 *)a1, 2) )
      return sub_4869A0();
  }
  v4 = *((const char **)a1 + 1);
  if ( v4 && *v4 )
  {
    if ( !strcasecmp(*((const char **)a1 + 1), "true") )
    {
      sub_448310((__int64 *)a1);
      *((_QWORD *)a1 + 1) = 1;
    }
    else
    {
      if ( strcasecmp(v4, "false") )
        return sub_4497A0((__int64 *)a1);
      sub_448310((__int64 *)a1);
      *((_QWORD *)a1 + 1) = 0;
    }
    return 0;
  }
  return sub_4869C8(80);
}
