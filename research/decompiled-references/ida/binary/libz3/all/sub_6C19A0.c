__int64 __fastcall sub_6C19A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  _BOOL4 v8; // edx
  _DWORD *v9; // rax
  __int64 v10; // rdi
  _BOOL4 v12; // [rsp+Ch] [rbp-1Ch]

  if ( (*(_BYTE *)(a2 + 4) & 1) == 0
    && *(_DWORD *)a2 == 1
    && (*(_BYTE *)(a2 + 20) & 1) == 0
    && *(_DWORD *)(a2 + 16) == 1 )
  {
    return a3;
  }
  v4 = sub_15D1F10(a3);
  v8 = 0;
  v9 = *(_DWORD **)(v4 + 24);
  if ( v9 && *v9 == 5 )
    v8 = v9[1] == 1;
  v10 = *(_QWORD *)(a1 + 24);
  if ( !v10 )
  {
    v12 = v8;
    sub_16669E0(a1 + 16);
    v10 = *(_QWORD *)(a1 + 24);
    v8 = v12;
  }
  sub_166A700(v10, a2, v8, v5, v6, v7);
  return sub_15E1B70(*(_QWORD *)(a1 + 16));
}

