__int64 __fastcall sub_226E300(_BYTE *a1, __int64 a2)
{
  _BYTE *v2; // rbp
  size_t v3; // rax
  _DWORD *v5; // rbp
  size_t v6; // rax
  char v7; // al
  char v8; // al
  _WORD *v9; // rbp
  size_t v10; // rax
  char v11; // al
  char v12; // al
  char v13; // al
  _WORD *v14; // rbp
  size_t v15; // rax

  switch ( a2 )
  {
    case 0LL:
      return 0;
    case 1LL:
      v7 = *a1;
      if ( *a1 == 89 )
        return 257;
      if ( v7 <= 89 )
      {
        if ( v7 == 78 )
          return 256;
        return 0;
      }
      if ( v7 == 110 )
        return 256;
      if ( v7 != 121 )
        return 0;
      return 257;
    case 2LL:
      v11 = *a1;
      if ( *a1 == 79 )
      {
        v12 = a1[1];
        if ( v12 == 78 )
          return 257;
        goto LABEL_33;
      }
      if ( v11 <= 79 )
      {
        if ( v11 != 78 )
          return 0;
        v13 = a1[1];
        if ( v13 == 79 )
          return 256;
      }
      else
      {
        if ( v11 != 110 )
        {
          if ( v11 != 111 )
            return 0;
          v12 = a1[1];
LABEL_33:
          if ( v12 != 110 )
            return 0;
          return 257;
        }
        v13 = a1[1];
      }
      if ( v13 != 111 )
        return 0;
      return 256;
    case 3LL:
      v8 = *a1;
      if ( *a1 == 89 )
      {
        v9 = a1 + 1;
        if ( j__strlen("ES") == 2 && *(_WORD *)(a1 + 1) == 21317 )
          return 257;
        v10 = j__strlen("es");
        goto LABEL_25;
      }
      if ( v8 <= 89 )
      {
        if ( v8 != 79 )
          return 0;
        v14 = a1 + 1;
        if ( j__strlen("FF") == 2 && *(_WORD *)(a1 + 1) == 17990 )
          return 256;
        v15 = j__strlen("ff");
      }
      else
      {
        if ( v8 != 111 )
        {
          if ( v8 != 121 )
            return 0;
          v9 = a1 + 1;
          v10 = j__strlen("es");
LABEL_25:
          if ( v10 == 2 && *v9 == 29541 )
            return 257;
          return 0;
        }
        v14 = a1 + 1;
        v15 = j__strlen("ff");
      }
      if ( v15 == 2 && *v14 == 26214 )
        return 256;
      return 0;
    case 4LL:
      if ( *a1 == 84 )
      {
        v2 = a1 + 1;
        if ( j__strlen("RUE") == 3 && *(_WORD *)(a1 + 1) == 21842 && a1[3] == 69 )
          return 257;
        v3 = j__strlen("rue");
      }
      else
      {
        if ( *a1 != 116 )
          return 0;
        v2 = a1 + 1;
        v3 = j__strlen("rue");
      }
      if ( v3 == 3 && *(_WORD *)v2 == 30066 && v2[2] == 101 )
        return 257;
      return 0;
    case 5LL:
      if ( *a1 == 70 )
      {
        v5 = a1 + 1;
        if ( j__strlen("ALSE") == 4 && *(_DWORD *)(a1 + 1) == 1163086913 )
          return 256;
        v6 = j__strlen("alse");
      }
      else
      {
        if ( *a1 != 102 )
          return 0;
        v5 = a1 + 1;
        v6 = j__strlen("alse");
      }
      if ( v6 != 4 || *v5 != 1702063201 )
        return 0;
      return 256;
    default:
      return 0;
  }
}
