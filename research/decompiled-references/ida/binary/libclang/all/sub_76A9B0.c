unsigned __int64 __fastcall sub_76A9B0(__int64 a1, const void *a2, size_t a3)
{
  char **v5; // rdi
  char *v6; // rbp
  char *v7; // rax
  __int64 *v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // r12
  unsigned __int64 result; // rax
  int v12; // edx
  __int64 v13; // rdx
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]

  v5 = *(char ***)(a1 + 8);
  v6 = *v5;
  v5[10] += a3 + 1;
  v7 = &v6[a3 + 1];
  if ( v5[1] >= v7 && v6 )
    *v5 = v7;
  else
    v6 = (char *)sub_767C50((__int64)v5, a3 + 1, 0);
  memcpy(v6, a2, a3);
  v6[a3] = 0;
  v8 = *(__int64 **)(a1 + 8);
  v9 = *v8;
  v8[10] += 24;
  v10 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v8[1] >= v10 + 24 && v9 )
  {
    *v8 = v10 + 24;
    result = (v9 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    result = sub_767C50((__int64)v8, 24, 4);
    v10 = result;
  }
  *(_QWORD *)(result + 16) = 0;
  *(_OWORD *)result = 0;
  *(_QWORD *)result = v6;
  v12 = (*(_DWORD *)a1)++;
  *(_DWORD *)(result + 16) = v12 & 0xFFFFF | *(_DWORD *)(result + 16) & 0xFFF00000;
  v13 = *(unsigned int *)(a1 + 24);
  if ( *(unsigned int *)(a1 + 28) < (unsigned __int64)(v13 + 1) )
  {
    v14 = result;
    sub_25D6060(a1 + 16, a1 + 32, v13 + 1, 8);
    v13 = *(unsigned int *)(a1 + 24);
    result = v14;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v13) = v10;
  ++*(_DWORD *)(a1 + 24);
  *(_BYTE *)(result + 21) |= 4u;
  return result;
}

