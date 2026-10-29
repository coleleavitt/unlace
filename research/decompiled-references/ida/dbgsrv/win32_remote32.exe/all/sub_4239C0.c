/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4239C0
// Address: 0x004239C0

//----- (004239C0) --------------------------------------------------------
char *__stdcall sub_4239C0(char *a1, char a2)
{
  char *v4; // esi
  _DWORD *v5; // eax
  int v6; // edx
  _DWORD *v7; // edi
  int v8; // ecx
  _DWORD **v9; // eax
  _DWORD *v10; // eax
  int v11; // eax
  char **v12; // edi
  char **v13; // eax
  char *v14; // ecx
  char **v15; // eax
  char **v16; // [esp+10h] [ebp-18h] BYREF
  int v17; // [esp+14h] [ebp-14h]
  unsigned int v18; // [esp+18h] [ebp-10h]
  int v19; // [esp+24h] [ebp-4h]
  _DWORD *v20; // [esp+30h] [ebp+8h]

  if ( a1 )
  {
    if ( *a1 == 10 )
    {
      v4 = a1;
      v16 = nullptr;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v5 = sub_428030();
      v6 = 0;
      v7 = v5;
      v20 = v5;
      while ( 1 )
      {
        v8 = *((_DWORD *)v4 + 3);
        v9 = (_DWORD **)(v4 + 8);
        v4 = nullptr;
        if ( v8 < 0 )
        {
          v11 = sub_420810(v7, ~v8);
          v6 = v17;
          v4 = (char *)v11;
        }
        else
        {
          v10 = *v9;
          if ( v10 && *v10 == 289621065 && (unsigned int)v8 < v10[4] )
            v4 = (char *)(v10[3] + 24 * v8);
        }
        if ( !v4 )
          goto LABEL_24;
        if ( *v4 != 10 || (a2 & 1) != 0 )
          break;
        v12 = v16;
        v13 = v16;
        v14 = (char *)&v16[v6];
        if ( v16 != (char **)v14 )
        {
          while ( v4 != *v13 )
          {
            if ( ++v13 == (char **)v14 )
              goto LABEL_18;
          }
LABEL_24:
          sub_45CC20(1563);
          goto LABEL_25;
        }
LABEL_18:
        if ( v6 + 1 > v18 )
        {
          v15 = (char **)sub_453B00((int)&v16, v16, v6 + 1, 4u);
          v6 = v17;
          v12 = v15;
          v16 = v15;
        }
        v12[v6] = v4;
        v7 = v20;
        v6 = ++v17;
      }
      if ( (a2 & 2) == 0 )
        goto LABEL_26;
      *a1 = 2;
      if ( !sub_423670(a1, v4) )
      {
        v4 = a1;
        goto LABEL_26;
      }
LABEL_25:
      v4 = nullptr;
LABEL_26:
      v19 = 3;
      if ( v16 )
      {
        v17 = 0;
        sub_453A20(v16);
      }
      return v4;
    }
    else
    {
      return a1;
    }
  }
  else
  {
    sub_45CC20(1563);
    return nullptr;
  }
}
