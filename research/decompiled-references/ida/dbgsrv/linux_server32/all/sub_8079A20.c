/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8079A20
// Address: 0x08079A20

//----- (08079A20) --------------------------------------------------------
int __cdecl sub_8079A20(int *a1, char *s2, int *a3)
{
  int v3; // edi
  int v4; // ebp
  const char *v5; // eax
  int v6; // eax
  int v8; // edi
  const char *v9; // eax
  int v10; // eax
  int v11; // ebp
  int v12; // edi
  const char *v13; // eax
  int v14; // [esp+4h] [ebp-24h]
  int v15; // [esp+4h] [ebp-24h]
  int v16; // [esp+4h] [ebp-24h]
  int v17; // [esp+8h] [ebp-20h]

  if ( a1[17] )
  {
    v3 = a1[16];
    v14 = a1[17];
    v4 = 0;
    while ( 1 )
    {
      v5 = (const char *)&dword_80DDFD8;
      if ( *(_DWORD *)(v3 + 4) )
        v5 = *(const char **)v3;
      if ( !strcmp(v5, s2) )
        break;
      ++v4;
      v3 += 12;
      if ( v4 == v14 )
        goto LABEL_11;
    }
    v6 = 1;
  }
  else
  {
LABEL_11:
    if ( a1[20] )
    {
      v8 = a1[19];
      v15 = a1[20];
      v4 = 0;
      while ( 1 )
      {
        v9 = (const char *)&dword_80DDFD8;
        if ( *(_DWORD *)(v8 + 4) )
          v9 = *(const char **)v8;
        if ( !strcmp(v9, s2) )
          break;
        ++v4;
        v8 += 12;
        if ( v15 == v4 )
          goto LABEL_18;
      }
      v6 = 2;
    }
    else
    {
LABEL_18:
      v10 = a1[15];
      if ( *(_DWORD *)(v10 + 52) )
      {
        v16 = *(_DWORD *)(v10 + 52);
        v11 = *(_DWORD *)(v10 + 48);
        v12 = 0;
        v17 = a1[15];
        do
        {
          v13 = (const char *)&dword_80DDFD8;
          if ( *(_DWORD *)(v11 + 4) )
            v13 = *(const char **)v11;
          if ( !strcmp(v13, s2) )
          {
            v4 = v12;
            v6 = 3;
            goto LABEL_8;
          }
          ++v12;
          v11 += 32;
        }
        while ( v16 != v12 );
        v10 = v17;
      }
      if ( sub_8080DF0(v10, s2) )
      {
        v6 = 5;
        v4 = -1;
      }
      else if ( sub_80810B0((int *)a1[15], s2) == 0x7FFFFFFF )
      {
        if ( off_811D3C0 )
        {
          v4 = -1;
          v6 = 4 * (unsigned __int8)off_811D3C0(s2);
        }
        else
        {
          v6 = 0;
          v4 = -1;
        }
      }
      else
      {
        v6 = 6;
        v4 = -1;
      }
    }
  }
LABEL_8:
  if ( a3 )
    *a3 = v6;
  return v4;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811D3C0: using guessed type _DWORD (__cdecl *off_811D3C0)(_DWORD);
