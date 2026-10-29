__int64 __fastcall sub_1D28BE0(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __m128 *v21; // r13
  unsigned __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 result; // rax
  unsigned __int64 v28; // r15
  __int64 v29; // rax
  unsigned __int64 v30; // r15
  int v31; // edx
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // r15
  const __m128i *v35; // rsi
  void **v36; // r15
  __int64 v37; // rcx
  __int64 v38; // [rsp+0h] [rbp-1D8h]
  __int64 v39; // [rsp+0h] [rbp-1D8h]
  __int64 v40; // [rsp+0h] [rbp-1D8h]
  __int64 v41; // [rsp+8h] [rbp-1D0h]
  __m128i v42; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v43; // [rsp+20h] [rbp-1B8h]
  __m128i v44; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v45; // [rsp+40h] [rbp-198h]
  __int128 v46; // [rsp+50h] [rbp-188h] BYREF
  void *v47[2]; // [rsp+60h] [rbp-178h]
  __int128 v48; // [rsp+70h] [rbp-168h]
  void *ptr[2]; // [rsp+80h] [rbp-158h] BYREF
  _BYTE v50[256]; // [rsp+90h] [rbp-148h] BYREF
  __int64 v51; // [rsp+190h] [rbp-48h]

  if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
  {
    v9 = *(_QWORD *)(a2 + 32);
    if ( v9 )
    {
      v9 = sub_1D23E30(a1, *(_QWORD *)(a2 + 32), *(void **)(a2 + 40), 0, 0);
      v38 = a3;
      if ( !v9 )
        return 1;
    }
    else
    {
      v38 = 0;
    }
  }
  else
  {
    v38 = 0;
    v9 = 0;
  }
  v10 = sub_1D1B120((__int64)a1, *(_QWORD *)(a2 + 16), a7, a8, a3, a4, a5, a6);
  v15 = v10;
  if ( !v10 || *(char *)(v10 + 28) < 0 )
    return 1;
  v16 = *(_QWORD *)(a2 + 16);
  if ( (*(_QWORD *)a2 & 0x200000LL) == 0
    || (v17 = a2 + 16LL * ((*(_QWORD *)a2 & 0x80000LL) != 0), v16 == *(_QWORD *)(v17 + 32)) )
  {
    v41 = v10;
    goto LABEL_10;
  }
  v41 = sub_1D1B120((__int64)a1, *(_QWORD *)(v17 + 32), a7, a8, v11, v12, v13, v14);
  if ( !v41 )
    return 1;
  v16 = *(_QWORD *)(a2 + 16);
LABEL_10:
  v18 = *(unsigned int *)(a2 + 4);
  v19 = *(_QWORD *)(v16 + 40);
  v20 = *(_QWORD *)(a2 + 24);
  v44.m128i_i64[0] = v19;
  v44.m128i_i32[2] = v18;
  v45 = v20;
  if ( v19 )
  {
    sub_1D204A0(&v42, a1, &v44, a7, a8, v18, v13, v14);
    a8 = (__m128)_mm_loadu_si128(&v42);
    v19 = v42.m128i_i64[0];
    v44 = (__m128i)a8;
    v45 = v43;
    if ( !v42.m128i_i64[0] )
      return 1;
  }
  v21 = (__m128 *)*a1;
  v22 = *(_QWORD *)a2;
  if ( !*((_DWORD *)*a1 + 3158) && (v22 & 0x1000000) == 0 )
  {
    if ( (v22 & 0x80000) != 0 )
    {
      v23 = *(_QWORD *)(a2 + 32);
      v24 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      v24 = 0;
      v23 = 0;
    }
    if ( v9 == v23 && v38 == v24 )
    {
      v25 = *(_QWORD *)(a2 + 16);
      if ( v15 == v25 )
      {
        v26 = v15;
        if ( (v22 & 0x200000) != 0 )
          v26 = *(_QWORD *)(a2 + 16LL * ((v22 & 0x80000) != 0) + 32);
        if ( v41 == v26 && *(_QWORD *)(v25 + 40) == v19 && !sub_18C0310((_QWORD *)a2) )
        {
          sub_1911920(v21, a2, 0, a7, a8);
          return a2;
        }
      }
    }
  }
  v28 = v22 >> 16;
  v51 = 0;
  ptr[0] = v50;
  ptr[1] = (void *)0x800000000LL;
  if ( (v28 & 0x10) == 0 || (v29 = a2 + 16LL * ((v28 & 8) != 0) + 8LL * ((v28 & 0x20) != 0), !*(_DWORD *)(v29 + 32)) )
  {
    v36 = nullptr;
    goto LABEL_41;
  }
  v30 = *(_QWORD *)a2;
  v31 = 0;
  LODWORD(v51) = *(_DWORD *)(v29 + 32);
  if ( (v30 & 0x100000) != 0 )
    v31 = *(_DWORD *)(a2 + 16LL * ((v30 & 0x80000) != 0) + 8LL * ((v30 & 0x200000) != 0) + 36);
  HIDWORD(v51) = v31;
  if ( (v30 & 0x100000) != 0
    && (v32 = a2 + 16LL * ((v30 & 0x80000) != 0) + 8LL * ((v30 & 0x200000) != 0), *(_DWORD *)(v32 + 32)) )
  {
    v33 = 2LL * *(unsigned int *)(v32 + 44);
  }
  else
  {
    v33 = 0;
  }
  v34 = v30 >> 16;
  if ( (v34 & 0x10) != 0 && (v37 = 8LL * ((v34 & 0x20) != 0), *(_DWORD *)(a2 + v37 + 16LL * ((v34 & 8) != 0) + 32)) )
    v35 = (const __m128i *)(a2 + v37 + 16 * (((v34 & 8) != 0) + (unsigned __int64)((v34 & 0x10) != 0)) + 32);
  else
    v35 = nullptr;
  if ( !(unsigned __int8)sub_1D25BD0(a1, v35, &v35[v33], (__int64)ptr) )
  {
    v36 = ptr;
LABEL_41:
    v46 = 0;
    *(_OWORD *)v47 = 0;
    v48 = 0;
    sub_15AB8B0((__int64)&v46, v9, v38);
    result = sub_190AE60((__int64)*a1, (__int64 *)&v46, (__int64)&v44, v15, v41, (__int64)v36, (__m128i)0LL, a8, 0);
    if ( HIDWORD(v47[1]) )
    {
      v40 = result;
      free(v47[0]);
      result = v40;
    }
    goto LABEL_43;
  }
  result = 1;
LABEL_43:
  if ( ptr[0] != v50 )
  {
    v39 = result;
    free(ptr[0]);
    return v39;
  }
  return result;
}
