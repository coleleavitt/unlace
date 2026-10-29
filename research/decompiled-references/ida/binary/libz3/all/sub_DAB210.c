__int64 __fastcall sub_DAB210(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rsi
  __int64 v9; // r12
  unsigned __int64 v10; // rbp
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rax

  v3 = a3 ^ 1;
  if ( *(_BYTE *)(a1 + 664) )
  {
    v5 = sub_DA8B90(a1, a2, a3 ^ 1);
    v6 = sub_DA8B90(a1, a2 ^ 1, a3);
    v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
    ++*(_DWORD *)((v5 & 0xFFFFFFFFFFFFFFFELL) + 4);
    ++*(_DWORD *)((v6 & 0xFFFFFFFFFFFFFFFELL) + 4);
    v8 = v5 & 0xFFFFFFFFFFFFFFFELL;
    v9 = sub_DA8B90(a1, v5 ^ 1, v6 ^ 1);
    v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
    ++*(_DWORD *)((v9 & 0xFFFFFFFFFFFFFFFELL) + 4);
  }
  else
  {
    v12 = sub_DA8B90(a1, a2, a3);
    ++*(_DWORD *)((v12 & 0xFFFFFFFFFFFFFFFELL) + 4);
    v13 = sub_DA8B90(a1, a2 ^ 1, v3);
    v7 = v13 & 0xFFFFFFFFFFFFFFFELL;
    ++*(_DWORD *)((v13 & 0xFFFFFFFFFFFFFFFELL) + 4);
    v14 = sub_DA8B90(a1, v12 ^ 1, v13 ^ 1);
    v8 = v12 & 0xFFFFFFFFFFFFFFFELL;
    v10 = v14 & 0xFFFFFFFFFFFFFFFELL;
    v9 = v14 ^ 1;
    ++*(_DWORD *)((v14 & 0xFFFFFFFFFFFFFFFELL) + 4);
  }
  sub_DAAB00(a1, v8);
  sub_DAAB00(a1, v7);
  --*(_DWORD *)(v10 + 4);
  return v9;
}

