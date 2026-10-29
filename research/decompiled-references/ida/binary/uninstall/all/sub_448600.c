__int64 __fastcall sub_448600(__int64 a1)
{
  __int64 v2; // rbx
  int *v3; // rdi
  int v4; // eax
  bool v5; // zf
  int *v6; // rdi
  int v7; // eax
  __int64 v8; // rax
  int *v9; // rdi
  int v10; // eax

  while ( 1 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    if ( !v8 )
      break;
    v2 = *(_QWORD *)(a1 + 16);
    v3 = *(int **)v8;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(v8 + 16);
    v4 = *v3 - 1;
    v5 = *v3 == 1;
    *v3 = v4;
    if ( v4 < 0 || v5 )
      sub_47B120(v3);
    v6 = *(int **)(v2 + 8);
    v7 = *v6 - 1;
    v5 = *v6 == 1;
    *v6 = v7;
    if ( v7 < 0 || v5 )
      sub_47B120(v6);
    Tcl_Free(v2);
  }
  sub_497E30(sub_4479B0, a1);
  v9 = *(int **)(a1 + 8);
  v10 = *v9 - 1;
  v5 = *v9 == 1;
  *v9 = v10;
  if ( v10 < 0 || v5 )
    sub_47B120(v9);
  return sub_487730(a1, 3);
}

