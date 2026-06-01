void *__fastcall sub_1D133D0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int16 *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbp
  unsigned __int16 **v12; // r15
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  void *v16; // rbx
  unsigned int v18; // r9d
  unsigned int v19; // edx
  unsigned int v20; // eax
  __int64 *v21; // rdi
  unsigned __int64 v22; // [rsp+8h] [rbp-E0h]
  __m128 v23; // [rsp+10h] [rbp-D8h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+28h] [rbp-C0h]
  _BYTE v26[184]; // [rsp+30h] [rbp-B8h] BYREF

  ptr = v26;
  v25 = 0x1000000000LL;
  v4 = (unsigned __int16 *)sub_EB5A20(a2);
  v8 = (unsigned __int64)v4;
  if ( v4 )
  {
    v9 = sub_1D11200(a1, v4, a3, a4, v5, v6, v7);
    v8 = v9 & 0xFFFFFFFFFFFFFFFELL;
    if ( v9 == 1 )
    {
LABEL_12:
      v16 = nullptr;
      goto LABEL_13;
    }
  }
  v10 = *(unsigned int *)(a2 + 16);
  if ( HIDWORD(v25) < *(_DWORD *)(a2 + 16) )
  {
    sub_2237220(&ptr, v26, v10, 8);
    v10 = *(unsigned int *)(a2 + 16);
  }
  v11 = a2 + 8 * v10 + 40;
  if ( v11 != a2 + 40 )
  {
    v12 = (unsigned __int16 **)(a2 + 40);
    while ( 1 )
    {
      v13 = sub_1D11200(a1, *v12, a3, a4, v10, v6, v7);
      if ( v13 == 1 )
        goto LABEL_12;
      v6 = (unsigned int)v25;
      v14 = v13 & 0xFFFFFFFFFFFFFFFELL;
      v15 = (unsigned int)v25 + 1LL;
      if ( v15 <= HIDWORD(v25) )
      {
        v10 = (__int64)ptr;
      }
      else
      {
        v22 = v14;
        sub_2237220(&ptr, v26, v15, 8);
        v6 = (unsigned int)v25;
        v10 = (__int64)ptr;
        v14 = v22;
      }
      *(_QWORD *)(v10 + 8 * v6) = v14;
      ++v12;
      v7 = (unsigned int)(v25 + 1);
      LODWORD(v25) = v25 + 1;
      if ( (unsigned __int16 **)v11 == v12 )
        goto LABEL_17;
    }
  }
  v7 = (unsigned int)v25;
LABEL_17:
  v18 = *(_DWORD *)a2;
  v19 = *(_DWORD *)(a2 + 4);
  v20 = *(_DWORD *)(a2 + 12);
  v21 = *(__int64 **)(*a1 + 760);
  v23 = (__m128)_mm_loadu_si128((const __m128i *)(a2 + 20));
  v16 = sub_1B39770(v21, (__int64)&v23, v8, (unsigned __int64 *)ptr, v7, v18, v23, a4, v20, v19);
LABEL_13:
  if ( ptr != v26 )
    free(ptr);
  return v16;
}
