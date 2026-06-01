_DWORD *__fastcall sub_D51BC0(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, __int64 *a5)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  _DWORD *result; // rax

  if ( *(_WORD *)(a2 + 4)
    || (result = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr
    || *(_DWORD *)(a1 + 448) != *result
    || result[1] != 37
    || *(_DWORD *)(a2 + 24) != 3 )
  {
    sub_1872CE0("");
    sub_1873130(114, 3587);
  }
  v11 = *(_QWORD *)(a2 + 32);
  v12 = *(_QWORD *)(a2 + 40);
  v13 = *(_QWORD *)(a2 + 48);
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  v14 = *a3;
  if ( *a3 )
  {
    v15 = a3[1];
    v10 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v10 )
      result = (_DWORD *)sub_15D7BC0(v15, v14);
  }
  *a3 = v11;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v16 = *a4;
  if ( *a4 )
  {
    v17 = a4[1];
    v10 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v10 )
      result = (_DWORD *)sub_15D7BC0(v17, v16);
  }
  *a4 = v12;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  v8 = *a5;
  if ( *a5 )
  {
    v9 = a5[1];
    v10 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v10 )
      result = (_DWORD *)sub_15D7BC0(v9, v8);
  }
  *a5 = v13;
  return result;
}

