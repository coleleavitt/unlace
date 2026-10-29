unsigned __int64 __fastcall sub_1D14190(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbp
  unsigned __int16 **v14; // r15
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  unsigned __int64 v20; // [rsp+8h] [rbp-80h]
  __int16 v21; // [rsp+10h] [rbp-78h] BYREF
  void *ptr; // [rsp+18h] [rbp-70h] BYREF
  __int64 v23; // [rsp+20h] [rbp-68h]
  _BYTE v24[96]; // [rsp+28h] [rbp-60h] BYREF

  v7 = sub_1D11200(a1, *(unsigned __int16 **)(a2 + 32), a6, a7, a3, a4, a5);
  if ( v7 == 1 )
    return 0;
  v10 = v7;
  v21 = *(_WORD *)(a2 + 24);
  v23 = 0x400000000LL;
  v11 = *(unsigned int *)(a2 + 16);
  ptr = v24;
  v12 = (unsigned int)(v11 - 1);
  if ( (unsigned int)v12 > 4 )
  {
    sub_2237220(&ptr, v24, v12, 8);
    v11 = *(unsigned int *)(a2 + 16);
  }
  v13 = a2 + 8 * v11 + 32;
  v14 = (unsigned __int16 **)(a2 + 40);
  if ( v13 == a2 + 40 )
  {
LABEL_11:
    v18 = sub_1B33F80(
            *(__int64 **)(*a1 + 760),
            v10 & 0xFFFFFFFFFFFFFFFELL,
            (__int64)&v21,
            *(_DWORD *)a2,
            *(_DWORD *)(a2 + 12),
            *(_DWORD *)(a2 + 20),
            *(double *)a6.m128_u64,
            *(double *)a7.m128_u64,
            *(_DWORD *)(a2 + 4));
  }
  else
  {
    while ( 1 )
    {
      v15 = sub_1D11200(a1, *v14, a6, a7, v12, v8, v9);
      if ( v15 == 1 )
        break;
      v8 = (unsigned int)v23;
      v16 = v15 & 0xFFFFFFFFFFFFFFFELL;
      v17 = (unsigned int)v23 + 1LL;
      if ( v17 <= HIDWORD(v23) )
      {
        v12 = (__int64)ptr;
      }
      else
      {
        v20 = v16;
        sub_2237220(&ptr, v24, v17, 8);
        v8 = (unsigned int)v23;
        v12 = (__int64)ptr;
        v16 = v20;
      }
      ++v14;
      *(_QWORD *)(v12 + 8 * v8) = v16;
      LODWORD(v23) = v23 + 1;
      if ( (unsigned __int16 **)v13 == v14 )
        goto LABEL_11;
    }
    v18 = 0;
  }
  if ( ptr != v24 )
    free(ptr);
  return v18;
}
