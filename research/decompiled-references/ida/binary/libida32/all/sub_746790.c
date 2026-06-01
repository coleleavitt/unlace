__int64 __fastcall sub_746790(unsigned int *a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  char *v4; // rax
  __int64 v5; // rdx
  char v6; // r14
  char v7; // bl
  int v8; // ebp
  int v9; // r15d
  char *v10; // rbx
  char v11; // al
  unsigned int v13; // [rsp+8h] [rbp-50h] BYREF
  unsigned int v14; // [rsp+Ch] [rbp-4Ch] BYREF
  int v15; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v16; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v13 = 0;
  v4 = qword_2CAA5C0;
  v5 = (unsigned __int8)*qword_2CAA5C0;
  if ( (_BYTE)v5 != 88 )
  {
    v6 = (char)a1;
    if ( (_BYTE)v5 == 90 )
    {
      v9 = 0;
      if ( (char)a1 <= 0 )
        goto LABEL_28;
    }
    else
    {
      v14 = 0;
      v7 = *qword_2CAA5C0;
      if ( !*qword_2CAA5C0 )
        goto LABEL_30;
      v8 = 0;
      while ( 1 )
      {
        v9 = v8;
        if ( v7 == 64 || v7 == 90 )
          break;
        if ( v8 )
          sub_750750(&v14);
        if ( (unsigned __int8)(v7 - 48) <= 9u )
        {
          a1 = &v14;
          a2 = (unsigned int *)sub_752810(qword_2CA2EB0, (unsigned int)(v7 - 48), v5, a4);
          sub_7506B0(&v14, a2);
          v4 = ++qword_2CAA5C0;
        }
        else
        {
          v10 = qword_2CAA5C0;
          v16 = 0;
          v15 = sub_7452D0(&v16, a2);
          if ( v10 + 1 < qword_2CAA5C0 )
            sub_752640(qword_2CA2EB0, &v15);
          a2 = (unsigned int *)&v15;
          a1 = &v14;
          sub_7506B0(&v14, &v15);
          v4 = qword_2CAA5C0;
        }
        v7 = *v4;
        ++v8;
        if ( !*v4 )
          goto LABEL_30;
      }
      v5 = v14;
      v13 = v14;
      v11 = *v4;
      if ( v11 == 64 )
      {
        ++qword_2CAA5C0;
LABEL_18:
        if ( v6 > 0 )
          goto LABEL_22;
        return v13;
      }
      if ( v11 != 90 )
      {
        if ( !v11 )
          goto LABEL_18;
LABEL_30:
        sub_74E200(a1, a2, v5, a4);
      }
      sub_750750(&v13);
      if ( v6 <= 0 )
      {
LABEL_28:
        sub_750340(&v13, 1);
        ++qword_2CAA5C0;
        return v13;
      }
    }
    dword_2CAA5C8 |= 0x10000u;
    sub_750340(&v13, 1);
    ++qword_2CAA5C0;
LABEL_22:
    if ( v9 > 255 )
      v9 = 255;
    dword_2CAA5C8 |= v9 << 8;
    return v13;
  }
  ++qword_2CAA5C0;
  return sub_750A30(&v13);
}

