__int64 __fastcall sub_4677A0(__int64 a1, QT::QObject *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v5; // [rsp+0h] [rbp-18h]
  __int64 v6; // [rsp+8h] [rbp-10h]
  __int64 v7; // [rsp+10h] [rbp-8h]

  QT::QObject::QObject(a2, nullptr);
  *(_QWORD *)a2 = &HintProvider___vtable;
  *((_QWORD *)a2 + 69) = 0;
  *((_QWORD *)a2 + 70) = 0;
  return sub_2D21B0((const QT::QObject **)a2, 0, 0, (__int64)&unk_5C2F25, v2, v3, v5, v6, v7);
}
