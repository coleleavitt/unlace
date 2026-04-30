void __fastcall sub_4908A0(int a1, QT::QAbstractItemView **a2, double a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 (*v8)(); // rax
  __int64 v9; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v5 = **(_QWORD **)(a5 + 16);
      v6 = **(_QWORD **)(a5 + 8);
      v7 = QT::QAbstractItemView::model(a2[2]);
      v8 = *(__int64 (**)())(*(_QWORD *)v7 + 440LL);
      if ( v8 != sub_486530 )
      {
        v9 = ((__int64 (__fastcall *)(__int64))v8)(v7);
        if ( v9 )
        {
          if ( *(_BYTE *)(v9 + 64) )
            sub_490580((_QWORD *)v9, v5, a3);
        }
      }
      sub_48F2A0(a2[2], v6, 0x41u);
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x18u);
  }
}
