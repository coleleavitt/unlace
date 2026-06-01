__int64 __fastcall sub_18B520(__int64 a1, double a2, __m128 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // r12
  char *v11; // rdi
  double v12; // xmm0_8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // [rsp+0h] [rbp-48h] BYREF
  __int128 v16; // [rsp+8h] [rbp-40h]
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( (unsigned int)sub_1698A0(
                       0,
                       (int)"ICON WARNING\nHIDECANCEL\nThis will reset your shortcut configuration. Proceed?") != 1 )
    return v17 - __readfsqword(0x28u);
  *(_BYTE *)(*(_QWORD *)(a1 + 64) + 2LL) = 1;
  if ( (*(_BYTE *)(a1 + 56) & 8) != 0 )
    QT::QWidget::setEnabled(*(QT::QWidget **)(a1 + 200), 1);
  v5 = *(_QWORD *)(a1 + 128);
  v15 = 0;
  v16 = 0;
  sub_4A8AF0(v5, &v15, -1);
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15, &v15, v6, v7, v8);
  }
  v9 = *(_QWORD *)(a1 + 72);
  v10 = v9 + 8LL * *(_QWORD *)(a1 + 80);
  while ( v10 != v9 )
  {
    v11 = (char *)&s1;
    if ( *(_QWORD *)(*(_QWORD *)v9 + 40LL) )
      v11 = *(char **)(*(_QWORD *)v9 + 32LL);
    v9 += 8;
    sub_4B19C0(v11);
  }
  v12 = sub_4B0D20();
  sub_18A9E0(a1, **(unsigned __int8 **)(a1 + 64), *(unsigned __int8 *)(*(_QWORD *)(a1 + 64) + 1LL), v13, v14, v12, a3);
  sub_4A4600(*(_QWORD *)(a1 + 128), 0, 7, 0);
  sub_186C80(a1, 0xFFFFFFFF);
  return QT::QWidget::setFocus(*(_QWORD *)(a1 + 128), 7);
}
