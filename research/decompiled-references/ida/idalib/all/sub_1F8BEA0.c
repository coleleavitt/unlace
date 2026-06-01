void __fastcall sub_1F8BEA0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // edx
  __int64 *v14; // rsi
  __int64 v15; // r8
  unsigned __int64 v16; // r15
  _QWORD *v17; // rdx
  unsigned __int64 *v18; // rdx
  unsigned __int64 *v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r8
  unsigned __int64 *v22; // r14
  unsigned __int64 *v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // esi
  int v32; // r8d
  __int64 v33; // r10
  __int64 v35; // [rsp+18h] [rbp-50h]
  __m128 v36[4]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  if ( !v4 || *(_BYTE *)(v4 + 9267) )
    return;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v10 = v5;
  if ( *(char *)(v5 + 29) < 0 )
  {
    v36[0].m128_u64[0] = v5;
    v30 = sub_1F8B440(a1 + 1288, (__int64 *)v36, v6, v7, v8, v9);
    sub_1F705B0(v30, 10, a3);
  }
  v11 = *(unsigned int *)(v4 + 12984);
  v12 = *(_QWORD *)(v4 + 12968);
  if ( !(_DWORD)v11 )
    goto LABEL_18;
  v13 = (v11 - 1) & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
  v14 = (__int64 *)(v12 + 40LL * v13);
  v15 = *v14;
  if ( v10 != *v14 )
  {
    v31 = 1;
    if ( v15 != -4096 )
    {
      do
      {
        v32 = v31 + 1;
        v13 = (v11 - 1) & (v31 + v13);
        v14 = (__int64 *)(v12 + 40LL * v13);
        v33 = *v14;
        if ( v10 == *v14 )
          goto LABEL_7;
        v31 = v32;
      }
      while ( v33 != -4096 );
    }
LABEL_18:
    sub_1F75600(v36, (_QWORD *)(v12 + 40 * v11), (_QWORD *)(v12 + 40 * v11), v4 + 12968, 1);
    v16 = v36[0].m128_u64[0];
    goto LABEL_8;
  }
LABEL_7:
  sub_1F75600(v36, v14, (_QWORD *)(v12 + 40 * v11), v4 + 12968, 1);
  v16 = v36[0].m128_u64[0];
LABEL_8:
  v17 = (_QWORD *)(*(_QWORD *)(v4 + 12968) + 40LL * *(unsigned int *)(v4 + 12984));
  sub_1F75600(v36, v17, v17, v4 + 12968, 1);
  if ( v36[0].m128_u64[0] != v16 )
  {
    v21 = *(_QWORD *)(v16 + 8);
    v22 = (unsigned __int64 *)(v21 + 8LL * *(unsigned int *)(v16 + 16));
    v23 = (unsigned __int64 *)v21;
    if ( (unsigned __int64 *)v21 != v22 )
    {
      do
      {
        while ( 1 )
        {
          v3 = v3 & 0xFFFFFFFF00000000LL | 0xA;
          v36[0].m128_u64[0] = sub_1EDB740(v4, *v23, (__int64)v18, (__int64)v19, v21, v20);
          v28 = sub_1F8B440(a1 + 1288, (__int64 *)v36, v24, v25, v26, v27);
          v29 = *(unsigned int *)(v28 + 8);
          v18 = (unsigned __int64 *)(v29 + 1);
          if ( v29 + 1 > (unsigned __int64)*(unsigned int *)(v28 + 12) )
            break;
          ++v23;
          v19 = (unsigned __int64 *)(*(_QWORD *)v28 + 16 * v29);
          *v19 = v3;
          v19[1] = a3;
          ++*(_DWORD *)(v28 + 8);
          if ( v22 == v23 )
            return;
        }
        ++v23;
        v35 = v28;
        sub_2237220(v28, v28 + 16, v18, 16);
        v18 = (unsigned __int64 *)(*(_QWORD *)v35 + 16LL * *(unsigned int *)(v35 + 8));
        *v18 = v3;
        v18[1] = a3;
        ++*(_DWORD *)(v35 + 8);
      }
      while ( v22 != v23 );
    }
  }
}
