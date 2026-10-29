/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D0E4
// Address: 0x0004D0E4

//----- (0004D0E4) --------------------------------------------------------
_DWORD *__fastcall sub_4D0E4(_DWORD *a1, int a2, const void **a3, int a4)
{
  _DWORD *v4; // r6
  _DWORD *v5; // r5
  unsigned int v10; // r4
  _DWORD *v11; // r4
  _DWORD *v12; // r1
  int v13; // r3

  v4 = *(_DWORD **)(*a1 + 4 * a2);
  if ( v4 )
  {
    v5 = (_DWORD *)*v4;
    v10 = *(_DWORD *)(*v4 + 12);
    while ( 1 )
    {
      if ( a4 == v10 )
      {
        v12 = (_DWORD *)v5[1];
        v13 = *((_DWORD *)*a3 - 3);
        if ( v13 == *(v12 - 3) && (!v13 || !memcmp(*a3, v12, *((_DWORD *)*a3 - 3))) )
          break;
      }
      v11 = (_DWORD *)*v5;
      v4 = v5;
      v5 = v11;
      if ( v11 )
      {
        v10 = v11[3];
        if ( a2 == v10 % a1[1] )
          continue;
      }
      return nullptr;
    }
  }
  return v4;
}
