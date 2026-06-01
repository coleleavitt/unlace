__int64 __fastcall sub_883D40(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rax
  __int64 v4; // rax
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  _BOOL4 v8; // edx
  _DWORD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // r12d
  unsigned int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v17; // r13
  _BOOL4 v18; // [rsp+Ch] [rbp-2Ch]

  if ( *(_WORD *)(a2 + 4)
    || (v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr
    || *v3 != 5
    || v3[1] != 21
    || *(_DWORD *)(a2 + 24) != 1 )
  {
    sub_1872CE0("");
    sub_1873130(114, 54);
  }
  v17 = *(_QWORD *)(a2 + 32);
  v4 = sub_15D1F10(a2);
  v8 = 0;
  v9 = *(_DWORD **)(v4 + 24);
  if ( v9 && *v9 == 5 )
    v8 = v9[1] == 1;
  v10 = *(_QWORD *)(a1 + 840);
  if ( !v10 )
  {
    v18 = v8;
    sub_16669E0(a1 + 832);
    v10 = *(_QWORD *)(a1 + 840);
    v8 = v18;
  }
  sub_166A700(v10, (unsigned int)&qword_1C7F2A0, v8, v5, v6, v7);
  v11 = sub_15E1B70(*(_QWORD *)(a1 + 832));
  v12 = sub_7E58C0(a1, v11);
  v13 = sub_7E58D0(a1, a2, v17);
  sub_7E5400(a1, v12 ^ 1, v13, nullptr);
  v14 = sub_15E1A70(*(_QWORD *)(a1 + 832));
  v15 = sub_7E58D0(a1, a2, v14);
  return sub_7E5400(a1, v12, v15, nullptr);
}

