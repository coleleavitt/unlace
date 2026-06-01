__int64 __fastcall sub_76A330(__int64 a1, char **a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v5; // r13
  char **v6; // rdi
  __int64 v7; // r14
  size_t v8; // rbp
  char *v9; // r12
  const void *v10; // r15
  char *v11; // rax
  __int64 *v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rbp
  int v16; // eax
  __int64 v17; // [rsp+8h] [rbp-40h]

  *(_QWORD *)(a1 + 16) = a1 + 32;
  v17 = a1 + 32;
  result = 0x400000000LL;
  *(_DWORD *)a1 = 199;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = 0x400000000LL;
  v5 = a3[1];
  if ( *a3 != v5 )
  {
    v6 = a2;
    v7 = *a3;
    while ( 1 )
    {
      v8 = *(_QWORD *)(v7 + 8);
      v9 = *v6;
      v10 = *(const void **)v7;
      v6[10] += v8 + 1;
      v11 = &v9[v8 + 1];
      if ( v6[1] >= v11 && v9 )
        *v6 = v11;
      else
        v9 = (char *)sub_767C50((__int64)v6, v8 + 1, 0);
      memcpy(v9, v10, v8);
      v9[v8] = 0;
      v12 = *(__int64 **)(a1 + 8);
      v13 = *v12;
      v12[10] += 24;
      v14 = (v13 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v12[1] >= v14 + 24 && v13 )
      {
        *v12 = v14 + 24;
        v15 = (v13 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v15 = sub_767C50((__int64)v12, 24, 4);
        v14 = v15;
      }
      *(_QWORD *)(v15 + 16) = 0;
      *(_OWORD *)v15 = 0;
      *(_QWORD *)v15 = v9;
      v16 = (*(_DWORD *)a1)++ & 0xFFFFF;
      *(_DWORD *)(v15 + 16) = v16 | *(_DWORD *)(v15 + 16) & 0xFFF00000;
      result = *(unsigned int *)(a1 + 24);
      if ( *(unsigned int *)(a1 + 28) < (unsigned __int64)(result + 1) )
      {
        sub_25D6060(a1 + 16, v17, result + 1, 8);
        result = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(result + 8LL * *(unsigned int *)(a1 + 24)) = v14;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * result) = v14;
      }
      v7 += 32;
      ++*(_DWORD *)(a1 + 24);
      *(_BYTE *)(v15 + 19) |= 2u;
      if ( v5 == v7 )
        break;
      v6 = *(char ***)(a1 + 8);
    }
  }
  return result;
}

