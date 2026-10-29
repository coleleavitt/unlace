__int64 __fastcall sub_3FF130(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  _QWORD *v11; // rax
  __int64 v13; // rdi
  __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  __int64 v15; // [rsp+8h] [rbp-30h]

  v3 = *(_QWORD **)(a1 + 64);
  v4 = &v3[2 * *(unsigned int *)(a1 + 72)];
  if ( v3 == v4 )
    return 0;
  while ( *v3 <= 1u )
  {
    v3 += 2;
    if ( v4 == v3 )
      return 0;
  }
  if ( v4 == v3 )
    return 0;
  while ( 1 )
  {
    v5 = v3[1];
    v14 = 0;
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 48) + 16LL);
    v15 = *(_QWORD *)(a2 + 8);
    if ( (unsigned __int8)sub_135E850(a2, v6, &v14) )
    {
      v7 = v14;
      if ( v14 == *(_QWORD *)(*(_QWORD *)(a2 + 8) + 856LL) )
        break;
    }
    v8 = v14;
    if ( v14 )
    {
      v9 = v15;
      v10 = (*(_DWORD *)(v14 + 8))-- == 1;
      if ( v10 )
        sub_15D7BC0(v9, v8);
    }
    v11 = v3 + 2;
    if ( v4 != v3 + 2 )
    {
      while ( 1 )
      {
        v3 = v11;
        if ( *v11 > 1u )
          break;
        v11 += 2;
        if ( v4 == v11 )
          return 0;
      }
      if ( v4 != v11 )
        continue;
    }
    return 0;
  }
  if ( v14 )
  {
    v13 = v15;
    v10 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v13, v7);
  }
  return *(_QWORD *)v3[1];
}

