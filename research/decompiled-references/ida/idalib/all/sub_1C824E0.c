unsigned __int64 __fastcall sub_1C824E0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7)
{
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned __int64 v9; // r14
  __int64 v10; // rbx
  unsigned __int16 *v11; // rax
  unsigned __int64 *v12; // rbx
  unsigned __int64 *i; // r15
  unsigned __int16 *v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  unsigned __int64 v19; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v21; // [rsp+18h] [rbp-60h]
  _BYTE v22[88]; // [rsp+20h] [rbp-58h] BYREF

  v7 = *(unsigned int *)(a2 + 16);
  v21 = 0x400000000LL;
  ptr = v22;
  if ( v7 > 4 )
  {
    sub_2237220(&ptr, v22, v7, 8);
    v7 = *(unsigned int *)(a2 + 16);
  }
  v8 = 8 * v7;
  v9 = *(_QWORD *)(a2 + v8 + 24);
  v10 = v8 + 24;
  if ( v9 )
  {
    v11 = sub_1C7CFE0(a1, *(_QWORD *)(a2 + v8 + 24), a3, a4, v8, a6, a7);
    if ( v11 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    {
      v17 = 0;
      goto LABEL_13;
    }
    v8 = *(unsigned int *)(a2 + 16);
    v9 = (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFELL;
    v10 = 8 * v8 + 24;
  }
  v12 = (unsigned __int64 *)(a2 + v10);
  for ( i = (unsigned __int64 *)(a2 + 24); v12 != i; ++i )
  {
    v14 = sub_1C7CFE0(a1, *i, a3, a4, v8, a6, a7);
    if ( v14 != (unsigned __int16 *)((char *)&dword_0 + 1) )
    {
      a6 = (unsigned int)v21;
      v15 = (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFELL;
      v16 = (unsigned int)v21 + 1LL;
      if ( v16 > HIDWORD(v21) )
      {
        v19 = v15;
        sub_2237220(&ptr, v22, v16, 8);
        a6 = (unsigned int)v21;
        v15 = v19;
      }
      v8 = (__int64)ptr;
      *((_QWORD *)ptr + a6) = v15;
      LODWORD(v21) = v21 + 1;
    }
  }
  v17 = sub_1B270B0(
          *(__int64 **)(*a1 + 760),
          *(_DWORD *)a2,
          *(_DWORD *)(a2 + 12),
          *(_DWORD *)(a2 + 20),
          *(unsigned int *)(a2 + 4),
          v9,
          a3,
          a4,
          ptr,
          (unsigned int)v21);
LABEL_13:
  if ( ptr != v22 )
    free(ptr);
  return v17;
}
