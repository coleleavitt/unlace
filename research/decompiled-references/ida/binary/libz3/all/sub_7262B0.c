__int64 __fastcall sub_7262B0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v5; // r15
  unsigned int *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 result; // rax
  unsigned int *v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  __int64 v18; // [rsp+8h] [rbp-40h]

  v5 = a1 + 168;
  v18 = *(_QWORD *)(a1 + 8);
  v8 = *(unsigned int **)(*(_QWORD *)(sub_15D1F10(*a2) + 24) + 8LL);
  if ( *((_BYTE *)v8 + 8) )
    sub_DBF6E(0);
  v9 = sub_1674520(v5, a3, *v8);
  v10 = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  result = sub_14EC390(a1 + 32, *a2, v9, a4);
  if ( a5 )
  {
    v12 = *(unsigned int **)(*(_QWORD *)(sub_15D1F10(*a2) + 24) + 8LL);
    if ( *((_BYTE *)v12 + 8) )
      sub_DBF6E(0);
    result = sub_1674520(v5, a3, *v12);
    v13 = result;
    if ( result )
      ++*(_DWORD *)(result + 8);
    v14 = *a5;
    if ( *a5 )
    {
      v15 = a5[1];
      v16 = (*(_DWORD *)(v14 + 8))-- == 1;
      if ( v16 )
        result = sub_15D7BC0(v15, v14);
    }
    *a5 = v13;
  }
  if ( v10 )
  {
    v16 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v16 )
      return sub_15D7BC0(v18, v10);
  }
  return result;
}

