__int64 __fastcall sub_446AE0(QT::QAbstractItemView *a1, _QWORD *a2)
{
  __int64 v3; // rax
  const char *v4; // rsi
  __int64 v5; // rbx
  char v6; // al
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v10; // [rsp+8h] [rbp-40h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h] BYREF
  __int128 v12; // [rsp+18h] [rbp-30h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v3 = QT::QAbstractItemView::model(a1);
  v4 = (const char *)&v11;
  v11 = 0;
  v5 = v3;
  v12 = 0;
  v6 = sub_442E70(v3, &v11, a2);
  v7 = v11;
  if ( v6 && (v4 = (const char *)&v10, (unsigned __int8)sub_4463F0(v5, &v10, (__int64)&v11, 0)) )
    v8 = v10;
  else
    v8 = 0;
  if ( v7 )
    qfree(v7, v4);
  return v8;
}
