__int64 __fastcall drawable_graph_t::calc_bounds(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r8d
  __int64 v4; // rcx
  _DWORD *v5; // rax
  int *v6; // rcx
  int v7; // esi
  int v8; // ecx

  if ( *(_QWORD *)(a3 + 24) )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      v5 = *(_DWORD **)(a1 + 16);
      v6 = (int *)(*(_QWORD *)(a3 + 16) + 8 * v4);
      v7 = *v6;
      v8 = v6[1];
      if ( *v5 > v7 )
        *v5 = v7;
      if ( v5[2] < v7 )
        v5[2] = v7;
      if ( v5[1] > v8 )
        v5[1] = v8;
      if ( v5[3] < v8 )
        v5[3] = v8;
      v4 = ++v3;
    }
    while ( (unsigned __int64)v3 < *(_QWORD *)(a3 + 24) );
  }
  return 0;
}
