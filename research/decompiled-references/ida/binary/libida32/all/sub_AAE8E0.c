void __fastcall sub_AAE8E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v7; // r9
  __int64 *v8; // rbx
  __int64 *v9; // r14
  __int64 v10; // rcx
  __int64 *v11; // rbx
  __int64 *v12; // r14
  __int64 v13; // rcx
  __int64 *v14; // rbx
  __int64 *v15; // r13
  __int64 v16; // rcx

  v6 = a1 + 8;
  sub_AAE4E0(a1 + 8, 0, 0, *(_QWORD *)(a2 + 40), a1, a6);
  v8 = *(__int64 **)(a2 + 64);
  v9 = &v8[*(unsigned int *)(a2 + 56)];
  while ( v9 != v8 )
  {
    v10 = *v8++;
    sub_AAE4E0(v6, 0, 0, v10, a1, v7);
  }
  v11 = *(__int64 **)(a2 + 80);
  v12 = &v11[*(unsigned int *)(a2 + 72)];
  while ( v11 != v12 )
  {
    v13 = *v11++;
    sub_AAE4E0(v6, 0, 0, v13, a1, v7);
  }
  v14 = *(__int64 **)(a2 + 96);
  v15 = &v14[*(unsigned int *)(a2 + 88)];
  while ( v14 != v15 )
  {
    v16 = *v14++;
    sub_AAE4E0(v6, 0, 0, v16, a1, v7);
  }
}

