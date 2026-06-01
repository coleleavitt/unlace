unsigned __int64 __fastcall sub_4D4E20(__int64 a1, __int64 a2)
{
  QT::QComboBox *v4; // r12
  __int64 v5; // rax
  size_t v6; // rax
  const char *v7; // r13
  size_t v8; // rdx
  double v9; // xmm0_8
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  int v13; // edi
  unsigned __int64 v14; // rsi
  int v15; // edi
  int v16; // esi
  unsigned int v17; // eax
  QT::QAbstractButton *v18; // rbp
  unsigned int v19; // esi
  void *ptr[4]; // [rsp+0h] [rbp-68h] BYREF
  int v22[6]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  sub_4D4100(a1, *(_DWORD *)a2);
  v4 = *(QT::QComboBox **)(*(_QWORD *)(a1 + 96) + 24LL);
  v5 = *(_QWORD *)(a2 + 48);
  if ( v5 )
  {
    v6 = v5 - 1;
    v7 = *(const char **)(a2 + 40);
    v8 = v6 >> 63;
  }
  else
  {
    LOBYTE(v8) = 0;
    v6 = 0;
    v7 = &s1;
  }
  if ( !v7 || (_BYTE)v8 )
  {
    v6 = 0;
    if ( v7 )
      v6 = strlen(v7);
  }
  v9 = QT::QString::fromUtf8(ptr, v6, v7);
  QT::QComboBox::setEditText(v4, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, double))(**(_QWORD **)(a1 + 80) + 248LL))(
          *(_QWORD *)(a1 + 80),
          0,
          0,
          v9);
  if ( v10 )
  {
    v11 = 0;
    v12 = 8LL * *(_QWORD *)(a2 + 16);
    while ( v12 != v11 )
    {
      v13 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 8) + (v11 >> 3));
      if ( !_bittest(&v13, v11 & 7) )
        break;
      if ( v10 == ++v11 )
        goto LABEL_20;
    }
    v14 = 0;
    while ( 1 )
    {
      if ( v14 < v12 )
      {
        v15 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 8) + (v14 >> 3));
        if ( _bittest(&v15, v14 & 7) )
          break;
      }
      if ( v10 == ++v14 )
        goto LABEL_20;
    }
    v16 = v14 + 1;
  }
  else
  {
LABEL_20:
    v16 = 0;
  }
  QT::QComboBox::setCurrentIndex(*(QT::QComboBox **)(*(_QWORD *)(a1 + 96) + 8LL), v16);
  v17 = *(_DWORD *)(a2 + 32);
  v18 = *(QT::QAbstractButton **)(a1 + 104);
  v19 = __ROR4__(_byteswap_ulong(v17), 8);
  if ( v17 == -1 )
    v19 = 255;
  QT::QColor::QColor((QT::QColor *)v22, v19);
  sub_4AF280(v18, v22);
  return v23 - __readfsqword(0x28u);
}
