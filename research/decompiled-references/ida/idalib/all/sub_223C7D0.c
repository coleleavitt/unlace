__int64 __fastcall sub_223C7D0(__int64 a1, char *a2, __int64 *a3)
{
  void **v5; // rbp
  void **v6; // rbx
  char *v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  __int64 v13; // rcx
  char *v14; // rax
  __int64 v15; // rsi
  int v16; // edx
  char *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  char *v20; // rax
  unsigned __int64 v21; // rdx
  void *v22; // rsi
  int v23; // edi
  void **i; // r15
  void *v25; // r13
  void **v26; // rdi
  __int64 result; // rax
  __int64 v28; // [rsp+0h] [rbp-58h] BYREF
  __int64 v29; // [rsp+8h] [rbp-50h]
  char *v30; // [rsp+10h] [rbp-48h]
  __int64 *v31; // [rsp+18h] [rbp-40h]

  v5 = *(void ***)(a1 + 8);
  v6 = *(void ***)a1;
  v7 = &a2[-*(_QWORD *)a1];
  v8 = ((__int64)v5 - *(_QWORD *)a1) >> 4;
  if ( !v8 )
  {
    v9 = 1;
    goto LABEL_23;
  }
  v9 = 2 * v8;
  v10 = -16;
  if ( v8 > 2 * v8 || v9 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v9 )
  {
LABEL_23:
    v10 = 16 * v9;
LABEL_3:
    v31 = a3;
    v30 = v7;
    v11 = operator new(v10);
    a3 = v31;
    v28 = v11;
    v12 = v11 + 16;
    v13 = v11;
    v29 = v11 + v10;
    goto LABEL_4;
  }
  v28 = 0;
  v12 = 16;
  v13 = 0;
  v29 = 0;
LABEL_4:
  v14 = &v7[v13];
  v15 = *a3;
  *a3 = 0;
  v16 = *((_DWORD *)a3 + 2);
  *(_QWORD *)v14 = v15;
  *((_DWORD *)v14 + 2) = v16;
  if ( a2 != (char *)v6 )
  {
    v17 = (char *)v6;
    v18 = v13;
    do
    {
      v19 = *(_QWORD *)v17;
      *(_QWORD *)v17 = 0;
      v17 += 16;
      v18 += 16;
      *(_QWORD *)(v18 - 16) = v19;
      *(_DWORD *)(v18 - 8) = *((_DWORD *)v17 - 2);
    }
    while ( a2 != v17 );
    v12 = v28 + ((a2 - 16 - (char *)v6) & 0xFFFFFFFFFFFFFFF0LL) + 32;
  }
  v20 = a2;
  v21 = v12;
  if ( a2 != (char *)v5 )
  {
    do
    {
      v22 = *(void **)v20;
      v23 = *((_DWORD *)v20 + 2);
      v20 += 16;
      v21 += 16LL;
      *((_QWORD *)v20 - 2) = 0;
      *(_QWORD *)(v21 - 16) = v22;
      *(_DWORD *)(v21 - 8) = v23;
    }
    while ( v5 != (void **)v20 );
    v12 += (((char *)v5 - a2 - 16) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  }
  for ( i = v6; i != v5; i += 2 )
  {
    while ( 1 )
    {
      v25 = *i;
      if ( !*i )
        break;
      v26 = (void **)*i;
      i += 2;
      sub_22339F0(v26);
      operator delete(v25, 0x10u);
      if ( v5 == i )
        goto LABEL_14;
    }
  }
LABEL_14:
  if ( v6 )
    operator delete(v6);
  result = v29;
  v28 = v12;
  *(_QWORD *)(a1 + 16) = v29;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v28);
  return result;
}
