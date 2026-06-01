__int64 __fastcall sub_156F920(const __m128i *a1, _DWORD *a2, __m128i a3, __m128 a4)
{
  int *m128i_i32; // r13
  __int16 v6; // ax
  int v7; // r12d
  bool v8; // zf
  __int64 *v9; // rdi
  int v10; // eax
  __int64 v11; // rdi
  __int16 v12; // ax
  __int64 v13; // r15
  __int16 v14; // ax
  size_t v15; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 *v19; // rdi
  __int64 *v20; // rdi
  unsigned __int32 v21; // ebx
  size_t v22; // rax
  __int64 *v23; // rdi
  int v24; // r13d
  __int32 v25; // ebp
  unsigned int v26; // [rsp+4h] [rbp-124h]
  int v27; // [rsp+10h] [rbp-118h]
  __int16 v28; // [rsp+16h] [rbp-112h]
  unsigned __int64 v29; // [rsp+24h] [rbp-104h] BYREF
  char v30; // [rsp+2Ch] [rbp-FCh]
  void *v31; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v32; // [rsp+38h] [rbp-F0h]
  _BYTE v33[32]; // [rsp+40h] [rbp-E8h] BYREF
  void *v34; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE v35[12]; // [rsp+68h] [rbp-C0h] BYREF
  char v36; // [rsp+74h] [rbp-B4h]
  void *v37; // [rsp+78h] [rbp-B0h]
  __int64 v38; // [rsp+80h] [rbp-A8h]
  _BYTE v39[16]; // [rsp+88h] [rbp-A0h] BYREF
  char v40; // [rsp+98h] [rbp-90h]
  unsigned __int8 *v41; // [rsp+A0h] [rbp-88h] BYREF
  void *v42; // [rsp+A8h] [rbp-80h]
  __int64 v43; // [rsp+B0h] [rbp-78h]
  _BYTE v44[16]; // [rsp+B8h] [rbp-70h] BYREF
  __int8 *v45; // [rsp+C8h] [rbp-60h] BYREF
  void *ptr; // [rsp+D0h] [rbp-58h]
  __int64 v47; // [rsp+D8h] [rbp-50h]
  _BYTE v48[72]; // [rsp+E0h] [rbp-48h] BYREF

  m128i_i32 = a1[1].m128i_i32;
  v6 = a1[2].m128i_i16[1];
  v7 = a1[1].m128i_i32[0];
  v8 = a1[2].m128i_i16[0] == 134;
  v9 = (__int64 *)a1->m128i_i64[1];
  v28 = v6;
  v10 = v7;
  v27 = 1;
  if ( v8 )
  {
    a1[2].m128i_i32[2] = v7;
    sub_14634E0(v9, m128i_i32);
    v9 = (__int64 *)a1->m128i_i64[1];
    v10 = a1[1].m128i_i32[0];
    v27 = 0;
  }
  a1[2].m128i_i32[2] = v10;
  sub_14634E0(v9, m128i_i32);
  v26 = a1[2].m128i_u32[2];
  sub_14A1D90((__int64)a1);
  v11 = a1->m128i_i64[1];
  if ( (*(_BYTE *)(*(_QWORD *)(v11 + 56) + 21LL) & 4) == 0 )
    goto LABEL_6;
  v12 = a1[2].m128i_i16[0];
  if ( v12 != 63 )
  {
    if ( v12 == 62 )
    {
      v17 = *(_QWORD *)(v11 + 2944);
      v18 = v17 >= *(unsigned int *)(v11 + 2912) ? sub_14180A0(v11, 1u) : *(_QWORD *)(v11 + 2904) + 24 * v17;
      if ( *(_WORD *)(v18 + 16) == 141 )
      {
        if ( !v27 )
        {
          sub_FC70B0((__int64)&v41, a1[6].m128i_i64[1], v7, 1738);
          sub_AE9DF0(&v41, 1, 2u);
          *(_QWORD *)&v35[4] = 0;
          v36 = 0;
          v37 = v39;
          v38 = 0;
          v39[0] = 0;
          v40 = 0;
          LODWORD(v34) = v7;
          HIDWORD(v34) = v7;
          v35[0] = 1;
          if ( v7 )
          {
            sub_1569180((__int64 *)&v41, (unsigned __int64)&v34);
            if ( v37 != v39 )
              operator delete(v37);
          }
          sub_AEA040((__int64)&v41);
        }
        v19 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v19, m128i_i32);
        v20 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v20, m128i_i32);
        v21 = a1[2].m128i_u32[2];
        sub_14A1D90((__int64)a1);
        v22 = j__strlen(&byte_22F0C30);
        sub_156A150((__int64)a1, 1873, &byte_22F0C30, v22, a3, *(double *)a4.m128_u64);
        *a2 = (*a2 != 2) + 4;
        return sub_1A81340(a1[6].m128i_i64[0], v26, v21);
      }
    }
