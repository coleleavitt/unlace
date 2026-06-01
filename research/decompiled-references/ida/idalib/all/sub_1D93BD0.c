__int64 __fastcall sub_1D93BD0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r13
  _BYTE *v10; // rax
  bool v11; // sf
  int v12; // edx
  __int64 v13; // rdx
  char v14; // dl
  __int64 v15; // rcx
  __int64 v16; // r14
  int v17; // eax
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // [rsp+0h] [rbp-B8h]
  int v22; // [rsp+0h] [rbp-B8h]
  unsigned __int16 *v23; // [rsp+8h] [rbp-B0h]
  void *ptr; // [rsp+40h] [rbp-78h] BYREF
  __int64 v25; // [rsp+48h] [rbp-70h]
  _BYTE v26[104]; // [rsp+50h] [rbp-68h] BYREF

  if ( (*(_DWORD *)a2 & 0x20000) == 0 )
    return a2;
  v5 = *a1;
  sub_18C74E0(*a1, 4, 0, 4);
  v9 = sub_1D8B300(a1, *(unsigned __int16 **)(a2 + 32), a3, a4, v6, v7, v8);
  if ( v9 == 1 )
  {
    sub_190D5E0(v5, a3);
    return 1;
  }
  sub_190D5E0(v5, a3);
  v10 = v26;
  v11 = *(char *)(a2 + 7) < 0;
  v12 = *(_DWORD *)(a2 + 4);
  ptr = v26;
  v25 = 0x500000000LL;
  if ( v11 && (v12 & 0x7FFFFFFF) == 0 )
  {
    v15 = 0;
    goto LABEL_8;
  }
  v13 = v12 & 0x7FFFFFFF;
  if ( !(_DWORD)v13 )
  {
    v23 = *(unsigned __int16 **)(a2 + 24);
    sub_1E4CA90(v23);
    v16 = *a1;
    v17 = *(_DWORD *)(*a1 + 12632);
    *(_DWORD *)(*a1 + 12632) = 0;
    v22 = v17;
    result = sub_1D8B300(a1, v23, a3, a4, v18, v19, v20);
    if ( result != 1 )
      result = sub_1E4D480(
                 *a1,
                 result & 0xFFFFFFFFFFFFFFFELL,
                 *(unsigned int *)(a2 + 16),
                 v9 & 0xFFFFFFFFFFFFFFFELL,
                 *(unsigned int *)(a2 + 20),
                 0,
                 0,
                 0);
    *(_DWORD *)(v16 + 12632) = v22;
    goto LABEL_9;
  }
  v14 = sub_1D8B8F0(a1, (unsigned __int16 **)(a2 + 40), v13, 0, (__int64)&ptr, nullptr, a3, a4);
  result = 1;
  if ( !v14 )
  {
    v10 = ptr;
    v15 = (unsigned int)v25;
LABEL_8:
    result = sub_1E4D480(
               *a1,
               *(_QWORD *)(a2 + 24),
               *(unsigned int *)(a2 + 16),
               v9 & 0xFFFFFFFFFFFFFFFELL,
               *(unsigned int *)(a2 + 20),
               1,
               v10,
               v15);
  }
LABEL_9:
  if ( ptr != v26 )
  {
    v21 = result;
    free(ptr);
    return v21;
  }
  return result;
}
