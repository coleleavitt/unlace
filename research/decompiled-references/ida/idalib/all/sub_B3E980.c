unsigned __int64 __fastcall sub_B3E980(__int64 a1, const void *a2, size_t a3, __int64 a4, __int64 a5, __int64 a6)
{
  char **v8; // rdi
  char *v9; // rbp
  char *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // r12
  unsigned __int64 result; // rax
  int v17; // edx
  __int64 v18; // rcx
  unsigned __int64 v19; // [rsp+8h] [rbp-30h]

  v8 = *(char ***)(a1 + 8);
  v9 = *v8;
  v8[10] += a3 + 1;
  v10 = &v9[a3 + 1];
  if ( v8[1] >= v10 && v9 )
    *v8 = v10;
  else
    v9 = (char *)sub_986170((__int64)v8, a3 + 1, a3 + 1, 0, a5, a6);
  memcpy(v9, a2, a3);
  v9[a3] = 0;
  v13 = *(__int64 **)(a1 + 8);
  v14 = *v13;
  v13[10] += 24;
  v15 = (v14 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v13[1] >= v15 + 24 && v14 )
  {
    *v13 = v15 + 24;
    result = (v14 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    result = sub_986170((__int64)v13, 24, 24, 4, v11, v12);
    v15 = result;
  }
  *(_QWORD *)(result + 16) = 0;
  *(_OWORD *)result = 0;
  *(_QWORD *)result = v9;
  v17 = (*(_DWORD *)a1)++;
  *(_DWORD *)(result + 16) = v17 & 0xFFFFF | *(_DWORD *)(result + 16) & 0xFFF00000;
  v18 = *(unsigned int *)(a1 + 24);
  if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 28) )
  {
    v19 = result;
    sub_2237220(a1 + 16, a1 + 32, v18 + 1, 8);
    v18 = *(unsigned int *)(a1 + 24);
    result = v19;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v18) = v15;
  ++*(_DWORD *)(a1 + 24);
  *(_BYTE *)(result + 21) |= 4u;
  return result;
}
