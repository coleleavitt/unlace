unsigned __int64 __fastcall sub_270650(QT::QAbstractItemView *this)
{
  _DWORD *v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64); // rax
  int v4; // r13d
  __int64 v5; // rdi
  __int64 (*v6)(); // rdx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  _QWORD *(__fastcall *v15)(__int64, __int64, int, int, __int64); // rax
  const __m128i *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // [rsp+0h] [rbp-98h]
  __int64 v20; // [rsp+8h] [rbp-90h]
  __int64 v21; // [rsp+10h] [rbp-88h]
  const __m128i *v22; // [rsp+18h] [rbp-80h]
  _QWORD v23[4]; // [rsp+20h] [rbp-78h] BYREF
  _DWORD v24[2]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-50h]
  __int64 v26; // [rsp+50h] [rbp-48h]
  unsigned __int64 v27; // [rsp+58h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v23[0] = -1;
  v21 = QT::QAbstractItemView::model(this);
  v23[1] = 0;
  v23[2] = 0;
  v2 = (_DWORD *)QT::QAbstractItemView::model(this);
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 120LL);
  if ( v3 == sub_26E600 )
    v4 = v2[6];
  else
    v4 = v3((__int64)v2, (__int64)v23);
  v5 = QT::QAbstractItemView::model(this);
  v6 = *(__int64 (**)())(*(_QWORD *)v5 + 128LL);
  v7 = 1;
  if ( v6 != sub_26E630 )
    v7 = ((__int64 (__fastcall *)(__int64, _QWORD *))v6)(v5, v23);
  if ( v4 > 0 )
  {
    v8 = 0;
    HIDWORD(v20) = v7 - 1;
    do
    {
      v14 = QT::QAbstractItemView::model(this);
      v15 = *(_QWORD *(__fastcall **)(__int64, __int64, int, int, __int64))(*(_QWORD *)v14 + 96LL);
      if ( v15 == sub_26E570 )
        sub_26E570((__int64)v24, v14, v8, SHIDWORD(v20), (__int64)v23);
      else
        v15((__int64)v24, v14, v8, HIDWORD(v20), (__int64)v23);
      if ( (v24[1] | v24[0]) >= 0 )
      {
        if ( v26 )
        {
          v9 = QT::QAbstractItemView::model(this);
          if ( (*(unsigned __int8 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v9 + 136LL))(v9, v24) )
          {
            if ( (unsigned __int8)QT::QTreeView::isExpanded(this, v24, v10, v11, v12, v13, v19, v20, v21)
              && !HIDWORD(v25) )
            {
              v17 = (const __m128i *)(*(_QWORD *)(v21 + 16) + (v25 << 6));
              v18 = v17[3].m128i_i64[1];
              if ( v18 )
              {
                v22 = (const __m128i *)(*(_QWORD *)(v21 + 16) + (v25 << 6));
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 32LL))(v18);
                v17 = v22;
                v22[3].m128i_i64[1] = 0;
              }
              sub_26F840(v17, (__int64)this);
            }
          }
        }
      }
      ++v8;
    }
    while ( v4 != v8 );
  }
  return v27 - __readfsqword(0x28u);
}
