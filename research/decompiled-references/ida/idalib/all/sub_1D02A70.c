__int64 __fastcall sub_1D02A70(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // r15
  __int32 v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 result; // rax
  unsigned __int64 v21; // r15
  __int64 v22; // rax
  unsigned __int64 v23; // r15
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // r15
  const __m128i *v28; // rsi
  void **v29; // r15
  __int64 v30; // rcx
  __int64 v31; // [rsp+0h] [rbp-1D8h]
  __int64 v32; // [rsp+0h] [rbp-1D8h]
  __int64 v33; // [rsp+0h] [rbp-1D8h]
  __m128 *v34; // [rsp+8h] [rbp-1D0h]
  __m128i v35; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v36; // [rsp+20h] [rbp-1B8h]
  __m128i v37; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v38; // [rsp+40h] [rbp-198h]
  __int128 v39; // [rsp+50h] [rbp-188h] BYREF
  void *v40[2]; // [rsp+60h] [rbp-178h]
  __int128 v41; // [rsp+70h] [rbp-168h]
  void *ptr[2]; // [rsp+80h] [rbp-158h] BYREF
  _BYTE v43[256]; // [rsp+90h] [rbp-148h] BYREF
  __int64 v44; // [rsp+190h] [rbp-48h]

  if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
  {
    v5 = *(_QWORD *)(a2 + 32);
    if ( v5 )
    {
      v5 = sub_1CFE3D0((__int64)a1, *(_QWORD *)(a2 + 32), *(void **)(a2 + 40), 0, 0);
      v7 = v6;
      if ( !v5 )
        return 1;
    }
    else
    {
      v7 = 0;
    }
  }
  else
  {
    v7 = 0;
    v5 = 0;
  }
  v8 = sub_1CB9120((__int64)a1, *(_QWORD *)(a2 + 16));
  v9 = v8;
  if ( !v8 || *(char *)(v8 + 28) < 0 )
    return 1;
  v10 = *(_QWORD *)(a2 + 16);
  if ( (*(_QWORD *)a2 & 0x200000LL) == 0
    || (v11 = a2 + 16LL * ((*(_QWORD *)a2 & 0x80000LL) != 0), *(_QWORD *)(v11 + 32) == v10) )
  {
    v31 = v8;
    goto LABEL_10;
  }
  v31 = sub_1CB9120((__int64)a1, *(_QWORD *)(v11 + 32));
  if ( !v31 )
    return 1;
  v10 = *(_QWORD *)(a2 + 16);
LABEL_10:
  v12 = *(_DWORD *)(a2 + 4);
  v13 = *(_QWORD *)(v10 + 40);
  v14 = *(_QWORD *)(a2 + 24);
  v37.m128i_i64[0] = v13;
  v37.m128i_i32[2] = v12;
  v38 = v14;
  if ( v13 )
  {
    sub_1CF74E0(&v35, (__int64)a1, &v37, a3, a4);
    a4 = (__m128)_mm_loadu_si128(&v35);
    v13 = v35.m128i_i64[0];
    v37 = (__m128i)a4;
    v38 = v36;
    if ( !v35.m128i_i64[0] )
      return 1;
  }
  v15 = *(_QWORD *)a2;
  if ( !*(_DWORD *)(*a1 + 12632) && (v15 & 0x1000000) == 0 )
  {
    if ( (v15 & 0x80000) != 0 )
    {
      v16 = *(_QWORD *)(a2 + 32);
      v17 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      v17 = 0;
      v16 = 0;
    }
    if ( v7 == v17 && v5 == v16 )
    {
      v18 = *(_QWORD *)(a2 + 16);
      if ( v9 == v18 )
      {
        v19 = v9;
        if ( (v15 & 0x200000) != 0 )
          v19 = *(_QWORD *)(a2 + 16LL * ((v15 & 0x80000) != 0) + 32);
        if ( v31 == v19 && *(_QWORD *)(v18 + 40) == v13 )
        {
          v34 = (__m128 *)*a1;
          if ( !sub_18C0310((_QWORD *)a2) )
          {
            sub_1911920(v34, a2, 0, a3, a4);
            return a2;
          }
        }
      }
    }
  }
  v21 = v15 >> 16;
  v44 = 0;
  ptr[0] = v43;
  ptr[1] = (void *)0x800000000LL;
  if ( (v21 & 0x10) == 0 || (v22 = a2 + 16LL * ((v21 & 8) != 0) + 8LL * ((v21 & 0x20) != 0), !*(_DWORD *)(v22 + 32)) )
  {
    v29 = nullptr;
    goto LABEL_41;
  }
  v23 = *(_QWORD *)a2;
  v24 = 0;
  LODWORD(v44) = *(_DWORD *)(v22 + 32);
  if ( (v23 & 0x100000) != 0 )
    v24 = *(_DWORD *)(a2 + 16LL * ((v23 & 0x80000) != 0) + 8LL * ((v23 & 0x200000) != 0) + 36);
  HIDWORD(v44) = v24;
  if ( (v23 & 0x100000) != 0
    && (v25 = a2 + 16LL * ((v23 & 0x80000) != 0) + 8LL * ((v23 & 0x200000) != 0), *(_DWORD *)(v25 + 32)) )
  {
    v26 = 2LL * *(unsigned int *)(v25 + 44);
  }
  else
  {
    v26 = 0;
  }
  v27 = v23 >> 16;
  if ( (v27 & 0x10) != 0 && (v30 = 8LL * ((v27 & 0x20) != 0), *(_DWORD *)(a2 + v30 + 16LL * ((v27 & 8) != 0) + 32)) )
    v28 = (const __m128i *)(a2 + v30 + 16 * (((v27 & 8) != 0) + (unsigned __int64)((v27 & 0x10) != 0)) + 32);
  else
    v28 = nullptr;
  if ( !(unsigned __int8)sub_1D004D0((unsigned int *)a1, v28, &v28[v26], (__int64)ptr) )
  {
    v29 = ptr;
LABEL_41:
    v39 = 0;
    *(_OWORD *)v40 = 0;
    v41 = 0;
    sub_15AB8B0((__int64)&v39, v5, v7);
    result = sub_190AE60(*a1, (__int64 *)&v39, (__int64)&v37, v9, v31, (__int64)v29, (__m128i)0LL, a4, 0);
    if ( HIDWORD(v40[1]) )
    {
      v33 = result;
      free(v40[0]);
      result = v33;
    }
    goto LABEL_43;
  }
  result = 1;
LABEL_43:
  if ( ptr[0] != v43 )
  {
    v32 = result;
    free(ptr[0]);
    return v32;
  }
  return result;
}
