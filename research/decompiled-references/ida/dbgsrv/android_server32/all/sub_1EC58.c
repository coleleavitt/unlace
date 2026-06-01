/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1EC58
// Address: 0x0001EC58

//----- (0001EC58) --------------------------------------------------------
int __fastcall sub_1EC58(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v4; // r7
  _DWORD *v5; // r3
  _DWORD *v6; // r0
  int v7; // r2
  _DWORD *v8; // r1
  int v9; // r7
  _DWORD *v10; // r4
  _DWORD *v11; // r2
  int i; // r3
  _DWORD *v13; // r6
  _DWORD *v14; // r6
  bool v15; // zf
  int v16; // r4
  int v17; // r0
  int *v21; // [sp+8h] [bp-4h]

  v4 = 0;
  if ( a1[254] )
  {
    v21 = a1 + 254;
    sub_6760C();
    v5 = (_DWORD *)a1[229];
    v6 = a1 + 229;
    if ( !v5 )
      goto LABEL_13;
    v7 = a1[21];
    v8 = a1 + 229;
    do
    {
      v9 = v5[4];
      if ( v9 >= v7 )
        v8 = v5;
      v10 = v5 + 1;
      if ( v9 >= v7 )
        v10 = v5;
      v5 = (_DWORD *)*v10;
    }
    while ( *v10 );
    if ( v8 == v6 || v7 < v8[4] || !*((_BYTE *)v8 + 45) || (int)v8[7] > 0 || (int)v8[6] > 0 || v8 == v6 )
    {
LABEL_13:
      v11 = (_DWORD *)a1[228];
      for ( i = 0; i != 3; ++i )
      {
        v8 = v6;
        if ( v11 != v6 )
        {
          v8 = v11;
          do
          {
            if ( (int)v8[7] <= 0 && (int)v8[6] <= 0 && *((_BYTE *)v8 + 45) )
            {
              if ( (i & 0x7FFFFFFF) == 1 )
              {
                if ( (v8[12] & 0x7F) == 0x7F && ((v8[12] >> 8) & 0xFE) == 4 )
                  goto LABEL_32;
              }
              else if ( (i & 0x7FFFFFFF) != 0 || *((_BYTE *)v8 + 36) )
              {
                goto LABEL_32;
              }
            }
            v13 = (_DWORD *)v8[1];
            if ( v13 )
            {
              do
              {
                v8 = v13;
                v13 = (_DWORD *)*v13;
              }
              while ( v13 );
            }
            else
            {
              v14 = v8 + 2;
              v15 = *(_DWORD *)v8[2] == (_DWORD)v8;
              v8 = (_DWORD *)v8[2];
              if ( !v15 )
              {
                do
                {
                  v16 = *v14;
                  v14 = (_DWORD *)(*v14 + 8);
                  v8 = *(_DWORD **)(v16 + 8);
                }
                while ( *v8 != v16 );
              }
            }
          }
          while ( v8 != v6 );
          v8 = v6;
        }
LABEL_32:
        ;
      }
    }
    v4 = 0;
    if ( v8 != v6 )
    {
      *a2 = v8[4];
      *a3 = v8[12];
      *((_BYTE *)v8 + 45) = 0;
      v17 = *v21 - 1;
      *v21 = v17;
      v4 = 1;
      if ( v17 < 0 )
      {
        if ( !under_debugger )
          interr(30186);
        __debugbreak();
      }
    }
    sub_67610();
  }
  return v4;
}
// E0550: using guessed type char under_debugger;
