__int64 __fastcall sub_127850(unsigned __int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // r13d
  int v6; // edx

  if ( *(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) )
  {
    v5 = a4;
    if ( sub_11BB90((unsigned __int8 *)a1) )
      return sub_1274C0((unsigned __int8 *)a1, a2, a3, v5);
  }
  v6 = *(_DWORD *)(a1 + 4);
  if ( (int)a3 < v6 && a3 )
    return sub_126F10(a1, a2, v6 - a3, a4);
  else
    return 0;
}
