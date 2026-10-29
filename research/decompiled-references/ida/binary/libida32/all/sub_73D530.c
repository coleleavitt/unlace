__int64 __fastcall sub_73D530(unsigned int *a1, unsigned int *a2, char *a3, __int64 a4, __int64 a5)
{
  bool v5; // zf
  char v6; // bp
  char v7; // r14
  char *v8; // rax
  __int64 v9; // rdx
  char *v10; // rax
  unsigned int v12; // [rsp+0h] [rbp-38h] BYREF
  int v13; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v5 = (_BYTE)xmmword_2CA2E80 == 0xFF;
  LOBYTE(xmmword_2CA2E80) = xmmword_2CA2E80 + 1;
  v12 = 0;
  if ( v5 )
    goto LABEL_17;
  v6 = (char)a1;
  v7 = 1;
  a3 = qword_2CAA5C0++;
  v8 = qword_2CAA5C0;
  if ( *qword_2CAA5C0 == 69 )
  {
    if ( !(_BYTE)a1 && !BYTE2(xmmword_2CA2E80) )
    {
      sub_7527A0(xmmword_2CA2E90);
      LOBYTE(xmmword_2CA2E80) = xmmword_2CA2E80 - 1;
      ++qword_2CAA5C0;
      if ( (_DWORD)xmmword_2CA2E80 )
      {
LABEL_28:
        sub_752B50(&v12);
        return v12;
      }
LABEL_33:
      DWORD1(xmmword_2CA2E80) |= 0x4000000u;
      goto LABEL_28;
    }
    goto LABEL_17;
  }
  while ( 1 )
  {
    v13 = 0;
    v9 = (unsigned __int8)*v8;
    if ( (_BYTE)v9 == 76 )
    {
      v13 = sub_73F5D0();
LABEL_16:
      v10 = qword_2CAA5C0;
      a3 = ++qword_2CAA5C0;
      if ( *v10 != 69 )
        goto LABEL_17;
      goto LABEL_7;
    }
    if ( (char)v9 > 76 )
    {
      if ( (_BYTE)v9 != 88 )
      {
LABEL_19:
        v13 = sub_73D7A0(0, 0);
        goto LABEL_7;
      }
      a1 = nullptr;
      qword_2CAA5C0 = v8 + 1;
      v13 = sub_73D050(nullptr, a2, v9, a4, a5);
      goto LABEL_16;
    }
    a3 = (char *)(unsigned int)(v9 - 73);
    if ( (unsigned __int8)a3 > 1u )
      goto LABEL_19;
    if ( v8[1] == 69 )
    {
      if ( !v6 && v8[2] == 69 && !BYTE2(xmmword_2CA2E80) )
      {
        sub_7527A0(xmmword_2CA2E90);
        LOBYTE(xmmword_2CA2E80) = xmmword_2CA2E80 - 1;
        qword_2CAA5C0 += 3;
        if ( (_DWORD)xmmword_2CA2E80 )
          goto LABEL_28;
        goto LABEL_33;
      }
LABEL_17:
      sub_74E200(a1, a2, a3, a4);
    }
    v13 = sub_73D530(1);
LABEL_7:
    if ( !v7 )
      sub_750750(&v12);
    a1 = &v12;
    a2 = (unsigned int *)&v13;
    sub_7506B0(&v12, &v13);
    if ( (_WORD)xmmword_2CA2E80 == 1 )
      break;
    v8 = qword_2CAA5C0;
    if ( *qword_2CAA5C0 == 69 )
      goto LABEL_21;
LABEL_11:
    v7 = 0;
  }
  a1 = (unsigned int *)xmmword_2CA2E90;
  a2 = (unsigned int *)&v13;
  sub_7526B0(xmmword_2CA2E90, &v13);
  v8 = qword_2CAA5C0;
  if ( *qword_2CAA5C0 != 69 )
    goto LABEL_11;
LABEL_21:
  LOBYTE(xmmword_2CA2E80) = xmmword_2CA2E80 - 1;
  qword_2CAA5C0 = v8 + 1;
  if ( !(_DWORD)xmmword_2CA2E80 )
    DWORD1(xmmword_2CA2E80) |= 0x4000000u;
  if ( !v6 )
    goto LABEL_28;
  return v12;
}

