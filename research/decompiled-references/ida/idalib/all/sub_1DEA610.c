__int64 __fastcall sub_1DEA610(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __m128 *v22; // rdi
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 result; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  int v32; // edx
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  const __m128i *v36; // rsi
  void **v37; // r9
  __int64 v38; // rsi
  unsigned __int64 v39; // [rsp+0h] [rbp-1D8h]
  __int64 v40; // [rsp+0h] [rbp-1D8h]
  __int64 v41; // [rsp+0h] [rbp-1D8h]
  __int64 v42; // [rsp+8h] [rbp-1D0h]
  __m128i v43; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v44; // [rsp+20h] [rbp-1B8h]
  __m128i v45; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v46; // [rsp+40h] [rbp-198h]
  __int128 v47; // [rsp+50h] [rbp-188h] BYREF
  void *v48[2]; // [rsp+60h] [rbp-178h]
  __int128 v49; // [rsp+70h] [rbp-168h]
  void *ptr[2]; // [rsp+80h] [rbp-158h] BYREF
  _BYTE v51[256]; // [rsp+90h] [rbp-148h] BYREF
  __int64 v52; // [rsp+190h] [rbp-48h]

  if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
  {
    v10 = *(_QWORD *)(a2 + 32);
    if ( v10 )
    {
      v10 = sub_1DD3CF0((__int64)a1, *(_QWORD *)(a2 + 32), *(void **)(a2 + 40), 0, 0);
      v12 = v11;
      if ( !v10 )
        return 1;
    }
    else
    {
      v12 = 0;
    }
  }
  else
  {
    v12 = 0;
    v10 = 0;
  }
  v13 = sub_1DD8310((__int64)a1, *(_DWORD *)(a2 + 4), *(_QWORD *)(a2 + 16), a6, a7, a8, a3, a4);
  v16 = v13;
  if ( !v13 || *(char *)(v13 + 28) < 0 )
    return 1;
  v17 = *(_QWORD *)(a2 + 16);
  if ( (*(_QWORD *)a2 & 0x200000LL) == 0
    || (v18 = a2 + 16LL * ((*(_QWORD *)a2 & 0x80000LL) != 0), v17 == *(_QWORD *)(v18 + 32)) )
  {
    v39 = v13;
    goto LABEL_10;
  }
  v39 = sub_1DD8310((__int64)a1, *(_DWORD *)(a2 + 4), *(_QWORD *)(v18 + 32), v18, v14, v15, a3, a4);
  if ( !v39 )
    return 1;
  v17 = *(_QWORD *)(a2 + 16);
LABEL_10:
  v19 = *(_QWORD *)(v17 + 40);
  v20 = *(unsigned int *)(a2 + 4);
  v21 = *(_QWORD *)(a2 + 24);
  v45.m128i_i64[0] = v19;
  v45.m128i_i32[2] = v20;
  v46 = v21;
  if ( v19 )
  {
    sub_1DD8C40(&v43, (__int64)a1, &v45, a3, a4, v20, v14, v15);
    a4 = (__m128)_mm_loadu_si128(&v43);
    v19 = v43.m128i_i64[0];
    v45 = (__m128i)a4;
    v46 = v44;
    if ( !v43.m128i_i64[0] )
      return 1;
  }
  v22 = (__m128 *)*a1;
  v23 = *(_QWORD *)a2;
  if ( !*(_DWORD *)(*a1 + 12632) && (v23 & 0x1000000) == 0 )
  {
    if ( (v23 & 0x80000) != 0 )
    {
      v24 = *(_QWORD *)(a2 + 32);
      v25 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      v25 = 0;
      v24 = 0;
    }
    if ( v10 == v24 && v12 == v25 )
    {
      v26 = *(_QWORD *)(a2 + 16);
      if ( v16 == v26 )
      {
        v27 = v16;
        if ( (v23 & 0x200000) != 0 )
          v27 = *(_QWORD *)(a2 + 16LL * ((v23 & 0x80000) != 0) + 32);
        if ( v39 == v27
          && *(_QWORD *)(v26 + 40) == v19
          && ((v23 & 0x100000) == 0
           || !*(_DWORD *)(a2 + 16LL * ((v23 & 0x80000) != 0) + 8LL * ((v23 & 0x200000) != 0) + 32)) )
        {
          sub_1911920(v22, a2, 0, a3, a4);
          return a2;
        }
      }
    }
  }
  v29 = v23 >> 16;
  v52 = 0;
  ptr[0] = v51;
  ptr[1] = (void *)0x800000000LL;
  if ( (v29 & 0x10) == 0 || (v30 = a2 + 16LL * ((v29 & 8) != 0) + 8LL * ((v29 & 0x20) != 0), !*(_DWORD *)(v30 + 32)) )
  {
    v37 = nullptr;
    goto LABEL_42;
  }
  v31 = *(_QWORD *)a2;
  v32 = 0;
  LODWORD(v52) = *(_DWORD *)(v30 + 32);
  if ( (v31 & 0x100000) != 0 )
    v32 = *(_DWORD *)(a2 + 16LL * ((v31 & 0x80000) != 0) + 8LL * ((v31 & 0x200000) != 0) + 36);
  HIDWORD(v52) = v32;
  if ( (v31 & 0x100000) != 0
    && (v33 = a2 + 16LL * ((v31 & 0x80000) != 0) + 8LL * ((v31 & 0x200000) != 0), *(_DWORD *)(v33 + 32)) )
  {
    v34 = 2LL * *(unsigned int *)(v33 + 44);
  }
  else
  {
    v34 = 0;
  }
  v35 = v31 >> 16;
  if ( (v35 & 0x10) != 0 && (v38 = 8LL * ((v35 & 0x20) != 0), *(_DWORD *)(a2 + v38 + 16LL * ((v35 & 8) != 0) + 32)) )
    v36 = (const __m128i *)(a2 + v38 + 16 * (((v35 & 8) != 0) + (unsigned __int64)((v35 & 0x10) != 0)) + 32);
  else
    v36 = nullptr;
  if ( !(unsigned __int8)sub_1DD6C30(a1, v36, &v36[v34], (__int64)ptr, a3, a4) )
  {
    v37 = ptr;
LABEL_42:
    v42 = (__int64)v37;
    v47 = 0;
    *(_OWORD *)v48 = 0;
    v49 = 0;
    sub_15AB8B0((__int64)&v47, v10, v12);
    result = sub_190AE60(*a1, (__int64 *)&v47, (__int64)&v45, v16, v39, v42, (__m128i)0LL, a4, 0);
    if ( HIDWORD(v48[1]) )
    {
      v41 = result;
      free(v48[0]);
      result = v41;
    }
    goto LABEL_44;
  }
  result = 1;
LABEL_44:
  if ( ptr[0] != v51 )
  {
    v40 = result;
    free(ptr[0]);
    return v40;
  }
  return result;
}
