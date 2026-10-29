__int64 __fastcall sub_1934F60(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  unsigned __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rbp
  char v8; // [rsp+Fh] [rbp-69h] BYREF
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v10; // [rsp+18h] [rbp-60h]
  _BYTE v11[88]; // [rsp+20h] [rbp-58h] BYREF

  v10 = 0x800000000LL;
  v4 = *(unsigned int *)(a2 + 4);
  v8 = 0;
  ptr = v11;
  v5 = v4;
  if ( v4 > 8 )
  {
    sub_2237220(&ptr, v11, v4, 8);
    v5 = *(_DWORD *)(a2 + 4);
  }
  if ( (unsigned __int8)sub_19347F0(a1, *(unsigned __int64 **)(a2 + 24), v5, 0, (__int64)&ptr, &v8, a3, a4) )
    v6 = 1;
  else
    v6 = sub_18C9440(a1, *(_DWORD *)(a2 + 16), ptr, (unsigned int)v10, *(_DWORD *)(a2 + 20), a3, *(double *)a4.m128_u64);
  if ( ptr != v11 )
    free(ptr);
  return v6;
}
