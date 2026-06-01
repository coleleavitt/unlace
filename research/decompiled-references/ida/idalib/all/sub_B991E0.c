bool __fastcall sub_B991E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v6; // rdx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  unsigned __int64 v13; // rax

  if ( !sub_B77270(a1, a2, a3, a4) || sub_B77A30(a1) )
    return 0;
  v5 = sub_B8C330(a1);
  v6 = *(_QWORD *)&byte_8[*(_QWORD *)(**(_QWORD **)(a1 + 120) + 48LL) & 0xFFFFFFFFFFFFFFF0LL];
  v7 = v6 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v6 | *(_BYTE *)(**(_QWORD **)(a1 + 120) + 48LL)) & 7;
  v8 = sub_B72690(a1 + 72);
  v12 = v8 - 64;
  if ( v8 )
    v8 -= 64LL;
  v13 = sub_A7AC20(v5, v8, v12, v9, v10, v11);
  return (*(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v13) & 7) == (*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
}
