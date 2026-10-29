__int64 __fastcall sub_1C93520(__int64 *a1, int *a2, unsigned __int8 a3, _QWORD *a4, __m128 a5, __m128 a6)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r14
  int v11; // r13d
  int v12; // eax
  __int64 result; // rax
  int v14; // ecx
  __int64 v15; // rdx
  const __m128i *v16; // rsi
  __int64 v17; // rdx
  __int64 v19; // [rsp+0h] [rbp-1B8h]
  __int64 v20; // [rsp+0h] [rbp-1B8h]
  __int64 v21; // [rsp+0h] [rbp-1B8h]
  __int64 v22; // [rsp+8h] [rbp-1B0h]
  __m128i v23[2]; // [rsp+10h] [rbp-1A8h] BYREF
  __int128 v24; // [rsp+30h] [rbp-188h] BYREF
  void *v25[2]; // [rsp+40h] [rbp-178h]
  __int128 v26; // [rsp+50h] [rbp-168h]
  void *ptr[2]; // [rsp+60h] [rbp-158h] BYREF
  void *v28[2]; // [rsp+70h] [rbp-148h] BYREF
  __int128 v29; // [rsp+80h] [rbp-138h]
  int v30; // [rsp+170h] [rbp-48h]
  int v31; // [rsp+174h] [rbp-44h]

  v8 = sub_1C8F200((__int64)a1, *((_QWORD *)a2 + 2), *((void **)a2 + 3), 0, 0);
  v22 = v9;
  if ( !v8 )
    return 1;
  v10 = v8;
  v11 = 0;
  if ( (*a2 & 0x80000) != 0 )
    v11 = a2[16];
  sub_1C8B6F0(v23, a1, (const __m128i *)a2 + 2, a5, a6);
  if ( !v23[0].m128i_i64[0] )
    return 1;
  v12 = *a2;
  if ( (*a2 & 0x80000) != 0 && a2[14] )
  {
    v14 = a2[15];
    v30 = a2[14];
    v15 = (unsigned int)a2[17];
    ptr[0] = v28;
    v16 = nullptr;
    ptr[1] = (void *)0x800000000LL;
    v17 = 2 * v15;
    v31 = v14;
    if ( (v12 & 0x80000) != 0 )
      v16 = (const __m128i *)(a2 + 18);
    if ( (unsigned __int8)sub_1C91680(a1, v16, &v16[v17], (__int64)ptr) )
    {
      result = 1;
    }
    else
    {
      v24 = 0;
      *(_OWORD *)v25 = 0;
      v26 = 0;
      sub_15AB8B0((__int64)&v24, v10, v22);
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
  else
  {
    *(_OWORD *)ptr = 0;
    *(_OWORD *)v28 = 0;
    v29 = 0;
    sub_15AB8B0((__int64)ptr, v10, v22);
    if ( v11 )
      result = sub_1CE6A30(*a1);
    else
      result = sub_190B6E0(*a1, (__int64)ptr, v23, a3, a4);
    if ( HIDWORD(v28[1]) )
    {
      v20 = result;
      free(v28[0]);
      return v20;
    }
  }
  return result;
}
