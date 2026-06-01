void __fastcall sub_444000(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // eax
  int v8; // eax
  void (__fastcall *v9)(_QWORD); // rax
  __int64 v10; // rdi

  if ( a1 )
  {
    v7 = *(_DWORD *)(a1 + 56);
    if ( v7 <= 0 )
    {
      sub_47D740((unsigned int)"FreeEncoding: refcount problem !!!", a2, a3, a4, a5, a6);
      v7 = *(_DWORD *)(a1 + 56);
    }
    v8 = v7 - 1;
    *(_DWORD *)(a1 + 56) = v8;
    if ( !v8 )
    {
      v9 = *(void (__fastcall **)(_QWORD))(a1 + 24);
      if ( v9 )
        v9(*(_QWORD *)(a1 + 40));
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
        sub_457BC0(v10);
      Tcl_Free(*(_QWORD *)a1);
      Tcl_Free(a1);
    }
  }
}

