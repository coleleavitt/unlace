/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C5AB
// Address: 0x0047C5AB

//----- (0047C5AB) --------------------------------------------------------
unsigned int *__usercall sub_47C5AB@<eax>(__m128i a1@<xmm0>, unsigned int *a2, unsigned __int16 *a3)
{
  int v3; // ebx
  unsigned __int16 *v4; // edi
  unsigned __int16 v5; // cx
  char v6; // cl
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  char v13; // al
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  bool v19; // zf
  unsigned __int16 v20; // cx
  unsigned __int16 *v21; // ecx
  unsigned __int16 v22; // dx
  int v24; // [esp-4h] [ebp-14h]
  char v25; // [esp+Eh] [ebp-2h] BYREF
  char v26; // [esp+Fh] [ebp-1h] BYREF

  *a2 = 0;
  v3 = 32;
  a2[1] = 0;
  a2[2] = 0;
  v4 = a3;
  a2[1] = dword_4B7A50;
  v5 = *a3;
  if ( *a3 == 32 )
  {
    do
      ++v4;
    while ( *v4 == 32 );
    v5 = *v4;
  }
  switch ( v5 )
  {
    case 'a':
      *a2 = 265;
      break;
    case 'r':
      a2[1] = 1;
      goto LABEL_11;
    case 'w':
      *a2 = 769;
      break;
    default:
      goto LABEL_70;
  }
  a2[1] = 2;
LABEL_11:
  ++v4;
  v6 = 1;
  v26 = 0;
  LOWORD(v3) = 0;
  v25 = 0;
  do
  {
    v7 = *v4;
    if ( !(_WORD)v7 )
      break;
    if ( v7 > 0x53 )
    {
      v14 = v7 - 84;
      if ( v14 )
      {
        v15 = v14 - 14;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 11;
            if ( v17 )
            {
              v18 = v17 - 6;
              if ( v18 )
              {
                if ( v18 != 4 )
                  goto LABEL_70;
                v13 = sub_47C98D(a2);
              }
              else
              {
                v13 = sub_47C96D(a2);
              }
            }
            else
            {
              v13 = sub_47C915((int)a2, &v26);
            }
          }
          else
          {
            v13 = sub_47C8F3((int)a2, &v26);
          }
        }
        else
        {
          v13 = sub_47C8D3(a2);
        }
      }
      else
      {
        v13 = sub_47C8B4(a2);
      }
      goto LABEL_43;
    }
    if ( v7 == 83 )
    {
      if ( !(_BYTE)v3 )
      {
        *a2 |= 0x20u;
        goto LABEL_30;
      }
      goto LABEL_26;
    }
    v8 = v7 - 32;
    if ( v8 )
    {
      v9 = v8 - 11;
      if ( !v9 )
      {
        v13 = sub_47C937(a2, &v25);
        goto LABEL_43;
      }
      v10 = v9 - 1;
      if ( !v10 )
      {
        BYTE1(v3) = 1;
LABEL_26:
        v6 = 0;
        goto LABEL_44;
      }
      v11 = v10 - 24;
      if ( !v11 )
      {
        v13 = sub_47C899(a2);
LABEL_43:
        v6 = v13;
        goto LABEL_44;
      }
      v12 = v11 - 10;
      if ( v12 )
      {
        if ( v12 != 4 )
          goto LABEL_70;
        if ( !(_BYTE)v3 )
        {
          *a2 |= 0x10u;
LABEL_30:
          LOBYTE(v3) = 1;
          v6 = 1;
          goto LABEL_44;
        }
        goto LABEL_26;
      }
      *a2 |= 0x80u;
      v6 = 1;
    }
LABEL_44:
    v4 = (unsigned __int16 *)((char *)v4 + (v6 != 0 ? 2 : 0));
  }
  while ( v6 );
  if ( BYTE1(v3) )
    ++v4;
  while ( *v4 == 32 )
    ++v4;
  if ( !BYTE1(v3) )
  {
    v19 = *v4 == 0;
    goto LABEL_52;
  }
  if ( sub_477F4E(v4, L"ccs", 3) )
    goto LABEL_70;
  v4 += 3;
  v3 = 32;
  v20 = *v4;
  if ( *v4 == 32 )
  {
    do
      ++v4;
    while ( *v4 == 32 );
    v20 = *v4;
  }
  if ( v20 != 61 )
    goto LABEL_70;
  do
    ++v4;
  while ( *v4 == 32 );
  if ( sub_468109(32, (int)v4, a1, v4, L"UTF-8", 5) )
  {
    if ( !sub_468109(32, (int)v4, a1, v4, L"UTF-16LEUNICODE", 8) )
    {
      *a2 |= 0x20000u;
      v24 = 8;
      goto LABEL_66;
    }
    if ( !sub_468109(32, (int)v4, a1, v4, L"UNICODE", 7) )
    {
      *a2 |= 0x10000u;
      v24 = 7;
      goto LABEL_66;
    }
    goto LABEL_70;
  }
  *a2 |= 0x40000u;
  v24 = 5;
LABEL_66:
  v21 = &v4[v24];
  v22 = v4[v24];
  if ( v22 == 32 )
  {
    do
      ++v21;
    while ( *v21 == 32 );
    v22 = *v21;
  }
  v19 = v22 == 0;
LABEL_52:
  if ( !v19 )
  {
LABEL_70:
    *sub_46B984() = 22;
    sub_467EF4(v3, (int)v4);
    return a2;
  }
  *((_BYTE *)a2 + 8) = 1;
  return a2;
}
// 4A82CC: using guessed type wchar_t aCcs[4];
// 4A82D4: using guessed type wchar_t aUtf8_0[6];
// 4A82E0: using guessed type wchar_t aUtf16leunicode[16];
// 4B7A50: using guessed type int dword_4B7A50;
