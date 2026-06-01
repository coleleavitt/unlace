__int64 __fastcall sub_411A90(__int64 a1)
{
  __int64 result; // rax
  bool v3; // zf
  __int64 v4; // rdx
  int i; // ebx
  int *v6; // rdi
  int v7; // eax

  result = (unsigned int)(*(_DWORD *)a1 - 1);
  v3 = *(_DWORD *)a1 == 1;
  *(_DWORD *)a1 = result;
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i <= 21; ++i )
    {
      while ( 1 )
      {
        v6 = *(int **)(v4 + 8LL * i);
        v7 = *v6 - 1;
        v3 = *v6 == 1;
        *v6 = v7;
        if ( v7 < 0 || v3 )
          break;
        if ( ++i > 21 )
          goto LABEL_6;
      }
      sub_47B120(v6);
      v4 = *(_QWORD *)(a1 + 8);
    }
LABEL_6:
    Tcl_Free(v4);
    return Tcl_Free(a1);
  }
  return result;
}

