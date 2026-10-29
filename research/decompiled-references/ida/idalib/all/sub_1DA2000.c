__int64 __fastcall sub_1DA2000(__int64 *a1, __int64 a2, unsigned __int8 a3, _QWORD *a4, __m128 a5, __m128 a6)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r14
  unsigned int v11; // r13d
  int v12; // eax
  __int64 result; // rax
  int v14; // ecx
  int v15; // edx
  __int64 v16; // rdx
  const __m128i *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // [rsp+0h] [rbp-1B8h]
  __int64 v20; // [rsp+0h] [rbp-1B8h]
  __int64 v21; // [rsp+0h] [rbp-1B8h]
  __int64 v22; // [rsp+0h] [rbp-1B8h]
  __m128i v24[2]; // [rsp+10h] [rbp-1A8h] BYREF
  __m128i v25; // [rsp+30h] [rbp-188h] BYREF
  void *v26[2]; // [rsp+40h] [rbp-178h]
  __int128 v27; // [rsp+50h] [rbp-168h]
  void *ptr[2]; // [rsp+60h] [rbp-158h] BYREF
  void *v29[2]; // [rsp+70h] [rbp-148h] BYREF
  __int128 v30; // [rsp+80h] [rbp-138h]
  int v31; // [rsp+170h] [rbp-48h]
  int v32; // [rsp+174h] [rbp-44h]

  v8 = sub_1D9F590((__int64)a1, *(_QWORD *)(a2 + 16), *(void **)(a2 + 24), 0, 0);
  v19 = v9;
  if ( !v8 )
    return 1;
  v10 = v8;
  v11 = 0;
  if ( (*(_DWORD *)a2 & 0x80000) != 0 )
    v11 = *(_DWORD *)(a2 + 64);
  sub_1D9B710(v24, a1, (const __m128i *)(a2 + 32), a5, a6);
  if ( !v24[0].m128i_i64[0] )
    return 1;
  v12 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x80000) != 0 && (v14 = *(_DWORD *)(a2 + 56)) != 0 )
  {
    v15 = *(_DWORD *)(a2 + 60);
    ptr[1] = (void *)0x800000000LL;
    v32 = v15;
    v16 = *(unsigned int *)(a2 + 68);
    ptr[0] = v29;
    v17 = nullptr;
    v31 = v14;
    v18 = 2 * v16;
    if ( (v12 & 0x80000) != 0 )
      v17 = (const __m128i *)(a2 + 72);
    if ( (unsigned __int8)sub_1DA1000(a1, v17, &v17[v18], (__int64)ptr) )
    {
      result = 1;
    }
    else
    {
      v25 = 0;
      *(_OWORD *)v26 = 0;
      v27 = 0;
      sub_15AB8B0((__int64)&v25, v10, v19);
      result = sub_1CE6A30((_QWORD *)*a1, &v25, v11, v24, (unsigned __int64)ptr, a3);
      if ( HIDWORD(v26[1]) )
      {
        v22 = result;
        free(v26[0]);
        result = v22;
      }
    }
    if ( ptr[0] != v29 )
    {
      v20 = result;
      free(ptr[0]);
      return v20;
    }
  }
  else if ( *(_DWORD *)(*a1 + 12632)
         || *(_QWORD *)(a2 + 24) != v19
         || *(_QWORD *)(a2 + 16) != v10
         || (result = a2, v24[0].m128i_i64[0] != *(_QWORD *)(a2 + 32)) )
  {
    *(_OWORD *)ptr = 0;
    *(_OWORD *)v29 = 0;
    v30 = 0;
    sub_15AB8B0((__int64)ptr, v10, v19);
    if ( v11 )
      result = sub_1CE6A30((_QWORD *)*a1, (__m128i *)ptr, v11, v24, 0, a3);
    else
      result = sub_190B6E0(*a1, (__int64)ptr, v24, a3, a4);
    if ( HIDWORD(v29[1]) )
    {
      v21 = result;
      free(v29[0]);
      return v21;
    }
  }
  return result;
}
