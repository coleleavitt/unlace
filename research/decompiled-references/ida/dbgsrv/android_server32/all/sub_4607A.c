/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4607A
// Address: 0x0004607A

//----- (0004607A) --------------------------------------------------------
int __fastcall sub_4607A(int a1, _DWORD *a2)
{
  _DWORD *v3; // r5
  _DWORD *v4; // r7
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  bool v7; // zf
  int v8; // r1

  *(_DWORD *)a1 = a1 + 4;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v3 = (_DWORD *)*a2;
  v4 = a2 + 1;
  while ( v4 != v3 )
  {
    sub_4D840((_DWORD **)a1, a1 + 4, (int)(v3 + 4), (int)(v3 + 4));
    v5 = (_DWORD *)v3[1];
    if ( v5 )
    {
      do
      {
        v3 = v5;
        v5 = (_DWORD *)*v5;
      }
      while ( v5 );
    }
    else
    {
      v6 = v3 + 2;
      v7 = *(_DWORD *)v3[2] == (_DWORD)v3;
      v3 = (_DWORD *)v3[2];
      if ( !v7 )
      {
        do
        {
          v8 = *v6;
          v6 = (_DWORD *)(*v6 + 8);
          v3 = *(_DWORD **)(v8 + 8);
        }
        while ( *v3 != v8 );
      }
    }
  }
  *(_DWORD *)(a1 + 12) = 1;
  *(_DWORD *)(a1 + 16) = a2[4];
  return a1;
}
