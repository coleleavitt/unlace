void __fastcall sub_26E6D0(QT::QAbstractItemView *a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rax

  if ( *(int *)a2 >= 0 && *(int *)(a2 + 4) >= 0 )
  {
    if ( *(_QWORD *)(a2 + 16) )
    {
      v2 = *(_QWORD *)(a2 + 8);
      if ( !HIDWORD(v2) )
      {
        v3 = QT::QAbstractItemView::model(a1);
        if ( v2 < *(_QWORD *)(v3 + 24) )
        {
          v4 = (__int64 *)(*(_QWORD *)(v3 + 16) + (v2 << 6));
          v5 = sub_277DF0();
          v6 = *v4;
          v7 = v5;
          v8 = sub_279D60((char *)a1 + 40);
          sub_278EA0(v7, v8, v6, 0);
        }
      }
    }
  }
}
