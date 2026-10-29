unsigned __int64 __fastcall sub_1F62EC0(__int64 a1)
{
  _QWORD *v1; // rbp
  __int64 v2; // r8
  size_t v3; // r13
  void *v4; // r9
  __int64 v5; // rax
  char *v6; // rbx
  __int64 v7; // r8
  size_t v8; // r14
  void *v9; // r9
  __int64 v10; // rax
  char *v11; // r15
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // [rsp+8h] [rbp-70h]
  void *v18; // [rsp+8h] [rbp-70h]
  void *v19; // [rsp+18h] [rbp-60h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  size_t n; // [rsp+28h] [rbp-50h]
  _BYTE v22[72]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL);
  sub_1EAC540((__m128i **)&src, (__int64 *)(a1 + 32), (_DWORD *)(a1 + 24));
  v3 = n;
  v4 = src;
  v1[304] += n;
  v5 = v1[294];
  v6 = (char *)((v5 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v1[295] >= (unsigned __int64)&v6[v3] && v5 )
  {
    v1[294] = &v6[v3];
  }
  else
  {
    v18 = v4;
    v16 = sub_986170((__int64)(v1 + 294), v3, v3, 3, v2, (__int64)v4);
    v4 = v18;
    v6 = (char *)v16;
  }
  if ( v3 )
    memmove(v6, v4, v3);
  if ( src != v22 )
    operator delete(src);
  v17 = sub_1EE7490(a1);
  sub_1EAC540((__m128i **)&src, (__int64 *)(a1 + 32), (_DWORD *)(a1 + 24));
  v8 = n;
  v9 = src;
  v10 = v1[294];
  v1[304] += n;
  v11 = (char *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v1[295] >= (unsigned __int64)&v11[v8] && v10 )
  {
    v1[294] = &v11[v8];
  }
  else
  {
    v19 = v9;
    v15 = sub_986170((__int64)(v1 + 294), v8, v8, 3, v7, (__int64)v9);
    v9 = v19;
    v11 = (char *)v15;
  }
  if ( v8 )
    memmove(v11, v9, v8);
  if ( src != v22 )
    operator delete(src);
  v12 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL);
  v13 = v12[294];
  v12[304] += 40LL;
  result = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v12[295] >= result + 40 && v13 )
    v12[294] = result + 40;
  else
    result = sub_986170((__int64)(v12 + 294), 40, 40, 3, v7, (__int64)v9);
  *(_QWORD *)result = v6;
  *(_QWORD *)(result + 8) = v3;
  *(_DWORD *)(result + 16) = v17;
  *(_QWORD *)(result + 24) = v11;
  *(_QWORD *)(result + 32) = v8;
  return result;
}
