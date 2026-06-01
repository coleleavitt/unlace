unsigned __int64 __fastcall sub_42E5E0(_QWORD *a1, unsigned int a2)
{
  _DWORD *v3; // rdi
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  _QWORD *v8; // rax
  size_t v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r12
  _QWORD *v12; // rax
  size_t v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r12
  _QWORD *v16; // rax
  size_t v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rbp
  _QWORD *v20; // rax
  size_t v21; // rdx
  unsigned __int64 v23; // rdx
  _DWORD *v24; // rax
  int v25; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v26; // [rsp+8h] [rbp-20h]

  v26 = __readfsqword(0x28u);
  v3 = (_DWORD *)a1[15];
  v4 = a1[14];
  v5 = ((__int64)v3 - v4) >> 2;
  if ( a2 >= v5 )
  {
    v23 = a2 + 1;
    v25 = -1;
    if ( v5 < v23 )
    {
      sub_424500((__int64)(a1 + 14), v3, v23 - v5, &v25);
      v4 = a1[14];
    }
    else if ( v23 < v5 )
    {
      v24 = (_DWORD *)(v4 + 4 * v23);
      if ( v3 != v24 )
        a1[15] = v24;
    }
  }
  *(_DWORD *)(v4 + 4LL * a2) = -1;
  v6 = a1[24];
  v7 = *(unsigned int *)(a1[28] + 4LL * a2);
  v8 = (_QWORD *)(v6 + 8 * v7);
  v9 = *(_QWORD *)(v6 + 8LL * (unsigned int)(*(_DWORD *)(a1[28] + 4LL * a2) + 1)) - *v8;
  a1[27] += v9;
  memset((void *)(a1[18] + *v8), 0, v9);
  *(_DWORD *)(a1[21] + 4 * v7) = -1;
  v10 = a1[37];
  v11 = *(unsigned int *)(a1[41] + 4LL * a2);
  v12 = (_QWORD *)(v10 + 8 * v11);
  v13 = *(_QWORD *)(v10 + 8LL * (unsigned int)(*(_DWORD *)(a1[41] + 4LL * a2) + 1)) - *v12;
  a1[40] += v13;
  memset((void *)(a1[31] + *v12), 0, v13);
  *(_DWORD *)(a1[34] + 4 * v11) = -1;
  v14 = a1[51];
  v15 = *(unsigned int *)(a1[55] + 4LL * a2);
  v16 = (_QWORD *)(v14 + 8 * v15);
  v17 = *(_QWORD *)(v14 + 8LL * (unsigned int)(*(_DWORD *)(a1[55] + 4LL * a2) + 1)) - *v16;
  a1[54] += v17;
  memset((void *)(a1[45] + *v16), 0, v17);
  *(_DWORD *)(a1[48] + 4 * v15) = -1;
  v18 = a1[64];
  v19 = *(unsigned int *)(a1[68] + 4LL * a2);
  v20 = (_QWORD *)(v18 + 8 * v19);
  v21 = *(_QWORD *)(v18 + 8LL * (unsigned int)(v19 + 1)) - *v20;
  a1[67] += v21;
  memset((void *)(a1[58] + *v20), 0, v21);
  *(_DWORD *)(a1[61] + 4 * v19) = -1;
  return v26 - __readfsqword(0x28u);
}

