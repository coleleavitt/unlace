__int64 __fastcall sub_438920(__int64 a1)
{
  int i; // ebx
  __int64 v3; // rax
  __int64 v4; // rdi
  int *v6; // rdi
  int v7; // eax
  bool v8; // zf

  if ( *(_DWORD *)a1 == 4 )
  {
    v6 = *(int **)(a1 + 8);
    v7 = *v6 - 1;
    v8 = *v6 == 1;
    *v6 = v7;
    if ( v7 < 0 || v8 )
      sub_47B120(v6);
  }
  for ( i = 0; *(_DWORD *)(a1 + 28) > i; ++i )
  {
    v3 = i;
    Tcl_Free(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24 * v3 + 8));
  }
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
    Tcl_Free(v4);
  sub_457CE0(a1 + 32);
  return Tcl_Free(a1);
}

