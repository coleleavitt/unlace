__int64 __fastcall sub_B146C0(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rdi

  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)(v7 + 856);
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v9 = *a3;
  if ( *a3 )
  {
    v10 = a3[1];
    v11 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v11 )
    {
      sub_15D7BC0(v10, v9);
      v7 = *(_QWORD *)(a1 + 8);
    }
  }
  *a3 = v8;
  v12 = *(_QWORD *)(v7 + 864);
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v13 = *a4;
  if ( *a4 )
  {
    v14 = a4[1];
    v11 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v14, v13);
  }
  *a4 = v12;
  return 1;
}

