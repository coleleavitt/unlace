__int64 __fastcall sub_4E1A30(__int64 a1, __int64 a2, const char **a3, __int64 a4, int a5)
{
  const char *v9; // rsi
  __int64 *v10; // rdi
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v16; // r13
  const char *v17; // rsi
  const char *v18; // r12
  __int64 (__fastcall *v19)(__int64, __int64); // rcx
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  _BYTE v25[16]; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v26[2]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v27[11]; // [rsp+20h] [rbp-58h] BYREF

  v9 = *a3;
  v10 = *(__int64 **)(a2 + 16);
  v27[3] = __readfsqword(0x28u);
  v12 = sub_4DF1E0(v10, v9);
  if ( !v12 )
    goto LABEL_8;
  v13 = v12;
  if ( a5 == 8 )
    goto LABEL_12;
  if ( a5 <= 8 )
  {
    if ( a5 == 1 )
    {
      if ( !*(_DWORD *)(a4 + 4) && *(_DWORD *)(v12 + 116) != -1 )
      {
        (*(void (__fastcall **)(_BYTE *))(*QT::QCoreApplication::self + 136LL))(v25);
        QT::QIcon::operator QT::QVariant(a1, v25);
        QT::QIcon::~QIcon((QT::QIcon *)v25);
        return a1;
      }
    }
    else if ( a5 == 6 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL);
      if ( v14 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v14 + 8) + 48LL) & 1) != 0 )
        {
          QT::QFont::QFont((QT::QFont *)v25, (const QT::QFont *)(*(_QWORD *)(v14 + 32) + 56LL));
          if ( (unsigned __int8)sub_4E1500(*(_QWORD *)(a2 + 16), (QT::QFont *)v25, *(_DWORD *)(v13 + 108)) )
          {
            QT::QFont::operator QT::QVariant(a1, v25);
            QT::QFont::~QFont((QT::QFont *)v25);
            return a1;
          }
          QT::QFont::~QFont((QT::QFont *)v25);
        }
      }
    }
    goto LABEL_8;
  }
  if ( a5 != 9 )
  {
LABEL_8:
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = 2;
    *(_OWORD *)a1 = 0;
    return a1;
  }
  if ( (*(_BYTE *)(v12 + 108) & 0x10) != 0 )
  {
    QT::QColor::QColor(v27, 4);
    QT::QColor::operator QT::QVariant(a1, v27);
    return a1;
  }
LABEL_12:
  v16 = *(_QWORD *)(a2 + 16);
  LODWORD(v17) = *(_DWORD *)(v12 + 112);
  v18 = *a3;
  v19 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 320LL);
  if ( v19 == vault_files_dirtree_widget_t__::vfunc_40 )
  {
    if ( v18 == *(const char **)(v16 + 1688) )
    {
      v21 = *(_DWORD *)(v16 + 1696);
    }
    else
    {
      v20 = (unsigned int)v17;
      v17 = *a3;
      v21 = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v16 + 328LL))(v16, *a3, v20);
      *(_QWORD *)(v16 + 1688) = v18;
      *(_DWORD *)(v16 + 1696) = v21;
    }
  }
  else
  {
    v24 = (unsigned int)v17;
    v17 = *a3;
    v21 = ((__int64 (__fastcall *)(__int64, const char *, __int64))v19)(v16, *a3, v24);
  }
  if ( v21 == -1 )
    goto LABEL_8;
  v22 = QT::QColor::fromRgb((QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(v21), 8), (unsigned int)v17);
  v26[0] = v22;
  v26[1] = v23;
  if ( a5 == 9 )
    v27[0] = sub_518C40(v26);
  else
    v27[0] = v22;
  v27[1] = v23;
  QT::QColor::operator QT::QVariant(a1, v27);
  return a1;
}
