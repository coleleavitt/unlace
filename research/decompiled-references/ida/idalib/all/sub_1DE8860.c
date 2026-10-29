__int64 __fastcall sub_1DE8860(__int64 *a1, unsigned __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v6; // r13
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // r12
  _WORD *v12; // r14
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  unsigned __int64 v18; // rcx
  unsigned __int64 *v19; // r12
  unsigned __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v23; // r13
  unsigned __int64 *v24; // rax
  unsigned __int64 *v25; // r12
  __int64 v26; // rbp
  unsigned __int64 v27; // rax
  __int64 v28; // rdi
  _QWORD *v29; // rsi
  unsigned __int64 *v30; // [rsp+8h] [rbp-30h] BYREF

  if ( *(char *)(a2 + 2) >= 0 )
  {
    v6 = *a1;
    sub_18C79B0(*a1, 0, 0, 4);
    v11 = *(_QWORD *)(a2 + 16);
    v30 = nullptr;
    if ( (*(_WORD *)v11 & 0x1FF) == 0x14 && (v12 = *(_WORD **)(v11 + 24), (*v12 & 0x1FF) == 0x45) )
    {
      v13 = *(_QWORD *)(v11 + 24);
      v14 = sub_1DE85A0(a1, v13, 0, &v30, a3, a4);
      if ( v14 > 1 )
      {
        v17 = *a1;
        v18 = v14 & 0xFFFFFFFFFFFFFFFELL;
        if ( *(_DWORD *)(*a1 + 12632) || (v14 = v11, v12 != (_WORD *)v18) )
        {
          v13 = *(unsigned int *)(v11 + 16);
          v14 = sub_190C990(v17, v13, *(_DWORD *)(v11 + 20), v18, *(double *)a3.m128_u64, a4);
        }
      }
    }
    else
    {
      v13 = v11;
      v14 = (unsigned __int64)sub_1DC71F0(a1, v11, v7, v8, v9, v10, a3, a4);
    }
    v19 = v30;
    if ( v30 )
    {
      v20 = sub_EEC8C0(a2, v13, *(double *)a3.m128_u64);
      v21 = sub_1944A80(*a1, v19, *(_DWORD *)(a2 + 24), (*(_BYTE *)(a2 + 2) >> 3) & 0xF, v20, a3, a4);
    }
    else if ( v14 == 1 )
    {
      v21 = 1;
    }
    else
    {
      v28 = *a1;
      v29 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFELL);
      if ( *(_DWORD *)(*a1 + 12632) || (v21 = a2, *(_QWORD **)(a2 + 16) != v29) )
        v21 = sub_1934340(
                v28,
                v29,
                *(unsigned int *)(a2 + 24),
                (*(_BYTE *)(a2 + 2) >> 3) & 0xF,
                v15,
                v16,
                (__m128i)a3,
                a4);
    }
    sub_190D5E0(v6, a3);
    return v21;
  }
  v23 = *(_QWORD *)(a2 + 16);
  v24 = sub_1DD1930((__int64)a1, v23, a3, a4);
  v25 = v24;
  if ( !v24 )
    return 1;
  v26 = *a1;
  if ( !*(_DWORD *)(*a1 + 12632) && v24 == (unsigned __int64 *)v23 )
    return a2;
  v27 = sub_EEC8C0(a2, v23, *(double *)a3.m128_u64);
  return sub_1944A80(v26, v25, *(_DWORD *)(a2 + 24), (*(_BYTE *)(a2 + 2) >> 3) & 0xF, v27, a3, a4);
}
