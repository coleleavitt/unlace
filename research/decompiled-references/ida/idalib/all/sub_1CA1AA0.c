__int64 __fastcall sub_1CA1AA0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  double v14; // xmm4_8
  double v15; // xmm5_8
  int v16; // eax
  __int64 *v17; // r15
  __int64 v18; // rbp
  __m128 *v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  __int64 v24; // [rsp+0h] [rbp-98h]
  unsigned __int64 v25; // [rsp+8h] [rbp-90h]
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __int64 v27; // [rsp+18h] [rbp-80h]
  _BYTE v28[120]; // [rsp+20h] [rbp-78h] BYREF

  v24 = sub_1CA1230(a1, *(unsigned int **)(a2 + 16), a3, a4, a5, a6, a7, a8, a9, a10);
  if ( v24 == 1 )
    return 1;
  v27 = 0x800000000LL;
  v16 = *(_DWORD *)(a2 + 12);
  ptr = v28;
  if ( v16 )
  {
    v17 = (__int64 *)(a2 + 24);
    v18 = a2 + 8LL * (unsigned int)(v16 - 1) + 32;
    while ( 1 )
    {
      v19 = sub_1CA1960(a1, *v17, a3, a4, a5, a6, v14, v15, a9, a10, (__int64)v10, v11, v12, v13);
      if ( v19 == (__m128 *)((char *)&dword_0 + 1) )
        break;
      v11 = (unsigned int)v27;
      v20 = (unsigned __int64)v19 & 0xFFFFFFFFFFFFFFFELL;
      v21 = (unsigned int)v27 + 1LL;
      if ( v21 <= HIDWORD(v27) )
      {
        v10 = ptr;
      }
      else
      {
        v25 = v20;
        sub_2237220(&ptr, v28, v21, 8);
        v11 = (unsigned int)v27;
        v10 = ptr;
        v20 = v25;
      }
      ++v17;
      v10[v11] = v20;
      LODWORD(v27) = v27 + 1;
      if ( (__int64 *)v18 == v17 )
        goto LABEL_11;
    }
    v22 = 1;
  }
  else
  {
LABEL_11:
    sub_1C3BC60((_QWORD *)*a1, *(_DWORD *)(a2 + 8), 1);
    v22 = sub_1C3BDD0(*a1, *(unsigned int *)(a2 + 8), v24 & 0xFFFFFFFFFFFFFFFELL, ptr, (unsigned int)v27);
  }
  if ( ptr != v28 )
    free(ptr);
  return v22;
}
