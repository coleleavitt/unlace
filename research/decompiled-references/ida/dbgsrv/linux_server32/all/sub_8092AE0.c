/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8092AE0
// Address: 0x08092AE0

//----- (08092AE0) --------------------------------------------------------
unsigned __int8 *__cdecl sub_8092AE0(int a1, unsigned __int8 *a2)
{
  unsigned __int8 v2; // dl
  unsigned __int8 *v3; // esi
  unsigned __int8 *v4; // edi
  int v5; // ecx
  _BOOL4 v6; // ebx
  int v7; // eax
  char *v8; // eax
  char v9; // al
  unsigned __int8 *v11; // eax
  unsigned __int8 v12; // [esp+0h] [ebp-28h]
  int v13; // [esp+0h] [ebp-28h]

  v2 = *a2;
  if ( !*a2 )
  {
LABEL_32:
    v3 = a2;
    goto LABEL_19;
  }
  v3 = a2;
  v4 = a2;
  v5 = 0;
  v6 = 1;
  v7 = v2;
  while ( !*(_BYTE *)(a1 + 76) )
  {
    if ( v2 == 34 )
    {
      v5 ^= 1u;
      v6 = 1;
      goto LABEL_14;
    }
    if ( !v5 )
    {
      if ( v2 != 47 )
      {
        if ( v2 == 59 )
        {
          if ( (*(_BYTE *)(a1 + 408) & 8) != 0 )
            goto LABEL_16;
        }
        else if ( v2 == 40 )
        {
          if ( (*(_BYTE *)(a1 + 408) & 2) == 0 )
          {
            if ( v6 )
              goto LABEL_11;
LABEL_22:
            v6 = 1;
            if ( (unsigned __int8)(v7 - 11) > 1u )
            {
LABEL_12:
              v12 = v2;
              v8 = strchr("!%&*+-/<=>^|:?(),.[\\]`{};~@#", v7);
              v2 = v12;
              v6 = v8 != nullptr;
            }
LABEL_13:
            v5 = 0;
            goto LABEL_14;
          }
LABEL_27:
          if ( v4[1] == 42 )
          {
            *(_BYTE *)(a1 + 76) = 1;
            v2 = (++v4)[1];
            v5 = 0;
            goto LABEL_15;
          }
LABEL_28:
          if ( v6 )
          {
LABEL_29:
            if ( v2 == 10 )
            {
LABEL_30:
              v2 = v4[1];
              v6 = 1;
              v5 = 0;
              goto LABEL_15;
            }
            if ( v2 == 13 )
            {
              v2 = v4[1];
              v6 = 1;
              v5 = 0;
              goto LABEL_15;
            }
LABEL_11:
            if ( (unsigned __int8)(v7 - 11) <= 1u )
              goto LABEL_30;
            goto LABEL_12;
          }
          goto LABEL_20;
        }
LABEL_40:
        if ( v6 )
        {
          if ( v2 == 32 || v2 == 9 )
          {
            v2 = v4[1];
            v5 = 0;
            goto LABEL_15;
          }
          goto LABEL_29;
        }
        if ( v2 != 32 && v2 != 9 )
        {
LABEL_20:
          if ( v2 != 10 && v2 != 13 )
            goto LABEL_22;
        }
        v6 = 1;
        goto LABEL_13;
      }
      v13 = *(_DWORD *)(a1 + 408);
      goto LABEL_25;
    }
LABEL_14:
    *v3 = v2;
    v2 = v4[1];
    ++v3;
LABEL_15:
    ++v4;
    v7 = v2;
    if ( !v2 )
      goto LABEL_16;
  }
  v2 = v4[1];
  if ( (_BYTE)v7 != 42 )
    goto LABEL_15;
  if ( v2 != 47 )
  {
    if ( v2 != 41 )
      goto LABEL_15;
    if ( (*(_BYTE *)(a1 + 408) & 2) != 0 )
      goto LABEL_45;
    v11 = v4 + 1;
    if ( *(_BYTE *)(a1 + 76) )
      goto LABEL_62;
    ++v4;
    if ( v5 )
      goto LABEL_14;
    v7 = 41;
    goto LABEL_40;
  }
  v13 = *(_DWORD *)(a1 + 408);
  if ( (v13 & 1) != 0 )
  {
LABEL_45:
    *(_BYTE *)(a1 + 76) = 0;
    v2 = (++v4)[1];
    goto LABEL_15;
  }
  v11 = v4 + 1;
  if ( *(_BYTE *)(a1 + 76) )
  {
LABEL_62:
    v2 = v4[2];
    v4 = v11;
    goto LABEL_15;
  }
  ++v4;
  if ( v5 )
    goto LABEL_14;
LABEL_25:
  if ( v4[1] != 47 )
  {
    v7 = 47;
    if ( (v13 & 1) != 0 )
      goto LABEL_27;
    goto LABEL_60;
  }
  if ( (v13 & 4) == 0 )
  {
    if ( (v13 & 1) != 0 )
    {
      v7 = 47;
      goto LABEL_28;
    }
LABEL_60:
    v7 = 47;
    goto LABEL_12;
  }
LABEL_16:
  if ( a2 < v3 )
  {
    while ( 1 )
    {
      v9 = *(v3 - 1);
      if ( (unsigned __int8)(v9 - 9) > 4u && v9 != 32 )
        break;
      if ( a2 == --v3 )
        goto LABEL_32;
    }
  }
LABEL_19:
  *v3 = 0;
  return v3;
}
