__int64 __fastcall sub_CB1DB0(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf

  v5 = *a1;
  sub_15E1B70(a1[5]);
  v6 = sub_15E1A70(v5);
  v7 = v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v8 = *a4;
  if ( *a4 && (v9 = a4[1], v10 = *(_DWORD *)(v8 + 8) == 1, --*(_DWORD *)(v8 + 8), v10) )
  {
    sub_15D7BC0(v9, v8);
    *a4 = v7;
    return 1;
  }
  else
  {
    *a4 = v6;
    return 1;
  }
}

