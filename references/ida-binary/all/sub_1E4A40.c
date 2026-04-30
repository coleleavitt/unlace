unsigned __int64 __fastcall sub_1E4A40(__int64 a1)
{
  _QWORD *v1; // r12
  int v3; // ebp
  void (__fastcall *v4)(__int64, __int64, unsigned __int64 *, __int64); // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  int v9; // edi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  int v12; // edx
  int v13; // edi
  QT::QWidget *v14; // rax
  QT::QWidget *v15; // rbx
  double v17; // [rsp+8h] [rbp-30h]
  unsigned __int64 v18; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 64) )
    return v19 - __readfsqword(0x28u);
  v1 = *(_QWORD **)(a1 + 56);
  if ( !v1 || !v1[111] )
    return v19 - __readfsqword(0x28u);
  v17 = (double)(*(_DWORD *)(a1 + 224) * ((int)sub_2856C0() + 2));
  v3 = *(_DWORD *)(a1 + 220) & 1;
  if ( !v3 )
  {
    v4 = *(void (__fastcall **)(__int64, __int64, unsigned __int64 *, __int64))(a1 + 208);
    v5 = v1[116];
    v18 = 0;
    if ( v4 )
    {
      if ( *(_BYTE *)(a1 + 244) )
      {
        v7 = *(_QWORD *)(a1 + 248);
      }
      else
      {
        v6 = 0;
        if ( !*(_BYTE *)(a1 + 64) )
          v6 = *(_QWORD *)(a1 + 56);
        v7 = *(_QWORD *)(v6 + 728);
      }
      v4(a1, v5, &v18, v7);
      v8 = v18;
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 8LL))(v5, v1[91]);
      v18 = v8;
    }
    v9 = *(_DWORD *)(a1 + 240);
    if ( v8 )
    {
      v10 = *(_QWORD *)(a1 + 232);
      do
      {
        v11 = v8;
        ++v3;
        v8 /= v10;
      }
      while ( v11 >= v10 );
      v18 = v8;
      if ( v9 )
      {
        v12 = v3 % v9;
        v13 = v3 + v9 - v3 % v9;
        if ( v12 )
          v3 = v13;
      }
    }
    v17 = (double)v3 * sub_2855D0(v1[111]) + v17;
  }
  if ( v17 > 0.0 )
    v17 = v17 + 6.0;
  v14 = (QT::QWidget *)sub_2EDA50(a1, 1);
  v15 = v14;
  if ( !v14 )
    return v19 - __readfsqword(0x28u);
  if ( (double)(int)QT::QWidget::minimumSize(v14) != v17 || (double)(int)QT::QWidget::maximumSize(v15) != v17 )
    QT::QWidget::setFixedWidth(v15, (int)v17);
  return QT::QWidget::update(v15);
}
