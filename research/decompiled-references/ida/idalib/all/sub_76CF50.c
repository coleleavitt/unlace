__int64 __fastcall sub_76CF50(unsigned int *a1, char a2)
{
  _BOOL4 v3; // r14d
  char *v4; // rcx
  const __int32_t **v5; // r15
  char *v6; // rdi
  char *v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rsi
  bool v10; // cc
  __int64 v11; // r15
  unsigned int v12; // eax
  char *v13; // rbx
  int v14; // eax
  __int64 v16; // rsi
  int v17; // eax
  char v18; // bp
  unsigned int v19; // eax
  char v20; // al
  int v21; // r15d
  __int32_t v22; // eax
  unsigned int v23; // eax
  char v24; // bp
  unsigned int v25; // edx
  int v26; // eax
  int v27; // r15d
  char *v28; // rax
  __int32_t v29; // eax
  char v30; // al
  char v31; // dl
  __int16 v32; // ax
  bool v34; // [rsp+17h] [rbp-71h]
  unsigned int v35; // [rsp+28h] [rbp-60h] BYREF
  unsigned int v36; // [rsp+2Ch] [rbp-5Ch] BYREF
  unsigned int v37; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v38; // [rsp+34h] [rbp-54h] BYREF
  int v39; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v40; // [rsp+3Ch] [rbp-4Ch] BYREF
  unsigned int v41; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v42; // [rsp+44h] [rbp-44h] BYREF
  unsigned __int64 v43; // [rsp+48h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v35 = 0;
  v34 = a2 > 0;
  v3 = a2 > 0;
  if ( a1 )
    v36 = *a1;
  else
    v36 = 0;
  ++dword_2CCCDC0;
  v38 = 0;
  v5 = __ctype_toupper_loc();
  v6 = qword_2CD44C0;
  while ( 2 )
  {
    v7 = v6 + 1;
    qword_2CD44C0 = v6 + 1;
    v8 = (unsigned int)(*v5)[(unsigned __int8)*v6];
    v9 = (unsigned __int8)(v8 - 70);
    switch ( (char)v8 )
    {
      case 'F':
      case 'G':
      case 'H':
        v16 = (unsigned int)(char)(v8 - 68);
        goto LABEL_27;
      case 'J':
        v6 = nullptr;
        v17 = sub_76E800(0);
        v8 = (unsigned __int64)qword_2CD44C0;
        v39 = v17;
        ++qword_2CD44C0;
        v9 = *(unsigned __int8 *)v8;
        switch ( (*v5)[v9] )
        {
          case 'A':
          case 'F':
            if ( *(_BYTE *)(v8 + 1) != 36 )
              goto LABEL_80;
            qword_2CD44C0 = (char *)(v8 + 2);
            v42 = sub_76CEC0();
            if ( *qword_2CD44C0 == 58 )
              sub_76D8B0(&v42);
LABEL_52:
            sub_770B70(&v39, &v42);
            break;
          case 'L':
            if ( (unsigned int)((__int64 (*)(void))sub_76CE80)() > 0x23
              || (unsigned int)((__int64 (*)(void))sub_76CE80)() > 0x23 )
            {
              goto LABEL_80;
            }
            sub_76EF20(&v39);
            break;
          case 'S':
            sub_76FA20(&v42, "__self", 6);
            goto LABEL_52;
          case 'V':
            sub_770800(&v39, 6);
            break;
          default:
            goto LABEL_80;
        }
        sub_76FD20(&v39, 41);
        if ( (dword_2CD44CC & 0xA0) == 0 )
        {
          if ( (_WORD)v38 )
            sub_76FD20(&v38, 32);
          sub_770B70(&v38, &v39);
        }
        v6 = qword_2CD44C0;
        continue;
      case 'N':
        v16 = 0;
LABEL_27:
        sub_76FDE0(&v38, v16);
        v6 = qword_2CD44C0;
        continue;
      case 'U':
        if ( v3 )
          goto LABEL_80;
        ++v6;
        v3 = 1;
        continue;
      case 'X':
      case 'Y':
        sub_76FFF0(&v38);
        v6 = qword_2CD44C0;
        continue;
      default:
        qword_2CD44C0 = v6;
        v9 = (unsigned __int16)v38;
        v37 = v38;
        if ( a2 < 0 || (dword_2CD44CC & 8) != 0 )
        {
          qword_2CD44C0 = v6 + 1;
          v8 = (unsigned __int8)*v6;
          v10 = (char)v8 <= 40;
          if ( (_BYTE)v8 != 40 )
            goto LABEL_8;
LABEL_43:
          v41 = 0;
          v20 = v6[1];
          if ( v20 == 41 )
          {
            qword_2CD44C0 = v6 + 2;
          }
          else
          {
            v21 = 0;
            do
            {
              if ( !v20 )
                goto LABEL_80;
              if ( v21 )
                sub_770C10(&v41);
              ++v21;
              v9 = (__int64)&v42;
              v6 = (char *)&v41;
              v42 = sub_76CF50(0, 0);
              sub_770B70(&v41, &v42);
              v4 = qword_2CD44C0;
              v20 = *qword_2CD44C0;
            }
            while ( *qword_2CD44C0 != 41 );
            ++qword_2CD44C0;
            if ( v21 )
            {
LABEL_82:
              if ( !dword_2CCCDC0 )
              {
                v26 = 255;
                v27 = ((dword_2CD44C8 & 0x10000) == 0) + v21 - 1;
                if ( v27 <= 255 )
                  v26 = v27;
                dword_2CD44C8 |= v26 << 8;
              }
              v35 = sub_772CF0(&v41);
              if ( (v36 & 0x10000) != 0 )
              {
                sub_772CF0(&v36);
              }
              else if ( !dword_2CCCDC0 )
              {
                dword_2CD44C8 |= 1u;
              }
              if ( a2 > 0 )
              {
                if ( (_WORD)v37 && (dword_2CD44CC & 0x200) == 0 )
                  sub_770B70(&v35, &v37);
                v3 = 0;
              }
              v37 = sub_76CF50(0, 0);
              if ( (v36 & 0x20000) != 0 )
              {
                v6 = (char *)&v36;
                v9 = (__int64)&v37;
                v37 = sub_771320(&v36, &v37);
                if ( (dword_2CD44CC & 8) != 0 )
                {
                  if ( v3 )
                    goto LABEL_80;
                }
                else
                {
                  v9 = (__int64)&v35;
                  v6 = (char *)&v37;
                  sub_770B70(&v37, &v35);
                  if ( v3 )
                    goto LABEL_80;
                }
              }
              else
              {
                v9 = (__int64)&v35;
                v6 = (char *)&v36;
                sub_770B70(&v36, &v35);
                if ( (dword_2CD44CC & 0x40) == 0 )
                {
                  if ( v3 )
                    goto LABEL_80;
                  goto LABEL_37;
                }
                v37 = v36;
                if ( v3 )
                  goto LABEL_80;
              }
LABEL_22:
              v14 = dword_2CCCDC0 - 1;
              goto LABEL_23;
            }
          }
          v21 = 0;
          sub_76FCD0(&v42, 1684631414, 4);
          v41 = v42;
          goto LABEL_82;
        }
        if ( (_WORD)v36 && (_WORD)v38 )
          sub_76FD20(&v37, 32);
        v18 = BYTE2(v36);
        v9 = (__int64)&v36;
        v19 = sub_771320(&v37, &v36);
        v6 = qword_2CD44C0;
        v36 = v19;
        v7 = qword_2CD44C0 + 1;
        BYTE2(v36) = v18;
        ++qword_2CD44C0;
        v8 = (unsigned __int8)*v6;
        v10 = (char)v8 <= 40;
        if ( (_BYTE)v8 == 40 )
          goto LABEL_43;
LABEL_8:
        if ( v10 )
        {
          if ( !(_BYTE)v8 )
            goto LABEL_80;
          if ( (_BYTE)v8 == 36 )
          {
            qword_2CD44C0 = v6;
            v6 = (_BYTE *)(&dword_0 + 1);
            v37 = sub_76DB20(1, v9);
            if ( v3 || v34 )
              goto LABEL_80;
            goto LABEL_37;
          }
LABEL_64:
          v41 = 0;
          v22 = (*v5)[(unsigned __int8)*v6];
          if ( v22 == 80 )
          {
            v9 = 42;
          }
          else
          {
            if ( v22 != 82 )
            {
              if ( v22 == 77 )
              {
                if ( v6[1] == 36 )
                  v41 = sub_76DB20(1, v9);
                sub_76FCD0(&v42, 2767418, 3);
                v9 = (__int64)&v42;
                v23 = sub_771320(&v41, &v42);
              }
              else
              {
                qword_2CD44C0 = v6;
                v23 = 0;
              }
              v24 = 0;
              goto LABEL_71;
            }
            v9 = 38;
          }
          v24 = -1;
          sub_76F8C0(&v42, v9);
          v23 = v42;
LABEL_71:
          v35 = v23;
          v6 = (char *)v23;
          v25 = HIWORD(v23);
          if ( (_WORD)v23 )
          {
            v13 = (char *)&v35;
            if ( (_WORD)v36 && (_WORD)v37 )
            {
              sub_76FD20(&v35, 32);
              LOBYTE(v25) = BYTE2(v35);
            }
            BYTE2(v35) = v25 | 1;
            sub_770B70(&v35, &v36);
            v9 = (unsigned int)v24;
            goto LABEL_20;
          }
          v28 = qword_2CD44C0;
          v42 = 0;
          ++qword_2CD44C0;
          v8 = (unsigned __int8)*v28;
          v29 = (*v5)[v8];
          if ( (_BYTE)v29 == 95 )
          {
            v32 = 0;
          }
          else
          {
            v8 = (unsigned int)(v29 - 65);
            if ( (unsigned __int8)(v29 - 65) > 0x19u )
              goto LABEL_80;
            v8 = (unsigned __int64)byte_23B8AB0;
            v30 = byte_23B8AB0[(char)v29 - 65];
            if ( !v30 )
              goto LABEL_80;
            if ( v3 )
            {
              if ( (v30 & 0x60) == 0 )
                goto LABEL_80;
              v31 = -65;
            }
            else
            {
              if ( v30 == 1 && dword_2CCCDC0 == 1 )
                dword_2CD44C8 |= 0x10000u;
              v31 = -33;
            }
            v9 = (unsigned __int8)(v31 & v30);
            sub_770800(&v42, v9);
            v6 = (char *)(unsigned __int16)v42;
            v32 = HIWORD(v42);
          }
          LOWORD(v37) = (_WORD)v6;
          HIWORD(v37) = v32;
          if ( a2 > 0 )
            goto LABEL_80;
LABEL_37:
          if ( (_WORD)v36 )
          {
            if ( (_WORD)v37 )
              sub_76FD20(&v37, 32);
            sub_770B70(&v37, &v36);
          }
          goto LABEL_22;
        }
        if ( (_BYTE)v8 != 46 )
        {
          if ( (_BYTE)v8 == 91 )
          {
            if ( a2 < 0 && (_WORD)v36 )
            {
              v6 = (char *)&v36;
              sub_772CF0(&v36);
              v7 = qword_2CD44C0;
            }
            v40 = 0;
            do
            {
              v11 = 0;
              if ( *v7 == 93 )
              {
                v6 = (char *)&v40;
                v9 = 23899;
                qword_2CD44C0 = v7 + 1;
                sub_770730(&v40, 23899);
                v8 = (unsigned __int64)qword_2CD44C0;
              }
              else
              {
                while ( 1 )
                {
                  v12 = sub_76CE80(v6, v9);
                  if ( v12 > 9 )
                    break;
                  v11 = v12 + 10 * v11;
                }
                sub_76ECC0(&v41, v11);
                v6 = (char *)&v40;
                v9 = (__int64)&v42;
                v42 = sub_772E80(&v41);
                sub_770B70(&v40, &v42);
                v8 = (unsigned __int64)qword_2CD44C0;
                if ( *(qword_2CD44C0 - 1) != 93 )
                  goto LABEL_80;
              }
              v7 = (char *)(v8 + 1);
              qword_2CD44C0 = (char *)(v8 + 1);
            }
            while ( *(_BYTE *)v8 == 91 );
            qword_2CD44C0 = (char *)v8;
            v13 = (char *)&v36;
            v42 = v40;
            sub_770B70(&v36, &v42);
            v9 = 0;
LABEL_20:
            v6 = v13;
            v37 = sub_76CF50(v13, v9);
            if ( !v3 && !v34 )
              goto LABEL_22;
LABEL_80:
            sub_76E6C0(v6, v9, v8, v4);
          }
          goto LABEL_64;
        }
        v6 = (char *)&v36;
        v9 = 1;
        --dword_2CCCDC0;
        v37 = sub_76CF50(&v36, 1);
        v14 = dword_2CCCDC0;
        v8 = (unsigned int)++dword_2CCCDC0;
        if ( v3 || v34 )
          goto LABEL_80;
LABEL_23:
        dword_2CCCDC0 = v14;
        if ( a1 )
          *a1 = v36;
        return v37;
    }
  }
}
