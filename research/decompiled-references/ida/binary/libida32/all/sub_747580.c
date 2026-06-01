__int64 __fastcall sub_747580(char *a1, unsigned int *a2, unsigned __int64 a3, const char *a4, __int64 a5)
{
  char v5; // bl
  char *v6; // rax
  char v7; // r13
  char v8; // r12
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rsi
  unsigned int v12; // r15d
  unsigned __int8 *v14; // rax
  int v15; // edx
  unsigned int v16; // [rsp+Ch] [rbp-4Ch] BYREF
  unsigned int v17; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v5 = (char)a1;
  v16 = 0;
  v6 = qword_2CAA5C0;
  v7 = *qword_2CAA5C0;
  v8 = *qword_2CAA5C0;
  if ( *qword_2CAA5C0 == 88 )
  {
    a3 = (unsigned __int64)++qword_2CAA5C0;
    v8 = *++v6;
  }
  if ( v8 == 111 )
  {
    if ( (_BYTE)a1 )
      goto LABEL_11;
    a3 = (unsigned __int64)(v6 + 2);
    qword_2CAA5C0 = v6 + 2;
    v9 = v6[1];
    if ( v9 == 105 )
    {
      sub_750270(&v16, 28265);
    }
    else
    {
      if ( v9 == 112 )
      {
        v10 = 3;
        v11 = 6648432;
      }
      else
      {
        if ( v9 != 80 )
          goto LABEL_11;
        v10 = 4;
        v11 = 1953722224;
      }
      sub_74F810(&v18, v11, v10);
      v16 = v18;
    }
    sub_74F810(&v18, 7891302, 3);
    a2 = &v18;
    a1 = (char *)&v16;
    sub_7506B0(&v16, &v18);
    if ( (unsigned __int8)(*qword_2CAA5C0 - 48) > 9u )
LABEL_11:
      sub_74E200(a1, a2, a3, a4);
  }
  else if ( (unsigned __int8)(v8 - 48) > 9u )
  {
    goto LABEL_11;
  }
  v12 = sub_74E4D0(a1, a2, a3, a4, a5);
  if ( !v12 )
    goto LABEL_11;
  a1 = qword_2CAA5C0;
  if ( (int)qword_2CAA5B8 - (int)qword_2CAA5C0 < v12 )
    goto LABEL_11;
  v17 = 0;
  if ( v7 == 88 )
  {
    sub_74E2F0(&qword_2CAA5C0[v12]);
    sub_74E6A0(&v18, sub_746D00, 4 * v12);
    v17 = v18;
    sub_74E220(1);
  }
  else
  {
    v18 = 0;
    sub_74EA60(&v18);
    if ( byte_2CAA5A1 > 0 )
      sub_750840(&v18);
    v17 = v18;
  }
  if ( v8 == 111 )
  {
    a2 = &v18;
    a1 = (char *)&v17;
    v14 = (unsigned __int8 *)sub_74E790(&v17, &v18);
    a4 = "& @/= >    <*!|+?%-~   ^ .";
    do
    {
      v15 = *v14++;
      if ( (char)v15 > 0 )
      {
        a3 = (unsigned int)(v15 - 97);
        if ( (unsigned __int8)a3 > 0x19u )
          goto LABEL_11;
        a3 = (unsigned __int8)asc_2394760[(char)a3];
        if ( (_BYTE)a3 == 32 )
          goto LABEL_11;
        *(v14 - 1) = a3;
      }
      --v18;
    }
    while ( v18 );
    if ( (dword_2CAA5CC & 0x4000) == 0 && (_WORD)v16 )
    {
      if ( (_WORD)v17 )
        sub_74F860(&v17, 32);
      sub_7506B0(&v17, &v16);
    }
    dword_2CAA5C8 |= 0x100000u;
  }
  if ( (unsigned __int8)(v5 - 1) <= 0xFDu )
    BYTE2(v17) = v5;
  return v17;
}

