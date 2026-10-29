/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_35598
// Address: 0x00035598

//----- (00035598) --------------------------------------------------------
int __fastcall sub_35598(int a1, _DWORD *a2)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r2
  int result; // r0
  unsigned int v5; // r4
  _DWORD *v6; // r3
  unsigned int v7; // r6
  _DWORD *v8; // r7
  _DWORD *v9; // r4
  _DWORD *v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r1
  _DWORD *v13; // r0
  _DWORD *v14; // r5
  _DWORD *v15; // r5
  int v16; // r6

  v2 = *(_DWORD **)(a1 + 8);
  v3 = (_DWORD *)(a1 + 8);
  result = 1;
  if ( v2 )
  {
    v5 = a2[15];
    v6 = v3;
    do
    {
      v7 = v2[4];
      if ( v7 >= v5 )
        v6 = v2;
      v8 = v2 + 1;
      if ( v7 >= v5 )
        v8 = v2;
      v2 = (_DWORD *)*v8;
    }
    while ( *v8 );
    if ( v6 != v3 && v5 >= v6[4] )
    {
      v9 = (_DWORD *)v6[5];
      v10 = v6 + 6;
      if ( v9 != v10 )
      {
        v11 = a2[8];
        v12 = a2[9];
        if ( __PAIR64__(v12, v11) >= *((_QWORD *)v9 + 2) )
        {
          do
          {
            v13 = v9;
            v14 = (_DWORD *)v9[1];
            if ( v14 )
            {
              do
              {
                v9 = v14;
                v14 = (_DWORD *)*v14;
              }
              while ( v14 );
            }
            else
            {
              v15 = v9 + 2;
              v9 = (_DWORD *)v9[2];
              if ( (_DWORD *)*v9 != v13 )
              {
                do
                {
                  v16 = *v15;
                  v15 = (_DWORD *)(*v15 + 8);
                  v9 = *(_DWORD **)(v16 + 8);
                }
                while ( *v9 != v16 );
              }
            }
          }
          while ( v9 != v10 && __PAIR64__(v12, v11) >= *((_QWORD *)v9 + 2) );
          return v13[6];
        }
      }
    }
  }
  return result;
}
