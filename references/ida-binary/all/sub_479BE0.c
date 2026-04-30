QT::QIcon *__fastcall sub_479BE0(QT::QIcon *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r15
  _QWORD *v4; // rbp
  __int64 v5; // r13
  const char *v7; // rsi
  _QWORD *v8; // rbx
  const char *v9; // rdi
  int v10; // eax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // r14d
  const char *v15; // rsi
  _QWORD *v16; // rdx
  unsigned __int64 v17; // rdi
  __int64 v18; // r8
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int8 *v23; // rdx
  unsigned __int8 *v24; // rax
  __int64 v25; // rsi
  _DWORD *v26; // rsi
  _QWORD *v30; // [rsp+18h] [rbp-50h]
  char v31[8]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-40h]

  v3 = (_QWORD *)a2[77];
  v32 = __readfsqword(0x28u);
  v4 = a2 + 76;
  v30 = a2 + 76;
  if ( !v3 )
  {
LABEL_18:
    v14 = -1;
    goto LABEL_19;
  }
  v5 = *(_QWORD *)(a3 + 8);
  while ( 1 )
  {
    v12 = v3[5];
    if ( !v5 )
      break;
    v7 = *(const char **)a3;
    v8 = v3;
    v9 = &s1;
    if ( v12 )
      goto LABEL_4;
LABEL_5:
    v10 = strcmp(v9, v7);
    v11 = (_QWORD *)v3[2];
    v3 = (_QWORD *)v3[3];
    if ( v10 >= 0 )
    {
      v4 = v8;
      v3 = v11;
    }
    if ( !v3 )
      goto LABEL_14;
  }
  if ( v12 )
  {
LABEL_12:
    v7 = &s1;
LABEL_4:
    v9 = (const char *)v3[4];
    v8 = v3;
    goto LABEL_5;
  }
  while ( 1 )
  {
    v13 = v3[2];
    if ( !v13 )
      break;
    v4 = v3;
    v3 = (_QWORD *)v3[2];
    if ( *(_QWORD *)(v13 + 40) )
      goto LABEL_12;
  }
  v4 = v3;
LABEL_14:
  v14 = -1;
  if ( v30 == v4 )
    goto LABEL_19;
  if ( v4[5] )
  {
    v15 = (const char *)v4[4];
    if ( v5 )
    {
LABEL_17:
      if ( strcmp(*(const char **)a3, v15) >= 0 )
        goto LABEL_34;
    }
    else if ( strcmp(&s1, v15) >= 0 )
    {
      goto LABEL_34;
    }
    goto LABEL_18;
  }
  v15 = &s1;
  if ( v5 )
    goto LABEL_17;
LABEL_34:
  v14 = *((_DWORD *)v4 + 14);
LABEL_19:
  QT::QIcon::QIcon((QT::QIcon *)v31);
  v16 = (_QWORD *)a2[73];
  if ( v16 )
  {
    v17 = v16[2];
    v18 = v16[4];
    v19 = (0xD6E8FEB86659FD93LL * (v16[3] ^ v14 ^ ((v16[3] ^ (unsigned __int64)v14) >> 32))) >> 32;
    v20 = (v17 - 1)
        & (((0xD6E8FEB86659FD93LL
           * (v19 ^ (0xD6E8FEB86659FD93LL * (v16[3] ^ v14 ^ ((v16[3] ^ (unsigned __int64)v14) >> 32))))) >> 32)
         ^ (0xD6E8FEB86659FD93LL
          * (v19 ^ (0xD6E8FEB86659FD93LL * (v16[3] ^ v14 ^ ((v16[3] ^ (unsigned __int64)v14) >> 32))))));
    v21 = v20 & 0x7F;
    v22 = v18 + 144 * (v20 >> 7);
LABEL_21:
    v23 = (unsigned __int8 *)(v22 + 128);
LABEL_22:
    v24 = (unsigned __int8 *)(v22 + v21);
    while ( 1 )
    {
      v25 = *v24;
      if ( v25 == 255 )
        break;
      v26 = (_DWORD *)(*(_QWORD *)v23 + 16 * v25);
      if ( *v26 == v14 )
      {
        if ( !v26 )
          break;
        QT::QIcon::QIcon(a1, (const QT::QIcon *)(v26 + 2));
        goto LABEL_30;
      }
      if ( ++v24 == v23 )
      {
        v22 += 144;
        v23 = v24 + 144;
        v21 = 0;
        if ( 0x8E38E38E38E38E39LL * ((v22 - v18) >> 4) != v17 >> 7 )
          goto LABEL_22;
        v22 = v18;
        goto LABEL_21;
      }
    }
  }
  QT::QIcon::QIcon(a1, (const QT::QIcon *)v31);
LABEL_30:
  QT::QIcon::~QIcon((QT::QIcon *)v31);
  return a1;
}
