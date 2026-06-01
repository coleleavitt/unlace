__int64 __fastcall sub_1990C90(__int64 *a1, __int64 a2, unsigned __int8 a3, _QWORD *a4, __m128 a5, __m128 a6)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // r15
  int v12; // r14d
  int v13; // eax
  __int64 result; // rax
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // rdx
  const __m128i *v18; // rsi
  __int64 v20; // [rsp+0h] [rbp-1B8h]
  __int64 v21; // [rsp+0h] [rbp-1B8h]
  __int64 v22; // [rsp+0h] [rbp-1B8h]
  __m128i v23[2]; // [rsp+10h] [rbp-1A8h] BYREF
  __int128 v24; // [rsp+30h] [rbp-188h] BYREF
  void *v25[2]; // [rsp+40h] [rbp-178h]
  __int128 v26; // [rsp+50h] [rbp-168h]
  void *ptr[2]; // [rsp+60h] [rbp-158h] BYREF
  void *v28[2]; // [rsp+70h] [rbp-148h] BYREF
  __int128 v29; // [rsp+80h] [rbp-138h]
  int v30; // [rsp+170h] [rbp-48h]
  int v31; // [rsp+174h] [rbp-44h]

  v8 = sub_198CB00((__int64)a1, *(_QWORD *)(a2 + 16), *(void **)(a2 + 24), 0, 0);
  if ( !v8 )
    return 1;
  v10 = v8;
  v11 = v9;
  v12 = 0;
  if ( (*(_DWORD *)a2 & 0x80000) != 0 )
    v12 = *(_DWORD *)(a2 + 64);
  sub_1989150(v23, a1, (const __m128i *)(a2 + 32), a5, a6);
  if ( !v23[0].m128i_i64[0] )
    return 1;
  v13 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x80000) != 0 && *(_DWORD *)(a2 + 56) )
  {
    v15 = *(_DWORD *)(a2 + 60);
    v30 = *(_DWORD *)(a2 + 56);
    v31 = v15;
    v16 = *(unsigned int *)(a2 + 68);
    ptr[0] = v28;
    ptr[1] = (void *)0x800000000LL;
    v17 = 2 * v16;
    v18 = nullptr;
    if ( (v13 & 0x80000) != 0 )
      v18 = (const __m128i *)(a2 + 72);
    if ( (unsigned __int8)sub_198ECE0(a1, v18, &v18[v17], (__int64)ptr) )
    {
      result = 1;
    }
    else
    {
      v24 = 0;
      *(_OWORD *)v25 = 0;
      v26 = 0;
      sub_15AB8B0((__int64)&v24, v10, v11);
      result = sub_1CE6A30(*a1);
      if ( HIDWORD(v25[1]) )
      {
        v22 = result;
        free(v25[0]);
        result = v22;
      }
    }
    if ( ptr[0] != v28 )
    {
      v20 = result;
      free(ptr[0]);
      return v20;
    }
  }
  else if ( *(_QWORD *)(a2 + 24) != v11
         || *(_QWORD *)(a2 + 16) != v10
         || (result = a2, v23[0].m128i_i64[0] != *(_QWORD *)(a2 + 32)) )
  {
    *(_OWORD *)ptr = 0;
    *(_OWORD *)v28 = 0;
    v29 = 0;
    sub_15AB8B0((__int64)ptr, v10, v11);
    if ( v12 )
      result = sub_1CE6A30(*a1);
    else
      result = sub_190B6E0(*a1, (__int64)ptr, v23, a3, a4);
    if ( HIDWORD(v28[1]) )
    {
      v21 = result;
      free(v28[0]);
      return v21;
    }
  }
  return result;
}
