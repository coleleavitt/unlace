unsigned __int64 __fastcall sub_1DC8FB0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  unsigned __int16 *v12; // rax
  unsigned __int64 *v13; // rbx
  unsigned __int64 *i; // r15
  unsigned __int16 *v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  unsigned __int64 v20; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v22; // [rsp+18h] [rbp-60h]
  _BYTE v23[88]; // [rsp+20h] [rbp-58h] BYREF

  v8 = *(unsigned int *)(a2 + 16);
  v22 = 0x400000000LL;
  ptr = v23;
  if ( v8 > 4 )
  {
    sub_2237220(&ptr, v23, v8, 8);
    v8 = *(unsigned int *)(a2 + 16);
  }
  v9 = 8 * v8;
  v10 = *(_QWORD *)(a2 + v9 + 24);
  v11 = v9 + 24;
  if ( v10 )
  {
    v12 = sub_1DC71F0(a1, *(_QWORD *)(a2 + v9 + 24), v9, a6, a7, a8, a3, a4);
    if ( v12 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    {
      v18 = 0;
      goto LABEL_13;
    }
    v9 = *(unsigned int *)(a2 + 16);
    v10 = (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFELL;
    v11 = 8 * v9 + 24;
  }
  v13 = (unsigned __int64 *)(a2 + v11);
  for ( i = (unsigned __int64 *)(a2 + 24); v13 != i; ++i )
  {
    v15 = sub_1DC71F0(a1, *i, v9, a6, a7, a8, a3, a4);
    if ( v15 != (unsigned __int16 *)((char *)&dword_0 + 1) )
    {
      a6 = (unsigned int)v22;
      v16 = (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFELL;
      v17 = (unsigned int)v22 + 1LL;
      if ( v17 > HIDWORD(v22) )
      {
        v20 = v16;
        sub_2237220(&ptr, v23, v17, 8);
        a6 = (unsigned int)v22;
        v16 = v20;
      }
      v9 = (unsigned __int64)ptr;
      *((_QWORD *)ptr + a6) = v16;
      LODWORD(v22) = v22 + 1;
    }
  }
  v18 = sub_1B270B0(
          *(__int64 **)(*a1 + 760),
          *(_DWORD *)a2,
          *(_DWORD *)(a2 + 12),
          *(_DWORD *)(a2 + 20),
          *(unsigned int *)(a2 + 4),
          v10,
          a3,
          a4,
          ptr,
          (unsigned int)v22);
LABEL_13:
  if ( ptr != v23 )
    free(ptr);
  return v18;
}
