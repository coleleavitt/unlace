__int64 __fastcall sub_748D40(unsigned int *a1, __int64 a2, char *a3, __int64 a4)
{
  char v4; // r12
  char v5; // r13
  char *v6; // rax
  char v7; // al
  unsigned int *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  char *v13; // rax
  __int64 v14; // rdx
  const char *v15; // rsi
  __int64 v16; // rdx
  char *v17; // rsi
  unsigned int v18; // [rsp+0h] [rbp-38h] BYREF
  int v19; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v20; // [rsp+8h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v4 = (char)a1;
  v5 = *qword_2CAA5C0;
  if ( *qword_2CAA5C0 == 122 )
  {
    if ( !(_BYTE)a1 )
      goto LABEL_8;
    a2 = 64;
    a1 = &v18;
    ++qword_2CAA5C0;
    sub_74F400(&v18, 64);
LABEL_4:
    v6 = qword_2CAA5C0;
    a3 = ++qword_2CAA5C0;
    v7 = *v6;
    if ( v7 != 100 )
    {
      if ( v7 > 100 )
      {
        if ( v7 == 105 )
        {
LABEL_21:
          sub_74F810(&v19, &locret_74756F, 3);
          v8 = (unsigned int *)&v19;
          sub_7506B0(&v18, &v19);
          goto LABEL_11;
        }
        if ( v7 != 111 )
          goto LABEL_8;
        goto LABEL_10;
      }
      if ( v7 != 68 )
      {
        if ( v7 != 97 )
LABEL_8:
          sub_74E200(a1, a2, a3, a4);
        v16 = 12;
        v17 = "autoreleased";
        goto LABEL_33;
      }
    }
LABEL_9:
    sub_750270(&v18, 28277);
LABEL_10:
    sub_74F560(&v19, "owned", 5);
    v8 = (unsigned int *)&v19;
    sub_7506B0(&v18, &v19);
    if ( *(qword_2CAA5C0 - 1) != 68 )
    {
LABEL_11:
      if ( (dword_2CAA5CC & 0x120) != 0 )
        v18 = 0;
      if ( v5 == 122 )
      {
        sub_74F560(&v19, "@error", 6);
        if ( (_WORD)v18 && (_WORD)v19 )
          sub_74F860(&v19, 32);
        v8 = &v18;
        v18 = sub_750E60(&v19, &v18);
      }
      goto LABEL_14;
    }
    v16 = 14;
    v17 = "_inner_pointer";
LABEL_33:
    sub_74F560(&v19, v17, v16);
    v8 = (unsigned int *)&v19;
    sub_7506B0(&v18, &v19);
    goto LABEL_11;
  }
  a2 = 64;
  a1 = &v18;
  sub_74F400(&v18, 64);
  v13 = qword_2CAA5C0;
  a3 = qword_2CAA5C0 + 1;
  if ( v4 )
    goto LABEL_4;
  ++qword_2CAA5C0;
  switch ( *v13 )
  {
    case 'd':
      goto LABEL_9;
    case 'e':
      v14 = 12;
      v15 = "deallocating";
      goto LABEL_28;
    case 'g':
      v14 = 10;
      v15 = "guaranteed";
LABEL_28:
      sub_74F560(&v19, v15, v14);
      v8 = (unsigned int *)&v19;
      sub_7506B0(&v18, &v19);
      goto LABEL_23;
    case 'i':
    case 'l':
      v8 = (_DWORD *)(&stru_6E60 + 9);
      sub_750270(&v18, 28265);
      if ( *(qword_2CAA5C0 - 1) == 108 )
        goto LABEL_21;
LABEL_23:
      if ( (dword_2CAA5CC & 0x120) != 0 )
        v18 = 0;
      break;
    case 'o':
      goto LABEL_10;
    default:
      goto LABEL_8;
  }
LABEL_14:
  if ( (_WORD)v18 )
  {
    v8 = (unsigned int *)&qword_20;
    sub_74F860(&v18, 32);
  }
  v19 = sub_747AD0(nullptr, (__int64)v8, v9, v10, v11);
  sub_7506B0(&v18, &v19);
  return v18;
}

