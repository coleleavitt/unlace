__int64 __fastcall sub_4411D0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  int v7; // r15d
  __int64 v9; // r12
  int v10; // ebp
  __int64 *v11; // rbx
  int v13; // eax
  bool v14; // zf
  __int64 v15; // rax
  __int64 *v16; // rdi

  v7 = 0;
  if ( a3 <= 1 )
  {
    sub_458930(a2, 1, a4, "dictionary ?key ...?");
    return 1;
  }
  else
  {
    v9 = *(_QWORD *)(a4 + 8);
    if ( *(int *)v9 > 1 )
    {
      v7 = 1;
      v9 = sub_47B2A0(*(_QWORD *)(a4 + 8));
    }
    v10 = 2;
    if ( a3 <= 2 )
    {
LABEL_8:
      sub_48AFD0(a2, v9);
      return 0;
    }
    else
    {
      v11 = (__int64 *)(a4 + 16);
      while ( !(unsigned int)sub_440760(a2, v9, *v11, a4, a5, a6) )
      {
        ++v10;
        ++v11;
        if ( v10 >= a3 )
          goto LABEL_8;
      }
      if ( v7 && (v13 = *(_DWORD *)v9 - 1, v14 = *(_DWORD *)v9 == 1, *(_DWORD *)v9 = v13, v13 < 0 || v14) )
      {
        v15 = *(_QWORD *)(v9 + 24);
        if ( v15 && *(_QWORD *)(v15 + 8) )
        {
          sub_47B120(v9);
          return 1;
        }
        else
        {
          v16 = *(__int64 **)(v9 + 8);
          if ( v16 )
          {
            if ( v16 != off_656088 )
              Tcl_Free((__int64)v16);
          }
          *(_DWORD *)(v9 + 16) = -1;
          sub_496830(v9);
          return 1;
        }
      }
      else
      {
        return 1;
      }
    }
  }
}

