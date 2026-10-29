QT::QVariant *__fastcall sub_2E6BE0(QT::QVariant *this, __int64 a2, int *a3, int a4)
{
  unsigned __int64 v4; // rax
  int v5; // edx
  unsigned __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rax
  size_t v9; // rax
  const char *v10; // rbp
  size_t v11; // rdx
  _QWORD *v13; // rsi
  _QWORD *v14; // r12
  void (__fastcall *v15)(void **, _QWORD *, _QWORD); // r13
  __int64 v16; // rax
  unsigned int v17; // eax
  const char *v18; // rcx
  __int64 v19; // rax
  void *ptr[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *a3;
  ptr[3] = (void *)__readfsqword(0x28u);
  if ( (v4 & 0x80000000) != 0LL || a3[1] < 0 || !*((_QWORD *)a3 + 2) )
    goto LABEL_18;
  v5 = *(_DWORD *)(a2 + 72);
  if ( v5 == 2 )
  {
    if ( v4 >= *(_QWORD *)(a2 + 24) )
      goto LABEL_18;
    v13 = *(_QWORD **)(*(_QWORD *)(a2 + 16) + 8 * v4);
    if ( !a4 )
    {
      v19 = v13[2];
      if ( v19 )
      {
        v9 = v19 - 1;
        v10 = (const char *)v13[1];
        v11 = v9 >> 63;
        goto LABEL_11;
      }
LABEL_38:
      LOBYTE(v11) = 0;
      v9 = 0;
      v10 = &s1;
      goto LABEL_11;
    }
  }
  else
  {
    if ( v5 )
    {
      if ( !a4 )
      {
        v18 = "No results found.";
        goto LABEL_30;
      }
    }
    else
    {
      v6 = *(_QWORD *)(a2 + 48);
      if ( v6 )
      {
        if ( v4 < v6 && !a4 )
        {
          v7 = *(_QWORD *)(a2 + 40) + 48 * v4;
          v8 = *(_QWORD *)(v7 + 8);
          if ( v8 )
          {
            v9 = v8 - 1;
            v10 = *(const char **)v7;
            v11 = v9 >> 63;
LABEL_11:
            if ( !v10 || (_BYTE)v11 )
            {
              v9 = 0;
              if ( v10 )
                v9 = strlen(v10);
            }
            QT::QString::fromUtf8(ptr, v9, v10);
            goto LABEL_14;
          }
          goto LABEL_38;
        }
LABEL_18:
        *((_QWORD *)this + 2) = 0;
        *((_QWORD *)this + 3) = 2;
        *(_OWORD *)this = 0;
        return this;
      }
      if ( !a4 )
      {
        v18 = "Type to search...";
LABEL_30:
        QT::QString::fromUtf8(ptr, 17, v18);
LABEL_14:
        QT::QVariant::QVariant(this, (const QT::QString *)ptr);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
        return this;
      }
    }
    if ( a4 == 7 )
    {
      QT::QVariant::QVariant(this, 132);
      return this;
    }
    if ( v4 >= *(_QWORD *)(a2 + 24) )
      goto LABEL_18;
    v13 = *(_QWORD **)(*(_QWORD *)(a2 + 16) + 8 * v4);
  }
  if ( a4 != 1 )
    goto LABEL_18;
  if ( v13[4] == 3 )
  {
    v14 = QT::QCoreApplication::self;
    v15 = *(void (__fastcall **)(void **, _QWORD *, _QWORD))(*QT::QCoreApplication::self + 136LL);
    v16 = (*(__int64 (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
    v17 = sub_304FC0(v14, v16);
    v15(ptr, v14, v17);
  }
  else
  {
    sub_2E6AB0((QT::QIcon *)ptr, (__int64)v13);
  }
  QT::QIcon::operator QT::QVariant(this, ptr);
  QT::QIcon::~QIcon((QT::QIcon *)ptr);
  return this;
}
