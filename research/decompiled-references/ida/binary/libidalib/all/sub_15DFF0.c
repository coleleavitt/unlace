__int64 __fastcall sub_15DFF0(__int64 *a1, __int64 a2, int a3, char a4)
{
  __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rax

  if ( !a1[1] )
  {
    if ( !a2 )
      goto LABEL_6;
LABEL_4:
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    v7 = a1[4] == 0;
    *((_DWORD *)a1 + 4) = a3;
    a1[1] = v6;
    *((_BYTE *)a1 + 24) = a4;
    if ( v7 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
      *((_DWORD *)a1 + 10) = a3;
      a1[4] = v8;
      goto LABEL_6;
    }
LABEL_9:
    if ( !under_debugger )
      interr();
    BUG();
  }
  qfree();
  *((_DWORD *)a1 + 4) = 0;
  a1[1] = 0;
  qfree();
  a1[4] = 0;
  *((_DWORD *)a1 + 10) = 0;
  if ( a2 )
  {
    if ( a1[1] )
      goto LABEL_9;
    goto LABEL_4;
  }
LABEL_6:
  v9 = *a1;
  *(_BYTE *)(v9 + 848) = 0;
  *(_BYTE *)(v9 + 961) = 1;
  return sub_19C290(2, 0, 0);
}

