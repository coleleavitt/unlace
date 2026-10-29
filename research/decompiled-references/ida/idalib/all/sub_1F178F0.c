unsigned __int64 __fastcall sub_1F178F0(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rcx
  _QWORD *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // r15
  bool v8; // zf
  bool v9; // r13
  bool v10; // bl
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int8 v14; // [rsp+Eh] [rbp-3Ah] BYREF
  char v15; // [rsp+Fh] [rbp-39h]

  v2 = *a1;
  v3 = *(unsigned int *)(*a1 + 24);
  v4 = *(_QWORD *)(*a1 + 32);
  v5 = *(_QWORD **)(*a1 + 8);
  v6 = *(_QWORD *)v2;
  v7 = *(_QWORD *)(v4 + 8 * v3);
  v8 = *(_QWORD *)(v4 + 8LL * (unsigned int)(v3 + 1)) == 0;
  *(_DWORD *)(v2 + 24) = v3 + 3;
  v9 = !v8;
  v10 = *(_QWORD *)(v4 + 8LL * (unsigned int)(v3 + 2)) != 0;
  v11 = sub_1F16500(v5, *(_QWORD *)(v2 + 16), (__int64 *)(v2 + 32), (_DWORD *)(v2 + 24));
  v12 = sub_1F16500(*(_QWORD **)(*a1 + 8), *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  v14 = v7;
  v15 = (2 * v10) | v9 | v15 & 0xFC;
  return sub_A77770(v6, v11, v12, &v14);
}
