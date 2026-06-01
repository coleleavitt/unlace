/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5295C
// Address: 0x0005295C

//----- (0005295C) --------------------------------------------------------
_DWORD **__fastcall sub_5295C(_DWORD **result, _DWORD ***a2, _DWORD *a3)
{
  _DWORD **v4; // r3
  _DWORD **v6; // r5
  _DWORD **v7; // r4
  _DWORD *v8; // r1

  v4 = *a2;
  if ( *a2 != (_DWORD **)*a3 )
  {
    v6 = result;
    do
    {
      v7 = (_DWORD **)*v4;
      *v4[1] = *v4;
      (*v4)[1] = v4[1];
      sub_77E08(v4);
      result = (_DWORD **)*a3;
      v4 = v7;
      v8 = v6[2];
      *a2 = v7;
      v6[2] = (_DWORD *)((char *)v8 - 1);
    }
    while ( result != v7 );
  }
  return result;
}
