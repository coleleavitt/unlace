__int64 __fastcall sub_19B3B0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, char a5, __int64 a6)
{
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // r12
  __int64 v14; // rbp
  __int64 v15; // r14
  char v16; // al
  const char *v17; // rax
  __int64 *v19; // [rsp+0h] [rbp-58h]
  __int64 v20; // [rsp+8h] [rbp-50h]
  __int64 v21; // [rsp+10h] [rbp-48h]
  unsigned __int64 v22; // [rsp+18h] [rbp-40h]

  v7 = a5 & 1;
  v22 = __PAIR64__(v7, a2);
  v19 = a4;
  if ( (_DWORD)v7 )
  {
    v8 = TProgram::application;
    if ( !TProgram::application )
      return message(TProgram::menuBar, 0x200u, 0x1Bu, nullptr);
  }
  else
  {
    a2 = a3;
    ((void (__fastcall *)(__int64, __int64, __int64, __int64 *, __int64, __int64, __int64 *))callui)(
      136,
      a3,
      a3,
      a4,
      v7,
      a6,
      a4);
    v8 = TProgram::application;
    if ( !TProgram::application )
    {
LABEL_17:
      callui(137, a2, v9, v10, v11, v12, v19, v20, v21, v22);
      return message(TProgram::menuBar, 0x200u, 0x1Bu, nullptr);
    }
  }
  v13 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v8 + 136) + 32LL))(v8 + 136);
  do
  {
    v14 = v13[1];
    if ( v14 )
    {
      v15 = 0;
      while ( 2 )
      {
        v9 = *v13;
        a2 = *(_QWORD *)(*v13 + 8 * v15);
        if ( v19 )
        {
          while ( 1 )
          {
            v21 = v9;
            v20 = a2;
            v16 = sub_19B300(v19, a2);
            v9 = v21;
            if ( v16 )
              break;
            if ( v14 == ++v15 )
              goto LABEL_15;
            a2 = *(_QWORD *)(v21 + 8 * v15);
          }
        }
        switch ( *(_DWORD *)(a2 + 120) )
        {
          case 0:
          case 4:
            goto LABEL_14;
          case 1:
          case 5:
            if ( (_DWORD)v22 != 9 )
              goto LABEL_14;
            if ( !*(_QWORD *)(a2 + 48) )
              goto LABEL_21;
            goto LABEL_11;
          case 2:
          case 6:
            if ( (unsigned int)(v22 - 7) <= 2 )
              goto LABEL_10;
            goto LABEL_14;
          case 3:
          case 7:
LABEL_10:
            if ( *(_QWORD *)(a2 + 48) )
LABEL_11:
              v17 = *(const char **)(a2 + 40);
            else
LABEL_21:
              v17 = s1;
            *(_QWORD *)(a3 + 72) = v17;
            if ( TProgram::application )
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(TProgram::application + 136LL) + 112LL))(
                TProgram::application + 136LL,
                a2,
                a3);
LABEL_14:
            if ( v14 == ++v15 )
              break;
            continue;
          default:
            if ( under_debugger )
              BUG();
            interr();
            return sub_19B5B0(40393);
        }
        break;
      }
    }
LABEL_15:
    v13 = (__int64 *)v13[15];
  }
  while ( v13 );
  if ( !HIDWORD(v22) )
    goto LABEL_17;
  return message(TProgram::menuBar, 0x200u, 0x1Bu, nullptr);
}

