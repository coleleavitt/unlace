__int64 __fastcall sub_756FC0(char a1)
{
  int v1; // r13d
  unsigned __int8 v2; // bp
  char *v3; // rdx
  char v4; // al
  char v5; // al
  unsigned __int8 v7; // si
  unsigned __int8 v8; // bp
  char v9; // r15
  unsigned int v10; // ebp
  char v11; // al
  __int64 v12; // rsi
  unsigned int v13; // eax
  unsigned int v14; // [rsp+4h] [rbp-54h] BYREF
  int v15; // [rsp+8h] [rbp-50h] BYREF
  int v16; // [rsp+Ch] [rbp-4Ch] BYREF
  int v17; // [rsp+10h] [rbp-48h] BYREF
  int v18; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v1 = -1;
  v2 = 0;
  v19 = __readfsqword(0x28u);
  v14 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v3 = qword_2CD44C0++;
        v4 = *v3;
        if ( *v3 <= 120 )
          break;
        if ( v4 != 122 )
          goto LABEL_13;
        if ( v2 )
          goto LABEL_8;
        v2 = 64;
      }
      if ( v4 <= 118 )
        break;
      sub_76FFF0(&v14);
    }
    if ( v4 != 117 )
      break;
    v5 = v3[1];
    if ( v5 == 112 )
    {
      v1 = 4;
    }
    else
    {
      if ( v5 == 114 || v2 )
        goto LABEL_8;
      v2 = 32;
    }
  }
  if ( (unsigned __int8)(v4 - 98) <= 0x14u )
  {
    v7 = byte_23B7430[v4 - 98];
    if ( v7 )
    {
      if ( v7 >= v2 )
      {
        if ( v7 == 1 && a1 > 0 )
          dword_2CD44C8 |= 0x10000u;
        v8 = v7 & 0x1F | v2;
        if ( (_WORD)v14 )
          sub_76FD20(&v14, 32);
        sub_770800(&v14, v8);
        return v14;
      }
LABEL_8:
      byte_2CD44A1 = 1;
      return v14;
    }
    if ( v2 )
      goto LABEL_8;
    goto LABEL_30;
  }
