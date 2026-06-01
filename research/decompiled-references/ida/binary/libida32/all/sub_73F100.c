__int64 __fastcall sub_73F100(unsigned int *a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5)
{
  unsigned int *v5; // rbp
  char *v6; // rax
  char *v7; // rdx
  int v8; // eax
  unsigned int v10; // eax
  char *v11; // rax
  __int64 v12; // rcx
  char *v13; // rax
  char *v14; // rdx
  unsigned int v15; // eax
  char *v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // r14d
  char v19; // al
  char v20; // r15
  int v21; // eax
  char *v22; // rax
  __int64 v23; // r15
  unsigned int *v24; // rax
  __int64 v25; // rcx
  char *v26; // rax
  int i; // eax
  __int64 v28; // r8
  bool v29; // zf
  int v30; // eax
  __int64 v31; // rbx
  unsigned int *v32; // rax
  __int64 v33; // rcx
  int v34; // edx
  char *v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r15
  unsigned int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned int v41; // [rsp+0h] [rbp-48h] BYREF
  int v42; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v43; // [rsp+8h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v5 = a1;
  v41 = 0;
  if ( a1 && *a1 == -1 )
  {
    *a1 = 0;
LABEL_11:
    v11 = qword_2CAA5C0;
    v7 = ++qword_2CAA5C0;
    if ( *v11 != 69 )
      goto LABEL_55;
    sub_750270(&v41, 14906);
    if ( *qword_2CAA5C0 == 115 )
    {
      ++qword_2CAA5C0;
      sub_74F560(&v42, "`string literal'", 16);
    }
    else
    {
      v42 = sub_73F100(v5);
    }
    sub_7506B0(&v41, &v42);
    v13 = qword_2CAA5C0;
    if ( *qword_2CAA5C0 == 95 )
    {
      v14 = ++qword_2CAA5C0;
      if ( v13[1] != 110 )
        sub_73BC30(0, (__int64)&v42, (__int64)v14, v12);
    }
    return v41;
  }
  v6 = qword_2CAA5C0;
  v7 = (char *)(unsigned __int8)*qword_2CAA5C0;
  if ( (_BYTE)v7 == 83 )
  {
    ++qword_2CAA5C0;
    if ( v6[1] != 116 )
    {
      a2 = 0;
      a1 = nullptr;
      v41 = sub_73C420(0, nullptr);
LABEL_7:
      if ( *qword_2CAA5C0 == 73 )
      {
        v31 = *((_QWORD *)&xmmword_2CA2E90 + 1);
        if ( !(_WORD)v41 || *(_DWORD *)(*((_QWORD *)&xmmword_2CA2E90 + 1) + 2048LL) > 0x7Fu )
          goto LABEL_55;
        v32 = (unsigned int *)sub_74E510(a1, a2);
        *v32 = v41;
        v33 = *(unsigned int *)(v31 + 2048);
        v34 = *(_DWORD *)(v31 + 2048);
        *(_QWORD *)(v31 + 8 * v33) = v32;
        v35 = (char *)(unsigned int)(v34 + 1);
        *(_DWORD *)(v31 + 2048) = (_DWORD)v35;
        *(_QWORD *)(v31 + 8 * v33 + 1024) = 0;
        v42 = sub_73D530(nullptr, (unsigned int *)a2, v35, v33, v36);
        sub_7506B0(&v41, &v42);
      }
      return v41;
    }
    qword_2CAA5C0 = v6 + 2;
    sub_74F810(&v42, 6583411, 3);
    sub_7506B0(&v41, &v42);
    a2 = 14906;
    a1 = &v41;
    sub_750270(&v41, 14906);
LABEL_6:
    v8 = sub_73E4E0(a1, a2, (__int64)v7, (__int64)a4, a5);
    a2 = (__int64)&v42;
    a1 = &v41;
    v42 = v8;
    sub_7506B0(&v41, &v42);
    goto LABEL_7;
  }
  if ( (_BYTE)v7 == 90 )
  {
    ++qword_2CAA5C0;
    if ( (unsigned __int8)++byte_2CA2E70 > 3u )
      goto LABEL_55;
    a2 = 0;
    a1 = nullptr;
    v5 = nullptr;
    v10 = sub_73E820(nullptr, 0, (__int64)v7, (__int64)a4, a5);
    --byte_2CA2E70;
    v41 = v10;
    goto LABEL_11;
  }
  if ( (_BYTE)v7 != 78 )
    goto LABEL_6;
  ++qword_2CAA5C0;
  v15 = sub_73BBC0();
  v7 = qword_2CAA5C0;
  v18 = v15;
  v19 = *qword_2CAA5C0;
  if ( *qword_2CAA5C0 == 79 || v19 == 82 )
  {
    v29 = v19 == 79;
    v30 = 256;
    if ( v29 )
      v30 = 512;
    v16 = ++qword_2CAA5C0;
    v18 |= v30;
    v19 = *++v7;
  }
  v20 = 0;
  if ( v19 == 83 )
    goto LABEL_30;
LABEL_22:
  if ( v19 == 84 )
  {
    v37 = xmmword_2CA2E90;
    qword_2CAA5C0 = v7 + 1;
    v38 = sub_73BCE0((__int64)a1, a2, (__int64)(v7 + 1), (__int64)v16, v17);
    for ( i = *(_DWORD *)sub_752810(v37, v38, v39, v40); ; i = sub_73C420(0, nullptr) )
    {
      a2 = (__int64)&v42;
      v42 = i;
      sub_7506B0(&v41, &v42);
      v22 = qword_2CAA5C0;
      v7 = (char *)(unsigned __int8)*qword_2CAA5C0;
      if ( (_BYTE)v7 == 69 )
        break;
      v20 = 1;
      if ( (_BYTE)v7 == 73 )
      {
        while ( 1 )
        {
LABEL_33:
          v28 = (unsigned int)xmmword_2CA2E80;
          if ( !(_DWORD)xmmword_2CA2E80 )
            *(_WORD *)(xmmword_2CA2E90 + 8) = 0;
          a1 = &v41;
          v42 = sub_73D530(nullptr, (unsigned int *)a2, v7, (__int64)&xmmword_2CA2E80, v28);
          sub_7506B0(&v41, &v42);
          a4 = &xmmword_2CA2E80;
          v22 = qword_2CAA5C0;
          a2 = (unsigned int)xmmword_2CA2E80;
          v7 = (char *)(unsigned __int8)*qword_2CAA5C0;
          if ( (_DWORD)xmmword_2CA2E80 )
            break;
          if ( (_BYTE)v7 != 73 )
          {
            if ( (_BYTE)v7 == 69 )
              goto LABEL_47;
LABEL_25:
            v23 = *((_QWORD *)&xmmword_2CA2E90 + 1);
            if ( (_WORD)v41 && *(_DWORD *)(*((_QWORD *)&xmmword_2CA2E90 + 1) + 2048LL) <= 0x7Fu )
            {
              v24 = (unsigned int *)sub_74E510(&v41, a2);
              *v24 = v41;
              v25 = *(unsigned int *)(v23 + 2048);
              *(_QWORD *)(v23 + 8 * v25) = v24;
              v26 = qword_2CAA5C0;
              *(_DWORD *)(v23 + 2048) = v25 + 1;
              *(_QWORD *)(v23 + 8 * v25 + 1024) = 0;
              v7 = (char *)(unsigned __int8)*v26;
              v20 = 0;
              goto LABEL_28;
            }
LABEL_55:
            sub_74E200(a1, a2, v7, a4);
          }
          if ( !v20 )
            goto LABEL_25;
        }
        if ( (_BYTE)v7 == 69 )
          break;
        if ( !v20 )
          goto LABEL_25;
LABEL_28:
        if ( (_BYTE)v7 == 73 )
          goto LABEL_33;
      }
      a2 = 14906;
      a1 = &v41;
      sub_750270(&v41, 14906);
      v7 = qword_2CAA5C0;
      v19 = *qword_2CAA5C0;
      if ( *qword_2CAA5C0 != 83 )
        goto LABEL_22;
LABEL_30:
      qword_2CAA5C0 = v7 + 1;
    }
  }
  else
  {
    if ( v19 == 73 )
      goto LABEL_33;
    v21 = sub_73E4E0(a1, a2, (__int64)v7, (__int64)v16, v17);
    a2 = (__int64)&v42;
    a1 = &v41;
    v42 = v21;
    sub_7506B0(&v41, &v42);
    v22 = qword_2CAA5C0;
    if ( *qword_2CAA5C0 != 69 )
      goto LABEL_25;
  }
LABEL_47:
  qword_2CAA5C0 = v22 + 1;
  if ( v5 )
  {
    *v5 = v18;
  }
  else if ( v18 )
  {
    sub_74FB30(&v41);
  }
  return v41;
}

