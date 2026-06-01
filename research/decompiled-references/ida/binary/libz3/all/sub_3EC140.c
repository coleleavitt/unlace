__int64 __fastcall sub_3EC140(__int64 a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  _DWORD *v7; // rax
  _BOOL4 v8; // edx
  __int64 v9; // rdi
  _BOOL4 v11; // [rsp+4h] [rbp-14h]

  v7 = *(_DWORD **)(a3 + 24);
  v8 = 0;
  if ( v7 && *v7 == 5 )
    v8 = v7[1] == 1;
  v9 = *(_QWORD *)(a1 + 8);
  if ( !v9 )
  {
    v11 = v8;
    sub_16669E0(a1);
    v9 = *(_QWORD *)(a1 + 8);
    v8 = v11;
  }
  return sub_166A700(v9, a2, v8, a4, a5, a6);
}

