/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56A80
// Address: 0x00056A80

//----- (00056A80) --------------------------------------------------------
unsigned int __cdecl sub_56A80(_DWORD *a1, unsigned int a2)
{
  unsigned int result; // eax
  unsigned int v3; // esi
  char *v4; // edi
  int v5; // edx
  int v6; // esi
  void *v7; // eax
  _DWORD *v8; // esi
  char *v9; // [esp+0h] [ebp-1Ch]
  int v10; // [esp+4h] [ebp-18h]
  int v11; // [esp+8h] [ebp-14h]

  result = a2;
  v3 = a1[2];
  if ( v3 < a2 )
  {
    v9 = (char *)qvector_reserve((int)a1, nullptr, a2, 0x10u);
    v10 = a1[2];
    a1[2] = v3;
    v4 = (char *)*a1;
    v5 = a1[1] - 1;
    if ( v5 < 0 )
    {
      v8 = a1;
    }
    else
    {
      v6 = 0;
      do
      {
        *(_DWORD *)&v9[v6] = *(_DWORD *)&v4[v6];
        *(_DWORD *)&v9[v6 + 4] = *(_DWORD *)&v4[v6 + 4];
        *(_DWORD *)&v4[v6 + 4] = 0;
        *(_DWORD *)&v9[v6 + 8] = *(_DWORD *)&v4[v6 + 8];
        *(_DWORD *)&v4[v6 + 8] = 0;
        *(_DWORD *)&v9[v6 + 12] = *(_DWORD *)&v4[v6 + 12];
        *(_DWORD *)&v4[v6 + 12] = 0;
        v7 = *(void **)&v4[v6 + 4];
        if ( v7 )
        {
          v11 = v5;
          *(_DWORD *)&v4[v6 + 8] = 0;
          qfree(v7);
          *(_DWORD *)&v4[v6 + 4] = 0;
          *(_DWORD *)&v4[v6 + 12] = 0;
          v5 = v11;
        }
        v6 += 16;
        --v5;
      }
      while ( v5 >= 0 );
      v8 = a1;
      v4 = (char *)*a1;
    }
    qfree(v4);
    *v8 = v9;
    v8[2] = v10;
    return v10;
  }
  return result;
}
