_DWORD *__fastcall sub_40D530(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v7; // rbx
  __int64 *v8; // rdi

  if ( *(int *)a1 > 1 )
    sub_47D740((unsigned int)"%s called with shared object", (unsigned int)"Tcl_SetByteArrayLength", a3, a4, a5, a6);
  if ( *(char ***)(a1 + 24) != &off_653DC0 )
    sub_40D430(0, a1);
  v7 = *(_DWORD **)(a1 + 32);
  if ( v7[1] < a2 )
  {
    v7 = (_DWORD *)sub_40FC10(*(_QWORD *)(a1 + 32), (unsigned int)(a2 + 8));
    v7[1] = a2;
    *(_QWORD *)(a1 + 32) = v7;
  }
  v8 = *(__int64 **)(a1 + 8);
  if ( v8 )
  {
    if ( v8 != off_656088 )
      Tcl_Free(v8);
    *(_QWORD *)(a1 + 8) = 0;
  }
  *v7 = a2;
  return v7 + 2;
}

