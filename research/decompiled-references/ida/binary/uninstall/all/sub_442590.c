__int64 __fastcall sub_442590(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v5; // r14d
  unsigned int v8; // edx
  __int64 v10; // rsi
  int *v11; // rax
  int v12; // r9d
  __int64 v13; // rbp
  int v14; // eax
  bool v15; // zf
  __int64 v16; // rax
  __int64 *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax

  v5 = 0;
  if ( a3 <= 3 )
  {
    sub_458930(a2, 1, a4, "varName key ?key ...? value");
    return 1;
  }
  v10 = *(_QWORD *)(a4 + 8);
  v11 = (int *)sub_4A43A0(a2, v10, 0, 0);
  v13 = (__int64)v11;
  if ( v11 )
  {
    if ( *v11 <= 1 )
      goto LABEL_7;
    v5 = 1;
    v19 = sub_47B2A0(v11);
  }
  else
  {
    v5 = 1;
    v19 = sub_4401E0(a2, v10);
  }
  v13 = v19;
LABEL_7:
  if ( (unsigned int)sub_440AF0(a2, (int *)v13, a3 - 3, a4 + 16, *(_DWORD **)(a4 + 8LL * a3 - 8), v12) )
  {
    if ( v5 )
    {
      v14 = *(_DWORD *)v13 - 1;
      v15 = *(_DWORD *)v13 == 1;
      *(_DWORD *)v13 = v14;
      if ( v14 < 0 || v15 )
      {
        v16 = *(_QWORD *)(v13 + 24);
        if ( v16 && *(_QWORD *)(v16 + 8) )
        {
          sub_47B120(v13);
        }
        else
        {
          v17 = *(__int64 **)(v13 + 8);
          if ( v17 && v17 != off_656088 )
            Tcl_Free((__int64)v17);
          *(_DWORD *)(v13 + 16) = -1;
          sub_496830(v13);
        }
      }
    }
    return 1;
  }
  v18 = sub_4A4160(a2, *(_QWORD *)(a4 + 8), 0, v13, 512);
  v8 = 1;
  if ( v18 )
  {
    sub_48AFD0(a2, v18);
    return 0;
  }
  return v8;
}

