__int64 __fastcall sub_1C9FDA0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  __int64 v11; // rax
  int v12; // r8d
  __int64 *v13; // rdi
  unsigned int *v14; // rax
  unsigned __int64 v15; // r13
  __m128i **v16; // r15
  __int64 v17; // r14
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // r14
  _BYTE *v27; // rdi
  unsigned __int64 v28; // r12
  __int64 v30; // r14
  __int64 v31; // r8
  __int64 v32; // r9
  double v33; // xmm4_8
  double v34; // xmm5_8
  unsigned __int64 v35; // r15
  int v36; // r8d
  int v37; // ecx
  __int64 v38; // rax
  __int64 v39; // rsi
  unsigned __int64 v40; // rax
  __m128i *v41; // [rsp+0h] [rbp-138h]
  unsigned __int64 v42; // [rsp+0h] [rbp-138h]
  __m128i v43; // [rsp+10h] [rbp-128h] BYREF
  __int64 v44; // [rsp+20h] [rbp-118h]
  __m128i v45; // [rsp+30h] [rbp-108h] BYREF
  __int64 v46; // [rsp+40h] [rbp-F8h]
  __m128 v47; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v48; // [rsp+60h] [rbp-D8h]
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+78h] [rbp-C0h]
  _BYTE v51[184]; // [rsp+80h] [rbp-B8h] BYREF

  v11 = *a1;
  v12 = *(_DWORD *)(a2 + 12);
  v43.m128i_i64[0] = 0;
  v13 = *(__int64 **)(v11 + 760);
  v43.m128i_i32[2] = 0;
  v44 = 0;
  sub_1B5B570(v13, 2, &v43, 0, v12);
  v50 = 0x1000000000LL;
  v14 = *(unsigned int **)(a2 + 24);
  ptr = v51;
  if ( v14 )
  {
    v15 = *v14;
    v16 = (__m128i **)(v14 + 4);
    v17 = (__int64)&v14[2 * v15 + 4];
    if ( v15 <= 0x10 )
    {
      if ( v16 == (__m128i **)v17 )
      {
LABEL_15:
        if ( *((_BYTE *)v14 + 8) && *(_QWORD *)&v14[2 * v14[1] + 4 + 2 * (unsigned __int64)*v14] )
        {
          sub_1AF3B60(*(__int64 **)(*a1 + 760), *(_DWORD *)(a2 + 8), 0);
          v30 = *a1;
          sub_1C36400(*a1, 0);
          v35 = sub_1C9AFD0(
                  a1,
                  *(_WORD **)(*(_QWORD *)(a2 + 24)
                            + 8
                            * (*(unsigned int *)(*(_QWORD *)(a2 + 24) + 4LL)
                             + (unsigned __int64)**(unsigned int **)(a2 + 24))
                            + 16),
                  0,
                  a3,
                  a4,
                  a5,
                  a6,
                  v33,
                  v34,
                  a9,
                  a10,
                  *(unsigned int *)(*(_QWORD *)(a2 + 24) + 4LL),
                  v31,
                  v32);
          sub_1C36470(v30);
          v26 = sub_1B14300(*(__int64 **)(*a1 + 760), v35, (__int64 *)ptr, (unsigned int)v50, a3, a4);
          if ( v26 == 1 )
          {
            v27 = ptr;
            v28 = 0;
            goto LABEL_19;
          }
          goto LABEL_17;
        }
LABEL_16:
        v26 = 0;
LABEL_17:
        v27 = ptr;
        if ( v15 != (unsigned int)v50 )
        {
          v28 = 0;
          v26 = 1;
          goto LABEL_19;
        }
        goto LABEL_28;
      }
      do
      {
LABEL_10:
        while ( !*v16 )
        {
          v24 = (unsigned int)v50;
          v25 = (unsigned int)v50 + 1LL;
          if ( v25 > HIDWORD(v50) )
          {
            sub_2237220(&ptr, v51, v25, 8);
            v24 = (unsigned int)v50;
          }
          ++v16;
          *((_QWORD *)ptr + v24) = 0;
          LODWORD(v50) = v50 + 1;
          if ( (__m128i **)v17 == v16 )
            goto LABEL_14;
        }
        v41 = *v16;
        sub_1AF3B20(*(_QWORD *)(*a1 + 760), (*v16)->m128i_i32[2]);
        v42 = sub_1C96DA0(a1, v41, v18, v19, v20, a3, a4, a5);
        sub_1AF3B30(*(__int64 **)(*a1 + 760));
        v21 = v42;
        if ( v42 )
        {
          v22 = (unsigned int)v50;
          v23 = (unsigned int)v50 + 1LL;
          if ( v23 > HIDWORD(v50) )
          {
            sub_2237220(&ptr, v51, v23, 8);
            v22 = (unsigned int)v50;
            v21 = v42;
          }
          *((_QWORD *)ptr + v22) = v21;
          LODWORD(v50) = v50 + 1;
        }
        ++v16;
      }
      while ( (__m128i **)v17 != v16 );
    }
    else
    {
      sub_2237220(&ptr, v51, *v14, 8);
      if ( v16 != (__m128i **)v17 )
        goto LABEL_10;
    }
LABEL_14:
    v14 = *(unsigned int **)(a2 + 24);
    if ( !v14 )
      goto LABEL_16;
    goto LABEL_15;
  }
  v15 = 0;
  v26 = 0;
  v27 = ptr;
LABEL_28:
  v45.m128i_i64[0] = 0;
  v36 = *(_DWORD *)(a2 + 16);
  v45.m128i_i32[2] = 0;
  v37 = *(_DWORD *)(a2 + 12);
  a3 = (__m128)_mm_load_si128(&v45);
  v38 = *a1;
  v46 = 0;
  v48 = 0;
  v39 = *(unsigned int *)(a2 + 8);
  v47 = a3;
  v40 = sub_1AF4010(*(_QWORD *)(v38 + 760), v39, (__int64)&v47, v27, v15, v26 & 0xFFFFFFFFFFFFFFFELL, v37, v36);
  v27 = ptr;
  v26 = v40;
  v28 = v40 & 0xFFFFFFFFFFFFFFFELL;
LABEL_19:
  if ( v27 != v51 )
    free(v27);
  sub_1B335B0(*(__int64 **)(*a1 + 760), v28, a3, *(double *)a4.m128_u64);
  return v26;
}
