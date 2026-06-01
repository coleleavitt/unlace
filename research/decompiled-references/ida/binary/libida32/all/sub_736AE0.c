__int64 __fastcall sub_736AE0(char a1)
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
        v3 = qword_2CAA5C0++;
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
      sub_74FB30(&v14);
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
    v7 = byte_23932D0[v4 - 98];
    if ( v7 )
    {
      if ( v7 >= v2 )
      {
        if ( v7 == 1 && a1 > 0 )
          dword_2CAA5C8 |= 0x10000u;
        v8 = v7 & 0x1F | v2;
        if ( (_WORD)v14 )
          sub_74F860(&v14, 32);
        sub_750340(&v14, v8);
        return v14;
      }
LABEL_8:
      byte_2CAA5A1 = 1;
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
        qword_2CAA5C0 = v3 + 2;
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
        sub_750340(&v14, v12);
        return v14;
      case 'M':
        if ( (unsigned __int8)(v3[1] - 48) > 9u )
        {
          ++byte_2CAA5A1;
        }
        else
        {
          if ( (_WORD)v14 )
            sub_74F860(&v14, 32);
          v15 = sub_738650();
          if ( !byte_2CAA5A1 )
          {
            v16 = sub_736A40();
            if ( *qword_2CAA5C0 == 113 )
            {
              v17 = sub_736820(0);
              if ( byte_2CAA5A1 )
              {
                v17 = 0;
                sub_750840(&v17);
              }
              sub_74F810(&v18, 690633274, 4);
              sub_7506B0(&v15, &v18);
              sub_7506B0(&v17, &v15);
              if ( !byte_2CAA5A1 )
              {
                v18 = sub_737310(0);
                sub_7506B0(&v17, &v18);
                sub_7506B0(&v17, &v16);
              }
              v15 = sub_750FF0(10272, &v17);
              if ( byte_2CAA5A1 || *qword_2CAA5C0 != 36 )
                goto LABEL_62;
              ++qword_2CAA5C0;
            }
            else
            {
              sub_74F810(&v18, 2767418, 3);
              sub_7506B0(&v15, &v18);
            }
            v18 = sub_736AE0(0);
            sub_7506B0(&v14, &v18);
            if ( byte_2CAA5A1 )
              sub_750840(&v14);
LABEL_62:
            sub_7506B0(&v14, &v15);
            return v14;
          }
        }
        return v14;
      case 'a':
        qword_2CAA5C0 = v3;
        if ( (_WORD)v14 )
          sub_74F860(&v14, 32);
        v18 = sub_738740(0);
        sub_7506B0(&v14, &v18);
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
        sub_74F810(&v18, 690628640, 4);
        sub_7506B0(&v14, &v18);
        v18 = sub_737310(0);
        sub_7506B0(&v14, &v18);
        if ( !byte_2CAA5A1 && *qword_2CAA5C0 == 36 )
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
        qword_2CAA5C0 = v3 + 3;
LABEL_35:
        v15 = sub_736A40();
        if ( byte_2CAA5A1 )
          return v14;
        if ( *qword_2CAA5C0 == 113 )
        {
          sub_74F860(&v14, 32);
          v18 = sub_736820(0);
          sub_7506B0(&v14, &v18);
          if ( byte_2CAA5A1 )
            sub_750840(&v14);
          sub_74F860(&v14, 40);
          if ( v1 != -1 )
          {
            v18 = 0;
            sub_74F920(&v18, v1 | 0x10u);
            if ( byte_2CAA5A1 )
              sub_750840(&v14);
            else
              sub_7506B0(&v14, &v18);
          }
          if ( v9 == -1 && (dword_2CAA5CC & 0x8000) == 0 )
          {
            sub_74F560(&v18, "__closure ", 10);
            sub_7506B0(&v14, &v18);
          }
          sub_750270(&v14, 10538);
          if ( byte_2CAA5A1 )
          {
            sub_750840(&v14);
          }
          else
          {
            v18 = sub_737310(0xFFFFFFFFLL);
            sub_7506B0(&v14, &v18);
          }
          sub_7506B0(&v14, &v15);
          if ( !byte_2CAA5A1 )
          {
            if ( *qword_2CAA5C0 != 36 )
              sub_74E200();
LABEL_50:
            ++qword_2CAA5C0;
            v18 = sub_736AE0(0);
            return (unsigned int)sub_750E60(&v18, &v14);
          }
          return v14;
        }
        if ( v9 == -1 )
          goto LABEL_8;
        v18 = 0;
        v10 = v9 == 0 ? 42 : 38;
        if ( v1 == -1 )
        {
          sub_74F860(&v18, v10);
          if ( *qword_2CAA5C0 == 97 )
          {
            sub_752830(&v18);
            goto LABEL_43;
          }
        }
        else
        {
          if ( !(unsigned int)sub_74F920(&v18, (unsigned int)v1) )
          {
            sub_74F860(&v18, v10);
            if ( *qword_2CAA5C0 != 97 )
              goto LABEL_41;
            goto LABEL_100;
          }
          sub_74F860(&v18, v10);
          if ( *qword_2CAA5C0 == 97 )
          {
LABEL_100:
            sub_752830(&v18);
            goto LABEL_41;
          }
          if ( !(_WORD)v18 )
            goto LABEL_43;
        }
LABEL_41:
        if ( (_WORD)v15 )
          sub_74F860(&v15, 32);
LABEL_43:
        sub_7506B0(&v15, &v18);
        if ( (_WORD)v14 && (_WORD)v15 )
          sub_74F860(&v15, 32);
        v14 = sub_750E60(&v15, &v14);
        if ( *qword_2CAA5C0 == 97 )
        {
          v13 = sub_750F10(32, &v14);
          return sub_738740(v13);
        }
        v18 = sub_736AE0(0);
        if ( (v18 & 0x40000) == 0 && (_WORD)v18 )
          sub_74F860(&v18, 32);
        v14 = sub_750E60(&v18, &v14);
        BYTE2(v14) |= 4u;
        return v14;
      default:
        goto LABEL_8;
    }
  }
  qword_2CAA5C0 = v3;
  if ( (_WORD)v14 )
    sub_74F860(&v14, 32);
  v18 = sub_738650();
  sub_7506B0(&v14, &v18);
  return v14;
}

