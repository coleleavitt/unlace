void __fastcall sub_401D70(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 *func; // rax
  __int64 v5; // r12
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rdx

  v3 = *(_QWORD *)(a1 + 280);
  if ( v3 != -1 )
  {
    func = (__int64 *)get_func(v3);
    if ( func )
      v5 = *func;
    else
      v5 = -1;
    v6 = (unsigned __int64 *)get_func(a2);
    if ( v6 )
    {
      v7 = *v6;
      v8 = get_func(a2);
      v12 = *(_QWORD *)(a1 + 280);
      if ( v12 != v7 )
      {
        LOBYTE(v9) = v12 >= v7;
        if ( v12 < v7 || v5 != -1 || !v8 || v12 >= *(_QWORD *)(v8 + 8) )
          return;
        v7 = *(_QWORD *)(a1 + 280);
      }
    }
    else
    {
      get_func(a2);
      v7 = *(_QWORD *)(a1 + 280);
      if ( v7 != -1 )
        return;
    }
    sub_400520(a1, v7, v12, v9, v10, v11);
  }
}
