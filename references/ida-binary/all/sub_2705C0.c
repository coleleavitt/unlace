void __fastcall sub_2705C0(QT::QAbstractItemView *a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v4; // rax
  const __m128i *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // rax

  if ( *(int *)a2 >= 0 && *(int *)(a2 + 4) >= 0 )
  {
    if ( *(_QWORD *)(a2 + 16) )
    {
      v2 = *(_QWORD *)(a2 + 8);
      if ( !HIDWORD(v2) )
      {
        v4 = QT::QAbstractItemView::model(a1);
        if ( v2 < *(_QWORD *)(v4 + 24) )
        {
          v6 = (const __m128i *)(*(_QWORD *)(v4 + 16) + (v2 << 6));
          sub_26F840(v6, (__int64)a1);
          v7 = sub_277DF0();
          v8 = v6->m128i_i64[0];
          v9 = v7;
          v10 = sub_279D60((char *)a1 + 40);
          sub_278EA0(v9, v10, v8, 1);
        }
      }
    }
  }
}
