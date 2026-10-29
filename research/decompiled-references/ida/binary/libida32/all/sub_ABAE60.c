void __fastcall sub_ABAE60(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 *v3; // r12
  __int64 *v4; // r14
  __int64 v5; // rcx
  __int64 *v6; // r12
  __int64 *v7; // r14
  __int64 v8; // rcx
  __int64 *v9; // r12
  __int64 *v10; // r14
  __int64 v11; // rcx
  __int64 *v12; // r12
  __int64 *v13; // r14
  __int64 v14; // rcx
  __int64 *v15; // r12
  __int64 *v16; // r13
  __int64 v17; // rcx

  v2 = a1 + 8;
  sub_ABAAB0(a1 + 8, 0, 0, *(_QWORD *)(a2 + 48), a1);
  v3 = *(__int64 **)(a2 + 64);
  v4 = &v3[*(unsigned int *)(a2 + 56)];
  while ( v3 != v4 )
  {
    v5 = *v3++;
    sub_ABAAB0(v2, 0, 0, v5, a1);
  }
  v6 = *(__int64 **)(a2 + 80);
  v7 = &v6[*(unsigned int *)(a2 + 72)];
  while ( v6 != v7 )
  {
    v8 = *v6++;
    sub_ABAAB0(v2, 0, 0, v8, a1);
  }
  v9 = *(__int64 **)(a2 + 96);
  v10 = &v9[*(unsigned int *)(a2 + 88)];
  while ( v9 != v10 )
  {
    v11 = *v9++;
    sub_ABAAB0(v2, 0, 0, v11, a1);
  }
  v12 = *(__int64 **)(a2 + 112);
  v13 = &v12[*(unsigned int *)(a2 + 104)];
  while ( v12 != v13 )
  {
    v14 = *v12++;
    sub_ABAAB0(v2, 0, 0, v14, a1);
  }
  v15 = *(__int64 **)(a2 + 144);
  v16 = &v15[*(unsigned int *)(a2 + 136)];
  while ( v15 != v16 )
  {
    v17 = *v15++;
    sub_ABAAB0(v2, 0, 0, v17, a1);
  }
}

