/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_436DC0
// Address: 0x00436DC0

//----- (00436DC0) --------------------------------------------------------
int __thiscall sub_436DC0(int this)
{
  int v2; // edi
  _BYTE *v3; // eax
  char *v4; // esi
  char v5; // al
  char v6; // bl
  char *v7; // esi
  char *v9; // eax
  char v10; // cl
  _BYTE *v11; // ecx
  char v12; // al
  _BYTE *v13; // ecx
  _BYTE *v15; // eax
  char *v16; // ebp
  unsigned __int8 v17; // bl
  int v18; // ebx
  int v19; // eax
  char v20; // [esp+12h] [ebp-206h]
  unsigned __int8 v21; // [esp+13h] [ebp-205h]
  unsigned int v22; // [esp+14h] [ebp-204h]
  _DWORD v23[127]; // [esp+18h] [ebp-200h]

  v2 = 0;
  if ( *(_BYTE *)(this + 280) == 40 )
  {
    v3 = *(_BYTE **)(this + 4);
    if ( *v3 != 41 )
    {
      while ( 1 )
      {
        v9 = sub_434500(this);
        v10 = *(_BYTE *)(this + 280);
        v23[v2] = v9;
        if ( !*v9 )
          break;
        ++v2;
        if ( v10 == 32 || v10 == 9 || v10 == 10 || v10 == 13 || v10 == 11 || v10 == 12 )
        {
          v11 = *(_BYTE **)(this + 4);
          *(_BYTE *)(this + 280) = *v11;
          if ( *v11 )
          {
            *v11 = 0;
            ++*(_DWORD *)(this + 4);
          }
        }
        v12 = *(_BYTE *)(this + 280);
        if ( v12 == 41 )
          goto LABEL_4;
        if ( v12 == 46 )
        {
          v13 = *(_BYTE **)(this + 4);
          if ( *v13 != 46 )
            return -1;
          if ( v13[1] == 46 )
            return -2;
        }
        if ( v12 != 44 || v2 >= 127 )
          return -1;
      }
      if ( v10 != 46 )
        return -1;
      v15 = *(_BYTE **)(this + 4);
      if ( *v15 != 46 || v15[1] != 46 )
        return -1;
      return -2;
    }
    *(_DWORD *)(this + 4) = v3 + 1;
  }
LABEL_4:
  v4 = *(char **)(this + 4);
  v5 = 0;
  v20 = 0;
  v6 = *v4;
  v7 = v4 + 1;
  if ( !v6 )
    return v2;
  do
  {
    v22 = (unsigned int)v7;
    if ( !v5 )
    {
      if ( v6 == 34 || v6 == 39 )
      {
        v5 = v6;
LABEL_55:
        v20 = v5;
        goto LABEL_56;
      }
      if ( !v2 )
        goto LABEL_56;
      if ( v6 >= 0 )
      {
        if ( sub_46B6D0(v6, (unsigned __int8)v6) )
        {
LABEL_39:
          v16 = v7 - 1;
          while ( 1 )
          {
            v17 = *v7;
            if ( (*v7 < 0 || !sub_46B640(v17, v17)) && v17 != 95 && v17 != 36 )
              break;
            ++v7;
          }
          v21 = *v7;
          v18 = 0;
          *v7 = 0;
          if ( v2 > 0 )
          {
            while ( 1 )
            {
              v19 = strcmp((const char *)v23[v18], v16);
              if ( v19 )
                v19 = v19 < 0 ? -1 : 1;
              if ( !v19 )
                break;
              if ( ++v18 >= v2 )
              {
                *v7 = v21;
                v5 = v20;
                goto LABEL_56;
              }
            }
            *v16 = v18 + 0x80;
            if ( (char *)v22 != v7 )
            {
              sub_464310(v22, (unsigned int)v7, strlen(v7 + 1) + 2);
              v7 = (char *)v22;
            }
          }
          *v7 = v21;
          v5 = v20;
          goto LABEL_56;
        }
        v5 = v20;
      }
      if ( v6 != 95 && v6 != 36 )
        goto LABEL_56;
      goto LABEL_39;
    }
    if ( v6 != 92 )
    {
      if ( v6 != v5 )
        goto LABEL_56;
      v5 = 0;
      goto LABEL_55;
    }
    if ( !*v7++ )
      return -1;
    v5 = v20;
LABEL_56:
    v6 = *v7++;
  }
  while ( v6 );
  if ( v5 )
    return -1;
  return v2;
}
