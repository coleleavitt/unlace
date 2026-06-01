__int64 __fastcall sub_A662A0(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rbp
  size_t v3; // rax
  int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rax

  result = a1[188];
  if ( !result )
  {
    v2 = a1[2188];
    v3 = j__strlen("Protocol");
    v4 = sub_6D2E30(v2, "Protocol", v3);
    v9 = sub_6E4280((__int64 *)(*(_QWORD *)(a1[283] + 80LL) + 72LL), *(_QWORD *)(a1[283] + 80LL), v5, v6, v7, v8);
    if ( v9 )
      LODWORD(v9) = (_DWORD)v9 + 40;
    result = sub_B8B480((_DWORD)a1, (_DWORD)v9, 0, v4, 0, 0, 0, 1);
    a1[188] = result;
  }
  return result;
}

