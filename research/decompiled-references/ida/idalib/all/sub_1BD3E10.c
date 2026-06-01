__int64 __fastcall sub_1BD3E10(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        _DWORD *a6,
        char a7)
{
  __int64 *v7; // r13
  __int64 v8; // rbp
  __int64 v9; // r8
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  char v23; // bl
  __int64 v24; // rdi
  __int64 v25; // r12
  _QWORD *v26; // rbx
  __int64 v27; // rsi
  unsigned __int64 v28; // rax
  _QWORD *v30; // [rsp+8h] [rbp-60h]
  __int64 v31; // [rsp+10h] [rbp-58h]
  unsigned __int64 v32; // [rsp+18h] [rbp-50h]
  __int64 *v33; // [rsp+20h] [rbp-48h]

  v33 = &a2[a3];
  if ( v33 == a2 )
    return 1;
  v7 = a2;
  v8 = 0;
  v9 = (8 * a5) >> 3;
  v32 = a4;
  v31 = v9 - 1;
  while ( 1 )
  {
    v24 = *v7;
    v25 = v8;
    v26 = *(_QWORD **)(a1 + 248);
    if ( a7 )
      v25 = v31 - v8;
    v27 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL);
    v11 = (*(_BYTE *)(v27 + 8) & 0xF) != 0
        ? sub_F64F00(v24, v27, a3, a4, v9) & 0xFFFFFFFFFFFFFFF0LL
        : v27 & 0xFFFFFFFFFFFFFFF0LL;
    v12 = sub_A728F0(v26, v11, a3, a4, v9);
    v15 = *(_QWORD **)(a1 + 248);
    v16 = v12;
    v17 = *(_QWORD *)(v32 + 8 * v25) & 0xFFFFFFFFFFFFFFF0LL;
    v18 = *(_QWORD *)v17;
    if ( (*(_BYTE *)(*(_QWORD *)v17 + 8LL) & 0xF) != 0 )
    {
      v30 = *(_QWORD **)(a1 + 248);
      v28 = sub_F64F00(*(_QWORD *)(v32 + 8 * v25), v18, v13, (__int64)v15, v14);
      v15 = v30;
      v19 = v28 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v19 = v18 & 0xFFFFFFFFFFFFFFF0LL;
    }
    v20 = sub_A728F0(v15, v19, v13, (__int64)v15, v14);
    v21 = *(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL];
    v22 = *(_QWORD *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL];
    v23 = v21 | v16;
    a4 = v21 & 0xFFFFFFFFFFFFFFF8LL;
    LOBYTE(v20) = v22 | v20;
    a3 = v22 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (a4 | v23 & 7) != (a3 | v20 & 7) )
      break;
    ++v8;
    if ( v33 == ++v7 )
      return 1;
  }
  if ( a6 )
    *a6 = v8;
  return 0;
}
