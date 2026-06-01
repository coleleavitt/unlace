char **__fastcall sub_40D2C0(__int64 a1, const void *a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebx
  __int64 v8; // rax
  void (__fastcall *v9)(__int64); // rax
  __int64 *v10; // rdi
  int *v11; // rbp

  v6 = a3;
  if ( *(int *)a1 > 1 )
    sub_47D740((unsigned int)"%s called with shared object", (unsigned int)"Tcl_SetByteArrayObj", a3, a4, a5, a6);
  v8 = *(_QWORD *)(a1 + 24);
  if ( v8 )
  {
    v9 = *(void (__fastcall **)(__int64))(v8 + 8);
    if ( v9 )
      v9(a1);
  }
  v10 = *(__int64 **)(a1 + 8);
  if ( v10 )
  {
    if ( v10 != off_656088 )
      Tcl_Free(v10);
    *(_QWORD *)(a1 + 8) = 0;
  }
  if ( v6 < 0 )
    v6 = 0;
  v11 = (int *)sub_40FB00((unsigned int)(v6 + 8));
  *v11 = v6;
  v11[1] = v6;
  if ( v6 > 0 && a2 != nullptr )
    memcpy(v11 + 2, a2, v6);
  *(_QWORD *)(a1 + 32) = v11;
  *(_QWORD *)(a1 + 24) = &off_653DC0;
  return &off_653DC0;
}

