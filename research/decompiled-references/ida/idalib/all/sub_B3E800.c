__int64 __fastcall sub_B3E800(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 result; // rax
  char **v10; // rdi
  size_t v11; // rbp
  const void *v12; // r15
  char *v13; // r12
  char *v14; // rax
  __int64 *v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // rbp
  int v18; // eax
  __int64 v19; // [rsp+8h] [rbp-50h]
  __int64 i; // [rsp+10h] [rbp-48h]
  unsigned __int64 v21; // [rsp+18h] [rbp-40h]

  v7 = a2[1];
  v8 = *a2;
  v19 = a1 + 16;
  result = a1 + 32;
  for ( i = a1 + 32; v7 != v8; *(_BYTE *)(v17 + 19) |= 2u )
  {
    v10 = *(char ***)(a1 + 8);
    v11 = *(_QWORD *)(v8 + 8);
    v12 = *(const void **)v8;
    v13 = *v10;
    v10[10] += v11 + 1;
    v14 = &v13[v11 + 1];
    if ( v10[1] >= v14 && v13 )
      *v10 = v14;
    else
      v13 = (char *)sub_986170((__int64)v10, v11 + 1, v11 + 1, 0, a5, a6);
    memcpy(v13, v12, v11);
    v13[v11] = 0;
    v15 = *(__int64 **)(a1 + 8);
    v16 = *v15;
    v15[10] += 24;
    a5 = (v16 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( v15[1] >= a5 + 24 && v16 )
    {
      *v15 = a5 + 24;
      v17 = (v16 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v17 = sub_986170((__int64)v15, 24, 24, 4, a5, a6);
      a5 = v17;
    }
    *(_QWORD *)(v17 + 16) = 0;
    *(_OWORD *)v17 = 0;
    *(_QWORD *)v17 = v13;
    v18 = (*(_DWORD *)a1)++ & 0xFFFFF;
    *(_DWORD *)(v17 + 16) = v18 | *(_DWORD *)(v17 + 16) & 0xFFF00000;
    result = *(unsigned int *)(a1 + 24);
    if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 28) )
    {
      v21 = a5;
      sub_2237220(v19, i, result + 1, 8);
      result = *(_QWORD *)(a1 + 16);
      a5 = v21;
      *(_QWORD *)(result + 8LL * *(unsigned int *)(a1 + 24)) = v21;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * result) = a5;
    }
    v8 += 32;
    ++*(_DWORD *)(a1 + 24);
  }
  return result;
}