LABEL_6:
    v13 = 0;
    v31 = v33;
    v32 = 0x200000000LL;
    if ( (unsigned __int8)sub_15684E0((__int64)a1, v26, (__int64)&v31, 0) )
    {
LABEL_16:
      if ( v31 != v33 )
        free(v31);
      return v13;
    }
    *(_QWORD *)v35 = 0x200000000LL;
    v34 = &v35[8];
    v14 = a1[2].m128i_i16[0];
    if ( v14 == 62 )
    {
      v23 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v23, m128i_i32);
      if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 21LL) & 4) != 0 )
      {
        if ( (unsigned __int8)sub_15684E0((__int64)a1, v26, (__int64)&v34, 0) )
        {
LABEL_14:
          if ( v34 != &v35[8] )
            free(v34);
          goto LABEL_16;
        }
        v14 = a1[2].m128i_i16[0];
      }
      else
      {
        v24 = a1[2].m128i_i32[2];
        sub_FC70B0((__int64)&v41, a1[6].m128i_i64[1], v24, 1929);
        v29 = __PAIR64__(*((_DWORD *)v34 + 4 * *(unsigned int *)v35 - 4), v24);
        v30 = 1;
        sub_AEC610((__int64 *)&v41, (__int64 *)&v29);
        sub_AEA040((__int64)&v41);
        v14 = a1[2].m128i_i16[0];
      }
    }
    v41 = nullptr;
    v42 = v44;
    v45 = &a1[31].m128i_i8[8];
    v43 = 0x200000000LL;
    ptr = v48;
    v47 = 0x200000000LL;
    if ( (unsigned __int16)(v14 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
      sub_14AB020((__int64)a1, (unsigned int *)&v41, a3, a4);
    sub_147CDF0((__int64)a1, (int *)&v41, 0x613u, 0x6B6u, 0, 1, a3, *(double *)a4.m128_u64);
    v15 = j__strlen(&byte_22F0C30);
    sub_156A150((__int64)a1, 1737, &byte_22F0C30, v15, a3, *(double *)a4.m128_u64);
    v13 = sub_1A82190(
            a1[6].m128i_i64[0],
            v7,
            v26,
            v27,
            (_DWORD)v31,
            v32,
            (__int64)v34,
            *(unsigned int *)v35,
            (__int64)a2,
            (v28 & 0x1000) != 0);
    sub_15DCED0(v45, &v45);
    if ( ptr != v48 )
      free(ptr);
    if ( v42 != v44 )
      free(v42);
    goto LABEL_14;
  }
  a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
  sub_14634E0((__int64 *)v11, m128i_i32);
  if ( *a2 || (v28 & 0x1000) != 0 )
  {
    v25 = a1[2].m128i_i32[2];
    v13 = 0;
    sub_FC70B0((__int64)&v41, a1[6].m128i_i64[1], v7, 1686);
    v34 = (void *)__PAIR64__(v25, v7);
    v35[0] = 1;
    sub_AEC610((__int64 *)&v41, (__int64 *)&v34);
    sub_AEA040((__int64)&v41);
  }
  else
  {
    if ( !v27 )
    {
      sub_FC70B0((__int64)&v41, a1[6].m128i_i64[1], v7, 1738);
      sub_AE9DF0(&v41, 0, 2u);
      *(_QWORD *)&v35[4] = 0;
      v36 = 0;
      v37 = v39;
      v38 = 0;
      v39[0] = 0;
      v40 = 0;
      LODWORD(v34) = v7;
      HIDWORD(v34) = v7;
      v35[0] = 1;
      if ( v7 )
      {
        sub_1569180((__int64 *)&v41, (unsigned __int64)&v34);
        if ( v37 != v39 )
          operator delete(v37);
      }
      sub_AEA040((__int64)&v41);
    }
    *a2 = 1;
    return sub_1A802C0(a1[6].m128i_i64[0], v26);
  }
  return v13;
}
