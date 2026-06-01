__int64 __fastcall sub_4169E0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _DWORD *v6; // rsi
  int *v8; // rdi
  int v9; // eax
  bool v10; // zf

  if ( (unsigned int)(a3 - 1) > 1 )
  {
    sub_458930(a2, 1, a4, "?filename?");
    return 1;
  }
  else
  {
    if ( a3 == 2 )
    {
      v8 = *(int **)(a2 + 416);
      if ( v8 )
      {
        v9 = *v8 - 1;
        v10 = *v8 == 1;
        *v8 = v9;
        if ( v9 < 0 || v10 )
          sub_47B120(v8);
      }
      v6 = *(_DWORD **)(a4 + 8);
      ++*v6;
      *(_QWORD *)(a2 + 416) = v6;
    }
    else
    {
      v6 = *(_DWORD **)(a2 + 416);
    }
    if ( v6 )
      sub_48AFD0(a2, v6);
    return 0;
  }
}

