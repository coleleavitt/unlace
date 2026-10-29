__int64 __fastcall sub_449130(__int64 **a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 *i; // rbx
  __int64 *v8; // rdi
  __int64 *v9; // rdi
  int v10; // eax
  bool v11; // zf
  __int64 *v12; // rdi
  int v13; // eax
  __int64 v15; // rax
  __int64 *v16; // rax
  int v17; // eax
  __int64 v18; // rax
  __int64 *v19; // rax

  for ( i = *a1; i[1]; i = (__int64 *)i[1] )
    ;
  while ( i )
  {
    v8 = i;
    i = (__int64 *)*i;
    sub_4490F0(v8, a2, a3, a4, a5, a6);
  }
  v9 = a1[1];
  v10 = *(_DWORD *)v9 - 1;
  v11 = *(_DWORD *)v9 == 1;
  *(_DWORD *)v9 = v10;
  if ( v10 < 0 || v11 )
  {
    v15 = v9[3];
    if ( !v15 || !*(_QWORD *)(v15 + 8) )
    {
      v16 = (__int64 *)v9[1];
      if ( v16 && v16 != off_656088 )
      {
        Tcl_Free(v9[1]);
        v9 = a1[1];
      }
      *((_DWORD *)v9 + 4) = -1;
      sub_496830(v9);
      v12 = a1[2];
      v17 = *(_DWORD *)v12 - 1;
      v11 = *(_DWORD *)v12 == 1;
      *(_DWORD *)v12 = v17;
      if ( v17 >= 0 && !v11 )
        return Tcl_Free((__int64)a1);
      goto LABEL_15;
    }
    sub_47B120(v9);
  }
  v12 = a1[2];
  v13 = *(_DWORD *)v12 - 1;
  v11 = *(_DWORD *)v12 == 1;
  *(_DWORD *)v12 = v13;
  if ( v13 >= 0 && !v11 )
    return Tcl_Free((__int64)a1);
LABEL_15:
  v18 = v12[3];
  if ( v18 && *(_QWORD *)(v18 + 8) )
  {
    sub_47B120(v12);
    return Tcl_Free((__int64)a1);
  }
  v19 = (__int64 *)v12[1];
  if ( v19 )
  {
    if ( v19 != off_656088 )
    {
      Tcl_Free(v12[1]);
      v12 = a1[2];
    }
  }
  *((_DWORD *)v12 + 4) = -1;
  sub_496830(v12);
  return Tcl_Free((__int64)a1);
}

