__int64 __fastcall sub_741B90(unsigned int *a1, __int64 a2, __int64 a3, char *a4, __int64 a5)
{
  unsigned int *v5; // r13
  __int64 v6; // rdx
  char *v7; // rax
  int v8; // ebx
  __int64 v11; // rdx
  char *v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // [rsp+Ch] [rbp-4Ch] BYREF
  unsigned int v15; // [rsp+10h] [rbp-48h] BYREF
  int v16; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v5 = a1;
  v14 = 0;
  v6 = (__int64)qword_2CAA5C0;
  if ( *qword_2CAA5C0 == 95 )
  {
    qword_2CAA5C0 += 2;
    v8 = *(char *)(v6 + 1) - 49;
    if ( (unsigned int)v8 > 8 )
      goto LABEL_3;
    v7 = (char *)(v6 + 3);
    qword_2CAA5C0 = (char *)(v6 + 3);
    if ( *(_BYTE *)(v6 + 2) != 95 )
      goto LABEL_3;
LABEL_9:
    if ( v8 > 1 )
    {
      a2 &= 1u;
      if ( (_DWORD)a2 )
        dword_2CAA5C8 |= 0x80u;
    }
    while ( 1 )
    {
      v6 = (unsigned __int8)*v7;
      if ( (_BYTE)v6 == 95 )
      {
        a4 = v7 + 1;
        qword_2CAA5C0 = v7 + 1;
        v6 = (unsigned __int8)*++v7;
      }
      if ( (_BYTE)v6 == 116 )
      {
        if ( !byte_2CA2EA8 )
          goto LABEL_29;
        qword_2CAA5C0 = v7 + 1;
        v16 = sub_741790(nullptr, a2, v6, (__int64)a4, a5);
        sub_7506B0(&v14, &v16);
      }
      else
      {
        sub_74E4D0(a1, a2, v6, a4, a5);
        v15 = 0;
        sub_74EA60(&v15);
        if ( byte_2CAA5A1 > 0 )
        {
          sub_750840(&v15);
          if ( byte_2CAA5A1 > 0 )
            return v14;
        }
        sub_7506B0(&v14, &v15);
        if ( v5 )
          *v5 = v15;
        if ( !byte_2CA2EA8 && *qword_2CAA5C0 == 88 )
        {
          v16 = sub_740780((__int64)&v14, (__int64)&v15, v11, v12, v13);
          sub_7506B0(&v14, &v16);
          if ( byte_2CAA5A1 > 0 )
            return v14;
        }
      }
      if ( v8-- == 0 )
        return v14;
      a2 = 14906;
      a1 = &v14;
      sub_750270(&v14, 14906);
      v7 = qword_2CAA5C0;
    }
  }
  v7 = ++qword_2CAA5C0;
  v8 = *(char *)v6 - 49;
  if ( (unsigned int)v8 <= 8 )
    goto LABEL_9;
LABEL_3:
  if ( !byte_2CAA5A1 || (v6 = (__int64)qword_2CAA5C0, --qword_2CAA5C0, a4 = qword_2CAA5C0, *qword_2CAA5C0) )
LABEL_29:
    sub_74E200(a1, a2, v6, a4);
  byte_2CAA5A1 = 1;
  return v14;
}

