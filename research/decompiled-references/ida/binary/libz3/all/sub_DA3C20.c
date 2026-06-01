__int64 **__fastcall sub_DA3C20(__int64 **a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  __int64 v12; // r14
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  int v15; // eax
  __int64 v17; // rax
  unsigned __int64 v18; // r15
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+8h] [rbp-40h]
  __int64 v23; // [rsp+8h] [rbp-40h]
  unsigned __int64 v24; // [rsp+8h] [rbp-40h]

  v5 = *a2;
  v6 = *(_QWORD *)(a4 + 8);
  v7 = *(_QWORD *)(a3 + 8);
  v8 = v7 ^ 1;
  if ( *(_BYTE *)(v5 + 664) )
  {
    v9 = sub_DA8B90(v5, v7, v6 ^ 1);
    v10 = sub_DA8B90(v5, v8, v6);
    v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
    ++*(_DWORD *)((v9 & 0xFFFFFFFFFFFFFFFELL) + 4);
    ++*(_DWORD *)((v10 & 0xFFFFFFFFFFFFFFFELL) + 4);
    v22 = v9 & 0xFFFFFFFFFFFFFFFELL;
    v12 = sub_DA8B90(v5, v9 ^ 1, v10 ^ 1);
    v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
    ++*(_DWORD *)((v12 & 0xFFFFFFFFFFFFFFFELL) + 4);
    sub_DAAB00(v5, v22);
    v14 = v11;
  }
  else
  {
    v23 = v6 ^ 1;
    v17 = sub_DA8B90(v5, v7, v6);
    v18 = v17 & 0xFFFFFFFFFFFFFFFELL;
    v19 = v17 ^ 1;
    ++*(_DWORD *)((v17 & 0xFFFFFFFFFFFFFFFELL) + 4);
    v20 = sub_DA8B90(v5, v8, v23);
    ++*(_DWORD *)((v20 & 0xFFFFFFFFFFFFFFFELL) + 4);
    v24 = v20 & 0xFFFFFFFFFFFFFFFELL;
    v21 = sub_DA8B90(v5, v19, v20 ^ 1);
    v13 = v21 & 0xFFFFFFFFFFFFFFFELL;
    v12 = v21 ^ 1;
    ++*(_DWORD *)((v21 & 0xFFFFFFFFFFFFFFFELL) + 4);
    sub_DAAB00(v5, v18);
    v14 = v24;
  }
  sub_DAAB00(v5, v14);
  v15 = *(_DWORD *)(v13 + 4);
  *(_DWORD *)(v13 + 4) = v15 - 1;
  *(_DWORD *)(v13 + 4) = v15;
  *a1 = a2;
  a1[1] = (__int64 *)v12;
  return a1;
}

