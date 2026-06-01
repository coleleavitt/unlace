__int64 __fastcall sub_3A9C10(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v2; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rax

  v2 = *(_QWORD *)(a1 + 56);
  if ( *(_DWORD *)(a1 + 44) == 3 )
  {
    v4 = *(_QWORD *)(qword_2CCB598 + 1576);
    if ( v2 >= *(_QWORD *)(v4 + 56) )
    {
      if ( !under_debugger )
        interr(40028);
      BUG();
    }
    v5 = (_QWORD *)(*(_QWORD *)(v4 + 48) + 32 * v2);
    *a2 = v5[1];
    return *v5;
  }
  else if ( v2 == -1 )
  {
    *a2 = 0;
    return 0;
  }
  else
  {
    *a2 = 1;
    return a1 + 56;
  }
}
