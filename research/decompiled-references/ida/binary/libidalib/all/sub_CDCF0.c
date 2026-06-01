__int64 __fastcall sub_CDCF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r12
  int v5; // ecx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdx

  if ( !a1 )
  {
    if ( under_debugger )
      goto LABEL_45;
    interr();
LABEL_24:
    if ( under_debugger )
      goto LABEL_45;
    interr();
    if ( byte_2526BA )
      return 0xFFFFFFFFLL;
    v11 = qword_252758;
    if ( !qword_252758 )
      return 0xFFFFFFFFLL;
    if ( *((_DWORD *)qword_252758 + 22) == 4 )
    {
      if ( !(_DWORD)a2 )
        return 2;
      *(_DWORD *)qword_252758 = a2;
      a2 = 6;
      if ( !(unsigned int)sub_CDCF0(v11, 6, v7, v8, v9, v10, v2, v3, v4) )
        return 2;
      v11 = qword_252758;
    }
    if ( v11[22] == 8 || errorexit )
      return 0xFFFFFFFFLL;
    v12 = TProgram::application;
    if ( v11[22] == 2 || v11[22] == 1 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 224LL))(TProgram::application + 136LL) )
      {
        *((_DWORD *)qword_252758 + 31) = 40210;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v12 + 136) + 232LL))(v12 + 136, 1);
        if ( !byte_2526BA )
          return (unsigned int)dword_252754;
        return 0xFFFFFFFFLL;
      }
      if ( under_debugger )
LABEL_46:
        BUG();
      interr();
    }
    if ( !under_debugger )
    {
      interr();
      return sub_CDF60(40194, a2, v13);
    }
    goto LABEL_46;
  }
  v2 = a1;
  v3 = (unsigned int)a2;
  if ( *(_BYTE *)(a1 + 276) && (int)a2 <= 5 )
  {
    if ( (_DWORD)a2 != 2 )
      return 0;
    v5 = dword_25274C;
    *(_BYTE *)(a1 + 276) = 0;
    if ( v5 > 0 )
      return 1;
  }
  if ( !*(_QWORD *)(a1 + 64) || (unsigned __int8)qthread_same() )
  {
    result = sub_CD1F0(a1, (unsigned int)a2);
    goto LABEL_11;
  }
  v4 = *(unsigned int *)(a1 + 272);
  if ( *(int *)(a1 + 272) < -4 )
    goto LABEL_24;
  sub_C3DF0(a1, a2);
  result = sub_C3F00((_QWORD *)a1);
  if ( qword_252758 && !errorexit && (unsigned int)(v4 - *(_DWORD *)(a1 + 272)) > 1 )
  {
    if ( !under_debugger )
    {
      interr();
      return 0;
    }
LABEL_45:
    BUG();
  }
LABEL_11:
  if ( (int)result > 0 && (int)a2 <= 5 )
  {
    dword_25274C = a2 != 5;
    if ( (unsigned int)(a2 - 3) <= 1 )
      *(_BYTE *)(a1 + 276) = 1;
  }
  return result;
}

