__int64 __fastcall proxim_graph_t__::vfunc_36(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  unsigned int v6; // edx
  __int64 *func; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  _QWORD *v11; // rax

  v2 = a2;
  v3 = *(_QWORD **)(a1 + 272);
  v4 = &v3[5 * *(_QWORD *)(a1 + 280)];
  if ( v3 != v4 )
  {
    v5 = *(_QWORD **)(a1 + 272);
    while ( a2 != *v5 )
    {
      v5 += 5;
      if ( v4 == v5 )
        goto LABEL_7;
    }
    v6 = -858993459 * (v5 - v3);
    if ( v6 != -1 )
      return v6;
  }
LABEL_7:
  func = (__int64 *)get_func(a2);
  if ( func )
    v2 = *func;
  v9 = *(_QWORD **)(a1 + 272);
  v10 = &v9[5 * *(_QWORD *)(a1 + 280)];
  if ( v9 != v10 )
  {
    v11 = *(_QWORD **)(a1 + 272);
    while ( v2 != *v11 )
    {
      v11 += 5;
      if ( v10 == v11 )
        return 0xFFFFFFFFLL;
    }
    return -858993459 * (unsigned int)(v11 - v9);
  }
  return 0xFFFFFFFFLL;
}
