__int128 *__fastcall sub_1E4F70(__int64 a1, int *a2, int *a3)
{
  __int64 v3; // rax
  QT::QAbstractScrollArea *v6; // rdi
  __int64 v7; // r12
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rcx
  int v15; // eax
  int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rdi
  double v19; // xmm0_8
  int v20; // eax
  int v22; // [rsp+Ch] [rbp-3Ch]
  _QWORD v23[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  v23[1] = __readfsqword(0x28u);
  if ( !*(_BYTE *)(v3 + 64)
    && (v6 = *(QT::QAbstractScrollArea **)(v3 + 56)) != nullptr
    && (v7 = *((_QWORD *)v6 + 111)) != 0 )
  {
    v9 = QT::QAbstractScrollArea::viewport(v6);
    v10 = QT::QWidget::mapTo(a1, *(_QWORD *)(a1 + 40), a2);
    v11 = *(_QWORD *)(a1 + 40);
    v23[0] = v10;
    v12 = QT::QWidget::mapFrom(v9, v11, v23);
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64))(*(_QWORD *)v7 + 184LL))(
            v7,
            (unsigned int)v12,
            HIDWORD(v12));
    if ( *a2 <= 2 )
      goto LABEL_10;
    v14 = *(_QWORD *)(a1 + 40);
    v15 = *a2 - 3;
    v16 = 2;
    if ( !*(_BYTE *)(v14 + 64) )
    {
      v17 = *(_QWORD *)(v14 + 56);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 888);
        if ( v18 )
        {
          v22 = *a2 - 3;
          v19 = sub_2856C0(v18, 2);
          v14 = *(_QWORD *)(a1 + 40);
          v15 = v22;
          v16 = (int)v19 + 2;
        }
      }
    }
    v20 = v15 / v16;
    if ( *(_DWORD *)(v14 + 224) <= v20 )
LABEL_10:
      v20 = -1;
    if ( a3 )
      *a3 = v20;
  }
  else
  {
    if ( a3 )
      *a3 = -1;
    return &xmmword_8C95C0;
  }
  return (__int128 *)v13;
}
