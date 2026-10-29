__int64 __fastcall sub_1E26470(__int64 *a1, unsigned __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v6; // r13
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // r12
  _WORD *v11; // r14
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  unsigned __int64 *v18; // r12
  unsigned __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v22; // r13
  unsigned __int64 *v23; // rax
  unsigned __int64 *v24; // r12
  __int64 v25; // rbp
  unsigned __int64 v26; // rax
  __int64 v27; // rdi
  _QWORD *v28; // rsi
  unsigned __int64 *v29; // [rsp+8h] [rbp-30h] BYREF

  if ( *(char *)(a2 + 2) >= 0 )
  {
    v6 = *a1;
    sub_18C79B0(*a1, 0, 0, 4);
    v10 = *(_QWORD *)(a2 + 16);
    v29 = nullptr;
    if ( (*(_WORD *)v10 & 0x1FF) == 0x14 && (v11 = *(_WORD **)(v10 + 24), (*v11 & 0x1FF) == 0x45) )
    {
      v12 = *(_QWORD *)(v10 + 24);
      v13 = sub_1E261B0(a1, v12, 0, &v29, a3, a4);
      if ( v13 > 1 )
      {
        v16 = *a1;
        v17 = v13 & 0xFFFFFFFFFFFFFFFELL;
        if ( *(_DWORD *)(*a1 + 12632) || (v13 = v10, v11 != (_WORD *)v17) )
        {
          v12 = *(unsigned int *)(v10 + 16);
          v13 = sub_190C990(v16, v12, *(_DWORD *)(v10 + 20), v17, *(double *)a3.m128_u64, a4);
        }
      }
    }
    else
    {
      v12 = v10;
      v13 = sub_1E11560(a1, (unsigned __int16 *)v10, a3, a4, v7, v8, v9);
    }
    v18 = v29;
    if ( v29 )
    {
      v19 = sub_EEC8C0(a2, v12, *(double *)a3.m128_u64);
      v20 = sub_1944A80(*a1, v18, *(_DWORD *)(a2 + 24), (*(_BYTE *)(a2 + 2) >> 3) & 0xF, v19, a3, a4);
    }
    else if ( v13 == 1 )
    {
      v20 = 1;
    }
    else
    {
      v27 = *a1;
      v28 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFELL);
      if ( *(_DWORD *)(*a1 + 12632) || (v20 = a2, *(_QWORD **)(a2 + 16) != v28) )
        v20 = sub_1934340(
                v27,
                v28,
                *(unsigned int *)(a2 + 24),
                (*(_BYTE *)(a2 + 2) >> 3) & 0xF,
                v14,
                v15,
                (__m128i)a3,
                a4);
    }
    sub_190D5E0(v6, a3);
    return v20;
  }
  v22 = *(_QWORD *)(a2 + 16);
  v23 = sub_1E1F330(a1, v22, a3, a4);
  v24 = v23;
  if ( !v23 )
    return 1;
  v25 = *a1;
  if ( !*(_DWORD *)(*a1 + 12632) && v23 == (unsigned __int64 *)v22 )
    return a2;
  v26 = sub_EEC8C0(a2, v22, *(double *)a3.m128_u64);
  return sub_1944A80(v25, v24, *(_DWORD *)(a2 + 24), (*(_BYTE *)(a2 + 2) >> 3) & 0xF, v26, a3, a4);
}
