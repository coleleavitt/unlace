__int64 __fastcall sub_1DFD2F0(
        __int64 *a1,
        unsigned __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  unsigned __int64 v10; // r12
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  double v15; // xmm4_8
  double v16; // xmm5_8
  int v17; // edx
  __int64 v18; // rdx
  __int64 *v19; // r15
  bool v20; // bl
  __int64 v21; // r13
  __m128 *v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v26; // rdi
  unsigned __int64 v27; // rdx
  unsigned int *v28; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v29; // [rsp+18h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int64 v31; // [rsp+28h] [rbp-80h]
  _BYTE v32[120]; // [rsp+30h] [rbp-78h] BYREF

  v10 = a2;
  v28 = sub_1DF70C0(a1, *(unsigned int **)(a2 + 16), a3, a4, a5, a6, a7, a8, a9, a10);
  if ( v28 == (unsigned int *)((char *)&dword_0 + 1) )
    return 1;
  v17 = *(_DWORD *)(a2 + 12);
  v31 = 0x800000000LL;
  ptr = v32;
  if ( v17 )
  {
    v18 = (unsigned int)(v17 - 1);
    v19 = (__int64 *)(a2 + 24);
    v20 = 0;
    v21 = a2 + 8 * v18 + 32;
    while ( 1 )
    {
      v22 = sub_1DFD150(a1, *v19, a3, a4, a5, a6, v15, v16, a9, a10, v18, v12, v13, v14);
      if ( v22 == (__m128 *)((char *)&dword_0 + 1) )
        break;
      v23 = (unsigned __int64)v22 & 0xFFFFFFFFFFFFFFFELL;
      if ( !v20 )
        v20 = *v19 != v23;
      v12 = (unsigned int)v31;
      v24 = (unsigned int)v31 + 1LL;
      if ( v24 <= HIDWORD(v31) )
      {
        v18 = (__int64)ptr;
      }
      else
      {
        v29 = v23;
        sub_2237220(&ptr, v32, v24, 8);
        v12 = (unsigned int)v31;
        v18 = (__int64)ptr;
        v23 = v29;
      }
      ++v19;
      *(_QWORD *)(v18 + 8 * v12) = v23;
      LODWORD(v31) = v31 + 1;
      if ( v19 == (__int64 *)v21 )
        goto LABEL_14;
    }
    v10 = 1;
  }
  else
  {
    v20 = 0;
LABEL_14:
    sub_1C3BC60((_QWORD *)*a1, *(_DWORD *)(a2 + 8), 1);
    v26 = *a1;
    v27 = (unsigned __int64)v28 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD *)(a2 + 16) != v27 || v20 )
      v10 = sub_1C3BDD0(v26, *(unsigned int *)(a2 + 8), v27, ptr, (unsigned int)v31);
  }
  if ( ptr != v32 )
    free(ptr);
  return v10;
}
