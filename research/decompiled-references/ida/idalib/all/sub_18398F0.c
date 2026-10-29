__int64 __fastcall sub_18398F0(__int64 a1, __int64 a2, double a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // r14
  __int64 v11; // r13
  __int64 *v12; // rax
  __int64 v14; // [rsp-8h] [rbp-30h]
  int v15; // [rsp+0h] [rbp-28h]

  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = (unsigned int)*(unsigned __int8 *)(v6 + 16) - 25;
  if ( (unsigned int)v7 > 1 )
    v6 = sub_F63050(v6, a2, v7, a5);
  v8 = *(_QWORD *)(v6 + 24);
  if ( (*(_BYTE *)(a2 + 1) & 6) == 0 )
  {
    v9 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v9 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v9 | (unsigned __int8)*(_QWORD *)(a2 + 8)) & 7) == (*(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v8 | (unsigned __int8)*(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL]) & 7) )
      return a2;
  }
  v10 = *(_QWORD *)a1;
  v11 = *(unsigned int *)(a1 + 176);
  v12 = sub_A81910(*(_QWORD **)(*(_QWORD *)a1 + 248LL), v8, *(_DWORD *)(a1 + 176));
  return sub_16B28E0(v10, *(_DWORD *)(a1 + 176), 0x91u, v12, a2, (v11 << 32) | v11, a3, (v11 << 32) | v11, v14, v15);
}
