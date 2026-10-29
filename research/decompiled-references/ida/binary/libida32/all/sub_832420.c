__int64 __fastcall sub_832420(unsigned __int8 *a1, __int64 a2)
{
  unsigned __int8 *v2; // rbp
  char v3; // r12
  int v4; // ebx
  unsigned int v5; // r12d
  int v6; // eax
  unsigned __int64 v7; // r14
  bool v8; // cc
  char v10; // cl
  unsigned __int8 v11; // r14
  unsigned __int8 *v12; // rdi
  unsigned int *v13; // r11
  unsigned __int8 *v14; // rdi
  unsigned int *v15; // r11
  __int64 v16; // rax
  int v17; // eax
  int v18; // [rsp+Ch] [rbp-6Ch] BYREF
  int v19; // [rsp+10h] [rbp-68h] BYREF
  _BOOL4 v20; // [rsp+14h] [rbp-64h]
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v2 = a1;
  v3 = *(_BYTE *)(a2 + 230);
  v4 = *a1;
  v21 = __readfsqword(0x28u);
  v18 = 1000;
  v5 = (v3 & 8) != 0;
  if ( (unsigned __int8)v4 > 0xACu )
    return 0xFFFFFFFFLL;
  while ( (unsigned __int8)(v4 - 33) > 0x40u )
  {
    if ( (unsigned __int8)(v4 - 110) <= 1u )
    {
      v11 = v2[33];
      if ( (unsigned __int8)(v11 - 98) <= 7u )
      {
        v12 = sub_831870(v2, *(_QWORD *)(a2 + 16), &v19);
        v20 = (v11 & 1) == 0;
        if ( v12 )
        {
          if ( (unsigned int)sub_831B20(v12, v5, a2, v13, v12, &v18) )
          {
            if ( v11 > 0x67u )
            {
              v2[33] = 109;
            }
            else if ( v11 > 0x65u )
            {
              v2[33] = 108;
            }
            else
            {
              v2[33] = ((unsigned __int8)(v11 - 100) < 2u) + 106;
            }
          }
        }
      }
      goto LABEL_14;
    }
    if ( (unsigned __int8)v4 <= 0x61u )
      goto LABEL_22;
LABEL_24:
    v10 = v4 - 120;
    if ( (unsigned __int8)(v4 - 120) > 0x2Cu )
      goto LABEL_43;
    if ( ((1LL << v10) & 0x155000000000LL) != 0 )
    {
      v2 += v2[1];
    }
    else
    {
      if ( ((1LL << v10) & 1) == 0 )
        goto LABEL_43;
      v4 = 120;
      v2 += (unsigned __int16)__ROL2__(*(_WORD *)(v2 + 5), 8);
    }
LABEL_14:
    v2 += byte_239F9C0[v4];
    v4 = *v2;
    if ( (unsigned __int8)v4 > 0xACu )
      return 0xFFFFFFFFLL;
  }
  v6 = 52;
  if ( (unsigned __int8)v4 <= 0x54u )
  {
    v6 = 39;
    if ( (unsigned __int8)v4 <= 0x47u )
    {
      v6 = 26;
      if ( (unsigned __int8)v4 <= 0x3Au )
        v6 = (unsigned __int8)v4 >= 0x2Eu ? 0xD : 0;
    }
  }
  v7 = (unsigned int)(v4 - v6);
  if ( (unsigned __int8)(v4 - v6) <= 0x28u )
  {
    v14 = sub_831870(v2, *(_QWORD *)(a2 + 16), &v19);
    if ( (_BYTE)v7 == 40 )
    {
      v17 = 0;
    }
    else
    {
      v16 = 0xAA00000000LL;
      v17 = _bittest64(&v16, v7);
    }
    v20 = v17;
    if ( v14 && (unsigned int)sub_831B20(v14, v5, a2, v15, v14, &v18) )
    {
      switch ( (int)v7 )
      {
        case '!':
          LOBYTE(v4) = v4 + 9;
          *v2 = v4;
          if ( (char)v4 <= 90 )
            goto LABEL_43;
          LOBYTE(v4) = 94;
          break;
        case '"':
          LOBYTE(v4) = v4 + 8;
          *v2 = v4;
          if ( (char)v4 > 90 )
            break;
          goto LABEL_43;
        case '#':
          LOBYTE(v4) = v4 + 8;
          *v2 = v4;
          if ( (char)v4 <= 90 )
            goto LABEL_22;
          LOBYTE(v4) = 95;
          break;
        case '$':
        case '%':
          LOBYTE(v4) = v4 + 7;
          *v2 = v4;
          if ( (char)v4 <= 90 )
            goto LABEL_43;
          break;
        case '&':
          LOBYTE(v4) = v4 + 6;
          *v2 = v4;
          if ( (char)v4 <= 90 )
            goto LABEL_43;
          LOBYTE(v4) = 96;
          break;
        case '\'':
          LOBYTE(v4) = v4 + 6;
          *v2 = v4;
          if ( (_BYTE)v4 == 97 )
            goto LABEL_41;
          goto LABEL_43;
        case '(':
          LOBYTE(v4) = v4 + 5;
          *v2 = v4;
          if ( (_BYTE)v4 == 97 )
            goto LABEL_41;
          goto LABEL_43;
        default:
          goto LABEL_40;
      }
LABEL_17:
      v4 = (unsigned __int8)v4;
      if ( (unsigned __int8)(v2[1] - 15) < 2u )
        v2 += 2;
      goto LABEL_14;
    }
LABEL_40:
    v4 = *v2;
    v8 = (unsigned __int8)v4 <= 0x61u;
    if ( (_BYTE)v4 == 97 )
    {
LABEL_41:
      v4 = 97;
LABEL_12:
      if ( (unsigned __int8)(v2[3] - 15) < 2u )
        v2 += 2;
      goto LABEL_14;
    }
  }
  else
  {
    v4 = *v2;
    v20 = 0;
    v8 = (unsigned __int8)v4 <= 0x61u;
    if ( (_BYTE)v4 == 97 )
      goto LABEL_41;
  }
  if ( !v8 )
    goto LABEL_24;
  if ( (unsigned __int8)v4 > 0x5Au )
  {
    if ( (unsigned __int8)v4 > 0x5Du )
      goto LABEL_17;
    goto LABEL_12;
  }
  if ( (unsigned __int8)v4 > 0x54u )
    goto LABEL_17;
LABEL_22:
  if ( (_BYTE)v4 )
  {
LABEL_43:
    v4 = (unsigned __int8)v4;
    goto LABEL_14;
  }
  return 0;
}

