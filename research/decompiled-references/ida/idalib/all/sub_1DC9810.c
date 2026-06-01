void *__fastcall sub_1DC9810(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // r14
  unsigned __int16 *v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // r9
  unsigned __int64 *v14; // r15
  unsigned __int16 *v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  void *v18; // rbx
  unsigned int v20; // r9d
  unsigned int v21; // edx
  unsigned int v22; // eax
  __int64 *v23; // rdi
  unsigned __int64 v24; // [rsp+8h] [rbp-E0h]
  __m128 v25; // [rsp+10h] [rbp-D8h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+28h] [rbp-C0h]
  _BYTE v28[184]; // [rsp+30h] [rbp-B8h] BYREF

  ptr = v28;
  v27 = 0x1000000000LL;
  v4 = sub_EB5A20(a2);
  v9 = v4;
  if ( v4 )
  {
    v10 = sub_1DC71F0(a1, v4, v5, v6, v7, v8, a3, a4);
    v9 = (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFELL;
    if ( v10 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    {
LABEL_12:
      v18 = nullptr;
      goto LABEL_13;
    }
  }
  v11 = *(unsigned int *)(a2 + 16);
  if ( HIDWORD(v27) < *(_DWORD *)(a2 + 16) )
  {
    sub_2237220(&ptr, v28, v11, 8);
    v11 = *(unsigned int *)(a2 + 16);
  }
  v12 = a2 + 8 * v11 + 40;
  v13 = a2 + 40;
  if ( v12 != a2 + 40 )
  {
    v14 = (unsigned __int64 *)(a2 + 40);
    while ( 1 )
    {
      v15 = sub_1DC71F0(a1, *v14, v11, v6, v7, v13, a3, a4);
      if ( v15 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_12;
      v6 = (unsigned int)v27;
      v16 = (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFELL;
      v17 = (unsigned int)v27 + 1LL;
      if ( v17 <= HIDWORD(v27) )
      {
        v11 = (unsigned __int64)ptr;
      }
      else
      {
        v24 = v16;
        sub_2237220(&ptr, v28, v17, 8);
        v6 = (unsigned int)v27;
        v11 = (unsigned __int64)ptr;
        v16 = v24;
      }
      *(_QWORD *)(v11 + 8 * v6) = v16;
      ++v14;
      v7 = (unsigned int)(v27 + 1);
      LODWORD(v27) = v27 + 1;
      if ( (unsigned __int64 *)v12 == v14 )
        goto LABEL_17;
    }
  }
  v7 = (unsigned int)v27;
LABEL_17:
  v20 = *(_DWORD *)a2;
  v21 = *(_DWORD *)(a2 + 4);
  v22 = *(_DWORD *)(a2 + 12);
  v23 = *(__int64 **)(*a1 + 760);
  v25 = (__m128)_mm_loadu_si128((const __m128i *)(a2 + 20));
  v18 = sub_1B39770(v23, (__int64)&v25, v9, (unsigned __int64 *)ptr, v7, v20, v25, a4, v22, v21);
LABEL_13:
  if ( ptr != v28 )
    free(ptr);
  return v18;
}
