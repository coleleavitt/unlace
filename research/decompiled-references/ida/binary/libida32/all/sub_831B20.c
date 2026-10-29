__int64 __fastcall sub_831B20(
        unsigned __int8 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4,
        unsigned __int8 *a5,
        int *a6)
{
  int v6; // eax
  int v12; // r14d
  __int64 v13; // r10
  char v14; // cl
  __int64 v15; // rax
  unsigned __int8 *v16; // rax
  unsigned __int8 *v17; // rdi
  unsigned __int8 *v19; // rax
  unsigned int *v20; // r11
  unsigned int v21; // esi
  unsigned int v22; // ecx
  unsigned __int8 *v23; // rax
  unsigned __int8 *v24; // r11
  unsigned __int8 *v25; // rdi
  unsigned __int8 *v26; // r14
  unsigned __int8 *v27; // rbx
  int v28; // eax
  __int64 v29; // rsi
  __int64 v30; // rcx
  unsigned int *v31; // rdx
  int *v32; // rdx
  unsigned int *v33; // r10
  __int64 v34; // rax
  unsigned __int8 *v35; // rcx
  unsigned __int8 *v36; // rsi
  unsigned __int8 *v37; // rcx
  unsigned __int8 *v38; // rdi
  int v39; // edx
  int v40; // esi
  unsigned __int8 *v41; // rdi
  int v42; // edi
  _DWORD *v43; // rdi
  _DWORD *v44; // rdi
  bool v45; // zf
  unsigned __int8 *v46; // rcx
  __int64 v47; // rdx
  unsigned __int8 *v48; // [rsp+0h] [rbp-78h]
  unsigned __int8 *v49; // [rsp+0h] [rbp-78h]
  unsigned __int8 v50; // [rsp+8h] [rbp-70h]
  int v51[2]; // [rsp+10h] [rbp-68h] BYREF
  int v52; // [rsp+18h] [rbp-60h] BYREF
  unsigned __int64 v53; // [rsp+38h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v6 = *a6 - 1;
  *a6 = v6;
  if ( v6 <= 0 )
    return 0;
  v12 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_3:
          while ( 1 )
          {
            v13 = *a1;
            if ( (_BYTE)v13 != 119 )
              break;
            a1 += byte_239F9C0[119];
          }
          if ( (_BYTE)v13 != 120 )
            break;
          a1 += (unsigned __int16)__ROL2__(*(_WORD *)(a1 + 5), 8);
        }
        for ( ; (_BYTE)v13 == 121; v13 = *a1 )
          a1 += (unsigned __int16)__ROL2__(*(_WORD *)(a1 + 1), 8);
        if ( !(_BYTE)v13 )
          return a4[1] != 0;
        v14 = v13 - 122;
        if ( (unsigned __int8)(v13 - 122) > 0x20u )
          goto LABEL_21;
        v15 = 1LL << v14;
        if ( ((1LL << v14) & 0x2A000) == 0 )
          break;
        v12 = 1;
        v24 = &a1[(unsigned __int16)__ROL2__(*(_WORD *)(a1 + 1), 8)];
        a1 += byte_239F9C0[v13];
        if ( *v24 == 121 )
        {
          v25 = a1;
          v26 = a5;
          v27 = v24;
          while ( 1 )
          {
            v28 = sub_831B20(v25, a2, a3, a4, v26, a6);
            if ( !v28 )
              return 0;
            v25 = v27 + 3;
            v27 += (unsigned __int16)__ROL2__(*(_WORD *)(v27 + 1), 8);
            if ( *v27 != 121 )
            {
              a5 = v26;
              a1 = v25;
              v12 = v28;
              goto LABEL_3;
            }
          }
        }
      }
      if ( (v15 & 0x180000000LL) == 0 )
        break;
      v17 = a1 + 1;
      if ( (a1[1] & 0xFD) != 0x89 && a1[1] != 0x87 )
        return 0;
      do
        v17 += (unsigned __int16)__ROL2__(*(_WORD *)(v17 + 1), 8);
      while ( *v17 == 121 );
      v50 = v13;
      v48 = a5;
      if ( !(unsigned int)sub_831B20(v17 + 3, a2, a3, a4, a5, a6) )
        return 0;
      a5 = v48;
      a1 += byte_239F9C0[v50];
    }
    if ( (v15 & 9) != 0 )
    {
      if ( a4[1] )
      {
        v16 = &a1[-(unsigned __int16)__ROL2__(*(_WORD *)(a1 + 1), 8)];
        switch ( *v16 )
        {
          case 0x80u:
          case 0x81u:
          case 0x87u:
            return v12 ^ 1u;
          case 0x82u:
          case 0x83u:
            break;
          case 0x84u:
          case 0x85u:
            return 0;
          case 0x88u:
            if ( *a4 - 29 > 1 )
              return 0;
            goto LABEL_44;
          case 0x8Bu:
          case 0x8Cu:
          case 0x90u:
          case 0x91u:
            if ( *(_DWORD *)(a3 + 328) )
              return 0;
            goto LABEL_44;
          default:
LABEL_44:
            a1 += byte_239F9C0[v13];
            goto LABEL_3;
        }
        while ( v16[3] != 127 )
        {
          v16 += (unsigned __int16)__ROL2__(*(_WORD *)(v16 + 1), 8);
          if ( *v16 != 121 )
            return v12 ^ 1u;
        }
      }
      return 0;
    }
