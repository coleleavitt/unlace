__int64 __fastcall sub_49CB20(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v4; // r15
  _QWORD *v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // edx
  __int64 v10; // r14
  int v11; // eax
  unsigned int v12; // r12d
  __int64 (*v13)(); // rax
  int v14; // eax
  int v15; // edx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 (*v25)(); // rax
  __int64 v26; // rax
  int v27; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v28; // [rsp+8h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v4 = QT::QCoreApplication::self;
  v5 = QT::QCoreApplication::self + 2;
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 80LL))(QT::QCoreApplication::self + 2);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 72LL))(v6, a2);
  if ( !v7 )
    goto LABEL_15;
  v8 = *(_QWORD *)(v7 + 2392);
  if ( !v8 )
    goto LABEL_15;
  v9 = *(_DWORD *)(v8 + 12);
  switch ( a3 )
  {
    case 2:
      v15 = (v9 >> 10) & 1;
      break;
    case 3:
      v15 = (v9 >> 11) & 1;
      break;
    case 1:
      v15 = (v9 >> 9) & 1;
      break;
    default:
      if ( (v9 & 0x100) != 0 )
        goto LABEL_7;
LABEL_15:
      v12 = 6;
      LOBYTE(v15) = 0;
      goto LABEL_16;
  }
  if ( !(_BYTE)v15 )
  {
    v12 = 6;
    goto LABEL_16;
  }
LABEL_7:
  v10 = *(_QWORD *)(v7 + 8LL * a3 + 2408);
  v11 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD *))(v4[2] + 40LL))(v5, a1, a2);
  v12 = v11;
  if ( v11 > 3 )
  {
    if ( v11 != 7 )
      goto LABEL_14;
    goto LABEL_23;
  }
  if ( a3 == 1 )
  {
    if ( a2[7] || (v26 = a2[25]) != 0 && *(_QWORD *)(v26 + 8) )
    {
LABEL_38:
      v12 = 3;
      if ( !v10 )
      {
LABEL_34:
        LOBYTE(v15) = 1;
        goto LABEL_16;
      }
      v25 = *(__int64 (**)())(*(_QWORD *)v10 + 16LL);
      if ( v25 == chooser_stdact_desc_t__::vfunc_2 || ((int (__fastcall *)(__int64, _QWORD *))v25)(v10, a2) <= 3 )
      {
        v12 = 3;
LABEL_25:
        v19 = *(_QWORD *)(v10 + 16);
        if ( v19 )
        {
          v20 = sub_534430(a2[9]);
          if ( v20 )
            sub_537630(v20, 1, v19);
        }
        v21 = *(_QWORD *)(v10 + 24);
        if ( v21 )
        {
          v22 = sub_534430(a2[9]);
          if ( v22 )
            sub_537630(v22, 3, v21);
        }
        if ( *(_DWORD *)(v10 + 32) != -1 )
        {
          v23 = a2[9];
          v27 = *(_DWORD *)(v10 + 32);
          v24 = sub_534430(v23);
          if ( v24 )
            sub_537630(v24, 4, &v27);
        }
        goto LABEL_34;
      }
LABEL_24:
      v12 = 7;
      goto LABEL_25;
    }
LABEL_23:
    v12 = 7;
    LOBYTE(v15) = 1;
    if ( !v10 )
      goto LABEL_16;
    goto LABEL_24;
  }
  if ( a3 == 2 )
  {
    if ( a2[7] )
      goto LABEL_38;
    goto LABEL_23;
  }
  if ( v10 )
  {
    v12 = 2;
    v13 = *(__int64 (**)())(*(_QWORD *)v10 + 16LL);
    if ( v13 == chooser_stdact_desc_t__::vfunc_2 )
      goto LABEL_25;
    v14 = ((__int64 (__fastcall *)(__int64, _QWORD *))v13)(v10, a2);
    v12 = v14;
    if ( v14 <= 3 )
      goto LABEL_25;
    if ( v14 != 7 )
    {
LABEL_14:
      LOBYTE(v15) = 0;
      goto LABEL_16;
    }
    goto LABEL_24;
  }
  v12 = 2;
  LOBYTE(v15) = 1;
LABEL_16:
  v16 = a2[9];
  LOBYTE(v27) = v15;
  v17 = sub_534430(v16);
  if ( v17 )
    sub_537630(v17, 8, &v27);
  return v12;
}
