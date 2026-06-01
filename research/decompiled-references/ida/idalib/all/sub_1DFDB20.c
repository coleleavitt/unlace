__int64 __fastcall sub_1DFDB20(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rbp
  int v9; // eax
  int v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // r14
  int v13; // eax
  int v14; // r12d
  void *v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // [rsp+18h] [rbp-50h]

  result = 0;
  v6 = *(_QWORD *)(a2 + 56);
  if ( (v6 & 4) == 0 || !*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL) )
    return result;
  if ( (*(_WORD *)(a3 + 30) & 0x180) == 0 )
  {
    v7 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) == 0 )
      goto LABEL_7;
    goto LABEL_6;
  }
  v7 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
LABEL_6:
    v7 = *(_QWORD *)(v7 + 8);
LABEL_7:
  v8 = *(_QWORD *)(a1 + 544);
  *(_QWORD *)(a1 + 544) = v7;
  v9 = *(_DWORD *)(a1 + 40);
  v10 = *(_DWORD *)(a1 + 80);
  v11 = *(_QWORD *)(a1 + 9944);
  v12 = *(_QWORD *)(a1 + 512);
  *(_QWORD *)(a1 + 9944) = 0;
  *(_DWORD *)(a1 + 80) = v9;
  v13 = *(_DWORD *)(a1 + 3688);
  v14 = *(_DWORD *)(a1 + 2632);
  v21 = v11;
  v15 = nullptr;
  *(_QWORD *)(a1 + 512) = 0;
  *(_DWORD *)(a1 + 2632) = v13;
  v16 = *(_QWORD *)(a2 + 56);
  v17 = 0;
  if ( (v16 & 4) != 0 )
  {
    v18 = (unsigned __int64 *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
    v17 = *v18;
    v15 = (void *)v18[1];
  }
  v20 = sub_1DEB190(a1, v17, v15, a4);
  result = 1;
  if ( v20 )
  {
    sub_B7BD70(a3, v20, v19);
    result = 0;
  }
  if ( v8 )
  {
    *(_QWORD *)(a1 + 544) = v8;
    *(_QWORD *)(a1 + 512) = v12;
    *(_QWORD *)(a1 + 9944) = v21;
    *(_DWORD *)(a1 + 80) = v10;
    *(_DWORD *)(a1 + 2632) = v14;
  }
  return result;
}
