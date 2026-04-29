__int64 __fastcall sub_164360(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v9; // r15
  __int64 i; // rbx

  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  **(_DWORD **)(a1 + 56) = a4;
  if ( *(int *)(a5 + 4) > 1 )
  {
    sub_119360(*(_QWORD *)(a1 + 56) + 64LL);
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 68LL) = 1;
    if ( !(unsigned __int8)sub_127CB0(*(_QWORD *)(a1 + 56), v9, 9, *(_DWORD *)(a5 + 4), 0) )
    {
      if ( !under_debugger )
        sub_37EEE0(51945);
      BUG();
    }
  }
  sub_118FD0((char *)(*(_QWORD *)(a1 + 56) + 64LL), (char *)a5);
  for ( i = *(_QWORD *)(a2 + 48); ; i = *(_QWORD *)(i + 8) )
  {
    sub_119B60(i);
    if ( i == a6 )
      break;
  }
  return sub_10EB10(a1, a2, a3);
}
