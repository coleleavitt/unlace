char __fastcall sub_12BE60(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 *a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // r13
  __int64 v9; // r15
  int v10; // eax
  int v11; // edx
  int v13; // r12d
  int v14; // r13d
  __int64 v15; // [rsp+8h] [rbp-40h]

  if ( !(a6 | a5) )
  {
    if ( !under_debugger )
      sub_3835A0(52626);
    BUG();
  }
  if ( a5 )
    v15 = *(_QWORD *)(a5 + 24);
  else
    v15 = *(_QWORD *)(a6 + 24);
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
        sub_11C7E0(a2);
        sub_123480(a2, (unsigned __int8 *)v9);
        v10 = *(_DWORD *)(v8 + 4);
      }
      if ( !(unsigned __int8)sub_12A590(a2, a1, v10, 0) )
      {
        v13 = *(_DWORD *)(v8 + 4);
        if ( v13 < *(_DWORD *)(a2 + 4) && v13 > 0 && !(unsigned __int8)sub_126CF0(a2, a1, v13) )
          sub_120220((char *)a2, a1, 10, v15, v13);
      }
      *a4 = a2;
      v9 = a2;
    }
  }
  else
  {
    if ( v8 != a2 )
    {
      sub_11C7E0(a2);
      sub_123480(a2, (unsigned __int8 *)v8);
      v11 = *(_DWORD *)(v9 + 4);
    }
    if ( !(unsigned __int8)sub_12A590(a2, a1, v11, 0) )
    {
      v14 = *(_DWORD *)(v9 + 4);
      if ( v14 < *(_DWORD *)(a2 + 4) && v14 > 0 && !(unsigned __int8)sub_126CF0(a2, a1, v14) )
        sub_120220((char *)a2, a1, 10, v15, v14);
    }
    *a3 = a2;
    v8 = a2;
  }
  return sub_125010((unsigned __int8 *)v8, a1, v9, 1u);
}
