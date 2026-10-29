/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C0570
// Address: 0x000C0570

//----- (000C0570) --------------------------------------------------------
char __cdecl sub_C0570(int a1, int a2, int a3, _DWORD *a4, int a5, unsigned __int8 a6)
{
  int v6; // esi
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  char *v11; // eax
  bool v12; // zf
  int v13; // ecx
  _DWORD *v14; // edi
  int v15; // ecx
  int v16; // eax
  char *v17; // eax
  int v18; // ecx
  int v19; // eax
  char v21; // [esp+Eh] [ebp-1Eh]
  char v22; // [esp+Fh] [ebp-1Dh]
  int v23; // [esp+10h] [ebp-1Ch]
  unsigned int v24; // [esp+10h] [ebp-1Ch]

  v6 = a2;
  v7 = *(_DWORD *)(a2 + 8);
  if ( a6 )
  {
    if ( strcmp(*(const char **)(a1 + 4), *(const char **)(v7 + 4)) )
    {
LABEL_3:
      v22 = *(_BYTE *)(a2 + 52);
      v21 = *(_BYTE *)(a2 + 53);
      v8 = *(_DWORD *)(a1 + 12);
      *(_BYTE *)(a2 + 52) = 0;
      *(_BYTE *)(a2 + 53) = 0;
      v9 = *(_DWORD *)(a1 + 20);
      v10 = v9 >> 8;
      v23 = v8;
      if ( (v9 & 1) != 0 )
        v10 = *(_DWORD *)(*a4 + v10);
      v11 = (char *)a4 + v10;
      v12 = (v9 & 2) == 0;
      v13 = a5;
      if ( v12 )
        v13 = 2;
      (*(void (__cdecl **)(_DWORD, int, int, char *, int, _DWORD))(**(_DWORD **)(a1 + 16) + 20))(
        *(_DWORD *)(a1 + 16),
        a2,
        a3,
        v11,
        v13,
        a6);
      if ( v23 >= 2 )
      {
        v24 = a1 + 8 * v23 + 16;
        v14 = (_DWORD *)(a1 + 24);
        do
        {
          if ( *(_BYTE *)(v6 + 54) )
            break;
          if ( *(_BYTE *)(v6 + 52) )
          {
            if ( *(_DWORD *)(v6 + 24) == 1 || (*(_BYTE *)(a1 + 8) & 2) == 0 )
              break;
          }
          else if ( *(_BYTE *)(v6 + 53) && (*(_BYTE *)(a1 + 8) & 1) == 0 )
          {
            break;
          }
          *(_WORD *)(v6 + 52) = 0;
          v15 = v14[1];
          v16 = v15 >> 8;
          if ( (v15 & 1) != 0 )
            v16 = *(_DWORD *)(*a4 + v16);
          v17 = (char *)a4 + v16;
          v12 = (v15 & 2) == 0;
          v18 = a5;
          if ( v12 )
            v18 = 2;
          (*(void (__cdecl **)(_DWORD, int, int, char *, int, _DWORD))(*(_DWORD *)*v14 + 20))(
            *v14,
            a2,
            a3,
            v17,
            v18,
            a6);
          v6 = a2;
          v14 += 2;
        }
        while ( (unsigned int)v14 < v24 );
      }
      *(_BYTE *)(v6 + 52) = v22;
      *(_BYTE *)(v6 + 53) = v21;
      LOBYTE(v19) = v21;
      return v19;
    }
  }
  else if ( a1 != v7 )
  {
    goto LABEL_3;
  }
  *(_BYTE *)(a2 + 53) = 1;
  LOBYTE(v19) = (_BYTE)a4;
  if ( *(_DWORD **)(a2 + 4) != a4 )
    return v19;
  *(_BYTE *)(a2 + 52) = 1;
  v19 = *(_DWORD *)(a2 + 16);
  if ( !v19 )
  {
    *(_DWORD *)(a2 + 16) = a3;
    LOBYTE(v19) = a5;
    *(_DWORD *)(a2 + 24) = a5;
    *(_DWORD *)(a2 + 36) = 1;
    if ( a5 != 1 || *(_DWORD *)(a2 + 48) != 1 )
      return v19;
LABEL_35:
    *(_BYTE *)(a2 + 54) = 1;
    return v19;
  }
  if ( v19 != a3 )
  {
    ++*(_DWORD *)(a2 + 36);
    *(_BYTE *)(a2 + 54) = 1;
    return v19;
  }
  v19 = *(_DWORD *)(a2 + 24);
  if ( v19 == 2 )
  {
    v19 = a5;
    *(_DWORD *)(a2 + 24) = a5;
  }
  if ( v19 == 1 && *(_DWORD *)(a2 + 48) == 1 )
    goto LABEL_35;
  return v19;
}
