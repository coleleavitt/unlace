/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2057C
// Address: 0x0002057C

//----- (0002057C) --------------------------------------------------------
bool __fastcall sub_2057C(int a1, int a2)
{
  int v3; // r6
  char v4; // r0
  _DWORD *v5; // r5
  _DWORD *v6; // r6
  _DWORD *v7; // r6
  bool v8; // zf
  int v9; // r2
  _DWORD *v10; // r2
  _DWORD **v11; // r5
  _DWORD *v12; // r6
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  int v15; // r1
  int v16; // r0
  int v17; // r5
  _DWORD *v19; // [sp+4h] [bp-Ch]
  int v20; // [sp+Ch] [bp-4h]

  v3 = *(_DWORD *)(a1 + 188);
  v4 = 1;
  if ( !v3 )
  {
    if ( *(_DWORD *)(a1 + 76) )
    {
      v4 = 0;
    }
    else
    {
      v5 = *(_DWORD **)(a1 + 912);
      if ( v5 != (_DWORD *)(a1 + 916) )
      {
        while ( !*((_BYTE *)v5 + 45) || v5[7] || v5[6] )
        {
          v6 = (_DWORD *)v5[1];
          if ( v6 )
          {
            do
            {
              v5 = v6;
              v6 = (_DWORD *)*v6;
            }
            while ( v6 );
          }
          else
          {
            v7 = v5 + 2;
            v8 = *(_DWORD *)v5[2] == (_DWORD)v5;
            v5 = (_DWORD *)v5[2];
            if ( !v8 )
            {
              do
              {
                v9 = *v7;
                v7 = (_DWORD *)(*v7 + 8);
                v5 = *(_DWORD **)(v9 + 8);
              }
              while ( *v5 != v9 );
            }
          }
          if ( v5 == (_DWORD *)(a1 + 916) )
            goto LABEL_16;
        }
        v4 = 0;
LABEL_16:
        v3 = 0;
      }
    }
  }
  *(_BYTE *)(a1 + 1020) = v4;
  v10 = (_DWORD *)(a1 + 1000);
  if ( *(_DWORD *)(a1 + 1008) && !(*(_DWORD *)(a1 + 1016) | v3) )
  {
    v20 = a2;
    v11 = (_DWORD **)(a1 + 1004);
    v19 = (_DWORD *)(a1 + 1000);
    v12 = (_DWORD *)*v10;
    while ( v12 != v11 )
    {
      sub_2748C((int **)(a1 + 224), v12 + 4);
      v13 = (_DWORD *)v12[1];
      if ( v13 )
      {
        do
        {
          v12 = v13;
          v13 = (_DWORD *)*v13;
        }
        while ( v13 );
      }
      else
      {
        v14 = v12 + 2;
        v8 = *(_DWORD *)v12[2] == (_DWORD)v12;
        v12 = (_DWORD *)v12[2];
        if ( !v8 )
        {
          do
          {
            v15 = *v14;
            v14 = (_DWORD *)(*v14 + 8);
            v12 = *(_DWORD **)(v15 + 8);
          }
          while ( *v12 != v15 );
        }
      }
    }
    sub_25078((int)v19, *v11);
    *(_DWORD *)(a1 + 1008) = 0;
    *v19 = v11;
    *v11 = nullptr;
    a2 = v20;
  }
  if ( a2 )
  {
    v16 = sub_20908(a1, a2, 0);
LABEL_30:
    v17 = v16;
    return v17 != 0;
  }
  v17 = 1;
  v16 = sub_20908(a1, 0, 1);
  if ( !v16 )
    goto LABEL_30;
  return v17 != 0;
}
