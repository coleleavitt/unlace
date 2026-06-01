char *__fastcall sub_229B8F0(__int64 a1, __int64 a2)
{
  char *result; // rax
  char v3; // r10
  bool v4; // cl
  char *v5; // r11
  char v6; // r8
  char v7; // r9
  char v8; // cl
  bool v9; // r8
  char v10; // si

  result = (char *)a1;
  v3 = a2 != 3;
  if ( a2 == 2 )
  {
    v4 = *(_WORD *)a1 == 13686;
    goto LABEL_3;
  }
  v4 = 0;
  if ( a2 != 3 )
  {
LABEL_3:
    v5 = "v5t";
    v6 = a2 != 4;
    if ( !v4 && a2 == 4 && *(_DWORD *)a1 == 1818769014 )
    {
      v5 = "v6k";
      v7 = 1;
      goto LABEL_42;
    }
LABEL_5:
    v7 = a2 != 5;
    if ( v4 )
    {
LABEL_42:
      v8 = 1;
LABEL_43:
      v6 |= v8;
      goto LABEL_44;
    }
    switch ( a2 )
    {
      case 3LL:
        goto LABEL_7;
      case 4LL:
        if ( *(_DWORD *)a1 == 1836267126 )
        {
          v7 = 1;
          v5 = "v6-m";
          goto LABEL_42;
        }
        break;
      case 5LL:
        if ( *(_DWORD *)a1 == 762525302 && *(_BYTE *)(a1 + 4) == 109 )
        {
          v5 = "v6-m";
          goto LABEL_42;
        }
LABEL_80:
        if ( !v6 && *(_DWORD *)a1 == 1803171446 )
          goto LABEL_135;
        if ( a2 == 2 )
        {
          if ( *(_WORD *)a1 == 14198 )
            goto LABEL_90;
        }
        else if ( a2 == 4 )
        {
          if ( *(_DWORD *)a1 == 1818769270 )
          {
            v8 = 1;
            v5 = (char *)"v7-a";
          }
          else
          {
            v8 = 0;
          }
          goto LABEL_43;
        }
        v8 = 0;
        goto LABEL_43;
    }
    v7 = 1;
    goto LABEL_80;
  }
  v6 = 1;
  if ( *(_WORD *)a1 == 13686 && *(_BYTE *)(a1 + 2) == 101 )
  {
    v4 = 1;
    v5 = "v5te";
    goto LABEL_5;
  }
  if ( *(_WORD *)a1 == 13942 && *(_BYTE *)(a1 + 2) == 106 )
  {
    v7 = 1;
    v5 = "v6";
    goto LABEL_42;
  }
  v5 = "v5t";
LABEL_7:
  if ( *(_WORD *)a1 == 13942 && *(_BYTE *)(a1 + 2) == 109 )
  {
    v7 = 1;
    v5 = "v6-m";
    goto LABEL_42;
  }
  v7 = 1;
  if ( *(_WORD *)a1 == 13942 && *(_BYTE *)(a1 + 2) == 122 )
  {
LABEL_135:
    v5 = "v6kz";
    goto LABEL_42;
  }
  if ( *(_WORD *)a1 == 14198 && *(_BYTE *)(a1 + 2) == 97 || *(_WORD *)a1 == 14198 && *(_BYTE *)(a1 + 2) == 108 )
  {
LABEL_90:
    v8 = 1;
    v5 = (char *)"v7-a";
    goto LABEL_43;
  }
  v8 = 0;
  if ( *(_WORD *)a1 == 14198 && *(_BYTE *)(a1 + 2) == 114 )
  {
    v8 = 1;
    v5 = "v7-r";
    goto LABEL_43;
  }
  if ( *(_WORD *)a1 == 14198 && *(_BYTE *)(a1 + 2) == 109 )
  {
    v5 = "v7-m";
    goto LABEL_15;
  }
LABEL_44:
  if ( !v6 && *(_DWORD *)a1 == 1835349878 )
  {
    v5 = "v7e-m";
    goto LABEL_15;
  }
  if ( v8 )
  {
LABEL_15:
    v8 = 1;
    goto LABEL_16;
  }
  if ( a2 == 2 )
  {
    if ( *(_WORD *)a1 == 14454 )
      goto LABEL_68;
    goto LABEL_48;
  }
  if ( a2 == 3 )
  {
    if ( *(_WORD *)a1 == 14454 && *(_BYTE *)(a1 + 2) == 97 || *(_WORD *)a1 == 14454 && *(_BYTE *)(a1 + 2) == 108 )
      goto LABEL_68;
    goto LABEL_48;
  }
  if ( a2 != 7 )
  {
LABEL_48:
    if ( v7 )
    {
LABEL_53:
      v3 |= v8;
      goto LABEL_54;
    }
    if ( *(_DWORD *)a1 != 913142369 )
    {
      v8 = 0;
      goto LABEL_18;
    }
    if ( *(_BYTE *)(a1 + 4) != 52 )
    {
      v8 = 0;
      goto LABEL_18;
    }
LABEL_68:
    v8 = 1;
    v5 = (char *)"v8-a";
    goto LABEL_53;
  }
  if ( *(_DWORD *)a1 == 1668440417 && *(_WORD *)(a1 + 4) == 13928 && *(_BYTE *)(a1 + 6) == 52 )
    goto LABEL_68;
LABEL_16:
  if ( v7 || v8 )
    goto LABEL_53;
LABEL_18:
  if ( *(_DWORD *)a1 == 825112694 && *(_BYTE *)(a1 + 4) == 97 )
  {
    v8 = 1;
    v5 = "v8.1-a";
    goto LABEL_53;
  }
  if ( *(_DWORD *)a1 == 841889910 && *(_BYTE *)(a1 + 4) == 97 )
  {
    v8 = 1;
    v5 = "v8.2-a";
    goto LABEL_53;
  }
  if ( *(_DWORD *)a1 == 858667126 && *(_BYTE *)(a1 + 4) == 97 )
  {
    v8 = 1;
    v5 = "v8.3-a";
    goto LABEL_53;
  }
  if ( *(_DWORD *)a1 == 875444342 && *(_BYTE *)(a1 + 4) == 97 )
  {
    v8 = 1;
    v5 = "v8.4-a";
    goto LABEL_53;
  }
  if ( *(_DWORD *)a1 == 892221558 && *(_BYTE *)(a1 + 4) == 97 )
  {
    v8 = 1;
    v5 = "v8.5-a";
    goto LABEL_53;
  }
  if ( *(_DWORD *)a1 == 908998774 && *(_BYTE *)(a1 + 4) == 97 )
  {
    v8 = 1;
    v5 = "v8.6-a";
    goto LABEL_53;
  }
  if ( *(_DWORD *)a1 == 925775990 && *(_BYTE *)(a1 + 4) == 97 )
  {
    v8 = 1;
    v5 = "v8.7-a";
    goto LABEL_53;
  }
  if ( *(_DWORD *)a1 == 942553206 && *(_BYTE *)(a1 + 4) == 97 )
  {
    v8 = 1;
    v5 = "v8.8-a";
    goto LABEL_53;
  }
  if ( *(_DWORD *)a1 == 959330422 && *(_BYTE *)(a1 + 4) == 97 )
  {
    v8 = 1;
    v5 = "v8.9-a";
    goto LABEL_29;
  }
LABEL_54:
  if ( !v3 && *(_WORD *)a1 == 14454 && *(_BYTE *)(a1 + 2) == 114 )
  {
    v8 = 1;
    v5 = "v8-r";
    goto LABEL_29;
  }
  if ( v8 )
    goto LABEL_29;
  if ( a2 == 2 )
  {
    if ( *(_WORD *)a1 == 14710 )
    {
LABEL_58:
      v8 = 1;
      v5 = "v9-a";
      goto LABEL_31;
    }
LABEL_29:
    v7 |= v8;
    goto LABEL_30;
  }
  if ( !v3 )
  {
    if ( *(_WORD *)a1 == 14710 )
    {
      if ( *(_BYTE *)(a1 + 2) == 97 )
        goto LABEL_58;
      v8 = 0;
    }
    else
    {
      v8 = 0;
    }
  }
LABEL_30:
  if ( v7 )
  {
LABEL_31:
    v9 = a2 != 8;
    goto LABEL_32;
  }
  if ( *(_DWORD *)a1 == 825112950 && *(_BYTE *)(a1 + 4) == 97 )
  {
    v8 = 1;
    v5 = "v9.1-a";
    goto LABEL_31;
  }
  if ( *(_DWORD *)a1 == 841890166 && *(_BYTE *)(a1 + 4) == 97 )
  {
    v8 = 1;
    v5 = "v9.2-a";
    goto LABEL_31;
  }
  if ( *(_DWORD *)a1 == 858667382 && *(_BYTE *)(a1 + 4) == 97 )
  {
    v8 = 1;
    v5 = "v9.3-a";
    goto LABEL_31;
  }
  if ( *(_DWORD *)a1 == 875444598 && *(_BYTE *)(a1 + 4) == 97 )
  {
    v8 = 1;
    v5 = "v9.4-a";
    goto LABEL_31;
  }
  if ( *(_DWORD *)a1 == 892221814 && *(_BYTE *)(a1 + 4) == 97 )
  {
    v8 = 1;
    v9 = a2 != 8;
    v5 = "v9.5-a";
  }
  else
  {
    v9 = a2 != 8;
    if ( *(_DWORD *)a1 == 908999030 && *(_BYTE *)(a1 + 4) == 97 )
    {
      v8 = 1;
      v5 = "v9.6-a";
      goto LABEL_33;
    }
  }
LABEL_32:
  if ( (unsigned __int8)v8 | v9 )
  {
LABEL_33:
    v10 = v8 | (a2 != 10);
    goto LABEL_34;
  }
  if ( *(_QWORD *)a1 == 0x657361622E6D3876LL )
    return "v8-m.base";
  v10 = v8 | (a2 != 10);
  if ( *(_QWORD *)a1 == 0x6E69616D2E6D3876LL )
    return "v8-m.main";
LABEL_34:
  if ( v10 )
  {
    if ( !v8 )
      return result;
    return v5;
  }
  if ( *(_QWORD *)a1 == 0x616D2E6D312E3876LL )
  {
    v5 = "v8.1-m.main";
    if ( *(_WORD *)(a1 + 8) == 28265 )
      return v5;
  }
  return result;
}
