/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BFFC
// Address: 0x0008BFFC

//----- (0008BFFC) --------------------------------------------------------
_DWORD *__fastcall sub_8BFFC(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v3; // r2
  int v5; // r6
  int v6; // r5
  int v7; // r0

  *a1 = a1 + 2;
  v3 = a2 + 2;
  if ( a2 + 2 == (_DWORD *)*a2 )
  {
    v5 = a2[3];
    v6 = a2[4];
    v7 = a2[5];
    a1[2] = *v3;
    a1[3] = v5;
    a1[4] = v6;
    a1[5] = v7;
  }
  else
  {
    *a1 = *a2;
    a1[2] = a2[2];
  }
  a1[1] = a2[1];
  *a2 = v3;
  a2[1] = 0;
  *((_BYTE *)a2 + 8) = 0;
  return a1;
}
