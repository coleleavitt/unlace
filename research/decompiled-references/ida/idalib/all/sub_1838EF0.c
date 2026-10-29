__int64 __fastcall sub_1838EF0(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  int v12; // eax
  char *v13; // rax
  char *v14; // r9
  int v15; // r10d
  int v17; // edx
  __int64 v18; // r8
  int v19; // esi
  unsigned int v20; // edx
  __int64 *v21; // rdi
  __int64 v22; // r9
  _QWORD *v23; // rdi
  __int64 v24; // rax
  _QWORD *v25; // rax
  int v26; // r9d
  char *v27; // r10
  int v28; // edi
  int v29; // r10d
  __int64 v30; // r9
  __int64 v31[4]; // [rsp+8h] [rbp-20h] BYREF

  v5 = *((unsigned int *)a1 + 14);
  v6 = *((unsigned int *)a1 + 15);
  if ( v5 + 1 > v6 )
  {
    sub_2237220(a1 + 6, a1 + 8, v5 + 1, 8);
    v5 = *((unsigned int *)a1 + 14);
  }
  *(_QWORD *)(a1[6] + 8 * v5) = a2;
  v7 = *a1;
  ++*((_DWORD *)a1 + 14);
  if ( !(unsigned __int8)sub_C01160(a2[1], *(_QWORD *)(v7 + 248), 1, v6, a5) )
    return 0;
  v8 = *a2;
  v9 = *a1;
  v10 = (*a2 >> 1) & 3;
  if ( v10 == 1 )
  {
    v12 = *(_DWORD *)(v9 + 3936);
    v11 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    v31[0] = v8 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v12 )
    {
LABEL_8:
      v13 = (char *)sub_18382E0(
                      *(_QWORD **)(v9 + 3952),
                      *(_QWORD *)(v9 + 3952) + 8LL * *(unsigned int *)(v9 + 3960),
                      v31);
      if ( v14 != v13 )
      {
        if ( v14 != v13 + 8 )
        {
          memmove(v13, v13 + 8, v14 - (v13 + 8));
          v15 = *(_DWORD *)(v9 + 3960);
        }
        *(_DWORD *)(v9 + 3960) = v15 - 1;
      }
      return 0;
    }
  }
  else
  {
    v11 = 0;
    if ( v10 == 2 )
      v11 = *(_QWORD *)(*(_QWORD *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 56)
                      + 8LL * *(unsigned int *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 64)
                      - 8);
    v12 = *(_DWORD *)(v9 + 3936);
    v31[0] = v11;
    if ( !v12 )
      goto LABEL_8;
  }
  v17 = *(_DWORD *)(v9 + 3944);
  v18 = *(_QWORD *)(v9 + 3928);
  if ( !v17 )
    return 0;
  v19 = v17 - 1;
  v20 = (v17 - 1) & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
  v21 = (__int64 *)(v18 + 8LL * v20);
  v22 = *v21;
  if ( v11 != *v21 )
  {
    v28 = 1;
    if ( v22 != -4096 )
    {
      while ( 1 )
      {
        v29 = v28 + 1;
        v20 = v19 & (v28 + v20);
        v21 = (__int64 *)(v18 + 8LL * v20);
        v30 = *v21;
        if ( v11 == *v21 )
          break;
        v28 = v29;
        if ( v30 == -4096 )
          return 0;
      }
      goto LABEL_16;
    }
    return 0;
  }
LABEL_16:
  *v21 = -8192;
  v23 = *(_QWORD **)(v9 + 3952);
  *(_DWORD *)(v9 + 3936) = v12 - 1;
  v24 = *(unsigned int *)(v9 + 3960);
  ++*(_DWORD *)(v9 + 3940);
  v25 = sub_18382E0(v23, (__int64)&v23[v24], v31);
  if ( v27 != (char *)(v25 + 1) )
  {
    memmove(v25, v25 + 1, v27 - (char *)(v25 + 1));
    v26 = *(_DWORD *)(v9 + 3960);
  }
  *(_DWORD *)(v9 + 3960) = v26 - 1;
  return 0;
}
