QT::QVariant *__fastcall sub_3DF390(QT::QVariant *this, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // r14
  unsigned __int64 v12; // r12
  size_t v13; // rax
  const char *v14; // r14
  unsigned __int64 v15; // rdx
  double v16; // xmm0_8
  int v17; // eax
  unsigned __int64 v18; // r12
  __int64 v19; // rdx
  const void *v20; // r14
  __int64 v21; // rax
  size_t v22; // rax
  const char *v23; // r14
  size_t v24; // rdx
  unsigned __int64 v25; // r12
  void *dest; // [rsp+0h] [rbp-80h] BYREF
  __int128 v27; // [rsp+8h] [rbp-78h]
  void *ptr[4]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v29[8]; // [rsp+40h] [rbp-40h] BYREF

  v29[3] = __readfsqword(0x28u);
  if ( a4 == 9 )
  {
    v7 = *(_QWORD *)(a3 + 8);
    v8 = *(_DWORD *)(a3 + 4);
    if ( !v7 )
    {
      if ( (*(_DWORD *)a3 | v8) >= 0 && *(_QWORD *)(a3 + 16) )
        v7 = 0;
      else
        v7 = *(_QWORD *)(a2 + 32);
    }
    if ( v8 == 1 )
    {
      if ( !*(_BYTE *)(v7 + 169) )
        goto LABEL_7;
    }
    else if ( v8 != 3 || !*(_BYTE *)(v7 + 265) )
    {
      goto LABEL_7;
    }
    v29[0] = QT::QColor::fromRgb((QT::QColor *)0xFF0000, a2);
    v29[1] = v9;
    QT::QColor::operator QT::QVariant(this, v29);
    return this;
  }
  if ( a4 > 9 )
  {
    if ( a4 == 13 )
    {
      QT::QVariant::QVariant(this, 0x1400000001LL);
      return this;
    }
LABEL_7:
    *((_QWORD *)this + 2) = 0;
    *((_QWORD *)this + 3) = 2;
    *(_OWORD *)this = 0;
    return this;
  }
  if ( (a4 & 0xFFFFFFFD) != 0 )
    goto LABEL_7;
  v10 = *(_DWORD *)(a3 + 4);
  v11 = *(_QWORD *)(a3 + 8);
  if ( !v11 )
  {
    if ( (*(_DWORD *)a3 | v10) >= 0 && *(_QWORD *)(a3 + 16) )
      v11 = 0;
    else
      v11 = *(_QWORD *)(a2 + 32);
  }
  if ( *(_DWORD *)(v11 + 56) == 4 )
  {
    if ( v10 )
      goto LABEL_7;
    v17 = *(_DWORD *)(v11 + 372);
    if ( v17 == 3 )
    {
      QT::QVariant::QVariant(this, 13, "Next items...");
      return this;
    }
    if ( v17 == 2 )
    {
      QT::QVariant::QVariant(this, 17, "Previous items...");
      return this;
    }
    dest = nullptr;
    v27 = 0;
    goto LABEL_35;
  }
  dest = nullptr;
  v27 = 0;
  if ( v10 == 2 )
  {
    print_tinfo(&dest, 0, 0, 0, 0, v11 + 72, 0, 0);
    v21 = v27;
LABEL_38:
    if ( v21 )
    {
      v22 = v21 - 1;
      v23 = (const char *)dest;
      v24 = v22 >> 63;
LABEL_48:
      if ( !v23 || (_BYTE)v24 )
      {
        v22 = 0;
        if ( v23 )
          v22 = strlen(v23);
      }
      v16 = QT::QString::fromUtf8(ptr, v22, v23, ptr, a5, a6, dest, v27);
      goto LABEL_51;
    }
LABEL_47:
    LOBYTE(v24) = 0;
    v22 = 0;
    v23 = &s1;
    goto LABEL_48;
  }
  if ( v10 > 2 )
  {
    if ( v10 != 3 )
      goto LABEL_47;
    v25 = *(_QWORD *)(v11 + 224);
    if ( v25 < 2 )
      goto LABEL_47;
    dest = (void *)qvector_reserve(&dest, 0, *(_QWORD *)(v11 + 224), 1);
    *(_QWORD *)&v27 = v25;
    *((char *)dest + v25 - 1) = 0;
    memcpy(dest, *(const void **)(v11 + 216), v25 - 1);
    v21 = v27;
    goto LABEL_38;
  }
  if ( !v10 )
  {
LABEL_35:
    if ( &dest == (void **)(v11 + 80) )
      goto LABEL_47;
    v18 = *(_QWORD *)(v11 + 88);
    if ( v18 < 2 )
      goto LABEL_47;
    v19 = *(_QWORD *)(v11 + 88);
    v20 = *(const void **)(v11 + 80);
    dest = (void *)qvector_reserve(&dest, 0, v19, 1);
    *(_QWORD *)&v27 = v18;
    memmove(dest, v20, v18 - 1);
    *((char *)dest + v18 - 1) = 0;
    v21 = v27;
    goto LABEL_38;
  }
  if ( v10 != 1 )
    goto LABEL_47;
  v12 = *(_QWORD *)(v11 + 128);
  if ( v12 >= 2
    && (dest = (void *)qvector_reserve(&dest, 0, *(_QWORD *)(v11 + 128), 1),
        *(_QWORD *)&v27 = v12,
        *((char *)dest + v12 - 1) = 0,
        memcpy(dest, *(const void **)(v11 + 120), v12 - 1),
        (_QWORD)v27) )
  {
    v13 = v27 - 1;
    v14 = (const char *)dest;
    v15 = (unsigned __int64)(v27 - 1) >> 63;
  }
  else
  {
    LOBYTE(v15) = 0;
    v13 = 0;
    v14 = &s1;
  }
  if ( !v14 || (_BYTE)v15 )
  {
    v13 = 0;
    if ( v14 )
      v13 = strlen(v14);
  }
  v16 = QT::QString::fromUtf8(ptr, v13, v14);
LABEL_51:
  QT::QVariant::QVariant(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( dest )
  {
    *(_QWORD *)&v27 = 0;
    qfree(dest, (const char *)ptr, v16);
  }
  return this;
}
