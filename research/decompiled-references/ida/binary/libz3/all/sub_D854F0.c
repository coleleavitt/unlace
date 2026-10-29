__int64 *__fastcall sub_D854F0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  bool v8; // zf
  _DWORD *v9; // rax
  __int64 v10; // r14
  _DWORD *v11; // rax
  __int64 v12; // r14
  _DWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v23; // [rsp+0h] [rbp-38h] BYREF
  __int64 v24; // [rsp+8h] [rbp-30h]

  v7 = *(_QWORD *)(a2 + 536);
  v8 = *(_WORD *)(a4 + 4) == 0;
  *a1 = 0;
  a1[1] = v7;
  if ( v8 )
  {
    v9 = *(_DWORD **)(*(_QWORD *)(a4 + 16) + 24LL);
    if ( v9 )
    {
      if ( *v9 == *(_DWORD *)(*(_QWORD *)(a2 + 560) + 448LL) && v9[1] == 37 )
      {
        ++*(_DWORD *)(a4 + 8);
        *a1 = a4;
        return a1;
      }
    }
  }
  if ( !(unsigned __int8)sub_15D2CB0(v7, a4) )
  {
    v10 = *(_QWORD *)(a2 + 560);
    v11 = *(_DWORD **)(sub_15D1F10(a4) + 24);
    if ( v11 && *(_DWORD *)(v10 + 448) == *v11 && !v11[1]
      || (v12 = *(_QWORD *)(a2 + 560), (v13 = *(_DWORD **)(sub_15D1F10(a4) + 24)) != nullptr)
      && *(_DWORD *)(v12 + 448) == *v13
      && v13[1] == 1 )
    {
      sub_D85120(&v23, a2, a3, a4);
      v15 = *a1;
      *a1 = v23;
      if ( !v15 )
        return a1;
      v17 = v24;
      v8 = (*(_DWORD *)(v15 + 8))-- == 1;
      if ( !v8 )
        return a1;
    }
    else
    {
      v14 = *(_QWORD *)(a2 + 536);
      v23 = 0;
      v24 = v14;
      sub_D8DBA0(a2, a4, &v23, a2 + 496);
      sub_14B9BF0(a3, v23, &v23);
      v16 = v23;
      v23 = *a1;
      v15 = v23;
      *a1 = v16;
      if ( !v15 )
        return a1;
      v17 = v24;
      v8 = (*(_DWORD *)(v15 + 8))-- == 1;
      if ( !v8 )
        return a1;
    }
    sub_15D7BC0(v17, v15);
    return a1;
  }
  v18 = *(_QWORD *)(a2 + 536);
  v23 = 0;
  v24 = v18;
  sub_D8DBA0(a2, a4, &v23, a2 + 496);
  sub_14B9BF0(a3, v23, &v23);
  v20 = v23;
  v23 = *a1;
  v19 = v23;
  *a1 = v20;
  if ( !v19 )
    return a1;
  v21 = v24;
  v8 = (*(_DWORD *)(v19 + 8))-- == 1;
  if ( !v8 )
    return a1;
  sub_15D7BC0(v21, v19);
  return a1;
}

