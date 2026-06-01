void __fastcall sub_401E40(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 *func; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax

  v3 = *(_QWORD *)(a1 + 280);
  if ( v3 != -1 )
  {
    func = (__int64 *)get_func(v3);
    if ( func )
      v9 = *func;
    else
      v9 = -1;
    if ( a2 == v9 )
      sub_400520(a1, *(_QWORD *)(a1 + 280), v5, v6, v7, v8);
  }
}
