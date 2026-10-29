__int64 __fastcall sub_4D13E0(__int64 a1)
{
  int v1; // ebp
  __int64 (__fastcall *v2)(__int64); // rax
  int v3; // eax
  __int64 v4; // rbx
  int v5; // eax
  __int64 (__fastcall *v6)(__int64); // rax
  int v7; // eax
  int v8; // r15d
  __int64 v9; // r12
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // [rsp+Ch] [rbp-5Ch] BYREF
  void *ptr[11]; // [rsp+10h] [rbp-58h] BYREF

  v1 = 0;
  ptr[3] = (void *)__readfsqword(0x28u);
  while ( v1 < (*(int (__fastcall **)(__int64))(*(_QWORD *)a1 + 464LL))(a1) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 456LL))(a1, (unsigned int)v1);
    v5 = *(_DWORD *)(v4 + 40);
    if ( v5 == 1 )
    {
      if ( v4 )
      {
        v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 464LL);
        if ( v6 == sub_4C46B0 )
          v7 = QT::QSplitter::count(*(QT::QSplitter **)(v4 + 104));
        else
          v7 = v6(v4);
        if ( v7 == 1 )
          goto LABEL_23;
        if ( *(_DWORD *)(a1 + 40) == 1 )
        {
          v8 = QT::QSplitter::orientation(*(QT::QSplitter **)(a1 + 104));
          if ( (unsigned int)QT::QSplitter::orientation(*(QT::QSplitter **)(v4 + 104)) == v8 )
            goto LABEL_23;
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 464LL))(a1) == 1 )
          {
            QT::QSplitter::sizes((QT::QSplitter *)ptr);
            v9 = *(_QWORD *)(a1 + 104);
            v10 = QT::QSplitter::orientation(*(QT::QSplitter **)(v4 + 104));
            QT::QSplitter::setOrientation(v9, v10);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 528LL))(a1, v4);
            v17 = 0;
            sub_2EDC10((int **)ptr, (int *)ptr[2], &v17, v11, v12, v13);
            if ( !ptr[0] || *(int *)ptr[0] > 1 )
              sub_187120((__int64)ptr, 0, 0, 0, v14, v15);
            QT::QSplitter::setSizes(*(_QWORD *)(a1 + 104), ptr);
            if ( ptr[0] )
            {
              if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
                free(ptr[0]);
            }
            return 1;
          }
        }
      }
    }
    else if ( v5 == 2 && v4 )
    {
      v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 464LL);
      v3 = v2 == sub_4C46A0 ? QT::QStackedWidget::count(*(QT::QStackedWidget **)(v4 + 72)) : v2(v4);
      if ( v3 == 1 )
      {
LABEL_23:
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 528LL))(a1, v4);
        return 1;
      }
    }
    ++v1;
  }
  return 0;
}
