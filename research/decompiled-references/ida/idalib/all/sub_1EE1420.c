unsigned __int64 __fastcall sub_1EE1420(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rdx
  int v8; // r12d
  unsigned __int64 result; // rax
  unsigned __int64 i; // rax
  __int64 v11; // rcx
  unsigned __int64 *v12; // rbp
  unsigned int v13; // edx
  __int64 v14; // rdi
  __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rcx
  char *v18; // rbp
  __int64 v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rsi
  void *v23; // rax
  __int64 v24; // rdx
  void *v25; // r10
  void *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rbp
  __int64 v30; // rsi
  char *v31; // rax
  __int64 v32; // rdx
  char *v33; // rcx
  __int64 v34; // rdx
  unsigned __int64 v35; // [rsp+18h] [rbp-50h]

  v4 = *(unsigned int *)(a1 + 24);
  *(_DWORD *)(a1 + 24) = v4 + 1;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(v5 + 8 * v4);
  v8 = v7 - 1;
  result = (__int64)((*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL) - *(_QWORD *)a2) >> 3;
  if ( (unsigned int)v7 > (unsigned int)result )
  {
    v7 = (unsigned int)v7;
    v28 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    if ( (unsigned int)v7 <= 2 * result )
    {
      v29 = 16 * result;
      if ( 2 * result > 0xFFFFFFFFFFFFFFFLL )
      {
        v30 = -1;
LABEL_18:
        v31 = (char *)sub_1EC2080((__int64 *)(*(_QWORD *)(v6 + 144) + 2352LL), v30, 3u);
        v32 = *(_QWORD *)(a2 + 8);
        v33 = v31;
        if ( *(_QWORD *)a2 != v32 )
          v33 = (char *)memmove(v31, *(const void **)a2, v32 - *(_QWORD *)a2);
        v34 = *(_QWORD *)(a2 + 16);
        *(_QWORD *)a2 = v33;
        *(_QWORD *)(a2 + 8) = &v33[v28];
        *(_QWORD *)(a2 + 16) = v34 & 7 | (unsigned __int64)&v33[v29];
        v6 = *(_QWORD *)(a1 + 8);
        goto LABEL_3;
      }
      v7 = 2 * result;
    }
    v30 = 8 * v7;
    v29 = 8 * v7;
    goto LABEL_18;
  }
  if ( (_DWORD)v7 )
  {
LABEL_3:
    for ( i = sub_1EE13A0(v6, *(_QWORD *)(a1 + 16), (__int64 *)(a1 + 32), (_DWORD *)(a1 + 24));
          ;
          i = sub_1EE13A0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), (__int64 *)(a1 + 32), (_DWORD *)(a1 + 24)) )
    {
      v11 = *(unsigned int *)(a1 + 24);
      *(_DWORD *)(a1 + 24) = v11 + 1;
      v12 = *(unsigned __int64 **)(a2 + 8);
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v11);
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL);
      v15 = *(_QWORD *)(a2 + 16);
      v16 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      result = v13 | (8 * i) | 4;
      *(_QWORD *)(a2 + 16) = v15 | 4;
      v17 = result;
      if ( (unsigned __int64)v12 < v16 )
        goto LABEL_4;
      v18 = (char *)v12 - *(_QWORD *)a2;
      v19 = (__int64)(v16 - *(_QWORD *)a2) >> 3;
      v20 = 2 * v19;
      if ( !(2 * v19) )
        break;
      v21 = 16 * v19;
      v22 = -1;
      if ( v20 <= 0xFFFFFFFFFFFFFFFLL )
      {
        v22 = v21;
        goto LABEL_14;
      }
LABEL_9:
      v35 = v17;
      v23 = (void *)sub_1EC2080((__int64 *)(v14 + 2352), v22, 3u);
      v24 = *(_QWORD *)(a2 + 8);
      v25 = v23;
      v17 = v35;
      if ( *(_QWORD *)a2 != v24 )
      {
        v26 = memmove(v23, *(const void **)a2, v24 - *(_QWORD *)a2);
        v17 = v35;
        v25 = v26;
      }
      v27 = *(_QWORD *)(a2 + 16);
      v12 = (unsigned __int64 *)&v18[(_QWORD)v25];
      *(_QWORD *)a2 = v25;
      *(_QWORD *)(a2 + 8) = v12;
      result = v27 & 7;
      *(_QWORD *)(a2 + 16) = result | ((unsigned __int64)v25 + v21);
LABEL_4:
      --v8;
      *v12 = v17;
      *(_QWORD *)(a2 + 8) += 8LL;
      if ( v8 == -1 )
        return result;
    }
    v22 = 8;
LABEL_14:
    v21 = v22;
    goto LABEL_9;
  }
  return result;
}
