__int64 __fastcall sub_23B4B0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 result; // rax

  if ( a4 - 1 > 0xF || (a4 & (a4 - 1)) != 0 )
  {
    if ( !under_debugger )
      sub_37DDE0(50366);
    BUG();
  }
  v7 = sub_325910(a3, a4, a5 != 2);
  *(_QWORD *)a1 = v7;
  v8 = sub_239880(*(_DWORD *)(*(_QWORD *)(a2 + 96) + 640LL), v7, a4, a5);
  result = sub_324B80(a1 + 8, v8);
  *(_BYTE *)(a1 + 13) &= ~1u;
  *(_BYTE *)(a1 + 15) = a4;
  return result;
}
