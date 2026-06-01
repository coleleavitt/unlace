void __fastcall sub_5318E0(__int64 a1, unsigned __int64 a2, double a3, __int64 a4, __int64 *a5)
{
  int v5; // r13d
  _QWORD *v6; // r15
  int v7; // r8d
  int v8; // r9d
  void (__fastcall *v9)(double, __int64, __int64, __int64, __int64 *, char, int); // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  double v13; // xmm0_8
  __int64 v14; // rdx
  __int64 v15; // r12
  _QWORD *v16; // r14
  __int64 v17; // r13
  _QWORD *v18; // rax
  __int64 v19; // r15
  _QWORD *v20; // r12
  _QWORD *v21; // r14
  char v22; // al
  const char *v23; // rax
  _QWORD *v24; // rax
  void (__fastcall *v25)(__int64, char *); // rax
  __int64 v26; // rdx
  int v27; // [rsp+8h] [rbp-60h]
  unsigned int v28; // [rsp+Ch] [rbp-5Ch]
  __int64 v30; // [rsp+18h] [rbp-50h]
  __int64 v31; // [rsp+28h] [rbp-40h]

  v5 = a2;
  v27 = a2;
  v30 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 80LL))(QT::QCoreApplication::self + 2);
  v6 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v30 + 16LL))(v30, v6);
  v9 = *(void (__fastcall **)(double, __int64, __int64, __int64, __int64 *, char, int))(*(_QWORD *)a1 + 88LL);
  if ( v9 == sub_531710 )
  {
    a2 = (unsigned __int64)v6;
    v13 = callui(136, (_DWORD)v6, (unsigned int)&callui, (unsigned int)sub_531710, v7, v8);
    if ( QT::QCoreApplication::self )
    {
      v28 = v5 - 7;
      v15 = (*(__int64 (__fastcall **)(_QWORD *, double))(QT::QCoreApplication::self[2] + 32LL))(
              QT::QCoreApplication::self + 2,
              v13);
      v16 = v6;
      do
      {
        v17 = *(_QWORD *)(v15 + 8);
        if ( v17 )
        {
          v18 = (_QWORD *)v15;
          v19 = 0;
          v20 = v16;
          v21 = v18;
          while ( 2 )
          {
            v11 = *v21;
            a2 = *(_QWORD *)(*v21 + 8 * v19);
            if ( !a5 )
            {
LABEL_8:
              switch ( *(_DWORD *)(a2 + 120) )
              {
                case 0:
                case 4:
                  goto LABEL_14;
                case 1:
                case 5:
                  if ( v27 == 9 )
                    goto LABEL_10;
                  goto LABEL_14;
                case 2:
                case 6:
                  if ( v28 <= 2 )
                    goto LABEL_10;
                  goto LABEL_14;
                case 3:
                case 7:
LABEL_10:
                  v23 = &s1;
                  if ( *(_QWORD *)(a2 + 40) )
                    v23 = *(const char **)(a2 + 32);
                  v20[9] = v23;
                  if ( QT::QCoreApplication::self )
                    (*(void (__fastcall **)(_QWORD *, unsigned __int64, _QWORD *))(QT::QCoreApplication::self[2] + 112LL))(
                      QT::QCoreApplication::self + 2,
                      a2,
                      v20);
LABEL_14:
                  if ( v17 == ++v19 )
                    goto LABEL_15;
                  continue;
                default:
                  if ( under_debugger )
                    BUG();
                  interr(40393, a2, v14, v10, v13);
                  sub_531B30(40393, a2, v26);
                  return;
              }
            }
            break;
          }
          while ( 1 )
          {
            v31 = v11;
            v22 = sub_531630(a5, (_QWORD *)a2);
            v11 = v31;
            if ( v22 )
              goto LABEL_8;
            if ( v17 == ++v19 )
              break;
            a2 = *(_QWORD *)(v31 + 8 * v19);
          }
LABEL_15:
          v24 = v21;
          v16 = v20;
          v15 = (__int64)v24;
        }
        v15 = *(_QWORD *)(v15 + 120);
      }
      while ( v15 );
      v6 = v16;
    }
    a3 = callui(137, a2, (unsigned int)&callui, v10, v11, v12, v13);
  }
  else
  {
    a2 = (unsigned int)a2;
    ((void (__fastcall *)(__int64, _QWORD, _QWORD *, __int64 *, _QWORD))v9)(a1, (unsigned int)a2, v6, a5, 0);
  }
  v25 = *(void (__fastcall **)(__int64, char *))(*(_QWORD *)v30 + 48LL);
  if ( v25 == sub_52F550 )
  {
    if ( v6 )
      sub_52F4D0(v6, (const char *)a2);
  }
  else
  {
    ((void (__fastcall *)(__int64, _QWORD *, double))v25)(v30, v6, a3);
  }
}
