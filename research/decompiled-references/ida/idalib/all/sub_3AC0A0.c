__int64 __fastcall sub_3AC0A0(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax

  v3 = *(_QWORD *)(a2 + 56);
  if ( *(_DWORD *)(a2 + 44) == 3 )
  {
    v5 = *(_QWORD *)(qword_2CCB598 + 1576);
    if ( v3 >= *(_QWORD *)(v5 + 56) )
    {
      if ( !under_debugger )
        interr(40028);
      BUG();
    }
    v6 = (_QWORD *)(*(_QWORD *)(v5 + 48) + 32 * v3);
    *a3 = v6[1];
    return *v6;
  }
  else if ( v3 == -1 )
  {
    *a3 = 0;
    return 0;
  }
  else
  {
    *a3 = 1;
    return a2 + 56;
  }
}
