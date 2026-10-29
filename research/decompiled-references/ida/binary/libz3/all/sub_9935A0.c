void __fastcall sub_9935A0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  bool v4; // zf
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // [rsp-8h] [rbp-38h]
  int v8; // [rsp+0h] [rbp-30h]
  __int64 v9; // [rsp+8h] [rbp-28h] BYREF
  int v10; // [rsp+10h] [rbp-20h]
  void *v11; // [rsp+18h] [rbp-18h]

  v3 = *(_QWORD *)(a2 + 24);
  v4 = *(_QWORD *)(v3 + 912) == 0;
  *a1 = v3;
  if ( !v4 )
  {
    if ( !*(_QWORD *)(a3 + 16) )
      std::__throw_bad_function_call();
    v5 = (*(__int64 (__fastcall **)(__int64))(a3 + 24))(a3);
    v6 = v5;
    if ( v5 )
      ++*(_DWORD *)(v5 + 8);
    sub_966750(a2, v5, -1, 0, 0, -1, (__int64 ***)&v9, v7, v8, 0, v10, v11);
    if ( v9 )
      sub_186B220((void *)(v9 - 8));
    if ( v6 )
    {
      v4 = (*(_DWORD *)(v6 + 8))-- == 1;
      if ( v4 )
        sub_15D7BC0(v3, v6);
    }
  }
}

