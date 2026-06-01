__int64 __fastcall sub_8B8920(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, int a5)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 result; // rax
  void *v9; // rbx

  LODWORD(v6) = a5;
  if ( a3 != a4 )
    v6 = a3 * a5 / a4;
  *(_DWORD *)(a1 + 8) = a4 - 1;
  v7 = operator new((unsigned __int64)&stru_64028);
  *(_DWORD *)(a1 + 40) = 1;
  *(_DWORD *)(v7 + 16) = -1;
  *(_QWORD *)a1 = v7;
  *(_OWORD *)(v7 + 409624) = 0;
  if ( a4 >> 62 )
  {
    if ( !under_debugger )
      interr(1161);
    BUG();
  }
  result = sub_8BC4C0(v7, (unsigned int)v6, a2, 1, 4 * a4);
  if ( (_DWORD)result )
  {
    v9 = *(void **)a1;
    if ( *(_QWORD *)a1 )
    {
      sub_8BC920(*(_QWORD *)a1);
      operator delete(v9, (unsigned __int64)&stru_64028);
    }
    *(_QWORD *)a1 = 0;
    return 0xFFFFFFFFLL;
  }
  return result;
}
