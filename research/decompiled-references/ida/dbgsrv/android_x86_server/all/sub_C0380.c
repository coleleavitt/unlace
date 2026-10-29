/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C0380
// Address: 0x000C0380

//----- (000C0380) --------------------------------------------------------
char __cdecl sub_C0380(int a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5)
{
  int v5; // edi
  _DWORD *v6; // ecx
  int v7; // eax
  const char *v8; // esi
  _DWORD *v9; // esi
  bool v10; // zf
  int v11; // ecx
  int v12; // ecx
  const char *v14; // [esp-10h] [ebp-2Ch]

  v5 = a3;
  v6 = a2;
  v7 = a2[2];
  if ( a5 )
  {
    v8 = *(const char **)(a1 + 4);
    v7 = strcmp(v8, *(const char **)(v7 + 4));
    v6 = a2;
    v5 = a3;
    if ( v7 )
    {
      v14 = v8;
      v9 = a2;
      v10 = strcmp(v14, *(const char **)(*a2 + 4)) == 0;
      v7 = a1;
      if ( !v10 )
      {
LABEL_4:
        LOBYTE(v7) = (*(int (__cdecl **)(_DWORD, _DWORD *, int, int, _DWORD))(**(_DWORD **)(v7 + 8) + 24))(
                       *(_DWORD *)(v7 + 8),
                       v9,
                       v5,
                       a4,
                       a5);
        return v7;
      }
      goto LABEL_7;
    }
LABEL_13:
    if ( v6[1] == v5 && v6[7] != 1 )
    {
      v6[7] = a4;
      LOBYTE(v7) = a4;
    }
    return v7;
  }
  if ( a1 == v7 )
    goto LABEL_13;
  v9 = a2;
  v7 = a1;
  if ( a1 != *a2 )
    goto LABEL_4;
LABEL_7:
  if ( v9[4] != v5 && v9[5] != v5 )
  {
    v11 = v7;
    LOBYTE(v7) = a4;
    v9[8] = a4;
    if ( v9[11] == 4 )
      return v7;
    *((_WORD *)v9 + 26) = 0;
    LOBYTE(v7) = (*(int (__cdecl **)(_DWORD, _DWORD *, int, int, int, _DWORD))(**(_DWORD **)(v11 + 8) + 20))(
                   *(_DWORD *)(v11 + 8),
                   v9,
                   v5,
                   v5,
                   1,
                   a5);
    if ( *((_BYTE *)v9 + 53) )
    {
      if ( *((_BYTE *)v9 + 52) )
      {
LABEL_23:
        v12 = 3;
LABEL_24:
        v9[11] = v12;
        return v7;
      }
      LOBYTE(v7) = 1;
    }
    else
    {
      LOBYTE(v7) = 0;
    }
    v9[5] = v5;
    ++v9[10];
    if ( v9[9] == 1 && v9[6] == 2 )
      *((_BYTE *)v9 + 54) = 1;
    v12 = 4;
    if ( !(_BYTE)v7 )
      goto LABEL_24;
    goto LABEL_23;
  }
  if ( a4 == 1 )
    v9[8] = 1;
  return v7;
}
