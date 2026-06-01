QT::QObject *__fastcall sub_479A70(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r8
  __int64 v5; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  QT::QObject *v9; // r14
  int v10; // eax
  __int64 v12; // rax
  int v13; // [rsp+Ch] [rbp-4Ch]
  __int64 v14; // [rsp+10h] [rbp-48h]
  __int64 v15; // [rsp+10h] [rbp-48h]
  int v16; // [rsp+18h] [rbp-40h]
  bool v17; // [rsp+1Fh] [rbp-39h]

  v4 = a1;
  v5 = 10;
  v13 = a4 & 1;
  v16 = a4 & 2;
  v7 = *(_QWORD *)(a1 + 320) - 1LL;
  v17 = (a3 & a2) == -1 || (a3 | ~a2) == 0;
  while ( 1 )
  {
    if ( v7 < 0 )
      v7 = 9;
    v8 = v4 + 32 * v7;
    if ( !*(_BYTE *)(v8 + 24) )
    {
      v9 = *(QT::QObject **)(v8 + 16);
      if ( v9 )
      {
        if ( !v13 || *(char *)(*((_QWORD *)v9 + 4) + 9LL) < 0 )
        {
          if ( !v16 || (v15 = v4, v12 = sub_4CF3F0(v9), v4 = v15, v12) )
          {
            if ( v17 )
              break;
            if ( QT::QCoreApplication::self )
            {
              v14 = v4;
              v10 = (*(__int64 (__fastcall **)(_QWORD *, QT::QObject *))(QT::QCoreApplication::self[2] + 56LL))(
                      QT::QCoreApplication::self + 2,
                      v9);
              v4 = v14;
              if ( v10 != -1 )
              {
                if ( a3 & ((unsigned __int64)((v10 & 0x40) != 0) << v10)
                   | a2 & ((unsigned __int64)((v10 & 0x40) == 0) << v10) )
                {
                  break;
                }
              }
            }
          }
        }
      }
    }
    --v7;
    if ( !--v5 )
      return nullptr;
  }
  return v9;
}
