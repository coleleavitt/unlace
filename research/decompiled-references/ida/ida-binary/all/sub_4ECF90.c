QT::QWidget *__fastcall sub_4ECF90(__int64 a1, __int64 a2)
{
  QT::QWidget *v2; // rbx
  QT::QAbstractButton *v3; // rbp
  unsigned int v4; // edi
  __int64 v6; // rdx
  __int128 v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v2 = (QT::QWidget *)operator new(0x38u);
  sub_4AF8E0(v2, 0, *(_BYTE *)(a2 + 112) & 1);
  v3 = *((QT::QAbstractButton **)v2 + 5);
  v4 = **(_DWORD **)(a2 + 104);
  if ( v4 == -1 )
  {
    LODWORD(v7) = 0;
    *(_QWORD *)((char *)&v7 + 4) = 0xFFFF;
    WORD6(v7) = 0;
  }
  else
  {
    *(_QWORD *)&v7 = QT::QColor::fromRgb((QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(v4), 8), 0);
    *((_QWORD *)&v7 + 1) = v6;
  }
  sub_4AF280(v3, (int *)&v7);
  return v2;
}
