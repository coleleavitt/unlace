char __fastcall sub_12C420(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 *a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // r13
  __int64 v9; // r15
  int v10; // eax
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r12d
  int v18; // r13d
  __int64 v19; // [rsp+8h] [rbp-40h]

  if ( !(a6 | a5) )
  {
    if ( !under_debugger )
      sub_383060(52626);
    BUG();
  }
  if ( a5 )
    v19 = *(_QWORD *)(a5 + 24);
  else
    v19 = *(_QWORD *)(a6 + 24);
  v8 = *a3;
  v9 = *a4;
  v10 = *(_DWORD *)(*a3 + 4);
  v11 = *(_DWORD *)(*a4 + 4);
  if ( v10 <= v11 )
  {
    if ( v10 < v11 )
    {
      if ( v9 != a2 )
      {
        sub_11CDA0(a2);
        sub_123A40(a2, (unsigned __int8 *)v9, v15, v16);
        v10 = *(_DWORD *)(v8 + 4);
      }
      if ( !(unsigned __int8)sub_12AB50((unsigned __int8 *)a2, a1, v10, 0) )
      {
        v17 = *(_DWORD *)(v8 + 4);
        if ( v17 < *(_DWORD *)(a2 + 4) && v17 > 0 && !(unsigned __int8)sub_1272B0(a2, a1, v17, 0) )
          sub_1207E0((char *)a2, a1, 10, v19, v17);
      }
      *a4 = a2;
      v9 = a2;
    }
  }
  else
  {
    if ( v8 != a2 )
    {
      sub_11CDA0(a2);
      sub_123A40(a2, (unsigned __int8 *)v8, v12, v13);
      v11 = *(_DWORD *)(v9 + 4);
    }
    if ( !(unsigned __int8)sub_12AB50((unsigned __int8 *)a2, a1, v11, 0) )
    {
      v18 = *(_DWORD *)(v9 + 4);
      if ( v18 < *(_DWORD *)(a2 + 4) && v18 > 0 && !(unsigned __int8)sub_1272B0(a2, a1, v18, 0) )
        sub_1207E0((char *)a2, a1, 10, v19, v18);
    }
    *a3 = a2;
    v8 = a2;
  }
  return sub_1255D0((unsigned __int8 *)v8, a1, v9, 1);
}
