__int64 __fastcall sub_194D2F0(__int64 *a1, __int64 *a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 v12; // r14
  __int32 v13; // ecx
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 *v16; // rdx
  int v17; // ecx
  __int64 *v18; // rdx
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  const __m128i *v21; // rsi
  __int64 result; // rax
  void **v23; // r9
  __int64 v24; // rsi
  __int64 v25; // [rsp+0h] [rbp-1D8h]
  __int64 v26; // [rsp+0h] [rbp-1D8h]
  __int64 v27; // [rsp+0h] [rbp-1D8h]
  __m128i v28; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v29; // [rsp+20h] [rbp-1B8h]
  __m128i v30; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v31; // [rsp+40h] [rbp-198h]
  __int128 v32; // [rsp+50h] [rbp-188h] BYREF
  void *v33[2]; // [rsp+60h] [rbp-178h]
  __int128 v34; // [rsp+70h] [rbp-168h]
  void *ptr[2]; // [rsp+80h] [rbp-158h] BYREF
  _BYTE v36[256]; // [rsp+90h] [rbp-148h] BYREF
  __int64 v37; // [rsp+190h] [rbp-48h]

  if ( (*a2 & 0x80000) != 0 )
  {
    v5 = a2[4];
    if ( v5 )
    {
      v5 = sub_1949260((__int64)a1, a2[4], (void *)a2[5], 0, 0);
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
  v8 = sub_18CBA40((__int64)a1, a2[2]);
  v9 = v8;
  if ( !v8 || *(char *)(v8 + 28) < 0 )
    return 1;
  v10 = a2[2];
  if ( (*a2 & 0x200000) == 0 || (v11 = &a2[2 * ((*a2 & 0x80000) != 0)], v11[4] == v10) )
  {
    v12 = v9;
    goto LABEL_10;
  }
  v12 = sub_18CBA40((__int64)a1, v11[4]);
  if ( !v12 )
    return 1;
  v10 = a2[2];
LABEL_10:
  v13 = *((_DWORD *)a2 + 1);
  v14 = a2[3];
  v30.m128i_i64[0] = *(_QWORD *)(v10 + 40);
  v30.m128i_i32[2] = v13;
  v31 = v14;
  if ( v30.m128i_i64[0] )
  {
    sub_1947EF0(&v28, a1, &v30, a3, a4);
    a4 = (__m128)_mm_loadu_si128(&v28);
    v30 = (__m128i)a4;
    v31 = v29;
    if ( !v28.m128i_i64[0] )
      return 1;
  }
  v37 = 0;
  ptr[0] = v36;
  ptr[1] = (void *)0x800000000LL;
  v15 = *a2;
  if ( (*a2 & 0x100000) == 0 || (v16 = &a2[2 * ((*a2 & 0x80000) != 0) + ((*a2 & 0x200000) != 0)], !*((_DWORD *)v16 + 8)) )
  {
    v23 = nullptr;
    goto LABEL_28;
  }
  v17 = 0;
  LODWORD(v37) = *((_DWORD *)v16 + 8);
  if ( (v15 & 0x100000) != 0 )
    v17 = HIDWORD(a2[2 * ((v15 & 0x80000) != 0) + 4 + ((v15 & 0x200000) != 0)]);
  HIDWORD(v37) = v17;
  if ( (v15 & 0x100000) != 0 && (v18 = &a2[2 * ((v15 & 0x80000) != 0) + ((v15 & 0x200000) != 0)], *((_DWORD *)v18 + 8)) )
    v19 = 2LL * *((unsigned int *)v18 + 11);
  else
    v19 = 0;
  v20 = v15 >> 16;
  if ( (v20 & 0x10) != 0 && (v24 = (v20 & 0x20) != 0, LODWORD(a2[2 * ((v20 & 8) != 0) + 4 + v24])) )
    v21 = (const __m128i *)&a2[2 * ((v20 & 8) != 0) + 4 + 2 * (unsigned __int64)((v20 & 0x10) != 0) + v24];
  else
    v21 = nullptr;
  if ( !(unsigned __int8)sub_194B950(a1, v21, &v21[v19], (__int64)ptr, 0) )
  {
    v23 = ptr;
LABEL_28:
    v25 = (__int64)v23;
    v32 = 0;
    *(_OWORD *)v33 = 0;
    v34 = 0;
    sub_15AB8B0((__int64)&v32, v5, v7);
    result = sub_190AE60(*a1, (__int64 *)&v32, (__int64)&v30, v9, v12, v25, (__m128i)0LL, a4, 0);
    if ( HIDWORD(v33[1]) )
    {
      v27 = result;
      free(v33[0]);
      result = v27;
    }
    goto LABEL_30;
  }
  result = 1;
LABEL_30:
  if ( ptr[0] != v36 )
  {
    v26 = result;
    free(ptr[0]);
    return v26;
  }
  return result;
}
