unsigned __int64 __fastcall sub_47F9F0(QT::QApplication *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  int *v3; // rax
  char **v4; // rdx
  char **v5; // rbp
  char **i; // r13
  char *v7; // rbx
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 *j; // r14
  QT::QApplication *v12; // [rsp+18h] [rbp-80h] BYREF
  void *ptr[4]; // [rsp+20h] [rbp-78h] BYREF
  void *v14; // [rsp+40h] [rbp-58h] BYREF
  char **v15; // [rsp+48h] [rbp-50h]
  __int64 v16; // [rsp+50h] [rbp-48h]
  unsigned __int64 v17; // [rsp+58h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v12 = a1;
  QT::QApplication::topLevelWidgets((QT::QApplication *)&v14);
  v3 = (int *)v14;
  if ( !v14 || *(int *)v14 > 1 )
  {
    sub_1A2030((__int64)&v14, 0, 0, 0, v1, v2);
    v3 = (int *)v14;
  }
  v4 = v15;
  v5 = v15;
  if ( !v3 || *v3 > 1 )
  {
    sub_1A2030((__int64)&v14, 0, 0, 0, v1, v2);
    v4 = v15;
  }
  for ( i = &v4[v16]; i != v5; ++v5 )
  {
    v7 = *v5;
    sub_47AAE0((__int64)v12, *v5);
    v8 = *((_QWORD *)v7 + 1);
    v9 = *(__int64 **)(v8 + 32);
    for ( j = &v9[*(_QWORD *)(v8 + 40)]; j != v9; ++v9 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(*v9 + 8) + 48LL) & 1) != 0 )
        sub_47AC60((__int64)v12, *v9, (__int64 *)&v12);
    }
  }
  if ( v14 && !_InterlockedSub((volatile signed __int32 *)v14, 1u) )
    free(v14);
  QT::QApplication::styleSheet((QT::QApplication *)ptr);
  QT::QString::fromUtf8(&v14, 0, (const char *)&unk_5C2F25);
  QT::QApplication::setStyleSheet(a1, (const QT::QString *)&v14);
  if ( v14 && !_InterlockedSub((volatile signed __int32 *)v14, 1u) )
    free(v14);
  QT::QApplication::setStyleSheet(a1, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v17 - __readfsqword(0x28u);
}
