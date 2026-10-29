__int64 __fastcall sub_2135140(__int64 a1, _QWORD *a2)
{
  _DWORD *v3; // rax
  unsigned int v4; // r15d
  size_t v6; // rax
  size_t v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned int v11; // ebx
  _QWORD *v12; // r15
  __int64 v13; // r13
  unsigned __int64 v14; // r12
  char *v15; // rbp
  char v16; // al
  unsigned int v17; // eax
  __int64 v18; // rbp
  _QWORD *v19; // rdx
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rax
  char v24; // al
  unsigned int v25; // esi
  const char *v26; // rax
  unsigned int v27; // ebp
  unsigned int v28; // eax
  unsigned int v29; // ebx
  unsigned int v30; // eax
  unsigned __int64 v31; // rax
  int v32; // eax
  char v33; // si
  unsigned int v34; // [rsp+10h] [rbp-78h]
  char v35; // [rsp+17h] [rbp-71h]
  _QWORD v36[4]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v37; // [rsp+40h] [rbp-48h]

  v37 = 259;
  v36[0] = "expected string";
  v3 = (_DWORD *)sub_2153C00(a1);
  v4 = sub_2154470(a1, *v3 != 3, v36);
  if ( (_BYTE)v4 )
    return v4;
  v6 = j__strlen(&byte_22F0C30);
  v7 = 0;
  sub_99BDC0(a2, 0, a2[1], &byte_22F0C30, v6);
  v8 = sub_2153C00(a1);
  v9 = sub_212C8F0(v8);
  v34 = v10;
  if ( !(_DWORD)v10 )
  {
LABEL_20:
    sub_2132C70(a1, (__m128 *)v7);
    return v4;
  }
  v11 = 0;
  v12 = a2;
  v13 = v9;
  v14 = v10;
  while ( 1 )
  {
    v15 = (char *)(v13 + v11);
    v16 = *v15;
    if ( *v15 != 92 )
    {
      if ( v16 == 13 || v16 == 10 )
      {
        if ( v11 && v16 == 10 && *(_BYTE *)(v13 + v11 - 1) == 13 )
        {
LABEL_17:
          ++v11;
          goto LABEL_18;
        }
        v7 = v13 + v11;
        v37 = 259;
        v36[0] = "unterminated string; newline inserted";
        v17 = sub_212CE20(a1, v7, (__int64)v36, nullptr, 0);
        if ( (_BYTE)v17 )
          return v17;
        v16 = *v15;
      }
      v18 = v12[1];
      v19 = (_QWORD *)*v12;
      v20 = v18 + 1;
      if ( (_QWORD *)*v12 == v12 + 2 )
        v21 = 15;
      else
        v21 = v12[2];
      if ( v20 > v21 )
      {
        v7 = v12[1];
        v35 = v16;
        sub_998B30((__int64)v12, v7, 0, nullptr, 1u);
        v19 = (_QWORD *)*v12;
        v20 = v18 + 1;
        v16 = v35;
      }
      *((_BYTE *)v19 + v18) = v16;
      v22 = (_QWORD *)*v12;
      v12[1] = v20;
      *((_BYTE *)v22 + v18 + 1) = 0;
      goto LABEL_17;
    }
    v23 = v11 + 1;
    if ( v34 == (_DWORD)v23 )
      break;
    v24 = *(_BYTE *)(v13 + v23);
    if ( (v24 & 0xDF) == 0x58 )
    {
      v31 = v11 + 2;
      if ( v31 >= v14 || (v32 = word_23E43C0[*(unsigned __int8 *)(v13 + v31)], v32 == -1) )
      {
        v26 = "invalid hexadecimal escape sequence";
        goto LABEL_30;
      }
      v11 += 3;
      v33 = 0;
      while ( 1 )
      {
        v33 = v32 + 16 * v33;
        if ( v11 >= v14 )
          break;
        v32 = word_23E43C0[*(unsigned __int8 *)(v13 + v11)];
        if ( v32 == -1 )
          break;
        ++v11;
      }
      v7 = (unsigned int)v33;
      sub_A6F610(v12, v7);
    }
    else
    {
      v25 = v24 - 48;
      if ( v25 <= 7 )
      {
        v27 = v11 + 2;
        if ( v11 + 2 == v34 )
        {
          v27 = v34;
        }
        else
        {
          v28 = *(char *)(v13 + v27) - 48;
          if ( v28 <= 7 )
          {
            v29 = v11 + 3;
            v25 = v28 + 8 * v25;
            if ( v29 != v34 )
            {
              v30 = *(char *)(v13 + v29) - 48;
              if ( v30 <= 7 )
              {
                v25 = v30 + 8 * v25;
                v27 = v29;
              }
            }
            if ( v25 > 0xFF )
            {
              v26 = "invalid octal escape sequence (out of range)";
              goto LABEL_30;
            }
            ++v27;
          }
        }
        v7 = (unsigned int)(char)v25;
        v11 = v27;
        sub_A6F610(v12, v7);
      }
      else if ( v24 == 102 )
      {
        v7 = 12;
        v11 += 2;
        sub_A6F610(v12, 12);
      }
      else if ( v24 > 102 )
      {
        switch ( v24 )
        {
          case 'r':
            v7 = 13;
            v11 += 2;
            sub_A6F610(v12, 13);
            break;
          case 't':
            v7 = 9;
            v11 += 2;
            sub_A6F610(v12, 9);
            break;
          case 'n':
            v7 = 10;
            v11 += 2;
            sub_A6F610(v12, 10);
            break;
          default:
LABEL_29:
            v26 = "invalid escape sequence (unrecognized character)";
            goto LABEL_30;
        }
      }
      else
      {
        switch ( v24 )
        {
          case '\\':
            v7 = 92;
            v11 += 2;
            sub_A6F610(v12, 92);
            break;
          case 'b':
            v7 = 8;
            v11 += 2;
            sub_A6F610(v12, 8);
            break;
          case '"':
            v7 = 34;
            v11 += 2;
            sub_A6F610(v12, 34);
            break;
          default:
            goto LABEL_29;
        }
      }
    }
LABEL_18:
    if ( v34 == v11 )
    {
      v4 = 0;
      goto LABEL_20;
    }
  }
  v26 = "unexpected backslash at end of string";
LABEL_30:
  v36[0] = v26;
  v37 = 259;
  return (unsigned int)sub_21543E0(a1, v36, 0, 0);
}
