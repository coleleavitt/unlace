void __fastcall sub_F34B20(__int64 a1, __int64 a2, int a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r10
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r15
  unsigned __int64 v15; // r12
  __int64 v16; // r15
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // r15d
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rdi
  unsigned __int64 v26[8]; // [rsp+18h] [rbp-40h] BYREF

  v6 = a4;
  v11 = *(unsigned int *)(a1 + 8);
  if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_22134E0(a1, a1 + 16, v11 + 1, 4);
    v11 = *(unsigned int *)(a1 + 8);
    v6 = a4;
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v11) = a3;
  v12 = *(unsigned int *)(a1 + 12);
  v13 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v13;
  v14 = *v6;
  v15 = *v6 & 0xFFFFFFFFFFFFFFF8LL;
  v26[0] = v6[1];
  v16 = v14 >> 2;
  if ( v13 + 1 > v12 )
  {
    sub_22134E0(a1, a1 + 16, v13 + 1, 4);
    v13 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v13) = v15;
  v17 = HIDWORD(v15);
  v18 = *(unsigned int *)(a1 + 12);
  v19 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v19;
  if ( v19 + 1 > v18 )
  {
    sub_22134E0(a1, a1 + 16, v19 + 1, 4);
    v19 = *(unsigned int *)(a1 + 8);
  }
  v20 = v16 & 1;
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v19) = v17;
  v21 = *(unsigned int *)(a1 + 12);
  v22 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v22;
  if ( v22 + 1 > v21 )
  {
    sub_22134E0(a1, a1 + 16, v22 + 1, 4);
    v22 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v22) = v20;
  ++*(_DWORD *)(a1 + 8);
  sub_EFEBC0(v26, a1);
  v23 = a5 + 24 * a6;
  while ( v23 != a5 )
  {
    v24 = a5;
    a5 += 24;
    sub_EF9920(v24, a1, a2);
  }
}

