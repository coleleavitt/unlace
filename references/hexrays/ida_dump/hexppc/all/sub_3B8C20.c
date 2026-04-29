__int64 __fastcall sub_3B8C20(__int64 a1, __int64 a2, double a3)
{
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  int v9; // edx
  unsigned int v10; // edx

  if ( (unsigned int)(*(_DWORD *)(a2 + 8) - 27) <= 1 )
    return 2;
  v5 = *(_QWORD *)a2;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)a2;
  v8 = sub_385A70(v6, v7);
  if ( v8 )
  {
    v9 = *(_DWORD *)(a1 + 24);
    if ( !v9 )
      return 2;
    if ( v9 != 1 )
      sub_3B6850(a3, v6, v7);
    v10 = 6;
    if ( v5 == *(_QWORD *)(v8 + 8) )
      return 2;
  }
  else
  {
    return 6;
  }
  return v10;
}
