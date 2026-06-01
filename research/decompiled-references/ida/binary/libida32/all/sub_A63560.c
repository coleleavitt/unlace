__int64 __fastcall sub_A63560(_QWORD *a1)
{
  size_t v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // rax

  if ( (a1[203] & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    return a1[203];
  v2 = j__strlen("objc_super");
  v3 = sub_A63480(a1, "objc_super", v2, 0);
  v8 = sub_6E4280((__int64 *)(*(_QWORD *)(a1[283] + 80LL) + 72LL), *(_QWORD *)(a1[283] + 80LL), v4, v5, v6, v7);
  sub_B70D90(v8 + 5, v3);
  v13 = *(_QWORD *)(v3 + 48);
  if ( v13 )
    v14 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v14 = sub_A56D30((__int64)a1, v3, v9, v10, v11, v12);
  a1[203] = v14;
  return a1[203];
}

