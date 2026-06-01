__int64 __fastcall sub_442700(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v5; // r14d
  unsigned int v8; // edx
  __int64 v10; // rsi
  int *v11; // rax
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rbx
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rax
  __int64 *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax

  v5 = 0;
  if ( a3 <= 2 )
  {
    sub_458930(a2, 1, a4, "varName key ?key ...?");
    return 1;
  }
  v10 = *(_QWORD *)(a4 + 8);
  v11 = (int *)sub_4A43A0(a2, v10, 0, 0);
  v14 = (__int64)v11;
  if ( v11 )
  {
    if ( *v11 <= 1 )
      goto LABEL_7;
    v5 = 1;
    v20 = sub_47B2A0(v11);
  }
  else
  {
    v5 = 1;
    v20 = sub_4401E0(a2, v10);
  }
  v14 = v20;
LABEL_7:
  if ( (unsigned int)sub_440C90(a2, (int *)v14, a3 - 2, a4 + 16, v12, v13) )
  {
    if ( v5 )
    {
      v15 = *(_DWORD *)v14 - 1;
      v16 = *(_DWORD *)v14 == 1;
      *(_DWORD *)v14 = v15;
      if ( v15 < 0 || v16 )
      {
        v17 = *(_QWORD *)(v14 + 24);
        if ( v17 && *(_QWORD *)(v17 + 8) )
        {
          sub_47B120(v14);
        }
        else
        {
          v18 = *(__int64 **)(v14 + 8);
          if ( v18 && v18 != off_656088 )
            Tcl_Free((__int64)v18);
          *(_DWORD *)(v14 + 16) = -1;
          sub_496830(v14);
        }
      }
    }
    return 1;
  }
  v19 = sub_4A4160(a2, *(_QWORD *)(a4 + 8), 0, v14, 512);
  v8 = 1;
  if ( v19 )
  {
    sub_48AFD0(a2, v19);
    return 0;
  }
  return v8;
}

