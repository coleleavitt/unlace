__int64 sub_749030()
{
  unsigned int v0; // r12d
  int *v1; // rdi
  __int64 v2; // r8
  unsigned int *v3; // rsi
  char *v4; // rdx
  char v5; // al
  __int64 v6; // rcx
  char *v7; // rax
  char v8; // r12
  char *v9; // rcx
  __int64 v10; // r8
  char *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rdx
  int v16; // r14d
  char *v17; // rax
  unsigned int v18; // ebx
  int v19; // r14d
  unsigned int v20; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  char v25; // cl
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  char *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int16 v33; // dx
  __int16 v34; // ax
  char v35; // [rsp+8h] [rbp-70h]
  char v36; // [rsp+8h] [rbp-70h]
  unsigned int v37; // [rsp+1Ch] [rbp-5Ch] BYREF
  int v38; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v39; // [rsp+24h] [rbp-54h] BYREF
  _WORD v40[2]; // [rsp+28h] [rbp-50h] BYREF
  int v41; // [rsp+2Ch] [rbp-4Ch] BYREF
  int v42; // [rsp+30h] [rbp-48h] BYREF
  int v43; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v44; // [rsp+38h] [rbp-40h]

  v0 = 0;
  v44 = __readfsqword(0x28u);
  v1 = (int *)&v37;
  sub_74F400(&v37, 60);
  v3 = (unsigned int *)&v42;
  v4 = qword_2CAA5C0;
  v5 = *qword_2CAA5C0;
  v6 = (unsigned __int8)*qword_2CAA5C0 | 0x20u;
  if ( ((unsigned __int8)*qword_2CAA5C0 | 0x20) == 0x72 )
    goto LABEL_70;
  do
  {
    if ( v5 == 122 )
    {
      v42 = 0;
      qword_2CAA5C0 = v4 + 1;
    }
    else if ( v5 == 95 )
    {
      qword_2CAA5C0 = v4 + 1;
      v42 = 0;
      v43 = sub_746C00(0, v0);
      sub_7506B0(&v42, &v43);
    }
    else
    {
      if ( (unsigned __int8)(v5 - 48) > 9u
        || (v16 = sub_74E4D0(&v37, &v42, v4, v6, v2),
            v17 = qword_2CAA5C0,
            v4 = qword_2CAA5C0 + 1,
            ++qword_2CAA5C0,
            *v17 != 95) )
      {
LABEL_35:
        sub_74E200(v1, v3, v4, v6);
      }
      v42 = 0;
      v18 = 0;
      v19 = v16 + 2;
      if ( v19 )
      {
        while ( 1 )
        {
          v20 = v18++;
          v43 = sub_746C00(v20, v0);
          sub_7506B0(&v42, &v43);
          if ( v19 == v18 )
            break;
          sub_750750(&v42);
        }
      }
    }
    if ( v0 )
      sub_750270(&v37, 15422);
    v1 = (int *)&v37;
    v3 = (unsigned int *)&v42;
    ++v0;
    sub_7506B0(&v37, &v42);
    v4 = qword_2CAA5C0;
    v5 = *qword_2CAA5C0;
    v6 = (unsigned __int8)*qword_2CAA5C0 | 0x20u;
  }
  while ( ((unsigned __int8)*qword_2CAA5C0 | 0x20) != 0x72 );
  if ( !v0 )
  {
LABEL_70:
    v1 = (int *)&v37;
    v3 = (unsigned int *)(&dword_40 + 1);
    sub_74F860(&v37, 65);
    v4 = qword_2CAA5C0;
  }
  v7 = v4 + 1;
  qword_2CAA5C0 = v4 + 1;
  if ( *v4 == 114 )
    goto LABEL_42;
  if ( v4[1] == 114 )
    goto LABEL_41;
  if ( (dword_2CAA5CC & 0xA0) == 0 )
  {
    sub_74F560(&v43, " where ", 7);
    v1 = (int *)&v37;
    v3 = (unsigned int *)&v43;
    sub_7506B0(&v37, &v43);
    v7 = qword_2CAA5C0;
  }
  v8 = 0;
  do
  {
    v38 = 0;
    v15 = (unsigned __int8)*v7;
    if ( (_BYTE)v15 == 87 )
    {
      qword_2CAA5C0 = v7 + 1;
      v38 = sub_74A5B0();
    }
    else if ( (_BYTE)v15 == 119 )
    {
      qword_2CAA5C0 = v7 + 1;
      v1 = (int *)(sub_747A20((__int64)v1, (__int64)v3, v15, (char *)v6, v2) & 0xFF00FFFF | 0xC00000);
      v38 = sub_74A4A0(v1);
    }
    else
    {
      v38 = sub_747A20((__int64)v1, (__int64)v3, v15, (char *)v6, v2);
    }
    v11 = qword_2CAA5C0;
    v39 = 0;
    ++qword_2CAA5C0;
    v12 = (unsigned __int8)*v11;
    if ( (_BYTE)v12 == 108 )
    {
      v4 = v11 + 2;
      v42 = 0;
      qword_2CAA5C0 = v11 + 2;
      v6 = (unsigned __int8)v11[1];
      switch ( (char)v6 )
      {
        case 'E':
        case 'M':
        case 'T':
        case 'e':
        case 'm':
          v35 = v11[1];
          sub_74F560(&v43, "Trivial", 7);
          v25 = v35;
          v42 = v43;
          if ( v35 == 84 )
            goto LABEL_60;
          if ( ((unsigned __int8)v35 | 0x20) == 0x6D )
          {
            sub_74F560(&v43, "AtMost", 6);
            sub_7506B0(&v42, &v43);
            v25 = v35;
          }
          v36 = v25;
          sub_74F860(&v42, 40);
          v3 = (unsigned int *)&v43;
          v1 = &v42;
          v43 = sub_747080(0, (char *)&qword_28, v26, v27, v28);
          sub_7506B0(&v42, &v43);
          v6 = (unsigned __int8)v36;
          if ( v36 > 96 )
            goto LABEL_58;
          v29 = qword_2CAA5C0;
          v4 = ++qword_2CAA5C0;
          if ( *v29 != 95 )
            goto LABEL_35;
          sub_750750(&v42);
          v43 = sub_747080(0, (char *)&v43, v30, v31, v32);
          sub_7506B0(&v42, &v43);
LABEL_58:
          sub_74F860(&v42, 41);
LABEL_60:
          if ( (dword_2CAA5CC & 0x400000) != 0 )
          {
LABEL_65:
            sub_74F810(&v43, 2112032, 3);
            v33 = v43;
            v34 = HIWORD(v43);
          }
          else
          {
LABEL_61:
            sub_74F400(&v43, 58);
            v33 = v43;
            v34 = HIWORD(v43);
          }
          v40[0] = v33;
          v40[1] = v34;
          v41 = sub_750E60(&v38, v40);
          v3 = (unsigned int *)&v42;
          v1 = &v43;
          v43 = sub_750D90(&v41, 95);
          v14 = sub_750E60(&v43, &v42);
          break;
        case 'N':
          sub_74F560(&v43, "Native", 6);
          v42 = v43;
          goto LABEL_64;
        case 'R':
LABEL_64:
          sub_74F560(&v43, "RefCountedObject", 16);
          sub_7506B0(&v42, &v43);
          if ( (dword_2CAA5CC & 0x400000) != 0 )
            goto LABEL_65;
          goto LABEL_61;
        case 'U':
          sub_74F560(&v43, "UnknownLayout", 13);
          v42 = v43;
          goto LABEL_60;
        default:
          goto LABEL_35;
      }
    }
    else
    {
      if ( (char)v12 <= 108 )
      {
        if ( (_BYTE)v12 == 67 )
        {
          v39 = sub_749930(32);
        }
        else if ( (_BYTE)v12 == 83 )
        {
          v39 = sub_7471D0((__int64)v1, (__int64)v3, v12, v9, v10);
          v4 = (char *)HIWORD(v39);
          if ( BYTE2(v39) == 64 )
          {
            if ( (_WORD)v39 )
            {
              v3 = (_DWORD *)(&qword_28 + 6);
              v1 = (int *)&v39;
              sub_74F860(&v39, 46);
            }
            v43 = sub_747920((__int64)v1, v3, (__int64)v4, v6, v13);
            sub_7506B0(&v39, &v43);
            BYTE2(v39) = 0x80;
            sub_7526B0(qword_2CAA5D0, &v39);
          }
          else if ( BYTE2(v39) != 0x80 && BYTE2(v39) != 32 )
          {
            goto LABEL_35;
          }
        }
        else
        {
LABEL_50:
          qword_2CAA5C0 = v11;
          v39 = sub_74A310();
        }
        sub_74F860(&v38, 58);
        v3 = &v39;
        v1 = &v38;
        sub_7506B0(&v38, &v39);
        v14 = v38;
        goto LABEL_23;
      }
      if ( (_BYTE)v12 != 122 )
        goto LABEL_50;
      sub_750270(&v38, 15677);
      v3 = (unsigned int *)&v43;
      v1 = &v38;
      v43 = sub_747AD0(nullptr, 15677, v22, v23, v24);
      v14 = sub_750E60(&v38, &v43);
    }
LABEL_23:
    v43 = v14;
    if ( (dword_2CAA5CC & 0xA0) == 0 )
    {
      if ( v8 )
        sub_750750(&v37);
      v1 = (int *)&v37;
      v8 = 1;
      v3 = (unsigned int *)&v43;
      sub_7506B0(&v37, &v43);
    }
    v7 = qword_2CAA5C0;
  }
  while ( *qword_2CAA5C0 != 114 );
  if ( (dword_2CAA5CC & 0xA0) != 0 )
  {
    sub_750340(&v37, 1);
    v7 = qword_2CAA5C0;
  }
LABEL_41:
  qword_2CAA5C0 = v7 + 1;
LABEL_42:
  sub_74F860(&v37, 62);
  if ( (dword_2CAA5CC & 8) != 0 )
    return 0;
  return v37;
}

