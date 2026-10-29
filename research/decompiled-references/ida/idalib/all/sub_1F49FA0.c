void __fastcall sub_1F49FA0(__int64 *a1, _DWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  int v12; // ecx
  unsigned __int64 v13; // rbp
  size_t v14; // r13
  __int64 *v15; // r12
  void *src; // [rsp+0h] [rbp-48h] BYREF
  size_t n; // [rsp+8h] [rbp-40h]
  __int64 v18; // [rsp+10h] [rbp-38h] BYREF

  sub_1F43F90(a1, (__int64)a2);
  v4 = a1[2];
  v5 = *(unsigned int *)(v4 + 24);
  v6 = *(_QWORD *)(v4 + 16);
  v7 = *(_QWORD *)(v4 + 32);
  v8 = *(_QWORD *)(v4 + 8);
  v9 = *(_QWORD *)(v6 + 856) == 0;
  v10 = (unsigned int)(v5 + 1);
  *(_DWORD *)(v4 + 24) = v10;
  v11 = *(_QWORD *)(v7 + 8 * v5);
  if ( !v9 )
  {
    sub_1EDF870(v8, v6);
    v4 = a1[2];
    v10 = *(unsigned int *)(v4 + 24);
    v7 = *(_QWORD *)(v4 + 32);
  }
  v12 = __ROR4__(v11, 1);
  v13 = HIDWORD(v11);
  if ( v13 )
    v6 = *(_QWORD *)(*(_QWORD *)(v6 + 3320) + 8LL * (unsigned int)(v13 - 1));
  if ( v12 )
    v12 = v12 + *(_DWORD *)(v6 + 1648) - 2;
  a2[6] = v12;
  *(_DWORD *)(v4 + 24) = v10 + 1;
  a2[9] = *(_QWORD *)(v7 + 8 * v10);
  sub_1EAC540((__m128i **)&src, (__int64 *)(a1[2] + 32), (_DWORD *)(a1[2] + 24));
  v14 = n;
  v15 = (__int64 *)src;
  memcpy(a2 + 10, src, n);
  *((_BYTE *)a2 + v14 + 40) = 0;
  if ( v15 != &v18 )
    operator delete(v15);
}
