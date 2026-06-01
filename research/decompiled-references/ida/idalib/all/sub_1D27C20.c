__int64 __fastcall sub_1D27C20(__int64 **a1, __int64 a2, unsigned __int8 a3, _QWORD *a4, __m128 a5, __m128 a6)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r14
  unsigned int v14; // r13d
  int v15; // eax
  __int64 result; // rax
  int v17; // ecx
  int v18; // edx
  __int64 v19; // rdx
  const __m128i *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // [rsp+0h] [rbp-1B8h]
  __int64 v23; // [rsp+0h] [rbp-1B8h]
  __int64 v24; // [rsp+0h] [rbp-1B8h]
  __int64 v25; // [rsp+0h] [rbp-1B8h]
  __m128i v27[2]; // [rsp+10h] [rbp-1A8h] BYREF
  __m128i v28; // [rsp+30h] [rbp-188h] BYREF
  void *v29[2]; // [rsp+40h] [rbp-178h]
  __int128 v30; // [rsp+50h] [rbp-168h]
  void *ptr[2]; // [rsp+60h] [rbp-158h] BYREF
  void *v32[2]; // [rsp+70h] [rbp-148h] BYREF
  __int128 v33; // [rsp+80h] [rbp-138h]
  int v34; // [rsp+170h] [rbp-48h]
  int v35; // [rsp+174h] [rbp-44h]

  v8 = sub_1D23E30(a1, *(_QWORD *)(a2 + 16), *(void **)(a2 + 24), 0, 0);
  v22 = v12;
  if ( !v8 )
    return 1;
  v13 = v8;
  v14 = 0;
  if ( (*(_DWORD *)a2 & 0x80000) != 0 )
    v14 = *(_DWORD *)(a2 + 64);
  sub_1D204A0(v27, a1, (const __m128i *)(a2 + 32), a5, a6, v9, v10, v11);
  if ( !v27[0].m128i_i64[0] )
    return 1;
  v15 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x80000) != 0 && (v17 = *(_DWORD *)(a2 + 56)) != 0 )
  {
    v18 = *(_DWORD *)(a2 + 60);
    ptr[1] = (void *)0x800000000LL;
    v35 = v18;
    v19 = *(unsigned int *)(a2 + 68);
    ptr[0] = v32;
    v20 = nullptr;
    v34 = v17;
    v21 = 2 * v19;
    if ( (v15 & 0x80000) != 0 )
      v20 = (const __m128i *)(a2 + 72);
    if ( (unsigned __int8)sub_1D25BD0(a1, v20, &v20[v21], (__int64)ptr) )
    {
      result = 1;
    }
    else
    {
      v28 = 0;
      *(_OWORD *)v29 = 0;
      v30 = 0;
      sub_15AB8B0((__int64)&v28, v13, v22);
      result = sub_1CE6A30(*a1, &v28, v14, v27, (unsigned __int64)ptr, a3);
      if ( HIDWORD(v29[1]) )
      {
        v25 = result;
        free(v29[0]);
        result = v25;
      }
    }
    if ( ptr[0] != v32 )
    {
      v23 = result;
      free(ptr[0]);
      return v23;
    }
  }
  else if ( *((_DWORD *)*a1 + 3158)
         || *(_QWORD *)(a2 + 24) != v22
         || *(_QWORD *)(a2 + 16) != v13
         || (result = a2, v27[0].m128i_i64[0] != *(_QWORD *)(a2 + 32)) )
  {
    *(_OWORD *)ptr = 0;
    *(_OWORD *)v32 = 0;
    v33 = 0;
    sub_15AB8B0((__int64)ptr, v13, v22);
    if ( v14 )
      result = sub_1CE6A30(*a1, (__m128i *)ptr, v14, v27, 0, a3);
    else
      result = sub_190B6E0((__int64)*a1, (__int64)ptr, v27, a3, a4);
    if ( HIDWORD(v32[1]) )
    {
      v24 = result;
      free(v32[0]);
      return v24;
    }
  }
  return result;
}
