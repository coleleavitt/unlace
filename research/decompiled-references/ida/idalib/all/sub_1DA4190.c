__int64 __fastcall sub_1DA4190(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int32 v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128 *v16; // rdi
  unsigned __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 result; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  const __m128i *v30; // rsi
  void **v31; // r9
  __int64 v32; // rsi
  __int64 v33; // [rsp+0h] [rbp-1D8h]
  __int64 v34; // [rsp+0h] [rbp-1D8h]
  __int64 v35; // [rsp+0h] [rbp-1D8h]
  __int64 v36; // [rsp+8h] [rbp-1D0h]
  __m128i v37; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v38; // [rsp+20h] [rbp-1B8h]
  __m128i v39; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v40; // [rsp+40h] [rbp-198h]
  __int128 v41; // [rsp+50h] [rbp-188h] BYREF
  void *v42[2]; // [rsp+60h] [rbp-178h]
  __int128 v43; // [rsp+70h] [rbp-168h]
  void *ptr[2]; // [rsp+80h] [rbp-158h] BYREF
  _BYTE v45[256]; // [rsp+90h] [rbp-148h] BYREF
  __int64 v46; // [rsp+190h] [rbp-48h]

  if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
  {
    v6 = *(_QWORD *)(a2 + 32);
    if ( v6 )
    {
      v6 = sub_1D9F590((__int64)a1, *(_QWORD *)(a2 + 32), *(void **)(a2 + 40), 0, 0);
      v8 = v7;
      if ( !v6 )
        return 1;
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    v8 = 0;
    v6 = 0;
  }
  v9 = sub_1D86580((__int64)a1, *(_QWORD *)(a2 + 16));
  v10 = v9;
  if ( !v9 || *(char *)(v9 + 28) < 0 )
    return 1;
  v11 = *(_QWORD *)(a2 + 16);
  if ( (*(_QWORD *)a2 & 0x200000LL) == 0
    || (v12 = a2 + 16LL * ((*(_QWORD *)a2 & 0x80000LL) != 0), *(_QWORD *)(v12 + 32) == v11) )
  {
    v33 = v9;
    goto LABEL_10;
  }
  v33 = sub_1D86580((__int64)a1, *(_QWORD *)(v12 + 32));
  if ( !v33 )
    return 1;
  v11 = *(_QWORD *)(a2 + 16);
LABEL_10:
  v13 = *(_DWORD *)(a2 + 4);
  v14 = *(_QWORD *)(v11 + 40);
  v15 = *(_QWORD *)(a2 + 24);
  v39.m128i_i64[0] = v14;
  v39.m128i_i32[2] = v13;
  v40 = v15;
  if ( v14 )
  {
    sub_1D9B710(&v37, a1, &v39, a3, a4);
    a4 = (__m128)_mm_loadu_si128(&v37);
    v14 = v37.m128i_i64[0];
    v39 = (__m128i)a4;
    v40 = v38;
    if ( !v37.m128i_i64[0] )
      return 1;
  }
  v16 = (__m128 *)*a1;
  v17 = *(_QWORD *)a2;
  if ( !*(_DWORD *)(*a1 + 12632) && (v17 & 0x1000000) == 0 )
  {
    if ( (v17 & 0x80000) != 0 )
    {
      v18 = *(_QWORD *)(a2 + 32);
      v19 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      v19 = 0;
      v18 = 0;
    }
    if ( v8 == v19 && v6 == v18 )
    {
      v20 = *(_QWORD *)(a2 + 16);
      if ( v10 == v20 )
      {
        v21 = v10;
        if ( (v17 & 0x200000) != 0 )
          v21 = *(_QWORD *)(a2 + 16LL * ((v17 & 0x80000) != 0) + 32);
        if ( v33 == v21
          && *(_QWORD *)(v20 + 40) == v14
          && ((v17 & 0x100000) == 0
           || !*(_DWORD *)(a2 + 16LL * ((v17 & 0x80000) != 0) + 8LL * ((v17 & 0x200000) != 0) + 32)) )
        {
          sub_1911920(v16, a2, 0, a3, a4);
          return a2;
        }
      }
    }
  }
  v23 = v17 >> 16;
  v46 = 0;
  ptr[0] = v45;
  ptr[1] = (void *)0x800000000LL;
  if ( (v23 & 0x10) == 0 || (v24 = a2 + 16LL * ((v23 & 8) != 0) + 8LL * ((v23 & 0x20) != 0), !*(_DWORD *)(v24 + 32)) )
  {
    v31 = nullptr;
    goto LABEL_42;
  }
  v25 = *(_QWORD *)a2;
  v26 = 0;
  LODWORD(v46) = *(_DWORD *)(v24 + 32);
  if ( (v25 & 0x100000) != 0 )
    v26 = *(_DWORD *)(a2 + 16LL * ((v25 & 0x80000) != 0) + 8LL * ((v25 & 0x200000) != 0) + 36);
  HIDWORD(v46) = v26;
  if ( (v25 & 0x100000) != 0
    && (v27 = a2 + 16LL * ((v25 & 0x80000) != 0) + 8LL * ((v25 & 0x200000) != 0), *(_DWORD *)(v27 + 32)) )
  {
    v28 = 2LL * *(unsigned int *)(v27 + 44);
  }
  else
  {
    v28 = 0;
  }
  v29 = v25 >> 16;
  if ( (v29 & 0x10) != 0 && (v32 = 8LL * ((v29 & 0x20) != 0), *(_DWORD *)(a2 + v32 + 16LL * ((v29 & 8) != 0) + 32)) )
    v30 = (const __m128i *)(a2 + v32 + 16 * (((v29 & 8) != 0) + (unsigned __int64)((v29 & 0x10) != 0)) + 32);
  else
    v30 = nullptr;
  if ( !(unsigned __int8)sub_1DA1000(a1, v30, &v30[v28], (__int64)ptr) )
  {
    v31 = ptr;
LABEL_42:
    v36 = (__int64)v31;
    v41 = 0;
    *(_OWORD *)v42 = 0;
    v43 = 0;
    sub_15AB8B0((__int64)&v41, v6, v8);
    result = sub_190AE60(*a1, (__int64 *)&v41, (__int64)&v39, v10, v33, v36, (__m128i)0LL, a4, 0);
    if ( HIDWORD(v42[1]) )
    {
      v35 = result;
      free(v42[0]);
      result = v35;
    }
    goto LABEL_44;
  }
  result = 1;
LABEL_44:
  if ( ptr[0] != v45 )
  {
    v34 = result;
    free(ptr[0]);
    return v34;
  }
  return result;
}
