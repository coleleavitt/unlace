__int64 __fastcall sub_765160(_WORD *a1, unsigned __int64 a2)
{
  char **v2; // rcx
  unsigned __int64 v3; // rdx
  int v4; // eax
  unsigned int v6; // eax
  bool v7; // zf
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // edi
  unsigned __int8 v13; // bp
  unsigned int v14; // [rsp+1Ch] [rbp-2Ch] BYREF
  int v15; // [rsp+20h] [rbp-28h] BYREF
  int v16; // [rsp+24h] [rbp-24h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-20h]

  v2 = &qword_2CD44C0;
  v17 = __readfsqword(0x28u);
  v14 = 0;
  v3 = (unsigned __int64)qword_2CD44C0;
  v4 = *qword_2CD44C0;
  if ( !*qword_2CD44C0 )
    goto LABEL_28;
  a2 = (unsigned __int64)++qword_2CD44C0;
  if ( (unsigned __int8)v4 <= 0x4Fu )
  {
    if ( (unsigned __int8)v4 <= 0x42u )
    {
      v15 = 0;
LABEL_5:
      qword_2CD44C0 = (char *)v3;
      goto LABEL_6;
    }
    a2 = byte_23B7FB8[v4 - 67];
LABEL_20:
    sub_770800(&v14, a2);
    if ( !*a1 )
      return v14;
    goto LABEL_21;
  }
  if ( (unsigned __int8)v4 > 0x53u )
  {
    if ( (_BYTE)v4 == 95 )
    {
      qword_2CD44C0 = (char *)(v3 + 2);
      v10 = *(char *)(v3 + 1);
      if ( *(_BYTE *)(v3 + 1) <= 0x43u )
      {
        if ( (_BYTE)v10 == 36 )
        {
          v16 = sub_765160();
          sub_76FA20(&v15, "__w64 ", 6);
          return sub_771320(&v15, &v16);
        }
      }
      else
      {
        if ( (unsigned __int8)v10 <= 0x4Eu )
        {
          a2 = byte_23B7FA8[v10 - 68];
          goto LABEL_20;
        }
        v3 = (unsigned int)(v10 - 81);
        if ( (unsigned __int8)(v10 - 81) > 6u )
        {
          if ( (_BYTE)v10 == 79 )
          {
            BYTE2(v14) = 4;
            v14 = sub_765060((__int64)&v14, (__int64)a1, 0, (__int64)&qword_2CD44C0);
            if ( (v14 & 0x40000) == 0 )
              sub_770730(&v14, 23899);
            return v14;
          }
          if ( (char)v10 > 79 )
          {
            v3 = (unsigned int)(v10 - 88);
            if ( (unsigned __int8)(v10 - 88) <= 1u )
            {
              v15 = 0;
              v12 = (char)v10;
              if ( (dword_2CD44CC & 0x2008) != 0 )
                goto LABEL_16;
LABEL_40:
              sub_76FB60(&v16, &(&off_2B38E20)[2 * v12 - 176]);
              LOWORD(v9) = v16;
              v15 = v16;
              goto LABEL_17;
            }
          }
        }
        else
        {
          v3 = (unsigned __int64)byte_23B7FA0;
          a2 = byte_23B7FA0[v10 - 81];
          if ( (_BYTE)a2 )
            goto LABEL_20;
        }
      }
    }
    else
    {
      a2 = (unsigned int)(v4 - 84);
      v15 = 0;
      if ( (unsigned __int8)(v4 - 84) > 5u )
        goto LABEL_5;
      if ( (_BYTE)v4 != 87 )
      {
        if ( (dword_2CD44CC & 0x2008) != 0 )
        {
LABEL_16:
          LOWORD(v9) = v15;
          goto LABEL_17;
        }
        v12 = (char)v4;
        if ( (unsigned __int8)v4 <= 0x56u )
        {
          v9 = sub_76E8E0((unsigned int)((char)v4 - 84), 1);
          v15 = v9;
          goto LABEL_17;
        }
        goto LABEL_40;
      }
      qword_2CD44C0 = (char *)(v3 + 2);
      v11 = *(char *)(v3 + 1);
      v3 = (unsigned int)(v11 - 48);
      if ( (unsigned __int8)(v11 - 48) <= 7u )
      {
        if ( (dword_2CD44CC & 0x2000) != 0 )
          goto LABEL_6;
        v13 = byte_23B7F98[v11 - 48];
        v15 = sub_76E8E0(3, v13 == 0);
        sub_770800(&v15, v13);
        LOWORD(v9) = v15;
LABEL_17:
        if ( (_WORD)v9 )
          sub_76FD20(&v15, 32);
LABEL_6:
        v16 = sub_766380();
        v6 = sub_771320(&v15, &v16);
        v7 = *a1 == 0;
        v14 = v6;
        if ( v7 )
          return v14;
LABEL_21:
        if ( (_WORD)v14 )
          sub_76FD20(&v14, 32);
        sub_770B70(&v14, a1);
        return v14;
      }
    }
LABEL_28:
    sub_76E6C0(a1, a2, v3, &qword_2CD44C0);
  }
  if ( !*a1 )
    sub_76FFF0(&v14);
  return sub_765060((__int64)&v14, (__int64)a1, 42, (__int64)v2);
}
