void __fastcall sub_531710(double a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, char a6, int a7)
{
  _QWORD *v8; // rax
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // r9d
  __int64 *v12; // r12
  __int64 v13; // rbp
  __int64 v14; // r15
  __int64 v15; // rdx
  char v16; // al
  const char *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // [rsp+18h] [rbp-50h]
  int v22; // [rsp+24h] [rbp-44h]
  int v23; // [rsp+2Ch] [rbp-3Ch]

  v22 = a3;
  v23 = a6 & 1;
  if ( (a6 & 1) != 0 )
  {
    v8 = QT::QCoreApplication::self;
    if ( !QT::QCoreApplication::self )
      return;
  }
  else
  {
    LODWORD(a3) = a4;
    a1 = callui(136, a4, a4, (_DWORD)a5, 0, a7);
    v8 = QT::QCoreApplication::self;
    if ( !QT::QCoreApplication::self )
    {
LABEL_17:
      callui(137, a3, (_DWORD)callui, v9, v10, v11);
      return;
    }
  }
  v12 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(v8[2] + 32LL))(v8 + 2);
  do
  {
    v13 = v12[1];
    if ( v13 )
    {
      v14 = 0;
      while ( 2 )
      {
        v15 = *v12;
        a3 = *(_QWORD *)(*v12 + 8 * v14);
        if ( a5 )
        {
          while ( 1 )
          {
            v21 = v15;
            v16 = sub_531630(a5, (_QWORD *)a3);
            v15 = v21;
            if ( v16 )
              break;
            if ( v13 == ++v14 )
              goto LABEL_15;
            a3 = *(_QWORD *)(v21 + 8 * v14);
          }
        }
        switch ( *(_DWORD *)(a3 + 120) )
        {
          case 0:
          case 4:
            goto LABEL_14;
          case 1:
          case 5:
            if ( v22 == 9 )
              goto LABEL_10;
            goto LABEL_14;
          case 2:
          case 6:
            if ( (unsigned int)(v22 - 7) <= 2 )
              goto LABEL_10;
            goto LABEL_14;
          case 3:
          case 7:
LABEL_10:
            v17 = &s1;
            if ( *(_QWORD *)(a3 + 40) )
              v17 = *(const char **)(a3 + 32);
            *(_QWORD *)(a4 + 72) = v17;
            if ( QT::QCoreApplication::self )
              (*(void (__fastcall **)(_QWORD *, __int64, __int64))(QT::QCoreApplication::self[2] + 112LL))(
                QT::QCoreApplication::self + 2,
                a3,
                a4);
LABEL_14:
            if ( v13 == ++v14 )
              break;
            continue;
          default:
            if ( under_debugger )
              BUG();
            interr(40393, a3, v15, v9, a1);
            sub_5318E0(40393, a3, v18, v19);
            return;
        }
        break;
      }
    }
LABEL_15:
    v12 = (__int64 *)v12[15];
  }
  while ( v12 );
  if ( !v23 )
    goto LABEL_17;
}
