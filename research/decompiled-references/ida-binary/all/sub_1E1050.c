__int64 __fastcall sub_1E1050(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  const char *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  char v10; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 38 )
    sub_1DEEE0(a5, a1, a2, a3, a4);
  v6 = &s1;
  v7 = QT::QMetaObject::cast((QT::QMetaObject *)&off_882B40, *(const QT::QObject **)a2);
  if ( *(_QWORD *)(a1 + 40) )
    v6 = *(const char **)(a1 + 32);
  v10 = *(_DWORD *)(v7 + 1056) & 1;
  v8 = sub_534430(v6);
  if ( v8 )
    sub_537630(v8, 7, &v10);
  return (*(_DWORD *)(v7 + 1056) & 0x10000) == 0 ? 7 : 3;
}
