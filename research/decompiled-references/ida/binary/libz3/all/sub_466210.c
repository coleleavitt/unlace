__int64 __fastcall sub_466210(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v7; // rax
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v14; // rdi
  __int64 v15; // r14
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rdi

  v7 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( v7 && *v7 == 5 && v7[1] == 1 )
  {
    v14 = *(_QWORD *)(a1 + 48);
    v15 = *(_QWORD *)(a1 + 32);
    if ( !v14 )
    {
      sub_16669E0(a1 + 40);
      v14 = *(_QWORD *)(a1 + 48);
    }
    sub_166A700(v14, a4, 1, v8, v9, v10);
    v19 = *(_QWORD *)(a1 + 48);
    if ( !v19 )
    {
      sub_16669E0(a1 + 40);
      v19 = *(_QWORD *)(a1 + 48);
    }
    sub_166A700(v19, a3, 1, v16, v17, v18);
    sub_15E1B70(*(_QWORD *)(a1 + 40));
    return sub_15E1B70(v15);
  }
  else
  {
    v11 = sub_15D1F10(a2);
    if ( !(unsigned __int8)sub_1673B10(a1 + 56, v11) )
    {
      sub_1872CE0("");
      sub_1873130(114, 386);
    }
    v12 = *(_QWORD *)(a1 + 32);
    sub_1674520(a1 + 56, a4, *(unsigned int *)(a1 + 80));
    sub_1674520(a1 + 56, a3, *(unsigned int *)(a1 + 80));
    sub_15E1B70(*(_QWORD *)(a1 + 64));
    return sub_15E1B70(v12);
  }
}

