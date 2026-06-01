__int64 __fastcall sub_856D40(
        unsigned __int8 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned __int8 *v6; // r13
  __int64 v10; // rax
  unsigned __int8 *v11; // r11
  int v12; // eax
  __int64 result; // rax
  unsigned __int16 v14; // cx
  int v15; // esi
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned __int8 v19; // al
  unsigned __int8 *v20; // rdi

  v6 = a1;
  v10 = *a1;
  while ( 2 )
  {
    v11 = sub_8569C0(&v6[byte_23C3B20[v10]], 0);
    v12 = *v11;
    if ( v12 != 141 )
      goto LABEL_3;
    v19 = v11[3];
    v20 = v11 + 3;
    if ( v19 == 119 )
    {
      v20 += byte_23C3B20[119];
      v19 = *v20;
      if ( *v20 <= 0x98u )
        goto LABEL_29;
    }
    else
    {
      if ( v19 != 120 )
      {
        if ( v19 > 0x98u )
          goto LABEL_25;
LABEL_29:
        if ( v19 <= 0x92u )
          goto LABEL_26;
        return 0;
      }
      v20 += (unsigned __int16)__ROL2__(*((_WORD *)v11 + 4), 8);
      v19 = *v20;
      if ( *v20 <= 0x98u )
        goto LABEL_29;
    }
LABEL_25:
    if ( v19 == 0xA5 )
      return 0;
LABEL_26:
    result = sub_856D40(v20, a2, a3, a4, 1, a6);
    if ( !(_DWORD)result )
      return result;
    do
      v20 += (unsigned __int16)__ROL2__(*(_WORD *)(v20 + 1), 8);
    while ( *v20 == 121 );
    v11 = sub_8569C0(v20 + 3, 0);
    v12 = *v11;
LABEL_3:
    switch ( v12 )
    {
      case 27:
      case 28:
        goto LABEL_14;
      case 85:
      case 86:
      case 94:
        if ( v11[1] != 12
          || (*(_DWORD *)(a3 + 276) & a2) != 0
          || (int)a4 > 0
          || *(_DWORD *)(a3 + 324) | a5
          || (a6 & 1) == 0 )
        {
          return 0;
        }
        goto LABEL_14;
      case 128:
      case 132:
        v16 = a6;
        v17 = 1;
        goto LABEL_17;
      case 135:
        v16 = a6;
        v17 = a5;
        v18 = a4 + 1;
        goto LABEL_18;
      case 137:
      case 138:
      case 142:
      case 143:
        v16 = a6;
        v17 = a5;
LABEL_17:
        v18 = a4;
LABEL_18:
        result = sub_856D40(v11, a2, a3, v18, v17, v16);
        if ( !(_DWORD)result )
          return result;
        goto LABEL_14;
      case 139:
      case 140:
      case 144:
      case 145:
        v14 = __ROL2__(*(_WORD *)(v11 + 3), 8);
        v15 = 1 << v14;
        if ( v14 >= 0x20u )
          v15 = 1;
        result = sub_856D40(v11, a2 | v15, a3, a4, a5, a6);
        if ( !(_DWORD)result )
          return result;
LABEL_14:
        v6 += (unsigned __int16)__ROL2__(*(_WORD *)(v6 + 1), 8);
        v10 = *v6;
        if ( (_BYTE)v10 == 121 )
          continue;
        result = 1;
        break;
      default:
        return 0;
    }
    return result;
  }
}
