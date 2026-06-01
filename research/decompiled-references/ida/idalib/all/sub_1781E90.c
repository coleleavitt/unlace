__int64 __fastcall sub_1781E90(__int64 *a1, __int64 a2, __m128 a3)
{
  __int64 v3; // r12
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // edx
  __int64 v9; // rdx
  __int64 *v10; // r15
  bool v11; // bl
  __int64 v12; // r13
  __m128 *v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  unsigned int *v19; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v20; // [rsp+18h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int64 v22; // [rsp+28h] [rbp-80h]
  _BYTE v23[120]; // [rsp+30h] [rbp-78h] BYREF

  v3 = a2;
  v19 = sub_177C940(a1, *(unsigned int **)(a2 + 16), *(double *)a3.m128_u64);
  if ( v19 == (unsigned int *)((char *)&dword_0 + 1) )
    return 1;
  v8 = *(_DWORD *)(a2 + 12);
  v22 = 0x800000000LL;
  ptr = v23;
  if ( v8 )
  {
    v9 = (unsigned int)(v8 - 1);
    v10 = (__int64 *)(a2 + 24);
    v11 = 0;
    v12 = a2 + 8 * v9 + 32;
    while ( 1 )
    {
      v13 = sub_1781D10(a1, *v10, a3, v9, v5, v6, v7);
      if ( v13 == (__m128 *)((char *)&dword_0 + 1) )
        break;
      v14 = (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFELL;
      if ( !v11 )
        v11 = *v10 != v14;
      v5 = (unsigned int)v22;
      v15 = (unsigned int)v22 + 1LL;
      if ( v15 <= HIDWORD(v22) )
      {
        v9 = (__int64)ptr;
      }
      else
      {
        v20 = v14;
        sub_2237220(&ptr, v23, v15, 8);
        v5 = (unsigned int)v22;
        v9 = (__int64)ptr;
        v14 = v20;
      }
      ++v10;
      *(_QWORD *)(v9 + 8 * v5) = v14;
      LODWORD(v22) = v22 + 1;
      if ( v10 == (__int64 *)v12 )
        goto LABEL_14;
    }
    v3 = 1;
  }
  else
  {
    v11 = 0;
LABEL_14:
    sub_1C3BC60(*a1, *(unsigned int *)(a2 + 8), 1);
    v17 = *a1;
    v18 = (unsigned __int64)v19 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD *)(a2 + 16) != v18 || v11 )
      v3 = sub_1C3BDD0(v17, *(unsigned int *)(a2 + 8), v18, ptr);
  }
  if ( ptr != v23 )
    free(ptr);
  return v3;
}
