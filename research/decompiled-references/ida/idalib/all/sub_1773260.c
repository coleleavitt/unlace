__int64 __fastcall sub_1773260(__int64 *a1, __int64 a2, unsigned __int8 a3, __int64 a4, __m128 a5)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r14
  int v10; // r13d
  int v11; // eax
  __int64 result; // rax
  int v13; // ecx
  int v14; // edx
  __int64 v15; // rdx
  const __m128i *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // [rsp+0h] [rbp-1B8h]
  __int64 v19; // [rsp+0h] [rbp-1B8h]
  __int64 v20; // [rsp+0h] [rbp-1B8h]
  __int64 v21; // [rsp+0h] [rbp-1B8h]
  __m128i v23[2]; // [rsp+10h] [rbp-1A8h] BYREF
  __int128 v24; // [rsp+30h] [rbp-188h] BYREF
  void *v25[2]; // [rsp+40h] [rbp-178h]
  __int128 v26; // [rsp+50h] [rbp-168h]
  void *ptr[2]; // [rsp+60h] [rbp-158h] BYREF
  void *v28[2]; // [rsp+70h] [rbp-148h] BYREF
  __int128 v29; // [rsp+80h] [rbp-138h]
  int v30; // [rsp+170h] [rbp-48h]
  int v31; // [rsp+174h] [rbp-44h]

  v7 = sub_176EE90(a1, *(_QWORD *)(a2 + 16), *(void **)(a2 + 24), 0, 0);
  v18 = v8;
  if ( !v7 )
    return 1;
  v9 = v7;
  v10 = 0;
  if ( (*(_DWORD *)a2 & 0x80000) != 0 )
    v10 = *(_DWORD *)(a2 + 64);
  sub_176AF20(v23, a1, (const __m128i *)(a2 + 32), a5);
  if ( !v23[0].m128i_i64[0] )
    return 1;
  v11 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x80000) != 0 && (v13 = *(_DWORD *)(a2 + 56)) != 0 )
  {
    v14 = *(_DWORD *)(a2 + 60);
    ptr[1] = (void *)0x800000000LL;
    v31 = v14;
    v15 = *(unsigned int *)(a2 + 68);
    ptr[0] = v28;
    v16 = nullptr;
    v30 = v13;
    v17 = 2 * v15;
    if ( (v11 & 0x80000) != 0 )
      v16 = (const __m128i *)(a2 + 72);
    if ( (unsigned __int8)sub_1771010(a1, v16, &v16[v17], (__int64)ptr) )
    {
      result = 1;
    }
    else
    {
      v24 = 0;
      *(_OWORD *)v25 = 0;
      v26 = 0;
      sub_15AB8B0((__int64)&v24, v9, v18);
      result = sub_1CE6A30(*a1);
      if ( HIDWORD(v25[1]) )
      {
        v21 = result;
        free(v25[0]);
        result = v21;
      }
    }
    if ( ptr[0] != v28 )
    {
      v19 = result;
      free(ptr[0]);
      return v19;
    }
  }
  else if ( *(_DWORD *)(*a1 + 12632)
         || *(_QWORD *)(a2 + 24) != v18
         || *(_QWORD *)(a2 + 16) != v9
         || (result = a2, v23[0].m128i_i64[0] != *(_QWORD *)(a2 + 32)) )
  {
    *(_OWORD *)ptr = 0;
    *(_OWORD *)v28 = 0;
    v29 = 0;
    sub_15AB8B0((__int64)ptr, v9, v18);
    if ( v10 )
      result = sub_1CE6A30(*a1);
    else
      result = sub_190B6E0(*a1, ptr, v23, a3, a4);
    if ( HIDWORD(v28[1]) )
    {
      v20 = result;
      free(v28[0]);
      return v20;
    }
  }
  return result;
}
