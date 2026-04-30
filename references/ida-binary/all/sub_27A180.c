__int64 __fastcall disasm_graph_t__::vfunc_41(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 *v3; // rbx
  unsigned int v5; // ebp
  __int64 v6; // r14
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // rax

  v2 = 0;
  if ( (int)a2 >= *(_DWORD *)(a1 + 360) )
    return 0;
  v3 = (unsigned __int64 *)(*(_QWORD *)(a1 + 352) + ((__int64)(int)a2 << 6));
  if ( dword_8BDE44 < v3[1] - *v3 )
  {
    v5 = 0;
    v6 = 0;
    while ( (int)v5 < (int)get_hidden_range_qty(a1, a2, v2) )
    {
      a1 = v5;
      v7 = v3[1];
      v8 = *v3;
      v9 = getn_hidden_range(v5);
      if ( !*(_BYTE *)(v9 + 40) )
      {
        v2 = *(_QWORD *)v9;
        v10 = *(_QWORD *)(v9 + 8);
        if ( v8 < v2 )
          v8 = v2;
        if ( v7 > v10 )
          v7 = v10;
        if ( v7 < v8 )
          v7 = v8;
        v6 += v7 - v8;
      }
      ++v5;
    }
    LODWORD(v2) = dword_8BDE44;
    LOBYTE(v2) = dword_8BDE44 < v3[1] - *v3 - v6;
  }
  return (unsigned int)v2;
}
