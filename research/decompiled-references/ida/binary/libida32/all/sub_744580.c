__int64 __fastcall sub_744580(unsigned int *a1, unsigned int *a2, __int64 a3, char *a4)
{
  char v4; // al
  char v5; // r12
  __int64 v6; // rdx
  int v7; // eax
  char *v8; // rax
  char *v9; // rax
  char *v10; // rax
  int v11; // eax
  unsigned int *v12; // r14
  int v14; // eax
  unsigned int v15; // [rsp+8h] [rbp-40h] BYREF
  int v16; // [rsp+Ch] [rbp-3Ch] BYREF
  int v17; // [rsp+10h] [rbp-38h] BYREF
  int v18; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v15 = 0;
  v4 = *qword_2CAA5C0;
  if ( !*qword_2CAA5C0 )
LABEL_34:
    sub_74E200(a1, a2, a3, a4);
  v5 = 0;
  while ( v4 != 64 && (!byte_2CA2EAB || byte_2CA2EAA) )
  {
    if ( (_WORD)v15 )
    {
      a2 = &v15;
      a1 = (_DWORD *)(&stru_3A28 + 18);
      v15 = sub_750FF0(14906, &v15);
      if ( v5 )
      {
        a2 = &v15;
        a1 = (_DWORD *)(&qword_58 + 3);
        v15 = sub_750F10(91, &v15);
      }
      v5 = 0;
    }
    v9 = qword_2CAA5C0;
    if ( *qword_2CAA5C0 != 63 || qword_2CAA5C0[1] == 36 )
    {
      v7 = sub_745CD0(0);
      goto LABEL_12;
    }
    v16 = 0;
    a4 = qword_2CAA5C0 + 1;
    qword_2CAA5C0 += 2;
    v6 = (unsigned __int8)v9[1];
    if ( (_BYTE)v6 == 65 )
    {
      qword_2CAA5C0 = a4;
      v12 = (unsigned int *)qword_2CAA5D0;
      sub_74F120(&v18, 0);
      a2 = (unsigned int *)&v18;
      a1 = v12;
      sub_7526B0(v12, &v18);
LABEL_28:
      v11 = sub_7525F0(a1, a2, a3, a4);
      a2 = &v15;
      a1 = (unsigned int *)&v18;
      v18 = v11;
      v15 = sub_750E60(&v18, &v15);
      dword_2CAA5C8 |= 0x2000000u;
      v8 = qword_2CAA5C0;
      goto LABEL_13;
    }
    if ( (char)v6 > 65 )
    {
      if ( (_BYTE)v6 == 73 )
      {
        v5 = 1;
        v17 = sub_745CD0(0);
        a2 = &v15;
        a1 = (unsigned int *)&v18;
        v18 = sub_750D90(&v17, 93);
        v15 = sub_750E60(&v18, &v15);
        v8 = qword_2CAA5C0;
        goto LABEL_13;
      }
    }
    else
    {
      if ( (_BYTE)v6 == 37 )
      {
        v10 = v9 + 3;
        while ( 1 )
        {
          qword_2CAA5C0 = v10;
          a3 = (unsigned __int8)*(v10 - 1);
          if ( (_BYTE)a3 == 64 )
            goto LABEL_28;
          ++v10;
          if ( !(_BYTE)a3 )
            goto LABEL_34;
        }
      }
      if ( (_BYTE)v6 == 63 )
      {
        if ( v9[2] == 95 && v9[3] == 63 )
        {
          qword_2CAA5C0 = v9 + 3;
          v14 = sub_743E70(nullptr, (__int64)a2, v6, a4);
          a2 = &v15;
          a1 = (unsigned int *)&v18;
          v18 = v14;
          v15 = sub_750E60(&v18, &v15);
          v8 = qword_2CAA5C0;
          if ( *qword_2CAA5C0 == 64 )
            v8 = ++qword_2CAA5C0;
          goto LABEL_13;
        }
        v16 = sub_743070(0, a2);
        goto LABEL_11;
      }
    }
    qword_2CAA5C0 = a4;
    v16 = sub_742C80(a1, (__int64)a2, v6, a4);
LABEL_11:
    v7 = sub_752E70(&v16);
LABEL_12:
    a2 = &v15;
    v18 = v7;
    a1 = (unsigned int *)&v18;
    v15 = sub_750E60(&v18, &v15);
    v8 = qword_2CAA5C0;
LABEL_13:
    v4 = *v8;
    if ( !v4 )
      goto LABEL_34;
  }
  return v15;
}

