__int64 __fastcall sub_73E4E0(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char *v5; // rax
  __int64 v6; // rcx
  char *v7; // rdx
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // r8
  char *v11; // rax
  char v13; // al
  __int64 v14; // r8
  __int64 v15; // rdx
  char *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  char *v21; // rax
  unsigned __int8 v22; // al
  unsigned int v23; // [rsp+4h] [rbp-44h] BYREF
  int v24; // [rsp+8h] [rbp-40h] BYREF
  _BYTE v25[4]; // [rsp+Ch] [rbp-3Ch] BYREF
  int v26; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v27; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v28; // [rsp+18h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  v5 = qword_2CAA5C0;
  v6 = (unsigned __int8)*qword_2CAA5C0;
  v23 = 0;
  if ( (_BYTE)v6 != 85 )
  {
    if ( (_BYTE)xmmword_2CA2E80 )
    {
      v23 = sub_73BE00((__int64)a1, a2, a3, v6, a5);
      goto LABEL_12;
    }
    v7 = (char *)(DWORD1(xmmword_2CA2E80) & 0xFB8FFFFF);
    DWORD1(xmmword_2CA2E80) &= 0xFB8FFFFF;
    if ( (_BYTE)v6 == 76 )
    {
      v15 = (unsigned int)v7 | 0x20000;
      ++qword_2CAA5C0;
      DWORD1(xmmword_2CA2E80) = v15;
      v23 = sub_73BE00((__int64)a1, a2, v15, v6, a5);
      v16 = qword_2CAA5C0;
      if ( *qword_2CAA5C0 == 95 )
      {
        v7 = ++qword_2CAA5C0;
        if ( v16[1] == 110 )
          goto LABEL_31;
        a1 = nullptr;
        sub_73BC30(0, a2, (__int64)v7, v6);
      }
    }
    else
    {
      a2 = (unsigned int)(char)v6;
      if ( (unsigned int)a2 > 0x7F )
      {
LABEL_24:
        v17 = (unsigned int)v7 | 0x100000;
        DWORD1(xmmword_2CA2E80) = v17;
        **((_DWORD **)&xmmword_2CA2E80 + 1) = 0;
        a1 = &v27;
        v27 = sub_73C680(nullptr, (unsigned int *)a2, v17, v6);
        v23 = sub_7522F0(&v27);
        goto LABEL_12;
      }
      a2 = (unsigned int)(a2 - 48);
      if ( (unsigned int)a2 > 9 )
      {
        a2 = (unsigned int)(v6 - 67);
        if ( (unsigned __int8)(v6 - 67) <= 1u )
        {
          qword_2CAA5C0 += 2;
          v8 = v5[1];
          a2 = (unsigned int)v7 | 0x200000;
          DWORD1(xmmword_2CA2E80) = (unsigned int)v7 | 0x200000;
          if ( (_BYTE)v6 == 68 )
          {
            v22 = v8 - 48;
            if ( v22 <= 5u && v22 != 3 )
            {
              DWORD1(xmmword_2CA2E80) = (unsigned int)v7 | 0x300000;
              sub_74F400(&v27, 126);
              v23 = v27;
LABEL_9:
              a2 = *((_QWORD *)&xmmword_2CA2E80 + 1);
              a1 = &v23;
              sub_7506B0(&v23, *((_QWORD *)&xmmword_2CA2E80 + 1));
              v11 = qword_2CAA5C0;
              if ( *qword_2CAA5C0 != 66 )
                return v23;
              goto LABEL_15;
            }
          }
          else if ( (unsigned __int8)(v8 - 49) <= 4u )
          {
            goto LABEL_9;
          }
LABEL_31:
          sub_74E200(a1, a2, v7, v6);
        }
        goto LABEL_24;
      }
      v23 = sub_73BE00((__int64)a1, a2, (__int64)v7, v6, a5);
    }
    v9 = v23;
    **((_DWORD **)&xmmword_2CA2E80 + 1) = v23;
    goto LABEL_12;
  }
  v7 = qword_2CAA5C0 + 2;
  qword_2CAA5C0 += 2;
  v13 = v5[1];
  if ( v13 == 108 )
  {
    sub_74F560(&v27, "{lambda", 7);
    sub_7506B0(&v23, &v27);
    a2 = (__int64)&v27;
    a1 = &v23;
    v27 = sub_73E280(nullptr, (__int64)&v27, v18, v19, v20);
    sub_7506B0(&v23, &v27);
    v21 = qword_2CAA5C0;
    v7 = ++qword_2CAA5C0;
    if ( *v21 != 69 )
      goto LABEL_31;
  }
  else
  {
    if ( v13 != 116 )
      goto LABEL_31;
    sub_74F560(&v27, "{unnamed type", 13);
    sub_7506B0(&v23, &v27);
  }
  a2 = (__int64)&v27;
  a1 = &v23;
  v27 = sub_73BD40((__int64)&v23, (__int64)&v27, (__int64)v7, v6, v14);
  sub_7506B0(&v23, &v27);
LABEL_12:
  v11 = qword_2CAA5C0;
  if ( *qword_2CAA5C0 != 66 )
    return v23;
  do
  {
LABEL_15:
    qword_2CAA5C0 = v11 + 1;
    v24 = sub_73BE00((__int64)a1, a2, v9, v6, v10);
    if ( (dword_2CAA5CC & 0x20000) == 0 )
    {
      sub_74F560(v25, "[abi:", 5);
      v26 = sub_750E60(v25, &v24);
      a2 = (__int64)&v27;
      a1 = &v23;
      v27 = sub_750D90(&v26, 93);
      sub_7506B0(&v23, &v27);
    }
    v11 = qword_2CAA5C0;
  }
  while ( *qword_2CAA5C0 == 66 );
  return v23;
}

