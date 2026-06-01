__int64 __fastcall sub_769F20(int *a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // r12d
  char v6; // bp
  char *v7; // rax
  char v8; // r14
  char *v9; // rdx
  char v11; // al
  char *v12; // rax
  char v13; // al
  char v14; // r15
  __int16 v15; // ax
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  char *v29; // rsi
  __int64 v30; // rdx
  char *v31; // rsi
  char v32; // al
  __int64 v33; // rdx
  const char *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rsi
  char v39; // al
  __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int v43; // [rsp+8h] [rbp-50h] BYREF
  int v44; // [rsp+Ch] [rbp-4Ch] BYREF
  int v45; // [rsp+10h] [rbp-48h] BYREF
  int v46; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v47; // [rsp+18h] [rbp-40h]

  v5 = 0;
  v47 = __readfsqword(0x28u);
  v6 = (char)a1;
  v7 = qword_2CD44C0;
  v8 = *qword_2CD44C0;
  if ( *qword_2CD44C0 != 90 )
  {
    ++qword_2CD44C0;
    v9 = (char *)(unsigned __int8)*v7;
    if ( (_BYTE)v9 != 73 )
    {
      if ( (char)v9 <= 73 )
      {
        if ( (_BYTE)v9 != 70 )
        {
LABEL_6:
          qword_2CD44C0 = v7;
          return sub_769EB0((__int64)a1, a2, (__int64)v9, a4, a5);
        }
      }
      else if ( (_BYTE)v9 != 105 && (_BYTE)v9 != 118 )
      {
        goto LABEL_6;
      }
      goto LABEL_9;
    }
LABEL_8:
    a2 = (unsigned int *)"(variable initialization expression)";
    sub_76FA20(&v46, "(variable initialization expression)", 36);
    v5 = v46;
    goto LABEL_9;
  }
  v9 = qword_2CD44C0 + 2;
  qword_2CD44C0 += 2;
  v11 = v7[1];
  if ( v11 == 73 )
    goto LABEL_8;
  if ( v11 <= 73 )
  {
    if ( v11 != 70 )
      goto LABEL_33;
  }
  else if ( v11 != 105 && v11 != 118 )
  {
    goto LABEL_33;
  }
LABEL_9:
  v44 = 0;
  v43 = sub_769BC0(0, a2, (__int64)v9, a4, a5);
  v12 = qword_2CD44C0++;
  v13 = *v12;
  v14 = v13 | 0x20;
  if ( (unsigned __int8)((v13 | 0x20) - 99) > 2u )
  {
    if ( v14 == 117 )
    {
      if ( v13 == 117 )
      {
        sub_76FA20(&v46, "implicit ", 9);
        v44 = v46;
      }
      sub_76FA20(&v46, "closure", 7);
      sub_770B70(&v44, &v46);
      v46 = sub_767900(0, (__int64)&v46, v17, v18, v19);
      sub_770B70(&v44, &v46);
      sub_767F90(nullptr, (__int64)&v46, v20, v21, v22);
    }
    else
    {
      a2 = (_DWORD *)(&qword_28 + 6);
      a1 = &v44;
      sub_76FD20(&v44, 46);
      if ( v14 == 103 )
      {
        sub_76FD20(&v44, 103);
LABEL_64:
        v30 = 5;
        v31 = (char *)"etter";
        goto LABEL_65;
      }
      v9 = qword_2CD44C0;
      switch ( *(qword_2CD44C0 - 1) )
      {
        case 'M':
          v30 = 6;
          v31 = "modify";
          goto LABEL_65;
        case 'W':
          v35 = 3;
          v36 = 6580580;
          goto LABEL_75;
        case 'a':
        case 'l':
          ++qword_2CD44C0;
          v32 = *v9;
          if ( *v9 > 112 )
          {
            if ( v32 == 117 )
            {
              v33 = 6;
              v34 = "unsafe";
              goto LABEL_71;
            }
          }
          else
          {
            if ( v32 > 110 )
            {
              sub_76FA20(&v46, "native", 6);
              sub_770B70(&v44, &v46);
              v33 = 6;
              v34 = "Owning";
              if ( *(qword_2CD44C0 - 1) != 111 )
              {
                v33 = 7;
                v34 = "Pinning";
              }
              goto LABEL_71;
            }
            if ( v32 == 79 )
            {
              v33 = 6;
              v34 = "owning";
LABEL_71:
              sub_76FA20(&v46, v34, v33);
              sub_770B70(&v44, &v46);
              if ( v14 == 97 )
              {
                sub_76FA20(&v46, "Mutable", 7);
                sub_770B70(&v44, &v46);
              }
              v30 = 9;
              v31 = "Addressor";
LABEL_65:
              sub_76FA20(&v46, v31, v30);
              a2 = (unsigned int *)&v46;
              sub_770B70(&v44, &v46);
              goto LABEL_58;
            }
          }
          goto LABEL_33;
        case 'm':
          v30 = 17;
          v31 = "materializeForSet";
          goto LABEL_65;
        case 'r':
          v37 = 4;
          v38 = 1684104562;
          goto LABEL_76;
        case 's':
          sub_76FD20(&v44, 115);
          goto LABEL_64;
        case 'w':
          v35 = 4;
          v36 = 1819044215;
LABEL_75:
          sub_76FCD0(&v46, v36, v35);
          sub_770B70(&v44, &v46);
          v37 = 3;
          v38 = 7628147;
LABEL_76:
          sub_76FCD0(&v46, v38, v37);
          a2 = (unsigned int *)&v46;
          sub_770B70(&v44, &v46);
          goto LABEL_58;
        default:
          --qword_2CD44C0;
          if ( !(_WORD)v5 )
          {
            v44 = 0;
LABEL_58:
            v27 = sub_767DE0((__int64)&v44, a2, (__int64)v9, a4, v16);
            v23 = &v44;
            v46 = v27;
            v44 = sub_771320(&v46, &v44);
            goto LABEL_43;
          }
          qword_2CD44C0 = v9;
          v39 = *(v9 - 1);
          if ( v39 != 65 )
          {
            if ( v39 == 105 )
            {
              v44 = v5;
LABEL_17:
              if ( BYTE2(v43) == 64 )
              {
                if ( (dword_2CD44CC & 0x40000) != 0 )
                {
                  v43 = 0;
LABEL_21:
                  sub_770B70(&v43, &v44);
                  goto LABEL_22;
                }
                v15 = v43;
              }
              else
              {
                dword_2CD44C8 |= 0x80u;
                v15 = v43;
              }
              if ( v15 )
                sub_76FD20(&v43, 46);
              goto LABEL_21;
            }
LABEL_33:
            sub_76E6C0(a1, a2, v9, a4);
          }
          sub_76FA20(&v46, "default argument", 16);
          v44 = v46;
          v46 = sub_767900(1, (__int64)"default argument", v40, v41, v42);
          sub_770B70(&v44, &v46);
          break;
      }
    }
    sub_772CF0(&v44);
    goto LABEL_17;
  }
  if ( v14 != 99 )
  {
    if ( v14 == 101 )
    {
      sub_76FA20(&v46, "__ivar_", 7);
      v28 = 11;
      v29 = "initializer";
      v44 = v46;
      if ( *(qword_2CD44C0 - 1) != 101 )
      {
        v28 = 9;
        v29 = "destroyer";
      }
      sub_76FA20(&v46, v29, v28);
      sub_770B70(&v44, &v46);
    }
    else
    {
      if ( (v13 & 0x20) == 0 && BYTE2(v43) == 32 )
      {
        sub_770730(&v44, 24415);
        sub_770730(&v44, 25956);
        sub_76FA20(&v46, "allocating_", 11);
        sub_770B70(&v44, &v46);
      }
      sub_770730(&v44, 25956);
      sub_76FCD0(&v46, 1953066601, 4);
      sub_770B70(&v44, &v46);
    }
    goto LABEL_16;
  }
  if ( (v13 & 0x20) == 0 && BYTE2(v43) == 32 )
  {
    sub_770730(&v44, 24415);
    sub_76FA20(&v46, "allocating_", 11);
    sub_770B70(&v44, &v46);
    sub_76FCD0(&v46, 1953066601, 4);
    v23 = &v46;
    sub_770B70(&v44, &v46);
  }
  else
  {
    sub_76FCD0(&v46, 1953066601, 4);
    v23 = &v46;
    sub_770B70(&v44, &v46);
  }
LABEL_43:
  v26 = (unsigned __int8)*qword_2CD44C0 | 0x20u;
  if ( ((unsigned __int8)*qword_2CD44C0 | 0x20) == 0x66 || *qword_2CD44C0 == 117 )
  {
    v45 = sub_767F90(nullptr, (__int64)v23, v26, v24, v25);
  }
  else
  {
    v45 = sub_767F90(nullptr, (__int64)v23, v26, v24, v25);
    if ( (dword_2CD44CC & 0xA0) != 0 )
      goto LABEL_46;
    if ( (dword_2CD44CC & 0x400000) != 0 )
      sub_76FCD0(&v46, &stru_203A20, 3);
    else
      sub_76F8C0(&v46, 58);
    sub_770B70(&v44, &v46);
  }
  sub_770B70(&v44, &v45);
LABEL_46:
  if ( v6 )
    sub_772CF0(&v44);
LABEL_16:
  if ( (_WORD)v44 )
    goto LABEL_17;
LABEL_22:
  if ( v8 == 90 )
    sub_770DE0(&v43);
  return v43;
}
