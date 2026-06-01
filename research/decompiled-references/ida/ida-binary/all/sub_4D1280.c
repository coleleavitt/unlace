__int64 __fastcall sub_4D1280(__int64 a1)
{
  __int64 v1; // rax
  __int64 (__fastcall *v2)(__int64); // rax
  int v3; // eax
  int *v4; // rbp
  int *i; // rbx
  const QT::QObject *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 (__fastcall *v11)(__int64, int); // rax
  int *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  int *v15; // rax
  int v17; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-30h]

  v1 = *(_QWORD *)a1;
  v18 = __readfsqword(0x28u);
  v2 = *(__int64 (__fastcall **)(__int64))(v1 + 464);
  if ( v2 == sub_4C46B0 )
    v3 = QT::QSplitter::count(*(QT::QSplitter **)(a1 + 104));
  else
    v3 = v2(a1);
  if ( v3 > 0 )
  {
    v4 = (int *)v3;
    for ( i = nullptr; i != v4; i = (int *)((char *)i + 1) )
    {
      while ( 1 )
      {
        v11 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 456LL);
        if ( v11 == sub_4C46E0 )
        {
          v6 = (const QT::QObject *)QT::QSplitter::widget(*(QT::QSplitter **)(a1 + 104), (int)i);
          v7 = QT::QMetaObject::cast((QT::QMetaObject *)&off_899980, v6);
        }
        else
        {
          v7 = v11(a1, (int)i);
        }
        if ( *(_BYTE *)(v7 + 44) && (__int64)i < *(_QWORD *)(a1 + 72) )
        {
          v12 = *(int **)(a1 + 56);
          if ( !v12 || *v12 > 1 )
            sub_187120(a1 + 56, 0, 0, 0, v9, v10);
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4LL * (_QWORD)i) )
          {
            v17 = 0;
            sub_2EDC10((int **)(a1 + 56), i, &v17, v8, v9, v10);
            v15 = *(int **)(a1 + 56);
            if ( !v15 || *v15 > 1 )
              break;
          }
        }
        i = (int *)((char *)i + 1);
        if ( i == v4 )
          return QT::QSplitter::setSizes(*(_QWORD *)(a1 + 104), a1 + 56);
      }
      sub_187120(a1 + 56, 0, 0, 0, v13, v14);
    }
  }
  return QT::QSplitter::setSizes(*(_QWORD *)(a1 + 104), a1 + 56);
}
