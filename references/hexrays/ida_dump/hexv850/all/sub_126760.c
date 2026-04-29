__int64 __fastcall sub_126760(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( *(_DWORD *)(a1 + 4) < a4 )
  {
    if ( !under_debugger )
      sub_37CFE0(52599);
    BUG();
  }
  if ( *(_DWORD *)(a1 + 4) != a4
    && (*(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) && sub_116FD0((unsigned __int8 *)a1)
     || !(unsigned __int8)sub_125F90(a1, a2, a4, 1)) )
  {
    sub_11BC20((char *)a1, a2, 10, a3, a4);
  }
  return 1;
}
