unsigned __int64 __fastcall sub_1DCA5D0(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int16 *v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int16 *v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rbp
  unsigned __int64 *v16; // r15
  unsigned __int16 *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  unsigned __int64 v22; // [rsp+8h] [rbp-80h]
  __int16 v23; // [rsp+10h] [rbp-78h] BYREF
  void *ptr; // [rsp+18h] [rbp-70h] BYREF
  __int64 v25; // [rsp+20h] [rbp-68h]
  _BYTE v26[96]; // [rsp+28h] [rbp-60h] BYREF

  v8 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 32), a3, a4, a5, a6, a7, a8);
  if ( v8 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 0;
  v12 = v8;
  v23 = *(_WORD *)(a2 + 24);
  v25 = 0x400000000LL;
  v13 = *(unsigned int *)(a2 + 16);
  ptr = v26;
  v14 = (unsigned int)(v13 - 1);
  if ( (unsigned int)v14 > 4 )
  {
    sub_2237220(&ptr, v26, v14, 8);
    v13 = *(unsigned int *)(a2 + 16);
  }
  v15 = a2 + 8 * v13 + 32;
  v16 = (unsigned __int64 *)(a2 + 40);
  if ( v15 == a2 + 40 )
  {
LABEL_11:
    v20 = sub_1B33F80(
            *(__int64 **)(*a1 + 760),
            (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFELL,
            (__int64)&v23,
            *(_DWORD *)a2,
            *(_DWORD *)(a2 + 12),
            *(_DWORD *)(a2 + 20),
            *(double *)a7.m128_u64,
            *(double *)a8.m128_u64,
            *(_DWORD *)(a2 + 4));
  }
  else
  {
    while ( 1 )
    {
      v17 = sub_1DC71F0(a1, *v16, v14, v9, v10, v11, a7, a8);
      if ( v17 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        break;
      v9 = (unsigned int)v25;
      v18 = (unsigned __int64)v17 & 0xFFFFFFFFFFFFFFFELL;
      v19 = (unsigned int)v25 + 1LL;
      if ( v19 <= HIDWORD(v25) )
      {
        v14 = (unsigned __int64)ptr;
      }
      else
      {
        v22 = v18;
        sub_2237220(&ptr, v26, v19, 8);
        v9 = (unsigned int)v25;
        v14 = (unsigned __int64)ptr;
        v18 = v22;
      }
      ++v16;
      *(_QWORD *)(v14 + 8 * v9) = v18;
      LODWORD(v25) = v25 + 1;
      if ( (unsigned __int64 *)v15 == v16 )
        goto LABEL_11;
    }
    v20 = 0;
  }
  if ( ptr != v26 )
    free(ptr);
  return v20;
}
