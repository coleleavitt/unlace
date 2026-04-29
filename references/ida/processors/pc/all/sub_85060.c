bool __fastcall sub_85060(int *a1, _DWORD *a2)
{
  int v2; // ecx
  bool result; // al
  unsigned int v5; // esi
  int v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // esi
  int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  int v14; // ecx
  int v15; // eax
  int v16; // r9d
  unsigned int v17; // ecx
  int v18; // eax
  int v19; // edx
  int v20; // r8d
  unsigned int v21; // esi
  unsigned int v22; // esi
  unsigned int v23; // ecx
  unsigned int v24; // ecx

  v2 = *a1;
  if ( (unsigned int)(*a1 - 3) > 1 || (unsigned int)(*a2 - 3) > 1 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  result = 0;
  if ( (v2 == 3) != (*a2 == 3) )
    return result;
  v5 = a2[2];
  v6 = (unsigned __int16)v5;
  v7 = (unsigned __int16)v5 - 20;
  if ( v2 != 4 )
  {
    v8 = HIWORD(v5);
    if ( v7 <= 3 )
    {
      ++v8;
      v9 = v6 - 16;
    }
    else
    {
      v9 = v6 - 16;
      if ( (unsigned int)(v6 - 16) > 0xB )
      {
LABEL_7:
        v10 = a1[2];
        v11 = (unsigned __int16)v10;
        v12 = (unsigned __int16)v10 - 20;
        v13 = HIWORD(v10);
        if ( v12 > 3 )
        {
          v14 = v11 - 16;
          if ( (unsigned int)(v11 - 16) > 0xB )
            return v8 == v13 && v11 == v6;
        }
        else
        {
          ++v13;
          v14 = v11 - 16;
        }
        v11 = byte_15BCC8[v14];
        return v8 == v13 && v11 == v6;
      }
    }
    v6 = byte_15BCC8[v9];
    goto LABEL_7;
  }
  if ( v7 <= 3 )
  {
    v16 = 1;
    v15 = (unsigned __int16)v5 - 16;
  }
  else
  {
    v15 = (unsigned __int16)v5 - 16;
    v16 = 0;
    if ( (unsigned int)v15 > 0xB )
      goto LABEL_16;
  }
  v6 = byte_15BCC8[v15];
LABEL_16:
  v17 = a1[2];
  v18 = (unsigned __int16)v17;
  if ( (unsigned int)(unsigned __int16)v17 - 20 <= 3 )
  {
    v20 = 1;
    v19 = (unsigned __int16)v17 - 16;
  }
  else
  {
    v19 = (unsigned __int16)v17 - 16;
    v20 = 0;
    if ( (unsigned int)v19 > 0xB )
      goto LABEL_18;
  }
  v18 = byte_15BCC8[v19];
LABEL_18:
  result = v16 == v20 && v18 == v6;
  if ( result )
  {
    v21 = HIWORD(v5);
    v13 = v21;
    if ( v21 - 20 <= 3 )
    {
      v6 = 1;
      v22 = v21 - 16;
    }
    else
    {
      v22 = v21 - 16;
      v6 = 0;
      if ( v22 > 0xB )
        goto LABEL_21;
    }
    v13 = byte_15BCC8[v22];
LABEL_21:
    v23 = HIWORD(v17);
    v8 = v23;
    if ( v23 - 20 <= 3 )
    {
      v11 = 1;
      v24 = v23 - 16;
    }
    else
    {
      v24 = v23 - 16;
      v11 = 0;
      if ( v24 > 0xB )
        return v8 == v13 && v11 == v6;
    }
    v8 = byte_15BCC8[v24];
    return v8 == v13 && v11 == v6;
  }
  return result;
}
