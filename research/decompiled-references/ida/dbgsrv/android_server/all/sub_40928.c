/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40928
// Address: 0x0000000000040928

//----- (0000000000040928) ----------------------------------------------------
__int64 __fastcall sub_40928(_QWORD *a1)
{
  _QWORD *v2; // x9
  _QWORD *v3; // x10
  __int64 v4; // x10
  __int64 v5; // x11
  _QWORD *v6; // t1

  if ( a1[20] )
    return 1;
  v2 = (_QWORD *)a1[217];
  while ( 1 )
  {
    if ( v2 == a1 + 218 )
      return 0;
    if ( *((_BYTE *)v2 + 65) && !*((_DWORD *)v2 + 12) && !*((_DWORD *)v2 + 11) )
      break;
    v3 = (_QWORD *)v2[1];
    if ( v3 )
    {
      do
      {
        v2 = v3;
        v3 = (_QWORD *)*v3;
      }
      while ( v3 );
    }
    else
    {
      v4 = (__int64)(v2 + 2);
      if ( *(_QWORD **)v2[2] == v2 )
      {
        v2 = (_QWORD *)v2[2];
      }
      else
      {
        do
        {
          v5 = *(_QWORD *)v4;
          v6 = *(_QWORD **)(*(_QWORD *)v4 + 16LL);
          v4 = *(_QWORD *)v4 + 16LL;
          v2 = v6;
        }
        while ( *v6 != v5 );
      }
    }
  }
  return 1;
}
