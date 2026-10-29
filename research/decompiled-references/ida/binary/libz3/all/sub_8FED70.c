__int64 __fastcall sub_8FED70(int a1, __int64 a2, __int64 *a3, int a4, int a5, int a6)
{
  int v6; // r12d
  int v8; // edx
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdi

  v6 = a1 + 32;
  v8 = a4;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v10 = *a3;
  if ( *a3 )
  {
    v11 = a3[1];
    if ( (*(_DWORD *)(v10 + 8))-- == 1 )
    {
      sub_15D7BC0(v11, v10);
      v8 = a4;
    }
  }
  *a3 = v9;
  return sub_E67520(v6, (_DWORD)a3, v8, a4, a5, a6);
}

