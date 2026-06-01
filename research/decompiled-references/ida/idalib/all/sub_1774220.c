__int64 __fastcall sub_1774220(__int64 *a1, __int64 *a2, __m128 a3)
{
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 *v11; // rcx
  __int32 v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 result; // rax
  unsigned __int64 v22; // rcx
  __int64 *v23; // rax
  unsigned __int64 v24; // rcx
  int v25; // edx
  __int64 *v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  const __m128i *v29; // rsi
  void **v30; // r9
  __int64 v31; // rsi
  __int64 v32; // [rsp+0h] [rbp-1D8h]
  __int64 v33; // [rsp+0h] [rbp-1D8h]
  __int64 v34; // [rsp+0h] [rbp-1D8h]
  int v35; // [rsp+8h] [rbp-1D0h]
  __m128i v36; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v37; // [rsp+20h] [rbp-1B8h]
  __m128i v38; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v39; // [rsp+40h] [rbp-198h]
  __int128 v40; // [rsp+50h] [rbp-188h] BYREF
  void *v41[2]; // [rsp+60h] [rbp-178h]
  __int128 v42; // [rsp+70h] [rbp-168h]
  void *ptr[2]; // [rsp+80h] [rbp-158h] BYREF
  _BYTE v44[256]; // [rsp+90h] [rbp-148h] BYREF
  __int64 v45; // [rsp+190h] [rbp-48h]

  if ( (*a2 & 0x80000) != 0 )
  {
    v5 = a2[4];
    if ( v5 )
    {
      v5 = sub_176EE90(a1, a2[4], (void *)a2[5], 0, 0);
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
  v8 = sub_17473B0((__int64)a1, a2[2]);
  v9 = v8;
  if ( !v8 || *(char *)(v8 + 28) < 0 )
    return 1;
  v10 = a2[2];
  if ( (*a2 & 0x200000) == 0 || (v11 = &a2[2 * ((*a2 & 0x80000) != 0)], v11[4] == v10) )
  {
    v32 = v8;
    goto LABEL_10;
  }
  v32 = sub_17473B0((__int64)a1, v11[4]);
  if ( !v32 )
    return 1;
  v10 = a2[2];
LABEL_10:
  v12 = *((_DWORD *)a2 + 1);
  v13 = *(_QWORD *)(v10 + 40);
  v14 = a2[3];
  v38.m128i_i64[0] = v13;
  v38.m128i_i32[2] = v12;
  v39 = v14;
  if ( v13 )
  {
    sub_176AF20(&v36, a1, &v38, a3);
    v13 = v36.m128i_i64[0];
    v38 = _mm_loadu_si128(&v36);
    v39 = v37;
    if ( !v36.m128i_i64[0] )
      return 1;
  }
  v15 = *a1;
  v16 = *a2;
  if ( !*(_DWORD *)(*a1 + 12632) && (v16 & 0x1000000) == 0 )
  {
    if ( (v16 & 0x80000) != 0 )
    {
      v17 = a2[4];
      v18 = a2[5];
    }
    else
    {
      v18 = 0;
      v17 = 0;
    }
    if ( v7 == v18 && v5 == v17 )
    {
      v19 = a2[2];
      if ( v9 == v19 )
      {
        v20 = v9;
        if ( (v16 & 0x200000) != 0 )
          v20 = a2[2 * ((v16 & 0x80000) != 0) + 4];
        if ( v32 == v20
          && *(_QWORD *)(v19 + 40) == v13
          && ((v16 & 0x100000) == 0 || !LODWORD(a2[2 * ((v16 & 0x80000) != 0) + 4 + ((v16 & 0x200000) != 0)])) )
        {
          sub_1911920(v15, a2, 0);
          return (__int64)a2;
        }
      }
    }
  }
  v22 = v16 >> 16;
  v45 = 0;
  ptr[0] = v44;
  ptr[1] = (void *)0x800000000LL;
  if ( (v22 & 0x10) == 0 || (v23 = &a2[2 * ((v22 & 8) != 0) + ((v22 & 0x20) != 0)], !*((_DWORD *)v23 + 8)) )
  {
    LODWORD(v30) = 0;
    goto LABEL_42;
  }
  v24 = *a2;
  v25 = 0;
  LODWORD(v45) = *((_DWORD *)v23 + 8);
  if ( (v24 & 0x100000) != 0 )
    v25 = HIDWORD(a2[2 * ((v24 & 0x80000) != 0) + 4 + ((v24 & 0x200000) != 0)]);
  HIDWORD(v45) = v25;
  if ( (v24 & 0x100000) != 0 && (v26 = &a2[2 * ((v24 & 0x80000) != 0) + ((v24 & 0x200000) != 0)], *((_DWORD *)v26 + 8)) )
    v27 = 2LL * *((unsigned int *)v26 + 11);
  else
    v27 = 0;
  v28 = v24 >> 16;
  if ( (v28 & 0x10) != 0 && (v31 = (v28 & 0x20) != 0, LODWORD(a2[2 * ((v28 & 8) != 0) + 4 + v31])) )
    v29 = (const __m128i *)&a2[2 * ((v28 & 8) != 0) + 4 + 2 * (unsigned __int64)((v28 & 0x10) != 0) + v31];
  else
    v29 = nullptr;
  if ( !(unsigned __int8)sub_1771010(a1, v29, &v29[v27], (__int64)ptr) )
  {
    v30 = ptr;
LABEL_42:
    v35 = (int)v30;
    v40 = 0;
    *(_OWORD *)v41 = 0;
    v42 = 0;
    sub_15AB8B0((__int64)&v40, v5, v7);
    result = sub_190AE60(*a1, (unsigned int)&v40, (unsigned int)&v38, v9, v32, v35, 0);
    if ( HIDWORD(v41[1]) )
    {
      v34 = result;
      free(v41[0]);
      result = v34;
    }
    goto LABEL_44;
  }
  result = 1;
LABEL_44:
  if ( ptr[0] != v44 )
  {
    v33 = result;
    free(ptr[0]);
    return v33;
  }
  return result;
}
