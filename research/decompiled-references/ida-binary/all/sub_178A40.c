__int64 __fastcall sub_178A40(__int64 a1)
{
  _BOOL4 v1; // r12d
  unsigned int v2; // ebp
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbp
  int *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbp
  int *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  int *v14; // rax

  v1 = 1;
  v2 = *(_DWORD *)(a1 + 32);
  QT::QAbstractScrollArea::setHorizontalScrollBarPolicy(*(_QWORD *)(a1 + 16), v2);
  QT::QAbstractScrollArea::setVerticalScrollBarPolicy(*(_QWORD *)(a1 + 16), v2);
  v5 = *(_QWORD *)(a1 + 16);
  if ( a1 != *(_QWORD *)(v5 + 896) )
    v1 = *(_QWORD *)(v5 + 904) == a1;
  v6 = *(int **)(v5 + 976);
  if ( !v6 || *v6 > 1 )
    sub_178660(v5 + 976, 0, 0, 0, v3, v4);
  (*(void (__fastcall **)(_QWORD, _BOOL4))(***(_QWORD ***)(v5 + 984) + 104LL))(**(_QWORD **)(v5 + 984), v1);
  v9 = *(_QWORD *)(a1 + 16);
  v10 = *(int **)(v9 + 976);
  if ( !v10 || *v10 > 1 )
    sub_178660(v9 + 976, 0, 0, 0, v7, v8);
  (*(void (__fastcall **)(_QWORD, _BOOL4))(**(_QWORD **)(*(_QWORD *)(v9 + 984) + 8LL) + 104LL))(
    *(_QWORD *)(*(_QWORD *)(v9 + 984) + 8LL),
    v1);
  v13 = *(_QWORD *)(a1 + 16);
  v14 = *(int **)(v13 + 976);
  if ( !v14 || *v14 > 1 )
    sub_178660(v13 + 976, 0, 0, 0, v11, v12);
  return (*(__int64 (__fastcall **)(_QWORD, _BOOL4))(**(_QWORD **)(*(_QWORD *)(v13 + 984) + 16LL) + 104LL))(
           *(_QWORD *)(*(_QWORD *)(v13 + 984) + 16LL),
           v1);
}
