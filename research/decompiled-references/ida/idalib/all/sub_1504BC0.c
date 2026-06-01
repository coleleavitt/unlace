unsigned __int64 __fastcall sub_1504BC0(__int64 a1, unsigned int *a2, unsigned int a3)
{
  __int16 v4; // ax
  const char *v6; // r12
  unsigned __int64 v8; // rax
  const char *v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 *v12; // rdi
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __m128i si128; // [rsp+8h] [rbp-70h]
  _BYTE v15[96]; // [rsp+18h] [rbp-60h] BYREF

  v4 = *((_WORD *)a2 + 8);
  if ( v4 == 89 || v4 == 5 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
    ptr = v15;
    v11 = sub_145C740(v10, (__int64)a2, (__int64 *)&ptr, nullptr);
    v12 = *(__int64 **)(a1 + 8);
    v6 = (const char *)v11;
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v12, (int *)(a1 + 16));
    if ( ptr != v15 )
      free(ptr);
  }
  else if ( (unsigned __int16)(v4 - 14) <= 1u || (unsigned __int16)(v4 - 17) <= 2u )
  {
    v8 = sub_14B6F80(a1, 1);
    v9 = &byte_22F0C30;
    if ( v8 > 1 )
      return (v8 & 0xFFFFFFFFFFFFFFFELL) + 4LL * *(unsigned int *)((v8 & 0xFFFFFFFFFFFFFFFELL) + 4) + 20;
    return (unsigned __int64)v9;
  }
  else
  {
    sub_1564820(&ptr, a1, *a2, 2168);
    sub_1503AF0((unsigned __int8 **)&ptr, a3);
    v6 = &byte_22F0C30;
    sub_AEA040((__int64)&ptr);
  }
  return (unsigned __int64)v6;
}
