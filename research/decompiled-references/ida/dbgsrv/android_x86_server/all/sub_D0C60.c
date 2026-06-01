/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D0C60
// Address: 0x000D0C60

//----- (000D0C60) --------------------------------------------------------
char *__fastcall sub_D0C60(int a1)
{
  char *v2; // eax
  char *v3; // ecx
  void *v4; // eax
  int v5; // edi
  char v6; // dl
  char *v7; // eax
  char *v8; // eax
  int v9; // eax
  _DWORD *v10; // edi
  int v11; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // edx
  int v14; // eax
  _DWORD *v15; // edi
  int v16; // ecx
  _DWORD *v17; // eax
  _DWORD *v18; // edx
  _DWORD *v19; // eax
  _DWORD *v20; // edx
  void *v22; // [esp+4h] [ebp-18h]
  void *v23; // [esp+4h] [ebp-18h]
  void *v24; // [esp+4h] [ebp-18h]
  int v25; // [esp+8h] [ebp-14h]
  int v26; // [esp+8h] [ebp-14h]

  v2 = *(char **)a1;
  v3 = *(char **)(a1 + 4);
  if ( v3 != v2 )
  {
    if ( (unsigned int)(*v2 - 48) <= 9 )
    {
      v4 = sub_D0EF0((char **)a1);
      if ( v4 )
      {
        if ( *(_DWORD *)(a1 + 4) != *(_DWORD *)a1 && **(_BYTE **)a1 == 73 )
        {
          v22 = v4;
          v5 = 0;
          goto LABEL_26;
        }
        return (char *)v4;
      }
      return nullptr;
    }
    if ( (unsigned int)(v3 - v2) >= 2 )
    {
      v6 = *v2;
      if ( *v2 == 100 )
      {
        if ( v2[1] == 110 )
        {
          v7 = v2 + 2;
          *(_DWORD *)a1 = v7;
          if ( v3 == v7 || (unsigned int)(*v7 - 48) > 9 )
          {
            v8 = (char *)sub_D0B40((char **)a1);
            if ( !v8 )
              return nullptr;
          }
          else
          {
            v8 = sub_D0EF0((char **)a1);
            if ( !v8 )
              return nullptr;
            if ( *(_DWORD *)(a1 + 4) != *(_DWORD *)a1 && **(_BYTE **)a1 == 73 )
            {
              v23 = v8;
              v5 = 0;
              v9 = sub_C6560((char **)a1, 0);
              if ( !v9 )
                return (char *)v5;
              v25 = v9;
              v10 = *(_DWORD **)(a1 + 4464);
              v11 = v10[1];
              if ( (unsigned int)(v11 + 16) < 0xFF8 )
              {
                v13 = v10 + 1;
              }
              else
              {
                v12 = operator new[](0x1000u);
                *v12 = v10;
                v12[1] = 0;
                *(_DWORD *)(a1 + 4464) = v12;
                v11 = 0;
                v13 = v12 + 1;
                v10 = v12;
              }
              *v13 = v11 + 16;
              *(_DWORD *)((char *)v10 + v11 + 12) = 16843040;
              *(_DWORD *)((char *)v10 + v11 + 8) = off_13A6D4;
              *(_DWORD *)((char *)v10 + v11 + 16) = v23;
              *(_DWORD *)((char *)v10 + v11 + 20) = v25;
              v8 = (char *)v10 + v11 + 8;
              if ( (_DWORD *)((char *)v10 + v11) == (_DWORD *)-8 )
                return nullptr;
            }
          }
          v24 = v8;
          v15 = *(_DWORD **)(a1 + 4464);
          v16 = v15[1];
          if ( (unsigned int)(v16 + 16) < 0xFF8 )
          {
            v20 = v15 + 1;
          }
          else
          {
            v19 = operator new[](0x1000u);
            *v19 = v15;
            v19[1] = 0;
            *(_DWORD *)(a1 + 4464) = v19;
            v16 = 0;
            v20 = v19 + 1;
            v15 = v19;
          }
          *v20 = v16 + 16;
          *(_DWORD *)((char *)v15 + v16 + 12) = 16843046;
          *(_DWORD *)((char *)v15 + v16 + 8) = off_13A124;
          *(_DWORD *)((char *)v15 + v16 + 16) = v24;
          return (char *)v15 + v16 + 8;
        }
        v6 = *v2;
      }
      if ( v6 == 111 && v2[1] == 110 )
        *(_DWORD *)a1 = v2 + 2;
    }
  }
  v5 = 0;
  v4 = sub_D11D0(a1, nullptr);
  if ( !v4 )
    return (char *)v5;
  if ( *(_DWORD *)(a1 + 4) == *(_DWORD *)a1 || **(_BYTE **)a1 != 73 )
    return (char *)v4;
  v5 = 0;
  v22 = v4;
LABEL_26:
  v14 = sub_C6560((char **)a1, 0);
  if ( v14 )
  {
    v26 = v14;
    v15 = *(_DWORD **)(a1 + 4464);
    v16 = v15[1];
    if ( (unsigned int)(v16 + 16) < 0xFF8 )
    {
      v18 = v15 + 1;
    }
    else
    {
      v17 = operator new[](0x1000u);
      *v17 = v15;
      v17[1] = 0;
      *(_DWORD *)(a1 + 4464) = v17;
      v16 = 0;
      v18 = v17 + 1;
      v15 = v17;
    }
    *v18 = v16 + 16;
    *(_DWORD *)((char *)v15 + v16 + 12) = 16843040;
    *(_DWORD *)((char *)v15 + v16 + 8) = off_13A6D4;
    *(_DWORD *)((char *)v15 + v16 + 16) = v22;
    *(_DWORD *)((char *)v15 + v16 + 20) = v26;
    return (char *)v15 + v16 + 8;
  }
  return (char *)v5;
}
// 13A124: using guessed type int (*off_13A124[3])();
// 13A6D4: using guessed type int (*off_13A6D4[3])();
