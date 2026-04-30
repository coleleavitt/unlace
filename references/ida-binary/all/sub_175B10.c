unsigned __int64 __fastcall sub_175B10(__int64 a1, int *a2, __int64 a3, char a4)
{
  int v7; // ecx
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // edx
  int v11; // edx
  unsigned __int64 v12; // r8
  __int64 v13; // rdi
  __int128 v15; // rax
  _BYTE v16[8]; // [rsp+8h] [rbp-70h] BYREF
  __int128 v17; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v18[40]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v7 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 != -1 && v7 >= 0 )
  {
    v8 = *(_QWORD *)(a3 + 64);
    if ( v8 )
    {
      v9 = *(_QWORD *)(a3 + 56);
      if ( v7 >= v8 )
        v7 = v7 - v8 + *(_DWORD *)(v9 + 4 * v8 - 4) + 1;
      else
        v7 = *(_DWORD *)(v9 + 4LL * v7);
    }
    else
    {
      v7 = 0;
    }
  }
  *a2 = v7;
  v10 = *(_DWORD *)(a1 + 4);
  if ( v10 != 0x7FFFFFFF )
  {
    v11 = *(_DWORD *)a1 + v10;
    if ( v11 >= 0 )
    {
      v12 = *(_QWORD *)(a3 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(a3 + 56);
        if ( v11 >= v12 )
          v11 = v11 - v12 + *(_DWORD *)(v13 + 4 * v12 - 4) + 1;
        else
          v11 = *(_DWORD *)(v13 + 4LL * v11);
      }
      else
      {
        v11 = 0;
      }
    }
    v10 = v11 - v7;
  }
  a2[1] = v10;
  if ( *(_BYTE *)(a1 + 12) )
  {
    *(_QWORD *)&v15 = QT::QColor::fromRgba(
                        (QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(*(_DWORD *)(a1 + 8)), 8),
                        (unsigned int)a2);
    v17 = v15;
    QT::QBrush::QBrush(v16, &v17, 1);
    QT::QBrush::operator QT::QVariant(v18, v16);
    QT::QTextFormat::setProperty((QT::QTextFormat *)(a2 + 2), 2081, (const QT::QVariant *)v18);
    QT::QVariant::~QVariant((QT::QVariant *)v18);
    QT::QBrush::~QBrush((QT::QBrush *)v16);
    if ( a4 )
    {
      LODWORD(v17) = 1;
      *(_QWORD *)((char *)&v17 + 4) = 0;
      WORD6(v17) = 0;
      QT::QBrush::QBrush(v16, &v17, 1);
      QT::QBrush::operator QT::QVariant(v18, v16);
      QT::QTextFormat::setProperty((QT::QTextFormat *)(a2 + 2), 2080, (const QT::QVariant *)v18);
      QT::QVariant::~QVariant((QT::QVariant *)v18);
      QT::QBrush::~QBrush((QT::QBrush *)v16);
    }
  }
  return v19 - __readfsqword(0x28u);
}
