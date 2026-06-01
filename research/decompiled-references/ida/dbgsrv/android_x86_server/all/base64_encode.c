/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: base64_encode
// Address: 0x0009D4A0

//----- (0009D4A0) --------------------------------------------------------
char __cdecl base64_encode(_DWORD *a1, unsigned __int8 *a2, int a3)
{
  char result; // al
  unsigned __int8 *v4; // esi
  int v5; // edi
  int v6; // edx
  unsigned int v7; // eax
  int v8; // ecx
  _BYTE *v9; // eax
  int v10; // ecx
  int v11; // esi
  char v12; // cl
  int v13; // eax
  int v14; // esi
  _BYTE *v15; // eax
  int v16; // ecx
  void *v17; // eax
  int v18; // ecx
  int v19; // esi
  int v20; // [esp+4h] [ebp-28h]
  char v21; // [esp+4h] [ebp-28h]
  int v22; // [esp+4h] [ebp-28h]
  char v23; // [esp+Bh] [ebp-21h]
  unsigned int v24; // [esp+Ch] [ebp-20h]
  unsigned int v25; // [esp+10h] [ebp-1Ch]
  int v26; // [esp+14h] [ebp-18h]
  unsigned __int8 *v27; // [esp+18h] [ebp-14h]

  result = 0;
  if ( a1 )
  {
    v4 = a2;
    if ( a2 )
    {
      v5 = a3;
      if ( a3 >= 0 )
      {
        v6 = (int)a1;
        v7 = (a3 % 3u) ^ 3;
        if ( !(a3 % 3u) )
          v7 = 0;
        v25 = v7;
        if ( a3 )
        {
          v8 = 0;
          v24 = 0;
          do
          {
            v24 = (v24 << 8) | *v4;
            v8 += 8;
            v27 = v4;
            v26 = v5;
            if ( v8 >= 7 )
            {
              do
              {
                v20 = v8 - 6;
                v23 = byte_EE68C[(v24 >> (v8 - 6)) & 0x3F];
                v9 = *(_BYTE **)v6;
                v10 = *(_DWORD *)(v6 + 4);
                v11 = v10 - 1;
                if ( !v10 )
                  v11 = 0;
                if ( *(_DWORD *)(v6 + 8) < (unsigned int)(v11 + 2) )
                {
                  v9 = qvector_reserve(v6, v9, v11 + 2, 1u);
                  v6 = (int)a1;
                  *a1 = v9;
                }
                v8 = v20;
                *(_DWORD *)(v6 + 4) = v11 + 2;
                v9[v11] = v23;
                *(_BYTE *)(*(_DWORD *)v6 + v11 + 1) = 0;
              }
              while ( v20 > 6 );
            }
            v4 = v27 + 1;
            --v5;
          }
          while ( v26 != 1 );
          if ( v8 )
          {
            v12 = byte_EE68C[(v24 << (6 - v8)) & 0x3F];
            v13 = *(_DWORD *)(v6 + 4);
            v14 = v13 - 1;
            if ( !v13 )
              v14 = 0;
            if ( *(_DWORD *)(v6 + 8) >= (unsigned int)(v14 + 2) )
            {
              v15 = *(_BYTE **)v6;
            }
            else
            {
              v21 = v12;
              v15 = qvector_reserve(v6, *(void **)v6, v14 + 2, 1u);
              v12 = v21;
              v6 = (int)a1;
              *a1 = v15;
            }
            *(_DWORD *)(v6 + 4) = v14 + 2;
            v15[v14] = v12;
            *(_BYTE *)(*(_DWORD *)v6 + v14 + 1) = 0;
          }
        }
        result = 1;
        if ( v25 )
        {
          v16 = 0;
          do
          {
            v22 = v16;
            v17 = *(void **)v6;
            v18 = *(_DWORD *)(v6 + 4);
            v19 = v18 - 1;
            if ( !v18 )
              v19 = 0;
            if ( *(_DWORD *)(v6 + 8) < (unsigned int)(v19 + 2) )
            {
              v17 = qvector_reserve(v6, v17, v19 + 2, 1u);
              v6 = (int)a1;
              *a1 = v17;
            }
            *(_DWORD *)(v6 + 4) = v19 + 2;
            *((_BYTE *)v17 + v19) = 61;
            *(_BYTE *)(*(_DWORD *)v6 + v19 + 1) = 0;
            v16 = v22 + 1;
          }
          while ( v22 + 1 < v25 );
          return 1;
        }
      }
    }
  }
  return result;
}
