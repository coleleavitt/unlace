unsigned __int64 __fastcall sub_616DF0(__int64 a1, unsigned int a2)
{
  int v2; // r12d
  bool v3; // cc
  __int64 module_data; // rax
  __int64 v5; // rax
  _QWORD *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-20h]

  v2 = -1;
  v3 = *(_QWORD *)(a1 + 88) <= 1u;
  v12 = __readfsqword(0x28u);
  if ( !v3 )
  {
    netnode_check(&v11, *(_QWORD *)(a1 + 80), 0, 0);
    v2 = v11;
  }
  if ( a2 == -1 )
  {
    module_data = 0;
  }
  else
  {
    if ( !a2 )
    {
      if ( !under_debugger )
        interr(2035);
      BUG();
    }
    module_data = get_module_data(a2);
  }
  *(_QWORD *)(a1 + 72) = module_data;
  *(_QWORD *)(a1 + 56) = module_data;
  v5 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 48) = v2;
  v6 = *(_QWORD **)(v5 + 8);
  v11 = a1;
  v7 = v6[130];
  v8 = v6[129];
  if ( v6[131] < (unsigned __int64)(v7 + 1) )
  {
    v10 = qvector_reserve(v6 + 129, v8, v7 + 1, 8);
    v6[129] = v10;
    v8 = v10;
    v7 = v6[130];
  }
  *(_QWORD *)(v8 + 8 * v7) = a1;
  ++v6[130];
  return v12 - __readfsqword(0x28u);
}

