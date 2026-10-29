__int64 __fastcall sub_DAB320(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  __int64 v8; // r12
  __int64 v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  unsigned __int64 v14; // rbp

  if ( *(_BYTE *)(a1 + 664) )
  {
    v5 = sub_DA8B90(a1, a2, a3 ^ 1);
    v6 = sub_DA8B90(a1, a2 ^ 1, a4 ^ 1);
    v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
    ++*(_DWORD *)((v5 & 0xFFFFFFFFFFFFFFFELL) + 4);
    ++*(_DWORD *)((v6 & 0xFFFFFFFFFFFFFFFELL) + 4);
    v8 = sub_DA8B90(a1, v5 ^ 1, v6 ^ 1);
    ++*(_DWORD *)((v8 & 0xFFFFFFFFFFFFFFFELL) + 4);
    sub_DAAB00(a1, v5 & 0xFFFFFFFFFFFFFFFELL);
    sub_DAAB00(a1, v7);
    --*(_DWORD *)((v8 & 0xFFFFFFFFFFFFFFFELL) + 4);
  }
  else
  {
    v10 = sub_DA8B90(a1, a2, a3);
    ++*(_DWORD *)((v10 & 0xFFFFFFFFFFFFFFFELL) + 4);
    v11 = sub_DA8B90(a1, a2 ^ 1, a4);
    v12 = v11 & 0xFFFFFFFFFFFFFFFELL;
    ++*(_DWORD *)((v11 & 0xFFFFFFFFFFFFFFFELL) + 4);
    v13 = sub_DA8B90(a1, v10 ^ 1, v11 ^ 1);
    v14 = v13 & 0xFFFFFFFFFFFFFFFELL;
    v8 = v13 ^ 1;
    ++*(_DWORD *)((v13 & 0xFFFFFFFFFFFFFFFELL) + 4);
    sub_DAAB00(a1, v10 & 0xFFFFFFFFFFFFFFFELL);
    sub_DAAB00(a1, v12);
    --*(_DWORD *)(v14 + 4);
  }
  return v8;
}

