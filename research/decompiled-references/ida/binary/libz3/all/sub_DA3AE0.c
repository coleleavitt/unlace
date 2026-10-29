__int64 **__fastcall sub_DA3AE0(__int64 **a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  int v16; // eax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+8h] [rbp-40h]

  v6 = *a2;
  v7 = *(_QWORD *)(a3 + 8);
  v8 = *(_QWORD *)(a5 + 8);
  v9 = *(_QWORD *)(a4 + 8);
  if ( *(_BYTE *)(v6 + 664) )
  {
    v10 = sub_DA8B90(v6, v7, v9 ^ 1);
    v11 = sub_DA8B90(v6, v7 ^ 1, v8 ^ 1);
    v12 = v11 & 0xFFFFFFFFFFFFFFFELL;
    ++*(_DWORD *)((v10 & 0xFFFFFFFFFFFFFFFELL) + 4);
    ++*(_DWORD *)((v11 & 0xFFFFFFFFFFFFFFFELL) + 4);
    v21 = v10 & 0xFFFFFFFFFFFFFFFELL;
    v13 = sub_DA8B90(v6, v10 ^ 1, v11 ^ 1);
    v14 = v13;
  }
  else
  {
    v18 = sub_DA8B90(v6, v7, v9);
    v19 = v18 ^ 1;
    ++*(_DWORD *)((v18 & 0xFFFFFFFFFFFFFFFELL) + 4);
    v21 = v18 & 0xFFFFFFFFFFFFFFFELL;
    v20 = sub_DA8B90(v6, v7 ^ 1, v8);
    v12 = v20 & 0xFFFFFFFFFFFFFFFELL;
    ++*(_DWORD *)((v20 & 0xFFFFFFFFFFFFFFFELL) + 4);
    v14 = sub_DA8B90(v6, v19, v20 ^ 1);
    v13 = v14 ^ 1;
  }
  v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
  ++*(_DWORD *)(v15 + 4);
  sub_DAAB00(v6, v21);
  sub_DAAB00(v6, v12);
  v16 = *(_DWORD *)(v15 + 4);
  *(_DWORD *)(v15 + 4) = v16 - 1;
  *(_DWORD *)(v15 + 4) = v16;
  *a1 = a2;
  a1[1] = (__int64 *)v13;
  return a1;
}

