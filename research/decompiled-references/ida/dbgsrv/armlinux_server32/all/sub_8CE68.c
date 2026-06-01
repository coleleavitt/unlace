/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8CE68
// Address: 0x0008CE68

//----- (0008CE68) --------------------------------------------------------
_DWORD *__fastcall sub_8CE68(_DWORD *a1, _BYTE *a2, size_t a3)
{
  size_t v4; // r7
  _DWORD *v5; // r5
  unsigned int v6; // r6
  unsigned int v7; // r0

  v4 = a1[1];
  v5 = (_DWORD *)*a1;
  v6 = v4 + a3;
  if ( (_DWORD *)*a1 == a1 + 2 )
    v7 = 15;
  else
    v7 = a1[2];
  if ( v6 > v7 )
  {
    sub_8C008(a1, v4, 0, a2, a3);
    v5 = (_DWORD *)*a1;
  }
  else if ( a3 )
  {
    if ( a3 == 1 )
      *((_BYTE *)v5 + v4) = *a2;
    else
      memcpy((char *)v5 + v4, a2, a3);
    v5 = (_DWORD *)*a1;
  }
  a1[1] = v6;
  *((_BYTE *)v5 + v6) = 0;
  return a1;
}
