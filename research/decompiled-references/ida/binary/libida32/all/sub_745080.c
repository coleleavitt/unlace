__int64 __fastcall sub_745080(int *a1, __int64 a2, char *a3)
{
  unsigned int *v4; // rdi
  char *v5; // rcx
  char v6; // al
  int v8; // eax
  int v9; // ebx
  unsigned int v10; // eax
  int v11; // ebx
  unsigned int v13; // [rsp+Ch] [rbp-3Ch] BYREF
  int v14; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v4 = (unsigned int *)&qword_2CAA5C0;
  v13 = 0;
  v5 = qword_2CAA5C0;
  v6 = *qword_2CAA5C0;
  if ( *qword_2CAA5C0 == 89 )
  {
    a3 = ++qword_2CAA5C0;
    a2 = (unsigned __int8)v5[1];
    if ( !(_BYTE)a2 )
      goto LABEL_20;
    v8 = (unsigned __int8)a2;
    if ( (unsigned __int8)(a2 - 48) <= 9u )
    {
      v5 += 2;
      v9 = (unsigned __int8)a2 - 47;
      qword_2CAA5C0 = v5;
    }
    else
    {
      v9 = 0;
      if ( (_BYTE)a2 == 64 )
      {
        v5 += 2;
        qword_2CAA5C0 = v5;
        goto LABEL_20;
      }
      while ( 1 )
      {
        v10 = v8 - 65;
        if ( v10 > 0xF )
          goto LABEL_20;
        v5 = a3 + 1;
        qword_2CAA5C0 = a3 + 1;
        v9 = v10 + 16 * v9;
        v8 = a3[1];
        if ( v8 == 64 )
          break;
        if ( !a3[1] )
          goto LABEL_20;
        ++a3;
      }
      a3 += 2;
      qword_2CAA5C0 = a3;
      if ( v9 <= 0 )
LABEL_20:
        sub_74E200(&qword_2CAA5C0, a2, a3, v5);
    }
    if ( (*((_BYTE *)a1 + 2) & 4) != 0 )
    {
      a2 = 23899;
      v4 = &v13;
      sub_750270(&v13, 23899);
    }
    v11 = v9 - 1;
    do
    {
      v14 = sub_742C80(v4, a2, (__int64)a3, v5);
      a2 = (__int64)&v15;
      v4 = &v13;
      v15 = sub_7529C0(&v14);
      sub_7506B0(&v13, &v15);
    }
    while ( v11-- != 0 );
    if ( *(_WORD *)a1 )
    {
      v15 = *a1;
      if ( (*((_BYTE *)a1 + 2) & 2) == 0 )
        sub_752830(&v15);
      v13 = sub_750E60(&v15, &v13);
    }
    v13 = sub_7452D0(&v13);
    BYTE2(v13) |= 4u;
    return v13;
  }
  if ( v6 > 89 )
  {
    if ( v6 == 95 && qword_2CAA5C0[1] == 90 )
    {
      qword_2CAA5C0 += 2;
      if ( (dword_2CAA5CC & 0x20000) == 0 )
      {
        a2 = (__int64)"__box ";
        sub_74F560(&v15, "__box ", 6);
        v13 = v15;
      }
    }
    goto LABEL_6;
  }
  if ( !v6 )
    goto LABEL_20;
  if ( v6 != 88 || !(_BYTE)a2 )
  {
LABEL_6:
    v15 = sub_744CA0(a1, a2);
    sub_7506B0(&v13, &v15);
    return v13;
  }
  ++qword_2CAA5C0;
  return sub_750A30(a1);
}

