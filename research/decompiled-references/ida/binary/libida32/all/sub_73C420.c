__int64 __fastcall sub_73C420(unsigned __int64 a1, _DWORD *a2)
{
  char *v3; // rax
  char *v4; // rcx
  int v5; // eax
  unsigned __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rsi
  char *v14; // rsi
  unsigned int v15; // r12d
  int v16; // eax
  __int64 v17; // rsi
  unsigned int v18; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v19; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v20; // [rsp+8h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  v18 = 0;
  v3 = qword_2CAA5C0;
  v4 = ++qword_2CAA5C0;
  v5 = (unsigned __int8)*v3;
  v6 = (unsigned __int8)(v5 - 95);
  switch ( (char)v5 )
  {
    case '_':
      v7 = 0;
      goto LABEL_8;
    case 'a':
      v17 = 80;
      v15 = 5;
      goto LABEL_25;
    case 'b':
      v17 = 64;
      v15 = 4;
      goto LABEL_25;
    case 'd':
      v17 = 48;
      v15 = 3;
      goto LABEL_25;
    case 'i':
      v17 = 32;
      v15 = 2;
      goto LABEL_25;
    case 'o':
      v17 = 16;
      v15 = 1;
LABEL_25:
      v14 = (char *)&off_2B0EBC0 + v17;
      goto LABEL_19;
    case 's':
      v14 = (char *)&off_2B0EBC0;
      v15 = 0;
LABEL_19:
      sub_74F6A0(&v19, v14);
      sub_7506B0(&v18, &v19);
      if ( !(_BYTE)xmmword_2CA2E80 )
      {
        **((_DWORD **)&xmmword_2CA2E80 + 1) = v18;
        v16 = DWORD1(xmmword_2CA2E80);
        if ( v15 > 3 )
          v16 = DWORD1(xmmword_2CA2E80) | 0x4000000;
        DWORD1(xmmword_2CA2E80) = v16 & 0xFF8FFFFF;
      }
      sub_74F810(&v19, 6583411, 3);
      sub_750B70(&v18, &v19);
      return v18;
    case 't':
      sub_74F810(&v19, 6583411, 3);
      return v19;
    default:
      v7 = 0;
      break;
  }
  while ( 1 )
  {
    LOBYTE(v6) = v5 - 48;
    if ( (unsigned __int8)(v5 - 48) > 9u )
    {
      v6 = (unsigned int)(v5 - 55);
      if ( (unsigned __int8)(v5 - 65) > 0x19u )
        goto LABEL_32;
    }
    v7 = (unsigned int)(unsigned __int8)v6 + 36 * (_DWORD)v7;
    v6 = (unsigned __int64)(v4 + 1);
    qword_2CAA5C0 = v4 + 1;
    v5 = (unsigned __int8)*v4;
    if ( (_BYTE)v5 == 95 )
      break;
    ++v4;
  }
  v7 = (unsigned int)(v7 + 1);
LABEL_8:
  v8 = *((_QWORD *)&xmmword_2CA2E90 + 1);
  if ( (unsigned int)v7 >= *(_DWORD *)(*((_QWORD *)&xmmword_2CA2E90 + 1) + 2048LL) )
LABEL_32:
    sub_74E200(&qword_2CAA5C0, v7, v6, v4);
  if ( a2 && (v9 = (unsigned int)*a2, (_DWORD)v9) )
  {
    *a2 = 0;
    return sub_73BFA0((unsigned int *)(unsigned int)v7, a1, a1 + 8 * v9, nullptr, nullptr);
  }
  else
  {
    v10 = (unsigned int)v7;
    v11 = *(_QWORD *)(*((_QWORD *)&xmmword_2CA2E90 + 1) + 8LL * (unsigned int)v7);
    if ( v11 )
      sub_7506B0(&v18, v11);
    v12 = *(_QWORD *)(v8 + 8 * v10 + 1024);
    if ( v12 )
      sub_7506B0(&v18, v12);
    return v18;
  }
}

