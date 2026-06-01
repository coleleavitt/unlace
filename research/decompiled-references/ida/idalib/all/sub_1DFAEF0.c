__int64 __fastcall sub_1DFAEF0(
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
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // r14
  _BYTE *v28; // rdi
  unsigned __int64 v29; // r12
  __int64 v31; // r14
  __int64 v32; // r8
  __int64 v33; // r9
  double v34; // xmm4_8
  double v35; // xmm5_8
  unsigned __int64 v36; // r15
  int v37; // r8d
  int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // rsi
  unsigned __int64 v41; // rax
  __m128i *v42; // [rsp+0h] [rbp-138h]
  unsigned __int64 v43; // [rsp+0h] [rbp-138h]
  __m128i v44; // [rsp+10h] [rbp-128h] BYREF
  __int64 v45; // [rsp+20h] [rbp-118h]
  __m128i v46; // [rsp+30h] [rbp-108h] BYREF
  __int64 v47; // [rsp+40h] [rbp-F8h]
  __m128 v48; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v49; // [rsp+60h] [rbp-D8h]
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+78h] [rbp-C0h]
  _BYTE v52[184]; // [rsp+80h] [rbp-B8h] BYREF

  v11 = *a1;
  v12 = *(_DWORD *)(a2 + 12);
  v44.m128i_i64[0] = 0;
  v13 = *(__int64 **)(v11 + 760);
  v44.m128i_i32[2] = 0;
  v45 = 0;
  sub_1B5B570(v13, 2, &v44, 0, v12);
  v51 = 0x1000000000LL;
  v14 = *(unsigned int **)(a2 + 24);
  ptr = v52;
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
          v31 = *a1;
          sub_1C36400(*a1, 0);
          v36 = sub_1DF6720(
                  a1,
                  *(_WORD **)(*(_QWORD *)(a2 + 24)
                            + 8
                            * (*(unsigned int *)(*(_QWORD *)(a2 + 24) + 4LL)
                             + (unsigned __int64)**(unsigned int **)(a2 + 24))
                            + 16),
                  nullptr,
                  a3,
                  a4,
                  a5,
                  a6,
                  v34,
                  v35,
                  a9,
                  a10,
                  *(unsigned int *)(*(_QWORD *)(a2 + 24) + 4LL),
                  v32,
                  v33);
          sub_1C36470(v31);
          v27 = sub_1B14300(*(__int64 **)(*a1 + 760), v36, (__int64 *)ptr, (unsigned int)v51, a3, a4);
          if ( v27 == 1 )
          {
            v28 = ptr;
            v29 = 0;
            goto LABEL_19;
          }
          goto LABEL_17;
        }
LABEL_16:
        v27 = 0;
LABEL_17:
        v28 = ptr;
        if ( v15 != (unsigned int)v51 )
        {
          v29 = 0;
          v27 = 1;
          goto LABEL_19;
        }
        goto LABEL_28;
      }
      do
      {
LABEL_10:
        while ( !*v16 )
        {
          v25 = (unsigned int)v51;
          v26 = (unsigned int)v51 + 1LL;
          if ( v26 > HIDWORD(v51) )
          {
            sub_2237220(&ptr, v52, v26, 8);
            v25 = (unsigned int)v51;
          }
          ++v16;
          *((_QWORD *)ptr + v25) = 0;
          LODWORD(v51) = v51 + 1;
          if ( (__m128i **)v17 == v16 )
            goto LABEL_14;
        }
        v42 = *v16;
        sub_1AF3B20(*(_QWORD *)(*a1 + 760), (*v16)->m128i_i32[2]);
        v43 = sub_1DF2370(a1, v42, v18, v19, v20, v21, a3, a4, a5);
        sub_1AF3B30(*(__int64 **)(*a1 + 760));
        v22 = v43;
        if ( v43 )
        {
          v23 = (unsigned int)v51;
          v24 = (unsigned int)v51 + 1LL;
          if ( v24 > HIDWORD(v51) )
          {
            sub_2237220(&ptr, v52, v24, 8);
            v23 = (unsigned int)v51;
            v22 = v43;
          }
          *((_QWORD *)ptr + v23) = v22;
          LODWORD(v51) = v51 + 1;
        }
        ++v16;
      }
      while ( (__m128i **)v17 != v16 );
    }
    else
    {
      sub_2237220(&ptr, v52, *v14, 8);
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
  v27 = 0;
  v28 = ptr;
LABEL_28:
  v46.m128i_i64[0] = 0;
  v37 = *(_DWORD *)(a2 + 16);
  v46.m128i_i32[2] = 0;
  v38 = *(_DWORD *)(a2 + 12);
  a3 = (__m128)_mm_load_si128(&v46);
  v39 = *a1;
  v47 = 0;
  v49 = 0;
  v40 = *(unsigned int *)(a2 + 8);
  v48 = a3;
  v41 = sub_1AF4010(*(_QWORD *)(v39 + 760), v40, (__int64)&v48, v28, v15, v27 & 0xFFFFFFFFFFFFFFFELL, v38, v37);
  v28 = ptr;
  v27 = v41;
  v29 = v41 & 0xFFFFFFFFFFFFFFFELL;
LABEL_19:
  if ( v28 != v52 )
    free(v28);
  sub_1B335B0(*(__int64 **)(*a1 + 760), v29, a3, *(double *)a4.m128_u64);
  return v27;
}
