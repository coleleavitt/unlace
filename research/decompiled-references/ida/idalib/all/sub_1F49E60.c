void __fastcall sub_1F49E60(__int64 *a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rdi
  bool v8; // zf
  unsigned __int64 v9; // rbp
  int v10; // eax
  unsigned __int64 v11; // rbp
  size_t v12; // rbp
  __int64 *v13; // r14
  size_t v14; // rbp
  void *src; // [rsp+0h] [rbp-68h] BYREF
  size_t n; // [rsp+8h] [rbp-60h]
  __int64 v17; // [rsp+10h] [rbp-58h] BYREF
  void *v18; // [rsp+20h] [rbp-48h] BYREF
  size_t v19; // [rsp+28h] [rbp-40h]
  __int64 v20; // [rsp+30h] [rbp-38h] BYREF

  sub_1F43F90(a1, a2);
  v4 = a1[2];
  v5 = *(unsigned int *)(v4 + 24);
  v6 = *(_QWORD *)(v4 + 16);
  v7 = *(_QWORD *)(v4 + 8);
  v8 = *(_QWORD *)(v6 + 856) == 0;
  *(_DWORD *)(v4 + 24) = v5 + 1;
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5);
  if ( !v8 )
  {
    sub_1EDF870(v7, v6);
    v4 = a1[2];
  }
  v10 = __ROR4__(v9, 1);
  v11 = HIDWORD(v9);
  if ( v11 )
    v6 = *(_QWORD *)(*(_QWORD *)(v6 + 3320) + 8LL * (unsigned int)(v11 - 1));
  if ( v10 )
    v10 = v10 + *(_DWORD *)(v6 + 1648) - 2;
  *(_DWORD *)(a2 + 24) = v10;
  sub_1EAC540((__m128i **)&src, (__int64 *)(v4 + 32), (_DWORD *)(v4 + 24));
  v12 = n;
  memcpy((void *)(a2 + 48), src, n);
  *(_BYTE *)(a2 + v12 + 48) = 0;
  *(_QWORD *)(a2 + 40) = v12 + 1;
  sub_1EAC540((__m128i **)&v18, (__int64 *)(a1[2] + 32), (_DWORD *)(a1[2] + 24));
  v13 = (__int64 *)v18;
  v14 = a2 + v19;
  memcpy((void *)(a2 + *(_QWORD *)(a2 + 40) + 48), v18, v19);
  *(_BYTE *)(*(_QWORD *)(a2 + 40) + v14 + 48) = 0;
  if ( v13 != &v20 )
    operator delete(v13);
  if ( src != &v17 )
    operator delete(src);
}
