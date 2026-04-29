__int64 __fastcall sub_244320(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rbp
  signed int v7; // r12d
  __int64 v8; // rbx
  __int64 v9; // rax
  char tinfo_property; // al
  char v12; // al
  unsigned int v13; // [rsp+Ch] [rbp-2Ch]

  if ( !a2 )
  {
    if ( !under_debugger )
      sub_383060(52644);
    BUG();
  }
  v6 = a2;
  v7 = a3;
  if ( *(_DWORD *)(a2 + 8) != 52
    || (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL) - 64) > 1
    || (a2 = 2, v13 = a4, tinfo_property = get_tinfo_property(), a4 = v13, (tinfo_property & 0xF) == 0xB)
    || (a2 = 2, v12 = get_tinfo_property(), a4 = v13, (v12 & 0xF) == 0xB) )
  {
    if ( v7 > 0 )
    {
      a2 = a1;
      sub_2411A0((__int64 *)v6, a1, v7, (unsigned __int8)a4 + 2, a5, a6);
    }
    v8 = j__qalloc_or_throw(64, a2, a3, a4);
    *(_QWORD *)v8 = -1;
    *(_DWORD *)(v8 + 8) = 51;
    *(_QWORD *)(v8 + 12) = -1;
    *(_QWORD *)(v8 + 24) = v6;
    *(_QWORD *)(v8 + 32) = 0;
    *(_QWORD *)(v8 + 40) = 0;
    *(_QWORD *)(v8 + 48) = 0;
    *(_DWORD *)(v8 + 56) = 0;
    v9 = *(_QWORD *)v6;
    *(_DWORD *)(v8 + 40) = v7;
    *(_QWORD *)v8 = v9;
    sub_2441C0(v8, a1, 0);
  }
  else
  {
    v8 = v6;
    sub_255850(v6, *(_QWORD *)(v6 + 24));
    *(_DWORD *)(v6 + 40) = v7;
  }
  return v8;
}
