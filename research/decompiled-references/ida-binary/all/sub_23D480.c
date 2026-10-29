__int64 __fastcall sub_23D480(__int64 a1, __int64 a2, __int64 a3, char *a4, double a5)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rdi
  _QWORD *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx

  if ( !a1 )
  {
    if ( under_debugger )
      goto LABEL_45;
    interr(40189, a2, a3, a4, a5);
LABEL_24:
    if ( under_debugger )
      goto LABEL_45;
    interr(40210, a2, a3, a4, a5);
    if ( byte_8CC55A )
      return 0xFFFFFFFFLL;
    v16 = qword_8CC600;
    if ( !qword_8CC600 )
      return 0xFFFFFFFFLL;
    if ( *((_DWORD *)qword_8CC600 + 22) == 4 )
    {
      if ( !(_DWORD)a2 )
        return 2;
      *(_DWORD *)qword_8CC600 = a2;
      a2 = 6;
      if ( !(unsigned int)sub_23D480(v16, 6, v12, v13, v14, v15, v5, v6, v7) )
        return 2;
      v16 = qword_8CC600;
    }
    if ( v16[22] == 8 || errorexit )
      return 0xFFFFFFFFLL;
    v17 = QT::QCoreApplication::self;
    if ( v16[22] == 2 || v16[22] == 1 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 224LL))(QT::QCoreApplication::self + 2) )
      {
        *((_DWORD *)qword_8CC600 + 31) = 40210;
        (*(void (__fastcall **)(_QWORD *, __int64))(v17[2] + 232LL))(v17 + 2, 1);
        if ( !byte_8CC55A )
          return (unsigned int)dword_8CC5F8;
        return 0xFFFFFFFFLL;
      }
      if ( under_debugger )
LABEL_46:
        BUG();
      interr(40202, a2, v18, v19, a5);
    }
    if ( !under_debugger )
    {
      interr(40194, a2, v12, v13, a5);
      return sub_23D6F0(40194, a2, v20);
    }
    goto LABEL_46;
  }
  v5 = a1;
  v6 = (unsigned int)a2;
  if ( *(_BYTE *)(a1 + 276) && (int)a2 <= 5 )
  {
    if ( (_DWORD)a2 != 2 )
      return 0;
    a4 = (char *)(unsigned int)dword_8CC5F0;
    *(_BYTE *)(a1 + 276) = 0;
    if ( (int)a4 > 0 )
      return 1;
  }
  v9 = *(_QWORD *)(a1 + 64);
  if ( !v9 || (unsigned __int8)qthread_same(v9) )
  {
    result = sub_23C9A0((unsigned int *)v5, (unsigned int)a2, a3, a4, a5);
    goto LABEL_11;
  }
  v7 = *(unsigned int *)(v5 + 272);
  if ( *(int *)(v5 + 272) < -4 )
    goto LABEL_24;
  sub_232FB0(v5, (unsigned int)a2, a5);
  result = sub_2330B0((_QWORD *)v5, a5);
  if ( qword_8CC600 )
  {
    if ( !errorexit )
    {
      v11 = *(unsigned int *)(v5 + 272);
      if ( (unsigned int)(v7 - v11) > 1 )
      {
        if ( !under_debugger )
        {
          interr(40198, (unsigned int)a2, v11, v10, a5);
          return 0;
        }
LABEL_45:
        BUG();
      }
    }
  }
LABEL_11:
  if ( (int)result > 0 && (int)a2 <= 5 )
  {
    dword_8CC5F0 = a2 != 5;
    if ( (unsigned int)(a2 - 3) <= 1 )
      *(_BYTE *)(v5 + 276) = 1;
  }
  return result;
}
