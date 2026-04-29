__int64 __fastcall sub_1278E0(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( *(_DWORD *)(a1 + 4) < a4 )
  {
    if ( !under_debugger )
      sub_37EEE0(52599);
    BUG();
  }
  if ( *(_DWORD *)(a1 + 4) != a4
    && (*(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) && sub_118150((unsigned __int8 *)a1)
     || !(unsigned __int8)sub_127110(a1, a2, a4, 1)) )
  {
    sub_11CDA0((char *)a1, a2, 10, a3, a4);
  }
  return 1;
}
