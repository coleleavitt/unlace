__int64 __fastcall sub_193BFF0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // r13
  _BYTE *v7; // rax
  bool v8; // sf
  int v9; // edx
  int v10; // edx
  char v11; // dl
  __int64 v12; // rcx
  __int64 v13; // r14
  int v14; // eax
  __int64 v15; // [rsp+0h] [rbp-B8h]
  int v16; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v17; // [rsp+8h] [rbp-B0h]
  void *ptr; // [rsp+40h] [rbp-78h] BYREF
  __int64 v19; // [rsp+48h] [rbp-70h]
  _BYTE v20[104]; // [rsp+50h] [rbp-68h] BYREF

  if ( (*(_DWORD *)a2 & 0x20000) == 0 )
    return a2;
  v5 = *a1;
  sub_18C79E0(*a1, 4, 4);
  v6 = sub_1933BC0(a1, *(_QWORD *)(a2 + 32), *(double *)a3.m128_u64, a4);
  if ( v6 == 1 )
  {
    sub_190D5E0(v5, a3);
    return 1;
  }
  sub_190D5E0(v5, a3);
  v7 = v20;
  v8 = *(char *)(a2 + 7) < 0;
  v9 = *(_DWORD *)(a2 + 4);
  ptr = v20;
  v19 = 0x500000000LL;
  if ( v8 && (v9 & 0x7FFFFFFF) == 0 )
  {
    v12 = 0;
    goto LABEL_8;
  }
  v10 = v9 & 0x7FFFFFFF;
  if ( !v10 )
  {
    v17 = *(_QWORD *)(a2 + 24);
    sub_1E4CA90(v17);
    v13 = *a1;
    v14 = *(_DWORD *)(*a1 + 12632);
    *(_DWORD *)(*a1 + 12632) = 0;
    v16 = v14;
    result = sub_1933BC0(a1, v17, *(double *)a3.m128_u64, a4);
    if ( result != 1 )
      result = sub_1E4D480(
                 *a1,
                 result & 0xFFFFFFFFFFFFFFFELL,
                 *(unsigned int *)(a2 + 16),
                 v6 & 0xFFFFFFFFFFFFFFFELL,
                 *(unsigned int *)(a2 + 20),
                 0,
                 0,
                 0);
    *(_DWORD *)(v13 + 12632) = v16;
    goto LABEL_9;
  }
  v11 = sub_19347F0(a1, (unsigned __int64 *)(a2 + 40), v10, 0, (__int64)&ptr, nullptr, *(double *)a3.m128_u64, a4);
  result = 1;
  if ( !v11 )
  {
    v7 = ptr;
    v12 = (unsigned int)v19;
LABEL_8:
    result = sub_1E4D480(
               *a1,
               *(_QWORD *)(a2 + 24),
               *(unsigned int *)(a2 + 16),
               v6 & 0xFFFFFFFFFFFFFFFELL,
               *(unsigned int *)(a2 + 20),
               1,
               v7,
               v12);
  }
LABEL_9:
  if ( ptr != v20 )
  {
    v15 = result;
    free(ptr);
    return v15;
  }
  return result;
}
