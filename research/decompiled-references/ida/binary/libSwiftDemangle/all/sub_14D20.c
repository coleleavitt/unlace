__int64 __fastcall sub_14D20(_QWORD *a1, __int16 a2)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned int v20; // ebx
  unsigned __int64 v21; // rax
  char v22; // al
  const char *v23; // r13
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned int v26; // edx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax

  v3 = (a1[1] + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  a1[1] = v3;
  if ( !v3 || (v4 = v3 + 24, v3 + 24 > a1[2]) )
  {
    v9 = 2LL * a1[4];
    if ( v9 < 0x20 )
      v9 = 32;
    a1[4] = v9;
    v10 = v9 + 8;
    v11 = malloc(v9 + 8);
    v12 = a1[3];
    a1[3] = v11;
    *v11 = v12;
    v3 = ((unsigned __int64)v11 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    a1[2] = (char *)v11 + v10;
    v4 = v3 + 24;
  }
  a1[1] = v4;
  *(_WORD *)(v3 + 16) = a2;
  *(_BYTE *)(v3 + 18) = 0;
  v5 = a1[9];
  v6 = a1[8];
  if ( v5 >= v6 )
  {
    return 0;
  }
  else
  {
    v7 = a1[7];
    v8 = v5 + 1;
    a1[9] = v5 + 1;
    switch ( *(_BYTE *)(v7 + v5) )
    {
      case 'c':
        v15 = sub_12C70(a1, 1);
        *(_WORD *)(v15 + 16) = 77;
        *(_BYTE *)(v15 + 18) = 2;
        *(_QWORD *)v15 = 5;
        return sub_CCF0(a1, v3, v15);
      case 'd':
        v20 = 64;
        if ( v6 > v8 )
        {
          if ( *(_BYTE *)(v7 + v5 + 1) != 71 )
            goto LABEL_32;
          v8 = v5 + 2;
          v20 = 192;
          a1[9] = v5 + 2;
          if ( v6 > v5 + 2 )
            goto LABEL_32;
        }
        goto LABEL_28;
      case 'e':
        v20 = 1024;
        if ( v6 <= v8 )
          goto LABEL_28;
        if ( *(_BYTE *)(v7 + v5 + 1) == 68 )
        {
          v8 = v5 + 2;
          v20 = 1088;
          a1[9] = v5 + 2;
          if ( v6 <= v5 + 2 )
            goto LABEL_28;
        }
        if ( *(_BYTE *)(v7 + v8) == 71 )
        {
          ++v8;
          LOBYTE(v20) = v20 | 0x80;
          a1[9] = v8;
          if ( v6 <= v8 )
            goto LABEL_28;
        }
LABEL_32:
        if ( *(_BYTE *)(v7 + v8) != 79 || (++v8, BYTE1(v20) |= 2u, a1[9] = v8, v6 > v8) )
        {
          if ( *(_BYTE *)(v7 + v8) == 88 )
          {
            BYTE1(v20) |= 1u;
            a1[9] = v8 + 1;
          }
        }
LABEL_28:
        v21 = sub_12C70(a1, 1);
        *(_WORD *)(v21 + 16) = 77;
        v15 = v21;
        *(_BYTE *)(v21 + 18) = 2;
        *(_QWORD *)v21 = v20;
        return sub_CCF0(a1, v3, v15);
      case 'g':
        v17 = 128;
        if ( v6 > v8 && *(_BYTE *)(v7 + v5 + 1) == 88 )
        {
          v17 = 384;
          a1[9] = v5 + 2;
        }
        goto LABEL_18;
      case 'i':
        v19 = sub_12C70(a1, 1);
        *(_WORD *)(v19 + 16) = 77;
        v15 = v19;
        *(_BYTE *)(v19 + 18) = 2;
        *(_QWORD *)v19 = 6;
        return sub_CCF0(a1, v3, v15);
      case 'n':
        return v3;
      case 'o':
        v17 = 512;
        if ( v6 > v8 && *(_BYTE *)(v7 + v5 + 1) == 88 )
        {
          v17 = 768;
          a1[9] = v5 + 2;
        }
LABEL_18:
        v18 = sub_12C70(a1, 1);
        *(_WORD *)(v18 + 16) = 77;
        v15 = v18;
        *(_BYTE *)(v18 + 18) = 2;
        *(_QWORD *)v18 = v17;
        break;
      case 'p':
        if ( v6 <= v8 )
          return 0;
        a1[9] = v5 + 2;
        switch ( *(_BYTE *)(v7 + v5 + 1) )
        {
          case 'd':
            v26 = 3;
            return sub_11110(a1, v3, v26);
          case 'f':
            v28 = sub_12C70(a1, 1);
            *(_WORD *)(v28 + 16) = 77;
            v15 = v28;
            *(_BYTE *)(v28 + 18) = 2;
            *(_QWORD *)v28 = 0;
            return sub_CCF0(a1, v3, v15);
          case 'g':
            v27 = sub_12C70(a1, 1);
            *(_WORD *)(v27 + 16) = 77;
            v15 = v27;
            *(_BYTE *)(v27 + 18) = 2;
            *(_QWORD *)v27 = 1;
            return sub_CCF0(a1, v3, v15);
          case 'i':
            v26 = 2;
            return sub_11110(a1, v3, v26);
          case 'k':
            v25 = sub_12C70(a1, 1);
            *(_WORD *)(v25 + 16) = 77;
            v15 = v25;
            *(_BYTE *)(v25 + 18) = 2;
            *(_QWORD *)v25 = 9;
            return sub_CCF0(a1, v3, v15);
          case 's':
            if ( v6 <= v5 + 2 )
              return 0;
            a1[9] = v5 + 3;
            v22 = *(_BYTE *)(v7 + v5 + 2);
            if ( v22 == 99 )
            {
              v23 = "objc";
            }
            else if ( v22 == 119 )
            {
              v23 = "u16";
            }
            else
            {
              v23 = "u8";
              if ( v22 != 98 )
                return 0;
            }
            v24 = sub_12C70(a1, 1);
            *(_WORD *)(v24 + 16) = 77;
            *(_BYTE *)(v24 + 18) = 2;
            *(_QWORD *)v24 = 4;
            sub_CCF0(a1, v3, v24);
            v15 = sub_C650(a1, 78, v23);
            break;
          default:
            return 0;
        }
        break;
      case 'r':
        v15 = sub_12C70(a1, 1);
        *(_WORD *)(v15 + 16) = 77;
        *(_BYTE *)(v15 + 18) = 2;
        *(_QWORD *)v15 = 8;
        break;
      case 's':
        v16 = sub_12C70(a1, 1);
        *(_WORD *)(v16 + 16) = 77;
        v15 = v16;
        *(_BYTE *)(v16 + 18) = 2;
        *(_QWORD *)v16 = 7;
        break;
      case 'x':
        v14 = sub_12C70(a1, 1);
        *(_WORD *)(v14 + 16) = 77;
        v15 = v14;
        *(_BYTE *)(v14 + 18) = 2;
        *(_QWORD *)v14 = 256;
        break;
      default:
        return 0;
    }
    return sub_CCF0(a1, v3, v15);
  }
}