LABEL_21:
    v49 = a5;
    v19 = sub_831870(a1, *(_QWORD *)(a3 + 16), v51);
    a1 = v19;
    if ( !v19 )
      return 0;
    v21 = *a4;
    v22 = v51[0];
    a5 = v49;
    if ( *a4 == 29 )
    {
      v32 = (int *)(a4 + 2);
      v21 = v51[0];
      v33 = v20;
      goto LABEL_56;
    }
    if ( v51[0] == 29 )
    {
      v33 = a4;
      v32 = &v52;
      while ( 1 )
      {
LABEL_56:
        v34 = (unsigned int)*v32;
        switch ( v21 )
        {
          case 6u:
            if ( (unsigned int)v34 > 0xFF || (*(_BYTE *)(*(_QWORD *)(a3 + 32) + v34) & 8) == 0 )
              return 0;
            goto LABEL_60;
          case 7u:
            if ( (unsigned int)v34 <= 0xFF && (*(_BYTE *)(*(_QWORD *)(a3 + 32) + v34) & 8) != 0 )
              return 0;
            goto LABEL_60;
          case 8u:
            if ( (unsigned int)v34 > 0xFF || (*(_BYTE *)(*(_QWORD *)(a3 + 32) + v34) & 1) == 0 )
              return 0;
            goto LABEL_60;
          case 9u:
            if ( (unsigned int)v34 <= 0xFF && (*(_BYTE *)(*(_QWORD *)(a3 + 32) + v34) & 1) != 0 )
              return 0;
            goto LABEL_60;
          case 0xAu:
            if ( (unsigned int)v34 > 0xFF || (*(_BYTE *)(*(_QWORD *)(a3 + 32) + v34) & 0x10) == 0 )
              return 0;
            goto LABEL_60;
          case 0xBu:
            if ( (unsigned int)v34 <= 0xFE && (*(_BYTE *)(*(_QWORD *)(a3 + 32) + v34) & 0x10) != 0 )
              return 0;
            goto LABEL_60;
          case 0x11u:
          case 0x15u:
          case 0x17u:
          case 0x19u:
            if ( (_DWORD)v34 == 133 )
              return 0;
            if ( (unsigned int)v34 > 0x85 )
            {
              if ( (unsigned int)(v34 - 8232) <= 1 )
                return 0;
            }
            else if ( (unsigned int)(v34 - 10) <= 3 )
            {
              return 0;
            }
            goto LABEL_60;
          case 0x12u:
            if ( (_DWORD)v34 == 6158 )
              goto LABEL_60;
            if ( (unsigned int)v34 > 0x180E )
            {
              if ( (_DWORD)v34 != 8287 )
              {
                if ( (unsigned int)v34 > 0x205F )
                {
                  if ( (_DWORD)v34 != 12288 )
                    return 0;
                }
                else if ( (unsigned int)v34 > 0x200A )
                {
                  if ( (_DWORD)v34 != 8239 )
                    return 0;
                }
                else if ( (unsigned int)v34 <= 0x1FFF )
                {
                  return 0;
                }
              }
            }
            else if ( (_DWORD)v34 != 160 )
            {
              if ( (unsigned int)v34 > 0xA0 )
              {
                if ( (_DWORD)v34 != 5760 )
                  return 0;
              }
              else if ( (_DWORD)v34 != 9 && (_DWORD)v34 != 32 )
              {
                return 0;
              }
            }
            goto LABEL_60;
          case 0x13u:
            if ( (_DWORD)v34 == 6158 )
              return 0;
            if ( (unsigned int)v34 > 0x180E )
            {
              if ( (_DWORD)v34 == 8287 )
                return 0;
              if ( (unsigned int)v34 > 0x205F )
              {
                if ( (_DWORD)v34 == 12288 )
                  return 0;
              }
              else if ( (unsigned int)v34 > 0x200A )
              {
                if ( (_DWORD)v34 == 8239 )
                  return 0;
              }
              else if ( (unsigned int)v34 > 0x1FFF )
              {
                return 0;
              }
            }
            else
            {
              if ( (_DWORD)v34 == 160 )
                return 0;
              if ( (unsigned int)v34 > 0xA0 )
              {
                if ( (_DWORD)v34 == 5760 )
                  return 0;
              }
              else if ( (_DWORD)v34 == 9 || (_DWORD)v34 == 32 )
              {
                return 0;
              }
            }
LABEL_60:
            if ( *++v32 == -1 )
              goto LABEL_49;
            break;
          case 0x14u:
            if ( (_DWORD)v34 == 133 )
              goto LABEL_60;
            if ( (unsigned int)v34 > 0x85 )
            {
              if ( (unsigned int)(v34 - 8232) > 1 )
                return 0;
            }
            else if ( (unsigned int)(v34 - 10) > 3 )
            {
              return 0;
            }
            goto LABEL_60;
          case 0x18u:
            goto LABEL_60;
          case 0x1Du:
            v44 = v33 + 2;
            while ( (_DWORD)v34 != *v44 )
            {
              if ( *++v44 == -1 )
                goto LABEL_60;
            }
            return 0;
          case 0x1Fu:
            v43 = v33 + 2;
            while ( (_DWORD)v34 != *v43 )
            {
              if ( *++v43 == -1 )
                return 0;
            }
            if ( (_DWORD)v34 == -1 )
              return 0;
            goto LABEL_60;
          case 0x6Eu:
            if ( (unsigned int)v34 <= 0xFF )
              goto LABEL_76;
            goto LABEL_60;
          case 0x6Fu:
            if ( (unsigned int)v34 > 0xFF )
              return 0;
LABEL_76:
            v41 = a1;
            if ( v33 != v20 )
              v41 = v49;
            v42 = v41[((unsigned int)v34 >> 3) - (unsigned __int64)v33[2]];
            if ( _bittest(&v42, *v32 & 7) )
              return 0;
            goto LABEL_60;
          default:
            return 0;
        }
      }
    }
    if ( v21 == 110 )
    {
LABEL_51:
      v23 = &v49[-a4[2]];
      v31 = v20;
      goto LABEL_52;
    }
    if ( v51[0] == 110 )
      break;
    if ( !a2 )
    {
      if ( v21 == 111 )
        goto LABEL_51;
      if ( v51[0] == 111 )
        goto LABEL_29;
    }
    v29 = v21 - 6;
    if ( (unsigned int)v29 > 0x10 )
      return 0;
    v30 = (unsigned int)(v51[0] - 6);
    if ( (unsigned int)v30 > 0x14 || !byte_239A000[21 * v29 + v30] )
      return 0;
