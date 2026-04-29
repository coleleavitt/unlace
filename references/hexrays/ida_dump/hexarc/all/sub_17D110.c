__int64 __fastcall sub_17D110(__int64 a1, __int64 a2, char a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rbp
  int v6; // ecx
  __int64 result; // rax

  if ( a3 != 2 )
  {
    if ( !under_debugger )
      sub_37B760(51786);
    BUG();
  }
  v5 = sub_323690(*(_QWORD *)(a5 + 16), a4, 0);
  sub_1166E0(a2);
  *(_BYTE *)a2 = 6;
  v6 = 8 * *(_DWORD *)(a1 + 84);
  result = v6;
  if ( (unsigned __int64)v6 <= 0x3F )
  {
    result = ~(-1LL << v6);
    v5 &= result;
  }
  *(_QWORD *)(a2 + 8) = v5;
  return result;
}
