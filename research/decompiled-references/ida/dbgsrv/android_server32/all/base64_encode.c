/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: base64_encode
// Address: 0x00071C0C

//----- (00071C0C) --------------------------------------------------------
int __fastcall base64_encode(_DWORD *a1, unsigned __int8 *a2, int a3)
{
  int v3; // r4
  unsigned __int8 *v4; // r7
  int v5; // r5
  int v6; // r2
  int v7; // r6
  int v8; // r1
  int v9; // r7
  char v10; // r4
  _BYTE *v11; // r1
  _BYTE *v12; // r0
  int v13; // r1
  int v14; // r5
  char v15; // r7
  _BYTE *v16; // r0
  unsigned int i; // r6
  int v18; // r0
  int v19; // r7
  void *v20; // r1
  void *v21; // r0
  unsigned int v23; // [sp+4h] [bp-18h]
  unsigned __int8 *v24; // [sp+8h] [bp-14h]
  int v25; // [sp+Ch] [bp-10h]
  unsigned int v27; // [sp+18h] [bp-4h]

  v3 = 0;
  if ( a1 )
  {
    v4 = a2;
    if ( a2 )
    {
      v5 = a3;
      if ( a3 >= 0 )
      {
        v23 = (a3 % 3u) ^ 3;
        if ( !(a3 % 3u) )
          v23 = 0;
        v6 = (int)a1;
        if ( v5 )
        {
          v7 = 0;
          v27 = 0;
          do
          {
            v27 = (v27 << 8) + *v4;
            v7 += 8;
            v25 = v5;
            v24 = v4 + 1;
            if ( v7 >= 7 )
            {
              do
              {
                v7 -= 6;
                v8 = *(_DWORD *)(v6 + 4);
                v9 = v8 - 1;
                if ( !v8 )
                  v9 = 0;
                v10 = aAbcdefghijklmn[(v27 >> v7) & 0x3F];
                v11 = *(_BYTE **)v6;
                if ( *(_DWORD *)(v6 + 8) < (unsigned int)(v9 + 2) )
                {
                  v12 = qvector_reserve(v6, v11, v9 + 2, 1u);
                  v6 = (int)a1;
                  v11 = v12;
                  *a1 = v12;
                }
                *(_DWORD *)(v6 + 4) = v9 + 2;
                v11[v9] = v10;
                *(_BYTE *)(*(_DWORD *)v6 + v9 + 1) = 0;
              }
              while ( v7 > 6 );
            }
            --v5;
            v4 = v24;
          }
          while ( v25 != 1 );
          if ( v7 )
          {
            v13 = *(_DWORD *)(v6 + 4);
            v14 = v13 - 1;
            if ( !v13 )
              v14 = 0;
            v15 = aAbcdefghijklmn[(v27 << (6 - v7)) & 0x3F];
            if ( *(_DWORD *)(v6 + 8) >= (unsigned int)(v14 + 2) )
            {
              v16 = *(_BYTE **)v6;
            }
            else
            {
              v16 = qvector_reserve(v6, *(void **)v6, v14 + 2, 1u);
              v6 = (int)a1;
              *a1 = v16;
            }
            *(_DWORD *)(v6 + 4) = v14 + 2;
            v16[v14] = v15;
            *(_BYTE *)(*(_DWORD *)v6 + v14 + 1) = 0;
          }
        }
        v3 = 1;
        if ( v23 )
        {
          for ( i = 0; i < v23; ++i )
          {
            v18 = *(_DWORD *)(v6 + 4);
            v19 = v18 - 1;
            if ( !v18 )
              v19 = 0;
            v20 = *(void **)v6;
            if ( *(_DWORD *)(v6 + 8) < (unsigned int)(v19 + 2) )
            {
              v21 = qvector_reserve(v6, v20, v19 + 2, 1u);
              v6 = (int)a1;
              v20 = v21;
              *a1 = v21;
            }
            *(_DWORD *)(v6 + 4) = v19 + 2;
            *((_BYTE *)v20 + v19) = 61;
            *(_BYTE *)(*(_DWORD *)v6 + v19 + 1) = 0;
          }
        }
      }
    }
  }
  return v3;
}
