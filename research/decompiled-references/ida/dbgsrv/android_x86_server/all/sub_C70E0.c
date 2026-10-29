/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C70E0
// Address: 0x000C70E0

//----- (000C70E0) --------------------------------------------------------
char *__fastcall sub_C70E0(char **a1, _DWORD *a2, _BYTE *a3)
{
  char *v4; // esi
  int v5; // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // edx
  char *v8; // eax
  char *v9; // ecx
  char *v10; // esi
  char v11; // dl
  char *v12; // eax
  int v13; // esi
  char *v14; // esi
  int v15; // ecx
  _DWORD *v16; // eax
  _DWORD *v17; // edx
  unsigned __int8 v18; // cl
  int v19; // edx
  _DWORD *v20; // eax
  _DWORD *v21; // edx
  int v22; // eax
  int v23; // eax
  _DWORD *v25; // [esp+4h] [ebp-18h]
  int *v26; // [esp+4h] [ebp-18h]
  int *v27; // [esp+4h] [ebp-18h]
  int v28; // [esp+8h] [ebp-14h]

  if ( *(_BYTE *)(*a2 + 4) == 36 && (unsigned int)(*(_DWORD *)(*a2 + 8) - 2) <= 3 )
  {
    v28 = *(_DWORD *)(*a2 + 8);
    v4 = a1[1116];
    v5 = *((_DWORD *)v4 + 1);
    v25 = a2;
    if ( (unsigned int)(v5 + 16) < 0xFF8 )
    {
      v7 = v4 + 4;
    }
    else
    {
      v6 = operator new[](0x1000u);
      *v6 = v4;
      v6[1] = 0;
      a1[1116] = (char *)v6;
      v5 = 0;
      v7 = v6 + 1;
      v4 = (char *)v6;
    }
    *v7 = v5 + 16;
    *(_DWORD *)&v4[v5 + 12] = 16843043;
    *(_DWORD *)&v4[v5 + 8] = off_13A4A4;
    *(_DWORD *)&v4[v5 + 16] = v28;
    a2 = v25;
    *v25 = &v4[v5 + 8];
  }
  v8 = *a1;
  v9 = a1[1];
  if ( *a1 == v9 || *v8 != 67 )
  {
    v13 = 0;
    if ( (unsigned int)(v9 - v8) >= 2 && *v8 == 68 )
    {
      v18 = v8[1] - 48;
      if ( v18 <= 5u )
      {
        v27 = a2;
        v19 = 39;
        if ( _bittest(&v19, v18) )
        {
          *a1 = v8 + 2;
          if ( a3 )
            *a3 = 1;
          v14 = a1[1116];
          v15 = *((_DWORD *)v14 + 1);
          if ( (unsigned int)(v15 + 16) < 0xFF8 )
          {
            v21 = v14 + 4;
          }
          else
          {
            v20 = operator new[](0x1000u);
            *v20 = v14;
            v20[1] = 0;
            a1[1116] = (char *)v20;
            v15 = 0;
            v21 = v20 + 1;
            v14 = (char *)v20;
          }
          *v21 = v15 + 16;
          v22 = *v27;
          *(_DWORD *)&v14[v15 + 12] = 16843045;
          *(_DWORD *)&v14[v15 + 8] = off_13A4DC;
          *(_DWORD *)&v14[v15 + 16] = v22;
          v14[v15 + 20] = 1;
          return &v14[v15 + 8];
        }
      }
    }
  }
  else
  {
    v10 = v8 + 1;
    *a1 = v8 + 1;
    if ( v8 + 1 == v9 )
      return nullptr;
    v26 = a2;
    v11 = 0;
    if ( *v10 == 73 )
    {
      v12 = v8 + 2;
      *a1 = v12;
      v11 = 1;
      v10 = v12;
    }
    if ( v9 == v10 || (unsigned __int8)(*v10 - 49) > 4u || *v10 == 52 )
    {
      return nullptr;
    }
    else
    {
      *a1 = v10 + 1;
      if ( a3 )
        *a3 = 1;
      v13 = 0;
      if ( !v11 || sub_C49E0(a1, (int)a3) )
      {
        v14 = a1[1116];
        v15 = *((_DWORD *)v14 + 1);
        if ( (unsigned int)(v15 + 16) < 0xFF8 )
        {
          v17 = v14 + 4;
        }
        else
        {
          v16 = operator new[](0x1000u);
          *v16 = v14;
          v16[1] = 0;
          a1[1116] = (char *)v16;
          v15 = 0;
          v17 = v16 + 1;
          v14 = (char *)v16;
        }
        *v17 = v15 + 16;
        v23 = *v26;
        *(_DWORD *)&v14[v15 + 12] = 16843045;
        *(_DWORD *)&v14[v15 + 8] = off_13A4DC;
        *(_DWORD *)&v14[v15 + 16] = v23;
        v14[v15 + 20] = 0;
        return &v14[v15 + 8];
      }
    }
  }
  return (char *)v13;
}
// 13A4A4: using guessed type int (*off_13A4A4[3])();
// 13A4DC: using guessed type int (*off_13A4DC[3])();
