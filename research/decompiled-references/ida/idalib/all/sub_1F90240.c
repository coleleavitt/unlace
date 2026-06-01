__int64 __fastcall sub_1F90240(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // ebp
  unsigned __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  __int64 v14; // r12
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // r13
  int v18; // ebp
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // rdx
  int v24; // eax
  __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  __m128 v27[3]; // [rsp+0h] [rbp-38h] BYREF

  v8 = *(_DWORD *)(a1 + 16);
  if ( !v8 )
  {
    v27[0].m128_u64[0] = 0;
LABEL_3:
    sub_18ACB90(a1, 2 * v8, a3, a4, a5, a6);
    goto LABEL_4;
  }
  v17 = *(_QWORD *)a1;
  v18 = v8 - 1;
  v19 = sub_FDE780(*a2);
  v20 = *a2;
  v21 = v18 & v19;
  v9 = v17 + 16LL * v21;
  v22 = *(_QWORD *)v9;
  if ( *a2 == *(_QWORD *)v9 )
  {
LABEL_11:
    sub_1898540(v27, (_QWORD *)v9, (_QWORD *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 16)), a1, 1);
    v16 = *(unsigned int *)(v27[0].m128_u64[0] + 8);
    return *(_QWORD *)(a1 + 24) + 16 * v16 + 8;
  }
  if ( v22 != -1 )
  {
    a5 = 1;
    v26 = 0;
    while ( 1 )
    {
      if ( !v26 && v22 == -2 )
        v26 = v9;
      a6 = (unsigned int)(a5 + 1);
      v21 = v18 & (a5 + v21);
      v9 = v17 + 16LL * v21;
      v22 = *(_QWORD *)v9;
      if ( v20 == *(_QWORD *)v9 )
        goto LABEL_11;
      if ( v22 == -1 )
      {
        a3 = *(unsigned int *)(a1 + 16);
        v8 = *(_DWORD *)(a1 + 16);
        if ( !v26 )
          goto LABEL_15;
        v9 = v26;
        goto LABEL_16;
      }
      a5 = (unsigned int)a6;
    }
  }
  a3 = *(unsigned int *)(a1 + 16);
LABEL_15:
  v8 = a3;
LABEL_16:
  v24 = *(_DWORD *)(a1 + 8);
  a4 = (unsigned int)(3 * a3);
  v27[0].m128_u64[0] = v9;
  v10 = v24 + 1;
  if ( 4 * v10 >= (unsigned int)a4 )
    goto LABEL_3;
  v25 = (unsigned int)a3 >> 3;
  if ( (int)a3 - (v10 + *(_DWORD *)(a1 + 12)) > (unsigned int)v25 )
    goto LABEL_5;
  sub_18ACB90(a1, a3, a3, v25, a5, a6);
LABEL_4:
  sub_19D29B0((__int64 *)a1, a2, v27);
  v9 = v27[0].m128_u64[0];
  v10 = *(_DWORD *)(a1 + 8) + 1;
LABEL_5:
  *(_DWORD *)(a1 + 8) = v10;
  if ( *(_QWORD *)v9 != -1 )
    --*(_DWORD *)(a1 + 12);
  v11 = *a2;
  *(_DWORD *)(v9 + 8) = 0;
  *(_QWORD *)v9 = v11;
  sub_1898540(v27, (_QWORD *)v9, (_QWORD *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 16)), a1, 1);
  v12 = *(unsigned int *)(a1 + 32);
  v13 = v27[0].m128_u64[0];
  v14 = *a2;
  if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 36) )
  {
    sub_2237220(a1 + 24, a1 + 40, v12 + 1, 16);
    v12 = *(unsigned int *)(a1 + 32);
  }
  v15 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16 * v12);
  *v15 = v14;
  v15[1] = 0;
  v16 = *(unsigned int *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = v16 + 1;
  *(_DWORD *)(v13 + 8) = v16;
  return *(_QWORD *)(a1 + 24) + 16 * v16 + 8;
}
