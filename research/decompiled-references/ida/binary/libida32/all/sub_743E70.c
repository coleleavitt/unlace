__int64 __fastcall sub_743E70(unsigned int *a1, __int64 a2, __int64 a3, char *a4)
{
  char *v4; // rax
  char *v5; // r13
  int v6; // ebx
  __int16 v7; // ax
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v11; // ebx
  void *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  unsigned int v15; // eax
  char *v16; // r13
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int16 v19; // ax
  char v20; // bp
  unsigned int *v21; // rsi
  int v22; // eax
  __int16 v23; // ax
  char v24; // bl
  int v25; // edx
  int v26; // edx
  char v27; // bl
  char **v28; // rsi
  __int64 v29; // rdx
  char *v30; // rcx
  char v31; // r12
  __int64 v32; // rdx
  char *v33; // rcx
  char v34; // bl
  unsigned int v35; // [rsp+8h] [rbp-40h] BYREF
  int v36; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned int v37; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v38; // [rsp+14h] [rbp-34h]
  unsigned __int64 v39; // [rsp+18h] [rbp-30h]

  v39 = __readfsqword(0x28u);
  v35 = 0;
  v4 = qword_2CAA5C0;
  v38 = 0;
  v5 = qword_2CAA5C0 + 1;
  if ( !a1 )
  {
    a4 = (char *)&dword_2CAA5C8;
    ++qword_2CAA5C0;
    a3 = dword_2CAA5C8 | 0x100000u;
    dword_2CAA5C8 |= 0x100000u;
    v6 = *v4;
    if ( *v4 != 49 )
    {
      if ( (_BYTE)v6 == 95 )
        goto LABEL_18;
      if ( (_BYTE)v6 != 48 )
        goto LABEL_5;
      LODWORD(a3) = a3 ^ 0x300000;
    }
    dword_2CAA5C8 = a3 | 0x200000;
    goto LABEL_28;
  }
  ++qword_2CAA5C0;
  v6 = *v4;
  if ( *v4 == 49 )
  {
    v37 = sub_7454C0();
    v15 = sub_752B50(&v37);
    ++*(_BYTE *)a1;
    v16 = qword_2CAA5C0;
    v35 = v15;
    if ( !*qword_2CAA5C0 )
      goto LABEL_29;
    goto LABEL_27;
  }
  if ( (_BYTE)v6 != 95 )
  {
    if ( (_BYTE)v6 != 48 )
    {
LABEL_5:
      if ( (unsigned __int8)(v6 - 50) > 7u )
      {
        if ( (unsigned __int8)(v6 - 65) <= 0x19u )
        {
          v7 = word_2393F20[(char)v6 - 65];
          LOWORD(v38) = v7;
          if ( v7 )
          {
            if ( v7 == 1 )
            {
              v8 = 2768429;
              v9 = 3;
            }
            else
            {
              v8 = v38;
              if ( HIBYTE(v7) )
                v9 = 2;
              else
                v9 = 1;
            }
            sub_74F810(&v37, v8, v9);
            v35 = v37;
          }
          else
          {
            v35 = sub_752280(a1, a2, word_2393F20, a4);
          }
          if ( (_BYTE)v6 == 66 )
          {
            BYTE2(v35) |= 2u;
            if ( !a1 )
              dword_2CAA5C8 ^= 0x500000u;
            return v35;
          }
          goto LABEL_47;
        }
LABEL_88:
        sub_74E200(a1, a2, a3, a4);
      }
      v19 = word_2393F60[v6 - 50];
      LOWORD(v38) = v19;
      if ( !v19 )
      {
        sub_74F560(&v37, " delete", 7);
        v23 = v37;
        v35 = v37;
LABEL_48:
        if ( v23 )
          return sub_7522F0(&v35);
        return v35;
      }
      if ( v19 == 1 )
      {
        v14 = 2003136032;
        v13 = 4;
      }
      else
      {
        v14 = v38;
        if ( HIBYTE(v19) )
          v13 = 2;
        else
          v13 = 1;
      }
LABEL_57:
      sub_74F810(&v37, v14, v13);
      v23 = v37;
      v35 = v37;
      goto LABEL_48;
    }
    v37 = sub_7454C0();
    v18 = sub_752B50(&v37);
    ++*(_BYTE *)a1;
    v16 = qword_2CAA5C0;
    v35 = v18;
    if ( !*qword_2CAA5C0 )
      return v35;
LABEL_27:
    v5 = v16 + 1;
    qword_2CAA5C0 = v5;
LABEL_28:
    v17 = sub_745CD0(1);
    qword_2CAA5C0 = v5;
    v35 = v17;
LABEL_29:
    if ( !(_WORD)v35 || (_BYTE)v6 != 49 )
      return v35;
    return sub_750F10(126, &v35);
  }
LABEL_18:
  a3 = (__int64)(v4 + 2);
  qword_2CAA5C0 = v4 + 2;
  v11 = v4[1];
  if ( (unsigned __int8)v4[1] <= 0x2Fu )
    goto LABEL_88;
  if ( (_BYTE)v11 == 95 )
  {
    a3 = (__int64)(v4 + 3);
    qword_2CAA5C0 = v4 + 3;
    v20 = v4[2];
    if ( (unsigned __int8)(v20 - 65) > 0xCu )
      goto LABEL_88;
    v21 = (unsigned int *)&(&off_2B0F0C0)[2 * (char)(v20 - 65)];
    sub_74F6A0(&v37, v21);
    v35 = v37;
    if ( (unsigned __int8)(v20 - 65) > 0xAu )
      goto LABEL_47;
    if ( (unsigned __int8)(v20 - 69) <= 1u || v20 == 75 )
    {
      if ( *qword_2CAA5C0 == 63 )
      {
        ++qword_2CAA5C0;
        v37 = sub_743070(-1, v21);
        sub_7506B0(&v35, &v37);
        if ( *qword_2CAA5C0 == 64 )
          ++qword_2CAA5C0;
      }
      else
      {
        v37 = sub_745CD0(0);
        sub_7506B0(&v35, &v37);
      }
      if ( v20 != 75 )
      {
        sub_750270(&v35, 10023);
        v22 = dword_2CAA5C8;
        goto LABEL_46;
      }
LABEL_47:
      v23 = v35;
      goto LABEL_48;
    }
LABEL_45:
    v22 = dword_2CAA5C8;
    goto LABEL_46;
  }
  if ( (unsigned __int8)v11 > 0x59u )
    goto LABEL_88;
  if ( (unsigned __int8)v11 <= 0x39u )
  {
    if ( (unsigned __int8)v11 <= 0x36u )
    {
      v38 = 0;
      LOWORD(v38) = word_2393EF8[v11 - 48];
      if ( BYTE1(v38) )
      {
        v12 = &loc_3D0000;
        v13 = 3;
      }
      else
      {
        LODWORD(v12) = 15616;
        v13 = 2;
      }
      v14 = v38 | (unsigned int)v12;
      goto LABEL_57;
    }
    v24 = v11 - 55;
    sub_74F6A0(&v37, &(&off_2B0F080)[2 * v24]);
    v35 = v37;
    v22 = dword_2CAA5C8;
    v25 = dword_2CAA5C8;
    if ( !v24 )
    {
      LOBYTE(v25) = dword_2CAA5C8 | 0xA0;
      v22 = v25;
    }
LABEL_46:
    dword_2CAA5C8 = v22 | 0x80000;
    return v35;
  }
  if ( (unsigned __int8)v11 <= 0x40u )
  {
    if ( (_BYTE)v11 == 63 )
    {
      a3 = (__int64)(v4 + 3);
      qword_2CAA5C0 = v4 + 3;
      if ( v4[2] == 48 )
      {
        sub_742DE0(a1, a2, a3, a4);
        v35 = sub_7525F0();
        BYTE2(v35) |= 8u;
        return v35;
      }
    }
    goto LABEL_88;
  }
  if ( (unsigned __int8)v11 <= 0x4Fu )
  {
    v27 = v11 - 65;
    v28 = &(&off_2B0EF80)[2 * v27];
    sub_74F6A0(&v37, v28);
    v35 = v37;
    if ( v27 == 2 )
    {
      sub_742DE0(&v37, (__int64)v28, v29, v30);
      BYTE2(v35) |= 8u;
    }
    goto LABEL_45;
  }
  if ( (unsigned __int8)v11 > 0x52u )
  {
    sub_74F6A0(&v37, &(&off_2B0EEA0)[2 * (char)(v11 - 83)]);
    v35 = v37;
    if ( (unsigned __int8)(v11 - 85) > 1u )
    {
      v22 = dword_2CAA5C8;
      v26 = dword_2CAA5C8;
      if ( (_BYTE)v11 == 83 )
      {
        LOBYTE(v26) = dword_2CAA5C8 | 0xA0;
        v22 = v26;
      }
      goto LABEL_46;
    }
    goto LABEL_47;
  }
  if ( (_BYTE)v11 == 81 )
    return v35;
  if ( (_BYTE)v11 == 82 )
  {
    a3 = (__int64)(v4 + 3);
    qword_2CAA5C0 = v4 + 3;
    v31 = v4[2];
    if ( (unsigned __int8)(v31 - 48) > 4u )
      goto LABEL_88;
    sub_74F560(&v37, "`RTTI ", 6);
    v35 = v37;
    sub_74F6A0(&v37, &off_2B0EF20 + 2 * (char)(v31 - 48));
    sub_7506B0(&v35, &v37);
    dword_2CAA5C8 |= 0x80000u;
    if ( v31 != 48 )
    {
      if ( v31 == 49 )
      {
        v34 = 4;
        while ( 1 )
        {
          v37 = sub_742E60(&v35, (__int64)&v37, v32, v33);
          sub_7506B0(&v35, &v37);
          if ( !--v34 )
            break;
          sub_750750(&v35);
        }
        sub_750270(&v35, 10025);
      }
      return v35;
    }
    v36 = sub_7466D0(0);
    v37 = sub_750D90(&v36, 32);
    return sub_750E60(&v37, &v35);
  }
  else
  {
    v37 = sub_743E70(0);
    sub_74F560(&v36, "`udt returning'", 15);
    return sub_750E60(&v36, &v37);
  }
}