LABEL_13:
  if ( v2 || (unsigned int)v4 > 0x7F )
    goto LABEL_8;
  if ( (unsigned int)(v4 - 48) > 9 )
  {
LABEL_30:
    v15 = 0;
    switch ( v4 )
    {
      case 'C':
        qword_2CD44C0 = v3 + 2;
        v11 = v3[1];
        if ( v11 == 105 )
        {
          v12 = 18;
        }
        else
        {
          if ( ((v11 - 115) & 0xFD) != 0 )
            goto LABEL_8;
          v12 = (unsigned int)(v11 == 115) + 16;
        }
        sub_770800(&v14, v12);
        return v14;
      case 'M':
        if ( (unsigned __int8)(v3[1] - 48) > 9u )
        {
          ++byte_2CD44A1;
        }
        else
        {
          if ( (_WORD)v14 )
            sub_76FD20(&v14, 32);
          v15 = sub_758B30();
          if ( !byte_2CD44A1 )
          {
            v16 = sub_756F20();
            if ( *qword_2CD44C0 == 113 )
            {
              v17 = sub_756CF0(0);
              if ( byte_2CD44A1 )
              {
                v17 = 0;
                sub_770D00(&v17);
              }
              sub_76FCD0(&v18, 690633274, 4);
              sub_770B70(&v15, &v18);
              sub_770B70(&v17, &v15);
              if ( !byte_2CD44A1 )
              {
                v18 = sub_7577F0(0);
                sub_770B70(&v17, &v18);
                sub_770B70(&v17, &v16);
              }
              v15 = sub_7714B0(10272, &v17);
              if ( byte_2CD44A1 || *qword_2CD44C0 != 36 )
                goto LABEL_62;
              ++qword_2CD44C0;
            }
            else
            {
              sub_76FCD0(&v18, 2767418, 3);
              sub_770B70(&v15, &v18);
            }
            v18 = sub_756FC0(0);
            sub_770B70(&v14, &v18);
            if ( byte_2CD44A1 )
              sub_770D00(&v14);
LABEL_62:
            sub_770B70(&v14, &v15);
            return v14;
          }
        }
        return v14;
      case 'a':
        qword_2CD44C0 = v3;
        if ( (_WORD)v14 )
          sub_76FD20(&v14, 32);
        v18 = sub_758C20(0);
        sub_770B70(&v14, &v18);
        return v14;
      case 'm':
        v9 = 1;
        v1 = 2;
        goto LABEL_35;
      case 'n':
        v9 = 0;
        v1 = 2;
        goto LABEL_35;
      case 'p':
        v9 = 0;
        goto LABEL_68;
      case 'q':
        sub_76FCD0(&v18, 690628640, 4);
        sub_770B70(&v14, &v18);
        v18 = sub_7577F0(0);
        sub_770B70(&v14, &v18);
        if ( !byte_2CD44A1 && *qword_2CD44C0 == 36 )
          goto LABEL_50;
        return v14;
      case 'r':
        v9 = 1;
LABEL_68:
        if ( v1 < 0 )
          v1 = 0;
        goto LABEL_35;
      case 'y':
        if ( v3[1] != 110 || v3[2] != 112 )
          goto LABEL_8;
        v9 = -1;
        qword_2CD44C0 = v3 + 3;
LABEL_35:
        v15 = sub_756F20();
        if ( byte_2CD44A1 )
          return v14;
        if ( *qword_2CD44C0 == 113 )
        {
          sub_76FD20(&v14, 32);
          v18 = sub_756CF0(0);
          sub_770B70(&v14, &v18);
          if ( byte_2CD44A1 )
            sub_770D00(&v14);
          sub_76FD20(&v14, 40);
          if ( v1 != -1 )
          {
            v18 = 0;
            sub_76FDE0(&v18, v1 | 0x10u);
            if ( byte_2CD44A1 )
              sub_770D00(&v14);
            else
              sub_770B70(&v14, &v18);
          }
          if ( v9 == -1 && (dword_2CD44CC & 0x8000) == 0 )
          {
            sub_76FA20(&v18, "__closure ", 10);
            sub_770B70(&v14, &v18);
          }
          sub_770730(&v14, 10538);
          if ( byte_2CD44A1 )
          {
            sub_770D00(&v14);
          }
          else
          {
            v18 = sub_7577F0(0xFFFFFFFFLL);
            sub_770B70(&v14, &v18);
          }
          sub_770B70(&v14, &v15);
          if ( !byte_2CD44A1 )
          {
            if ( *qword_2CD44C0 != 36 )
              sub_76E6C0();
LABEL_50:
            ++qword_2CD44C0;
            v18 = sub_756FC0(0);
            return (unsigned int)sub_771320(&v18, &v14);
          }
          return v14;
        }
        if ( v9 == -1 )
          goto LABEL_8;
        v18 = 0;
        v10 = v9 == 0 ? 42 : 38;
        if ( v1 == -1 )
        {
          sub_76FD20(&v18, v10);
          if ( *qword_2CD44C0 == 97 )
          {
            sub_772CF0(&v18);
            goto LABEL_43;
          }
        }
        else
        {
          if ( !(unsigned int)sub_76FDE0(&v18, (unsigned int)v1) )
          {
            sub_76FD20(&v18, v10);
            if ( *qword_2CD44C0 != 97 )
              goto LABEL_41;
            goto LABEL_100;
          }
          sub_76FD20(&v18, v10);
          if ( *qword_2CD44C0 == 97 )
          {
LABEL_100:
            sub_772CF0(&v18);
            goto LABEL_41;
          }
          if ( !(_WORD)v18 )
            goto LABEL_43;
        }
LABEL_41:
        if ( (_WORD)v15 )
          sub_76FD20(&v15, 32);
LABEL_43:
        sub_770B70(&v15, &v18);
        if ( (_WORD)v14 && (_WORD)v15 )
          sub_76FD20(&v15, 32);
        v14 = sub_771320(&v15, &v14);
        if ( *qword_2CD44C0 == 97 )
        {
          v13 = sub_7713D0(32, &v14);
          return sub_758C20(v13);
        }
        v18 = sub_756FC0(0);
        if ( (v18 & 0x40000) == 0 && (_WORD)v18 )
          sub_76FD20(&v18, 32);
        v14 = sub_771320(&v18, &v14);
        BYTE2(v14) |= 4u;
        return v14;
      default:
        goto LABEL_8;
    }
  }
  qword_2CD44C0 = v3;
  if ( (_WORD)v14 )
    sub_76FD20(&v14, 32);
  v18 = sub_758B30();
  sub_770B70(&v14, &v18);
  return v14;
}
