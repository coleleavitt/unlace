__int64 __fastcall sub_7460D0(unsigned int *a1, __int64 a2, __int64 a3, char a4)
{
  char v4; // r9
  char *v6; // rcx
  char *v7; // rax
  unsigned int *v8; // r12
  char v9; // r15
  int v10; // edx
  char v11; // r14
  int v12; // ebx
  int v13; // ebp
  int v14; // ebx
  char v16; // al
  __int64 v17; // rdx
  const char *v18; // rsi
  char v19; // bl
  unsigned int v20; // eax
  char v21; // dl
  unsigned int v22; // esi
  char v23; // al
  __int64 v24; // rsi
  int v25; // ebx
  char v26; // [rsp+0h] [rbp-78h]
  _WORD *v27; // [rsp+8h] [rbp-70h]
  unsigned __int8 v28; // [rsp+10h] [rbp-68h]
  char v29; // [rsp+10h] [rbp-68h]
  char v30; // [rsp+10h] [rbp-68h]
  char v31; // [rsp+1Fh] [rbp-59h]
  unsigned int v32; // [rsp+2Ch] [rbp-4Ch] BYREF
  unsigned int v33; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v35; // [rsp+38h] [rbp-40h]

  v4 = a4;
  v6 = (char *)&qword_2CAA5C0;
  v27 = (_WORD *)a3;
  v35 = __readfsqword(0x28u);
  v7 = qword_2CAA5C0;
  v32 = 0;
  if ( !*qword_2CAA5C0 )
    goto LABEL_84;
  v26 = 0;
  v8 = a1;
  v9 = a2;
  ++qword_2CAA5C0;
  v10 = (unsigned __int8)*v7;
  v11 = 0;
  v12 = 0;
  if ( (_BYTE)v10 == 36 )
    goto LABEL_11;
  while ( 1 )
  {
    do
    {
      a3 = v10 - ((unsigned __int8)v10 < 0x41u ? 26 : 65);
      if ( (unsigned __int8)a3 > 0x1Fu )
        goto LABEL_84;
      if ( byte_2CA2EA9 > 0 )
        goto LABEL_32;
      if ( (char)a3 > 7 )
      {
        if ( (_BYTE)a3 != 8 )
        {
LABEL_32:
          a2 = (unsigned int)v9;
          v28 = a3;
          a1 = &v33;
          v19 = a3 & 3 | v12;
          sub_74F400(&v33, a2);
          a3 = v28;
          if ( v9 == 127 )
          {
            a1 = &v34;
            a2 = 9766;
            sub_74F460(&v34, 9766);
            a3 = v28;
            v33 = v34;
          }
          if ( (a3 & 0x10) != 0 )
          {
            v29 = a3;
            if ( !a4 )
            {
              v20 = sub_744580(a1, (unsigned int *)a2, a3, v6);
              v21 = v29;
              v34 = v20;
              ++qword_2CAA5C0;
              if ( v9 )
              {
                a2 = (__int64)&v34;
                a1 = &v33;
                sub_750B70(&v33, &v34);
                v21 = v29;
              }
              LOBYTE(a3) = v21 & 0xC;
              v34 = 0;
              if ( (_BYTE)a3 != 12 )
              {
LABEL_39:
                v22 = (char)a3;
                if ( !(_WORD)v33 )
                  goto LABEL_40;
LABEL_59:
                v24 = v22 >> 1;
                if ( !(_DWORD)v24 && v11 )
                  v24 = 5;
                if ( !v26 )
                  v24 = (unsigned int)v24 | 0x10;
                sub_74F920(&v34, v24);
LABEL_63:
                v33 = sub_750E60(&v34, &v33);
                if ( (dword_2CAA5CC & 0x20000) == 0 )
                {
LABEL_64:
                  v33 = sub_750E60(&v32, &v33);
                  if ( v19 )
                    goto LABEL_65;
LABEL_42:
                  if ( a4 )
                  {
LABEL_43:
                    BYTE2(v33) |= 1u;
                    return v33;
                  }
LABEL_50:
                  if ( !*(_WORD *)v8 )
                  {
                    if ( *v27 )
                    {
                      if ( (_WORD)v33 )
                        sub_74F860(&v33, 32);
                      sub_7506B0(&v33, v27);
                    }
                    goto LABEL_43;
                  }
                  v23 = *((_BYTE *)v8 + 2);
                  if ( (v23 & 1) == 0 && *v27 )
                  {
                    if ( (_WORD)v33 )
                      sub_74F860(&v33, 32);
                    sub_7506B0(&v33, v27);
LABEL_54:
                    if ( (_WORD)v33 )
                      sub_74F860(&v33, 32);
                  }
                  else if ( (v23 & 2) == 0 )
                  {
                    goto LABEL_54;
                  }
                  sub_7506B0(&v33, v8);
                  goto LABEL_43;
                }
LABEL_41:
                if ( v19 )
                  goto LABEL_65;
                goto LABEL_42;
              }
LABEL_47:
              v34 = sub_745F50((__int64)a1, (unsigned int *)a2);
              if ( (dword_2CAA5CC & 0x20) == 0 && v9 )
                goto LABEL_63;
              if ( (dword_2CAA5CC & 0x20000) == 0 )
                goto LABEL_64;
              if ( v19 )
              {
LABEL_65:
                sub_74FB30(&v33);
                goto LABEL_42;
              }
              goto LABEL_50;
            }
LABEL_84:
            sub_74E200(a1, a2, a3, v6);
          }
LABEL_45:
          a3 &= 0xCu;
          v34 = 0;
          if ( (_BYTE)a3 != 12 )
            goto LABEL_39;
          if ( !a4 )
            goto LABEL_47;
          goto LABEL_84;
        }
        v12 |= 4u;
      }
      else if ( (char)a3 > 5 )
      {
        if ( (v4 & 1) == 0 || v9 )
          goto LABEL_84;
        v16 = 127;
        v26 = 1;
        if ( (_BYTE)a3 == 6 )
          v16 = 38;
        v9 = v16;
      }
      else if ( (_BYTE)a3 == 4 )
      {
        ++v11;
      }
      else
      {
        if ( (_BYTE)a3 != 5 )
        {
          v19 = a3 | v12;
          v30 = a3;
          sub_74F400(&v33, (unsigned int)v9);
          if ( v9 != 127 )
          {
            v34 = 0;
            v22 = 0;
            if ( (_WORD)v33 )
              goto LABEL_59;
LABEL_40:
            if ( (dword_2CAA5CC & 0x20000) == 0 )
              goto LABEL_64;
            goto LABEL_41;
          }
          a1 = &v34;
          a2 = 9766;
          sub_74F460(&v34, 9766);
          LOBYTE(a3) = v30;
          v33 = v34;
          goto LABEL_45;
        }
        v12 |= 0x10u;
      }
      v7 = qword_2CAA5C0++;
      v10 = (unsigned __int8)*v7;
    }
    while ( (_BYTE)v10 != 36 );
LABEL_11:
    a2 = (__int64)(v7 + 2);
    qword_2CAA5C0 = v7 + 2;
    a3 = (unsigned __int8)v7[1];
    if ( (_BYTE)a3 != 65 )
      break;
    if ( (dword_2CAA5CC & 0x20000) != 0 )
      goto LABEL_28;
    v31 = v4;
    v17 = 5;
    v18 = "__gc ";
LABEL_31:
    sub_74F560(&v34, v18, v17);
    a1 = &v32;
    sub_7506B0(&v32, &v34);
    v6 = (char *)&qword_2CAA5C0;
    v4 = v31;
    a2 = (__int64)qword_2CAA5C0;
LABEL_28:
    qword_2CAA5C0 = (char *)(a2 + 1);
    v10 = *(unsigned __int8 *)a2;
  }
  if ( (_BYTE)a3 == 66 )
  {
    if ( (dword_2CAA5CC & 0x20000) != 0 )
      goto LABEL_28;
    v31 = v4;
    v17 = 6;
    v18 = "__pin ";
    goto LABEL_31;
  }
  v13 = a3 - 48;
  if ( (unsigned __int8)(a3 - 48) > 0xFu )
    goto LABEL_84;
  a3 = (__int64)(v7 + 3);
  qword_2CAA5C0 = v7 + 3;
  v14 = (unsigned __int8)v7[2] - 48;
  if ( (unsigned __int8)(v7[2] - 48) > 0xFu )
    goto LABEL_84;
  a3 = (__int64)(v7 + 4);
  qword_2CAA5C0 = v7 + 4;
  if ( !v7[3] )
    goto LABEL_84;
  v33 = *v8;
  if ( (_WORD)v33 && (*((_BYTE *)v8 + 2) & 2) == 0 )
    sub_752830(&v33);
  if ( (dword_2CAA5CC & 0x20000) == 0 )
  {
    v25 = 16 * v13 + v14;
    sub_74F560(&v34, "__gc[", 5);
    v32 = v34;
    if ( (unsigned __int8)v25 > 1u )
    {
      do
      {
        --v25;
        sub_74F860(&v32, 44);
      }
      while ( (_BYTE)v25 != 1 );
    }
    sub_750270(&v32, 8285);
    sub_7506B0(&v33, &v32);
  }
  return v33;
}