LABEL_49:
    if ( !v51[1] )
      return 1;
  }
  if ( a2 )
  {
    v22 = *a4;
    v23 = &v19[-v52];
    v31 = a4;
LABEL_52:
    if ( v22 <= 0xB )
    {
LABEL_53:
      if ( v22 > 5 )
      {
        switch ( v22 )
        {
          case 7u:
            v35 = (unsigned __int8 *)(*(_QWORD *)(a3 + 24) + 64LL);
            v36 = v23 + 32;
            goto LABEL_64;
          case 8u:
            v37 = *(unsigned __int8 **)(a3 + 24);
            v38 = v23 + 32;
            break;
          case 9u:
            v35 = *(unsigned __int8 **)(a3 + 24);
            v36 = v23 + 32;
            goto LABEL_64;
          case 0xAu:
            v38 = v23 + 32;
            v37 = (unsigned __int8 *)(*(_QWORD *)(a3 + 24) + 160LL);
            break;
          case 0xBu:
            v35 = (unsigned __int8 *)(*(_QWORD *)(a3 + 24) + 160LL);
            v36 = v23 + 32;
            goto LABEL_64;
          default:
            v38 = v23 + 32;
            v37 = (unsigned __int8 *)(*(_QWORD *)(a3 + 24) + 64LL);
            break;
        }
        while ( 1 )
        {
          v39 = *v37;
          v40 = *v23++;
          ++v37;
          if ( (v40 & ~v39) != 0 )
            break;
          if ( v23 >= v38 )
            goto LABEL_49;
        }
      }
      return 0;
    }
    if ( v22 - 110 > 1 )
      return 0;
  }
  else
  {
    if ( v21 != 111 )
    {
LABEL_29:
      v23 = &v19[-v52];
      if ( v21 > 0xB )
        return 0;
      v22 = *a4;
      goto LABEL_53;
    }
    v23 = &v49[-a4[2]];
    v31 = v20;
  }
  v45 = v31 == v20;
  v46 = a1;
  v47 = v31[2];
  v36 = v23 + 32;
  if ( !v45 )
    v46 = v49;
  v35 = &v46[-v47];
LABEL_64:
  while ( (*v35++ & *v23++) == 0 )
  {
    if ( v23 >= v36 )
      goto LABEL_49;
  }
  return 0;
}

