__int64 sub_448A40()
{
  __int64 v0; // rax
  __int64 *v1; // rbp
  __int64 v2; // rdi
  __int64 v3; // rbx

  v0 = sub_4961A0(&qword_65A830);
  v1 = (__int64 *)v0;
  if ( v0 )
  {
    *(_DWORD *)(v0 + 8) = 1;
    while ( 1 )
    {
      v3 = *v1;
      if ( !*v1 )
        break;
      v2 = *(_QWORD *)(v3 + 8);
      *v1 = *(_QWORD *)(v3 + 16);
      (*(void (__fastcall **)(__int64))v3)(v2);
      Tcl_Free(v3);
    }
    sub_465980();
    sub_479FE0();
    sub_4BF300();
    nullsub_8();
  }
  return sub_496330();
}

