__int64 __fastcall sub_1773520(__int64 *a1, unsigned __int64 a2, __m128 a3)
{
  __int64 v5; // r13
  unsigned __int64 v6; // r12
  _WORD *v7; // r14
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rbp
  void **v16; // r13
  void **v17; // rax
  void **v18; // r12
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // rsi
  _QWORD v23[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( *(char *)(a2 + 2) >= 0 )
  {
    v5 = *a1;
    sub_18C79B0(*a1, 0, 0, 4);
    v6 = *(_QWORD *)(a2 + 16);
    v23[0] = 0;
    if ( (*(_WORD *)v6 & 0x1FF) == 0x14 && (v7 = *(_WORD **)(v6 + 24), (*v7 & 0x1FF) == 0x45) )
    {
      v8 = *(_QWORD *)(v6 + 24);
      v9 = sub_1773260(a1, v8, 0, (__int64)v23, a3);
      if ( v9 > 1 )
      {
        v10 = *a1;
        v11 = v9 & 0xFFFFFFFFFFFFFFFELL;
        if ( *(_DWORD *)(*a1 + 12632) || (v9 = v6, v7 != (_WORD *)v11) )
        {
          v8 = *(unsigned int *)(v6 + 16);
          v9 = sub_190C990(v10, v8, *(unsigned int *)(v6 + 20), v11);
        }
      }
    }
    else
    {
      v8 = v6;
      v9 = sub_175B800(a1, (unsigned __int16 *)v6);
    }
    v12 = v23[0];
    if ( v23[0] )
    {
      v13 = sub_EEC8C0(a2, v8, *(double *)a3.m128_u64);
      v14 = sub_1944A80(*a1, v12, *(unsigned int *)(a2 + 24), (*(_BYTE *)(a2 + 2) >> 3) & 0xF, v13);
    }
    else if ( v9 == 1 )
    {
      v14 = 1;
    }
    else
    {
      v21 = *a1;
      v22 = v9 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_DWORD *)(*a1 + 12632) || (v14 = a2, *(_QWORD *)(a2 + 16) != v22) )
        v14 = sub_1934340(v21, v22, *(unsigned int *)(a2 + 24), (*(_BYTE *)(a2 + 2) >> 3) & 0xF);
    }
    sub_190D5E0(v5);
    return v14;
  }
  v16 = *(void ***)(a2 + 16);
  v17 = sub_176A140(a1, v16, a3);
  v18 = v17;
  if ( !v17 )
    return 1;
  v19 = *a1;
  if ( !*(_DWORD *)(*a1 + 12632) && v17 == v16 )
    return a2;
  v20 = sub_EEC8C0(a2, (__int64)v16, *(double *)a3.m128_u64);
  return sub_1944A80(v19, v18, *(unsigned int *)(a2 + 24), (*(_BYTE *)(a2 + 2) >> 3) & 0xF, v20);
}
