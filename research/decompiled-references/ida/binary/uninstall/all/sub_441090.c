__int64 __fastcall sub_441090(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  int v7; // r15d
  __int64 v10; // r13
  int v11; // ebx
  int v12; // eax
  bool v13; // zf
  __int64 v14; // rax
  __int64 *v15; // rdi

  v7 = 0;
  if ( a3 <= 1 || (a3 & 1) != 0 )
  {
    sub_458930(a2, 1, a4, "dictionary ?key value ...?");
    return 1;
  }
  v10 = *(_QWORD *)(a4 + 8);
  if ( *(int *)v10 > 1 )
  {
    v7 = 1;
    v10 = sub_47B2A0(*(_QWORD *)(a4 + 8));
  }
  v11 = 2;
  if ( a3 > 2 )
  {
    while ( !(unsigned int)sub_440560(a2, v10, *(_QWORD *)(a4 + 8LL * v11), *(_DWORD **)(a4 + 8LL * v11 + 8), a5, a6) )
    {
      v11 += 2;
      if ( v11 >= a3 )
        goto LABEL_10;
    }
    if ( v7 )
    {
      v12 = *(_DWORD *)v10 - 1;
      v13 = *(_DWORD *)v10 == 1;
      *(_DWORD *)v10 = v12;
      if ( v12 < 0 || v13 )
      {
        v14 = *(_QWORD *)(v10 + 24);
        if ( v14 && *(_QWORD *)(v14 + 8) )
        {
          sub_47B120(v10);
        }
        else
        {
          v15 = *(__int64 **)(v10 + 8);
          if ( v15 )
          {
            if ( v15 != off_656088 )
              Tcl_Free((__int64)v15);
          }
          *(_DWORD *)(v10 + 16) = -1;
          sub_496830(v10);
        }
      }
    }
    return 1;
  }
LABEL_10:
  sub_48AFD0(a2, v10);
  return 0;
}

