/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1D4A0
// Address: 0x0001D4A0

//----- (0001D4A0) --------------------------------------------------------
void __cdecl sub_1D4A0(_DWORD *a1, char *s2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edi
  int v4; // esi
  bool v5; // zf
  _DWORD *v6; // ecx
  unsigned int v7; // eax
  _DWORD *v8; // edi
  const char *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  int *v12; // eax
  int v13; // eax
  _DWORD *v14; // [esp+14h] [ebp-18h]

  if ( a1[138] )
  {
    v2 = (_DWORD *)a1[136];
    if ( a1 + 137 != v2 )
    {
      v14 = a1 + 140;
      while ( 1 )
      {
        v6 = (_DWORD *)*v14;
        if ( !*v14 )
          goto LABEL_24;
        v7 = v2[4];
        v8 = a1 + 140;
        do
        {
          if ( v6[4] >= v7 )
            v8 = v6;
          v6 = (_DWORD *)v6[v6[4] < v7];
        }
        while ( v6 );
        if ( v8 == v14 || v7 < v8[4] )
          goto LABEL_24;
        if ( !s2 )
          break;
        v9 = v8[11] ? (const char *)v8[10] : byte_EF875;
        if ( !strcmp(v9, s2) )
          break;
        v10 = (_DWORD *)v2[1];
        if ( v10 )
        {
          do
          {
            v3 = v10;
            v10 = (_DWORD *)*v10;
          }
          while ( v10 );
        }
        else
        {
          v3 = (_DWORD *)v2[2];
          if ( (_DWORD *)*v3 != v2 )
          {
            v4 = (int)(v2 + 2);
            do
            {
              v3 = *(_DWORD **)(*(_DWORD *)v4 + 8);
              v5 = *v3 == *(_DWORD *)v4;
              v4 = *(_DWORD *)v4 + 8;
            }
            while ( !v5 );
          }
        }
LABEL_33:
        v2 = v3;
        if ( a1 + 137 == v3 )
          return;
      }
      sub_251F0((int)a1, v8 + 5);
LABEL_24:
      v11 = (_DWORD *)v2[1];
      if ( v11 )
      {
        do
        {
          v3 = v11;
          v11 = (_DWORD *)*v11;
        }
        while ( v11 );
      }
      else
      {
        v3 = (_DWORD *)v2[2];
        if ( (_DWORD *)*v3 != v2 )
        {
          v12 = v2 + 2;
          do
          {
            v13 = *v12;
            v3 = *(_DWORD **)(v13 + 8);
            v5 = *v3 == v13;
            v12 = (int *)(v13 + 8);
          }
          while ( !v5 );
        }
      }
      if ( (_DWORD *)a1[136] == v2 )
        a1[136] = v3;
      --a1[138];
      sub_2F420((int **)a1[137], (int **)v2);
      operator delete(v2);
      goto LABEL_33;
    }
  }
}
