__int64 __fastcall sub_15D7F0(__int64 *a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rax

  qfree();
  a1[4] = 0;
  *((_DWORD *)a1 + 10) = 0;
  if ( a2 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    *((_DWORD *)a1 + 10) = a3;
    a1[4] = v4;
    v5 = *a1;
    *(_BYTE *)(v5 + 840) = 0;
    *(_BYTE *)(v5 + 953) = 1;
    return sub_19B690(2, 0, 0);
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_15D870(40472);
  }
}

