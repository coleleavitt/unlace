__int64 __fastcall sub_1764870(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  __int64 v4; // r13
  _BYTE *v5; // rax
  bool v6; // sf
  int v7; // edx
  int v8; // edx
  char v9; // dl
  __int64 v10; // rcx
  __int64 v11; // r14
  int v12; // eax
  __int64 v13; // [rsp+0h] [rbp-B8h]
  int v14; // [rsp+0h] [rbp-B8h]
  unsigned __int16 *v15; // [rsp+8h] [rbp-B0h]
  void *ptr; // [rsp+40h] [rbp-78h] BYREF
  __int64 v17; // [rsp+48h] [rbp-70h]
  _BYTE v18[104]; // [rsp+50h] [rbp-68h] BYREF

  if ( (*(_DWORD *)a2 & 0x20000) == 0 )
    return a2;
  v3 = *a1;
  sub_18C74E0(*a1, 4, 0, 4);
  v4 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 32));
  if ( v4 == 1 )
  {
    sub_190D5E0(v3);
    return 1;
  }
  sub_190D5E0(v3);
  v5 = v18;
  v6 = *(char *)(a2 + 7) < 0;
  v7 = *(_DWORD *)(a2 + 4);
  ptr = v18;
  v17 = 0x500000000LL;
  if ( v6 && (v7 & 0x7FFFFFFF) == 0 )
  {
    v10 = 0;
    goto LABEL_8;
  }
  v8 = v7 & 0x7FFFFFFF;
  if ( !v8 )
  {
    v15 = *(unsigned __int16 **)(a2 + 24);
    sub_1E4CA90(v15);
    v11 = *a1;
    v12 = *(_DWORD *)(*a1 + 12632);
    *(_DWORD *)(*a1 + 12632) = 0;
    v14 = v12;
    result = sub_175B800(a1, v15);
    if ( result != 1 )
      result = sub_1E4D480(
                 *a1,
                 result & 0xFFFFFFFFFFFFFFFELL,
                 *(unsigned int *)(a2 + 16),
                 v4 & 0xFFFFFFFFFFFFFFFELL,
                 *(unsigned int *)(a2 + 20),
                 0,
                 0,
                 0);
    *(_DWORD *)(v11 + 12632) = v14;
    goto LABEL_9;
  }
  v9 = sub_175C6E0(a1, (unsigned __int16 **)(a2 + 40), v8, 0, (__int64)&ptr, nullptr);
  result = 1;
  if ( !v9 )
  {
    v5 = ptr;
    v10 = (unsigned int)v17;
LABEL_8:
    result = sub_1E4D480(
               *a1,
               *(_QWORD *)(a2 + 24),
               *(unsigned int *)(a2 + 16),
               v4 & 0xFFFFFFFFFFFFFFFELL,
               *(unsigned int *)(a2 + 20),
               1,
               v5,
               v10);
  }
LABEL_9:
  if ( ptr != v18 )
  {
    v13 = result;
    free(ptr);
    return v13;
  }
  return result;
}
