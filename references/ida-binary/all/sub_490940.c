__int64 __fastcall sub_490940(__int64 a1, __int64 a2)
{
  QT::QAbstractItemView *v2; // rdi
  char v3; // al
  const char *v4; // rdx
  const char *v5; // rbp
  __int64 v6; // rax

  v2 = *(QT::QAbstractItemView **)(a2 + 328);
  if ( !v2 )
    return 6;
  v3 = sub_487D60(v2, a2);
  v4 = "Create folder with items...";
  if ( !v3 )
    v4 = "Create folder...";
  v5 = v4;
  v6 = sub_534430(*(_QWORD *)(a2 + 72));
  if ( v6 )
    sub_537630(v6, 1, v5);
  return 3;
}
