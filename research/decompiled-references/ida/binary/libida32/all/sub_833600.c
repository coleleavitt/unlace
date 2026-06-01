__int64 __fastcall sub_833600(_BYTE *a1, int *a2, int a3)
{
  _BYTE *v3; // r15
  int v4; // r12d
  unsigned int v5; // ebp
  char v7; // dl
  unsigned __int8 *v8; // rdi
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v13; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-40h]

  v3 = a1;
  v4 = -2;
  v5 = 0;
  v14 = __readfsqword(0x28u);
  *a2 = -2;
  v7 = *a1;
  do
  {
    v8 = sub_833040(&v3[2 * ((unsigned __int8)(v7 + 112) <= 1u || (unsigned __int8)(v7 + 117) <= 1u) + 3], 1);
    v9 = *v8;
    if ( (unsigned __int8)v9 > 0x38u )
    {
      if ( (unsigned __int8)(v9 + 0x80) > 0x11u )
        return 0;
      v10 = 204689;
      if ( !_bittest64(&v10, (unsigned int)(v9 - 128)) )
        return 0;
      v11 = sub_833600(v8, &v13, a3 + (unsigned int)((v9 & 0xFB) == 0x80));
      if ( v13 > 0xFFFFFFFD )
        return 0;
      if ( v4 == -2 )
      {
        v4 = v13;
        v5 = v11;
      }
      else if ( v13 != v4 || v5 != v11 )
      {
        return 0;
      }
    }
    else
    {
      if ( (unsigned __int8)v9 <= 0x1Cu )
        return 0;
      switch ( (char)v9 )
      {
        case 29:
        case 35:
        case 36:
        case 43:
          goto LABEL_20;
        case 30:
        case 48:
        case 49:
        case 56:
          goto LABEL_14;
        case 41:
          v8 += 2;
LABEL_20:
          if ( !a3 )
            return 0;
          if ( v4 != -2 )
            goto LABEL_16;
          v5 = v8[1];
          v4 = 0;
          break;
        case 54:
          v8 += 2;
LABEL_14:
          if ( !a3 )
            return 0;
          if ( v4 == -2 )
          {
            v5 = v8[1];
            v4 = 1;
          }
          else
          {
LABEL_16:
            if ( v8[1] != v5 )
              return 0;
          }
          break;
        default:
          return 0;
      }
    }
    v3 += (unsigned __int16)__ROL2__(*(_WORD *)(v3 + 1), 8);
    v7 = *v3;
  }
  while ( *v3 == 121 );
  *a2 = v4;
  return v5;
}

