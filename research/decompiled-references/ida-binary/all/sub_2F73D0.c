__int64 __fastcall sub_2F73D0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int8 isChecked; // al
  unsigned __int8 v3; // al
  unsigned int v4; // ebp
  char v6; // cl
  __int16 v7; // dx
  __int16 v8; // ax
  __int16 v9; // dx
  char v10; // cl
  __int16 v11; // dx
  __int16 v12; // ax
  __int16 v13; // dx
  char v14; // cl
  __int16 v15; // dx
  __int16 v16; // ax
  __int16 v17; // dx
  char v18; // cl
  __int16 v19; // dx
  __int16 v20; // ax
  __int16 v21; // dx
  char v22; // cl
  __int16 v23; // dx
  __int16 v24; // ax
  __int16 v25; // dx
  char v26; // cl
  __int16 v27; // dx
  __int16 v28; // ax
  __int16 v29; // dx
  char v30; // cl
  __int16 v31; // ax
  __int16 v32; // dx
  char v33; // cl
  __int16 v34; // ax
  __int16 v35; // dx
  char v36; // cl
  __int16 v37; // ax
  __int16 v38; // dx
  _QWORD v39[5]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v39[1] = __readfsqword(0x28u);
  isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v1 + 104));
  setinf_flag(2, 1, isChecked);
  v3 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 64) + 112LL));
  setinf_flag(44, 4, v3);
  if ( (unsigned __int8)sub_357F80(v39, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 72LL), 0)
    && (setinf(12, v39[0]), v4 = sub_357F80(v39, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 80LL), 0), (_BYTE)v4) )
  {
    *(_QWORD *)(a1 + 48) = v39[0];
    v6 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 64) + 200LL));
    v7 = *(_WORD *)(a1 + 56);
    v8 = v7 & 0xFFFE;
    v9 = v7 | 1;
    if ( v6 )
      v8 = v9;
    *(_WORD *)(a1 + 56) = v8;
    v10 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 64) + 224LL));
    v11 = *(_WORD *)(a1 + 56);
    v12 = v11 & 0xFFFD;
    v13 = v11 | 2;
    if ( v10 )
      v12 = v13;
    *(_WORD *)(a1 + 56) = v12;
    v14 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 64) + 232LL));
    v15 = *(_WORD *)(a1 + 56);
    v16 = v15 & 0xFFFB;
    v17 = v15 | 4;
    if ( v14 )
      v16 = v17;
    *(_WORD *)(a1 + 56) = v16;
    v18 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 64) + 240LL));
    v19 = *(_WORD *)(a1 + 56);
    v20 = v19 & 0xFFF7;
    v21 = v19 | 8;
    if ( v18 )
      v20 = v21;
    *(_WORD *)(a1 + 56) = v20;
    v22 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 64) + 184LL));
    v23 = *(_WORD *)(a1 + 56);
    v24 = v23 & 0xFFEF;
    v25 = v23 | 0x10;
    if ( v22 )
      v24 = v25;
    *(_WORD *)(a1 + 56) = v24;
    v26 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 64) + 216LL));
    v27 = *(_WORD *)(a1 + 56);
    v28 = v27 & 0xFFDF;
    v29 = v27 | 0x20;
    if ( v26 )
      v28 = v29;
    *(_WORD *)(a1 + 56) = v28;
    v30 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 64) + 176LL));
    v31 = *(_WORD *)(a1 + 56);
    v32 = v31;
    HIBYTE(v31) &= ~0x10u;
    HIBYTE(v32) |= 0x10u;
    if ( v30 )
      v31 = v32;
    *(_WORD *)(a1 + 56) = v31;
    v33 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 64) + 208LL));
    v34 = *(_WORD *)(a1 + 56);
    v35 = v34;
    HIBYTE(v34) &= ~4u;
    HIBYTE(v35) |= 4u;
    if ( v33 )
      v34 = v35;
    *(_WORD *)(a1 + 56) = v34;
    v36 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 64) + 192LL));
    v37 = *(_WORD *)(a1 + 56);
    v38 = v37;
    HIBYTE(v37) |= 1u;
    HIBYTE(v38) &= ~1u;
    if ( !v36 )
      v37 = v38;
    *(_WORD *)(a1 + 56) = v37;
  }
  else
  {
    return 0;
  }
  return v4;
}
