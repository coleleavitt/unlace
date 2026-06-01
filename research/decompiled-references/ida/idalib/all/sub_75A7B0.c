__int64 __fastcall sub_75A7B0(unsigned int *a1, __int64 a2)
{
  char *v2; // rax
  char *v3; // rcx
  char v4; // bp
  unsigned __int64 v5; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  int v11; // r14d
  char v12; // al
  unsigned __int8 v13; // al
  char v14; // al
  int v15; // edx
  unsigned __int8 v16; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  char *v27; // rcx
  int v28; // esi
  unsigned int v29; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v30; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v31; // [rsp+8h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  v29 = 0;
  v2 = qword_2CD44C0;
  v3 = ++qword_2CD44C0;
  v4 = *v2;
  v5 = (unsigned __int8)(*v2 - 65);
  switch ( *v2 )
  {
    case 'A':
      v4 = (char)a1;
      goto LABEL_31;
    case 'H':
    case 'S':
LABEL_31:
      if ( v4 == 83 )
      {
        sub_76FD20(&v29, 40);
        v21 = sub_76E990(&v29, 40, v22, v23, v24);
        if ( !v21 )
          goto LABEL_38;
      }
      else
      {
        sub_76FD20(&v29, 91);
        v21 = sub_76E990(&v29, 91, v18, v19, v20);
        if ( !v21 )
          goto LABEL_44;
      }
      while ( 1 )
      {
        v30 = sub_75A7B0(0);
        sub_770B70(&v29, &v30);
        if ( v4 == 72 )
        {
          sub_76FD20(&v29, 58);
          v30 = sub_75A7B0(0);
          sub_770B70(&v29, &v30);
        }
        if ( !--v21 )
          break;
        sub_770C10(&v29);
      }
      if ( v4 != 83 )
      {
LABEL_44:
        v25 = 93;
LABEL_39:
        sub_76FD20(&v29, v25);
        return v29;
      }
LABEL_38:
      v25 = 41;
      goto LABEL_39;
    case 'N':
      a1 = &v29;
      a2 = 45;
      sub_76FD20(&v29, 45);
      v2 = qword_2CD44C0;
      goto LABEL_3;
    case 'a':
    case 'd':
    case 'w':
      if ( (unsigned __int8)(v2[1] - 48) > 9u )
        goto LABEL_29;
      a2 = 34;
      a1 = &v29;
      sub_76FD20(&v29, 34);
      v10 = sub_76E990(&v29, 34, v7, v8, v9);
      v5 = (unsigned __int64)qword_2CD44C0;
      v3 = ++qword_2CD44C0;
      if ( *(_BYTE *)v5 != 95 )
        goto LABEL_29;
      a2 = (unsigned int)(2 * v10);
      v5 = qword_2CD44B8 - (_QWORD)v3;
      if ( (int)qword_2CD44B8 - (int)v3 < (unsigned int)a2 )
        goto LABEL_29;
      v11 = v10 - 1;
      if ( !v10 )
        goto LABEL_50;
      while ( 2 )
      {
        qword_2CD44C0 = v3 + 1;
        v12 = *v3;
        if ( (unsigned __int8)*v3 > 0x60u )
        {
          v12 -= 32;
          goto LABEL_18;
        }
        if ( (unsigned __int8)v12 > 0x40u )
        {
LABEL_18:
          v13 = v12 - 55;
          if ( v13 > 0xFu )
            goto LABEL_29;
          goto LABEL_19;
        }
        v13 = v12 - 48;
        if ( v13 > 9u )
          goto LABEL_29;
LABEL_19:
        v14 = 16 * v13;
        qword_2CD44C0 = v3 + 2;
        v15 = (unsigned __int8)v3[1];
        if ( (unsigned __int8)v15 > 0x60u )
        {
          v15 -= 32;
          goto LABEL_21;
        }
        if ( (unsigned __int8)v15 > 0x40u )
        {
LABEL_21:
          v5 = (unsigned int)(v15 - 55);
          if ( (unsigned __int8)v5 > 0xFu )
            goto LABEL_29;
          goto LABEL_22;
        }
        v5 = (unsigned int)(v15 - 48);
        if ( (unsigned __int8)v5 > 9u )
LABEL_29:
          sub_76E6C0(a1, a2, v5, v3);
LABEL_22:
        v16 = v5 | v14;
        if ( (unsigned __int8)(v16 - 32) > 0x5Eu )
        {
          v28 = *(unsigned __int16 *)v3;
          LOWORD(v28) = v28 | 0x2020;
          sub_76FCD0(&v30, (v28 << 16) | 0x785Cu, 4);
          a2 = (__int64)&v30;
          a1 = &v29;
          sub_770B70(&v29, &v30);
        }
        else
        {
          a2 = v16;
          a1 = &v29;
          sub_76FD20(&v29, v16);
        }
        if ( v11-- != 0 )
        {
          v3 = qword_2CD44C0;
          continue;
        }
        break;
      }
LABEL_50:
      sub_76FD20(&v29, 34);
      if ( v4 != 97 )
        sub_76FD20(&v29, (unsigned int)v4);
      return v29;
    case 'c':
    case 'e':
      v30 = sub_75A3F0((long double *)(unsigned int)v4, a2, v5, v3);
      sub_770B70(&v29, &v30);
      if ( v4 != 101 )
      {
        sub_76FD20(&v29, 43);
        v30 = sub_75A3F0(nullptr, 43, v26, v27);
        sub_770B70(&v29, &v30);
        sub_76FD20(&v29, 105);
      }
      return v29;
    case 'i':
      v2 = v3;
      goto LABEL_4;
    case 'n':
      sub_76FCD0(&v30, 1819047278, 4);
      return v30;
    default:
LABEL_3:
      qword_2CD44C0 = v2;
LABEL_4:
      v5 = (unsigned int)*v2;
      if ( (unsigned int)v5 > 0x7F )
        goto LABEL_29;
      a2 = 0;
      do
      {
        v5 = (unsigned int)(v5 - 48);
        if ( (unsigned int)v5 > 9 )
          break;
        a2 = (unsigned int)(a2 + 1);
        v5 = (unsigned int)v2[a2];
      }
      while ( (unsigned int)v5 <= 0x7F );
      if ( !(_DWORD)a2 )
        goto LABEL_29;
      sub_76EF20(&v29);
      return v29;
  }
}
