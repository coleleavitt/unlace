__int64 __fastcall sub_164830(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax

  v1 = *(unsigned __int8 *)(a1 + 992);
  if ( !(_BYTE)v1 )
    return v1;
  if ( *(_QWORD *)(a1 + 480) )
  {
    if ( *(_DWORD *)(a1 + 472) != 1 )
      return 0;
    v2 = *(_QWORD *)(a1 + 856);
    if ( !v2 )
      return 0;
    v1 = *(unsigned __int8 *)(v2 + 21);
    if ( (_BYTE)v1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 432LL))(a1);
      return v1;
    }
    if ( under_debugger )
      BUG();
    a1 = 40718;
    interr();
  }
  sub_158B30(a1);
  return sub_1648A0();
}

