__int64 __fastcall sub_1D5FB30(__int64 *a1, __int64 a2, __m128 a3, __m128 a4, __m128i a5)
{
  __int64 v6; // rax
  int v7; // r8d
  __int64 *v8; // rdi
  unsigned int *v9; // rax
  unsigned __int64 v10; // r13
  unsigned __int64 *v11; // r15
  __int64 v12; // r14
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // r14
  _BYTE *v22; // rdi
  unsigned __int64 v23; // r12
  __int64 v25; // r14
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // r15
  int v29; // r8d
  int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rsi
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // [rsp+0h] [rbp-138h]
  unsigned __int64 v35; // [rsp+0h] [rbp-138h]
  __m128i v36; // [rsp+10h] [rbp-128h] BYREF
  __int64 v37; // [rsp+20h] [rbp-118h]
  __m128i v38; // [rsp+30h] [rbp-108h] BYREF
  __int64 v39; // [rsp+40h] [rbp-F8h]
  __m128 v40; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v41; // [rsp+60h] [rbp-D8h]
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+78h] [rbp-C0h]
  _BYTE v44[184]; // [rsp+80h] [rbp-B8h] BYREF

  v6 = *a1;
  v7 = *(_DWORD *)(a2 + 12);
  v36.m128i_i64[0] = 0;
  v8 = *(__int64 **)(v6 + 760);
  v36.m128i_i32[2] = 0;
  v37 = 0;
  sub_1B5B570(v8, 2, &v36, 0, v7);
  v43 = 0x1000000000LL;
  v9 = *(unsigned int **)(a2 + 24);
  ptr = v44;
  if ( v9 )
  {
    v10 = *v9;
    v11 = (unsigned __int64 *)(v9 + 4);
    v12 = (__int64)&v9[2 * v10 + 4];
    if ( v10 <= 0x10 )
    {
      if ( v11 == (unsigned __int64 *)v12 )
      {
LABEL_15:
        if ( *((_BYTE *)v9 + 8) && *(_QWORD *)&v9[2 * v9[1] + 4 + 2 * (unsigned __int64)*v9] )
        {
          sub_1AF3B60(*(__int64 **)(*a1 + 760), *(_DWORD *)(a2 + 8), 0);
          v25 = *a1;
          sub_1C36400(*a1, 0);
          v28 = sub_1D42130(
                  a1,
                  *(_WORD **)(*(_QWORD *)(a2 + 24)
                            + 8
                            * (*(unsigned int *)(*(_QWORD *)(a2 + 24) + 4LL)
                             + (unsigned __int64)**(unsigned int **)(a2 + 24))
                            + 16),
                  0,
                  a3,
                  a4,
                  *(unsigned int *)(*(_QWORD *)(a2 + 24) + 4LL),
                  v26,
                  v27);
          sub_1C36470(v25);
          v21 = sub_1B14300(*(__int64 **)(*a1 + 760), v28, (__int64 *)ptr, (unsigned int)v43, a3, a4);
          if ( v21 == 1 )
          {
            v22 = ptr;
            v23 = 0;
            goto LABEL_19;
          }
          goto LABEL_17;
        }
LABEL_16:
        v21 = 0;
LABEL_17:
        v22 = ptr;
        if ( v10 != (unsigned int)v43 )
        {
          v23 = 0;
          v21 = 1;
          goto LABEL_19;
        }
        goto LABEL_28;
      }
      do
      {
LABEL_10:
        while ( !*v11 )
        {
          v19 = (unsigned int)v43;
          v20 = (unsigned int)v43 + 1LL;
          if ( v20 > HIDWORD(v43) )
          {
            sub_2237220(&ptr, v44, v20, 8);
            v19 = (unsigned int)v43;
          }
          ++v11;
          *((_QWORD *)ptr + v19) = 0;
          LODWORD(v43) = v43 + 1;
          if ( (unsigned __int64 *)v12 == v11 )
            goto LABEL_14;
        }
        v34 = *v11;
        sub_1AF3B20(*(_QWORD *)(*a1 + 760), *(_DWORD *)(*v11 + 8));
        v35 = sub_1D5D320(a1, v34, v13, v14, v15, a3, a4, a5);
        sub_1AF3B30(*(__int64 **)(*a1 + 760));
        v16 = v35;
        if ( v35 )
        {
          v17 = (unsigned int)v43;
          v18 = (unsigned int)v43 + 1LL;
          if ( v18 > HIDWORD(v43) )
          {
            sub_2237220(&ptr, v44, v18, 8);
            v17 = (unsigned int)v43;
            v16 = v35;
          }
          *((_QWORD *)ptr + v17) = v16;
          LODWORD(v43) = v43 + 1;
        }
        ++v11;
      }
      while ( (unsigned __int64 *)v12 != v11 );
    }
    else
    {
      sub_2237220(&ptr, v44, *v9, 8);
      if ( v11 != (unsigned __int64 *)v12 )
        goto LABEL_10;
    }
LABEL_14:
    v9 = *(unsigned int **)(a2 + 24);
    if ( !v9 )
      goto LABEL_16;
    goto LABEL_15;
  }
  v10 = 0;
  v21 = 0;
  v22 = ptr;
LABEL_28:
  v38.m128i_i64[0] = 0;
  v29 = *(_DWORD *)(a2 + 16);
  v38.m128i_i32[2] = 0;
  v30 = *(_DWORD *)(a2 + 12);
  a3 = (__m128)_mm_load_si128(&v38);
  v31 = *a1;
  v39 = 0;
  v41 = 0;
  v32 = *(unsigned int *)(a2 + 8);
  v40 = a3;
  v33 = sub_1AF4010(*(_QWORD *)(v31 + 760), v32, (__int64)&v40, v22, v10, v21 & 0xFFFFFFFFFFFFFFFELL, v30, v29);
  v22 = ptr;
  v21 = v33;
  v23 = v33 & 0xFFFFFFFFFFFFFFFELL;
LABEL_19:
  if ( v22 != v44 )
    free(v22);
  sub_1B335B0(*(__int64 **)(*a1 + 760), v23, a3, *(double *)a4.m128_u64);
  return v21;
}
