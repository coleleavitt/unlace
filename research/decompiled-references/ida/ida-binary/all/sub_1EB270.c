__int64 __fastcall sub_1EB270(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rax
  const char *v9; // rsi

  if ( *(_BYTE *)(a1 + 968) )
  {
    if ( !*(_QWORD *)(a1 + 424) )
    {
      sub_1E69C0(a5, a1, a2, a3, a4);
      return sub_1EB330();
    }
    v6 = *(_DWORD *)(a1 + 416);
    if ( v6 == 2 )
    {
      v7 = *(_QWORD *)(a1 + 896);
    }
    else if ( v6 == 3 )
    {
      v7 = *(_QWORD *)(a1 + 904);
    }
    else
    {
      v7 = 0;
      if ( v6 == 1 )
        v7 = *(_QWORD *)(a1 + 888);
    }
  }
  else
  {
    v7 = 0;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 176LL))(v7, (unsigned __int8)a3);
  v9 = &s1;
  if ( *(_QWORD *)(v8 + 16) )
    v9 = *(const char **)(v8 + 8);
  tag_remove(a2, v9, 0);
  return (*(_QWORD *)(a2 + 8) == 0) + *(_QWORD *)(a2 + 8) - 1LL;
}
