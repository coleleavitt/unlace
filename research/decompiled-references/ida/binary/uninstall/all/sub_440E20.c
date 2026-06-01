__int64 __fastcall sub_440E20(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v7; // ebx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // r14
  _DWORD *v11; // rcx
  __int64 v12; // rdx

  if ( (a3 & 1) != 0 )
  {
    v7 = 1;
    v10 = sub_4401E0(a1, a2);
    while ( v7 < a3 )
    {
      v11 = *(_DWORD **)(a4 + 8LL * v7 + 8);
      v12 = *(_QWORD *)(a4 + 8LL * v7);
      v7 += 2;
      sub_440560(a2, v10, v12, v11, v8, v9);
    }
    sub_48AFD0(a2, v10);
    return 0;
  }
  else
  {
    sub_458930(a2, 1, a4, "?key value ...?");
    return 1;
  }
}

