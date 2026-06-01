__int64 __fastcall sub_4C8370(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // ebp
  __int64 v6; // rdx
  __int64 (__fastcall ***v7)(_QWORD); // r15
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14[9]; // [rsp+0h] [rbp-48h] BYREF

  v14[1] = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  if ( !QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, *(const QT::QObject **)(*(_QWORD *)(a2 + 8) + 16LL)) )
  {
    v4 = *(_QWORD *)(a2 + 8);
    if ( *(__int64 *)(v4 + 40) > 0 )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = *(__int64 (__fastcall ****)(_QWORD))(*(_QWORD *)(v4 + 32) + 8 * v6);
        if ( (_UNKNOWN **)(**v7)(v7) == &off_898320 )
        {
          v11 = *(int **)(a1 + 16);
          v14[0] = (__int64)v7;
          sub_4C8090((int **)a1, v11, v14, v8, v9, v10);
          if ( !*(_QWORD *)a1 || **(int **)a1 > 1 )
            sub_4BCCA0(a1, 0, 0, 0, v12, v13);
        }
        v4 = *(_QWORD *)(a2 + 8);
        v6 = ++v5;
      }
      while ( v5 < *(_QWORD *)(v4 + 40) );
    }
  }
  return a1;
}
