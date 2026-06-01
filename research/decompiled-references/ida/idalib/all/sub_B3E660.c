__int64 __fastcall sub_B3E660(__int64 a1, char **a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 result; // rax
  char **i; // rdi
  size_t v11; // rbp
  char *v12; // r13
  const void *v13; // r14
  char *v14; // rax
  __int64 *v15; // rdi
  __int64 v16; // rdx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rbp
  int v19; // eax
  __int64 v20; // [rsp+0h] [rbp-48h]

  *(_QWORD *)(a1 + 16) = a1 + 32;
  *(_DWORD *)a1 = 199;
  *(_QWORD *)(a1 + 8) = a2;
  v7 = *a3;
  v8 = a3[1];
  v20 = a1 + 32;
  result = 0x400000000LL;
  *(_QWORD *)(a1 + 24) = 0x400000000LL;
  if ( v7 != v8 )
  {
    for ( i = a2; ; i = *(char ***)(a1 + 8) )
    {
      v11 = *(_QWORD *)(v7 + 8);
      v12 = *i;
      v13 = *(const void **)v7;
      i[10] += v11 + 1;
      v14 = &v12[v11 + 1];
      if ( i[1] >= v14 && v12 )
        *i = v14;
      else
        v12 = (char *)sub_986170((__int64)i, v11 + 1, v11 + 1, 0, a5, a6);
      memcpy(v12, v13, v11);
      v12[v11] = 0;
      v15 = *(__int64 **)(a1 + 8);
      v16 = *v15;
      v15[10] += 24;
      v17 = (v16 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v15[1] >= v17 + 24 && v16 )
      {
        *v15 = v17 + 24;
        v18 = (v16 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v18 = sub_986170((__int64)v15, 24, 24, 4, a5, a6);
        v17 = v18;
      }
      *(_QWORD *)(v18 + 16) = 0;
      *(_OWORD *)v18 = 0;
      *(_QWORD *)v18 = v12;
      v19 = (*(_DWORD *)a1)++ & 0xFFFFF;
      *(_DWORD *)(v18 + 16) = v19 | *(_DWORD *)(v18 + 16) & 0xFFF00000;
      result = *(unsigned int *)(a1 + 24);
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 28) )
      {
        sub_2237220(a1 + 16, v20, result + 1, 8);
        result = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(result + 8LL * *(unsigned int *)(a1 + 24)) = v17;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * result) = v17;
      }
      v7 += 32;
      ++*(_DWORD *)(a1 + 24);
      *(_BYTE *)(v18 + 19) |= 2u;
      if ( v8 == v7 )
        break;
    }
  }
  return result;
}
