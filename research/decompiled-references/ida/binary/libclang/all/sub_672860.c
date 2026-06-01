__int64 __fastcall sub_672860(__int64 *a1, __int64 a2, __int64 a3, double a4, __m128i a5, double a6, __m128 a7)
{
  unsigned __int64 v7; // r13
  __int64 v9; // rax
  __int64 result; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 *v15; // rax
  __int64 v16; // rsi
  __int64 *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned __int8 v20; // [rsp+1h] [rbp-79h]
  void *ptr; // [rsp+2h] [rbp-78h] BYREF
  __int64 v22; // [rsp+Ah] [rbp-70h]
  _QWORD v23[13]; // [rsp+12h] [rbp-68h] BYREF

  if ( !a2 )
    return 1;
  v7 = a2 & 0xFFFFFFFFFFFFFFFBLL;
  if ( a3 )
  {
    v9 = *(unsigned int *)(a3 + 8);
    if ( *(unsigned int *)(a3 + 12) < (unsigned __int64)(v9 + 1) )
    {
      sub_25D6060(a3, a3 + 16, v9 + 1, 8);
      v9 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v9) = v7;
    result = 1;
    ++*(_DWORD *)(a3 + 8);
    return result;
  }
  v23[0] = a2 & 0xFFFFFFFFFFFFFFFBLL;
  ptr = v23;
  v12 = v23;
  v13 = 1;
  v22 = 0x800000001LL;
  while ( 1 )
  {
    if ( (v7 & 4) != 0 )
    {
      v13 = (unsigned int)(v13 - 1);
      LODWORD(v22) = v13;
      goto LABEL_9;
    }
    v12[v13 - 1] = v7 | 4;
    v14 = (unsigned int)v22;
    result = sub_66F430(a1, (const __m128i *)(v7 & 0xFFFFFFFFFFFFFFF8LL), (__int64)&ptr, a4, a5, a6, a7);
    v12 = ptr;
    if ( !(_BYTE)result )
      goto LABEL_18;
    v13 = (unsigned int)v22;
    v15 = (__int64 *)((char *)ptr + 8 * v14);
    v16 = 8LL * (unsigned int)v22;
    if ( 8 * v14 != v16 )
    {
      v17 = (__int64 *)((char *)ptr + v16 - 8);
      if ( v15 < v17 )
        break;
    }
LABEL_9:
    if ( !(_DWORD)v13 )
      goto LABEL_17;
LABEL_10:
    v7 = v12[(unsigned int)v13 - 1];
  }
  do
  {
    v18 = *v15;
    v19 = *v17;
    ++v15;
    --v17;
    *(v15 - 1) = v19;
    v17[1] = v18;
  }
  while ( v15 < v17 );
  v13 = (unsigned int)v22;
  v12 = ptr;
  if ( (_DWORD)v22 )
    goto LABEL_10;
LABEL_17:
  result = 1;
LABEL_18:
  if ( v12 != v23 )
  {
    v20 = result;
    free(v12);
    return v20;
  }
  return result;
}

