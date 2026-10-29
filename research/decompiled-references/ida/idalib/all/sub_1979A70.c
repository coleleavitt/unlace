__int64 __fastcall sub_1979A70(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdi
  unsigned int *v8; // rax
  unsigned __int64 v9; // r13
  __m128i **v10; // r15
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // r14
  _BYTE *v18; // rdi
  unsigned __int64 v19; // r12
  __int64 v21; // r14
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r15
  int v25; // r8d
  int v26; // ecx
  __m128i v27; // xmm0
  __int64 v28; // rax
  int v29; // esi
  __int64 v30; // rax
  __m128i *v31; // [rsp+0h] [rbp-138h]
  __int64 v32; // [rsp+0h] [rbp-138h]
  __int64 v33; // [rsp+10h] [rbp-128h] BYREF
  int v34; // [rsp+18h] [rbp-120h]
  __int64 v35; // [rsp+20h] [rbp-118h]
  __m128i v36; // [rsp+30h] [rbp-108h] BYREF
  __int64 v37; // [rsp+40h] [rbp-F8h]
  __m128i v38; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-D8h]
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+78h] [rbp-C0h]
  _BYTE v42[184]; // [rsp+80h] [rbp-B8h] BYREF

  v5 = *a1;
  v6 = *(unsigned int *)(a2 + 12);
  v33 = 0;
  v7 = *(_QWORD *)(v5 + 760);
  v34 = 0;
  v35 = 0;
  sub_1B5B570(v7, 2, &v33, 0, v6);
  v41 = 0x1000000000LL;
  v8 = *(unsigned int **)(a2 + 24);
  ptr = v42;
  if ( v8 )
  {
    v9 = *v8;
    v10 = (__m128i **)(v8 + 4);
    v11 = (__int64)&v8[2 * v9 + 4];
    if ( v9 <= 0x10 )
    {
      if ( v10 == (__m128i **)v11 )
      {
LABEL_15:
        if ( *((_BYTE *)v8 + 8) && *(_QWORD *)&v8[2 * v8[1] + 4 + 2 * (unsigned __int64)*v8] )
        {
          sub_1AF3B60(*(_QWORD *)(*a1 + 760), *(unsigned int *)(a2 + 8), 0);
          v21 = *a1;
          sub_1C36400(*a1, 0);
          v24 = sub_1975200(
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
                  v22,
                  v23);
          sub_1C36470(v21);
          v17 = sub_1B14300(*(_QWORD *)(*a1 + 760), v24, ptr, (unsigned int)v41);
          if ( v17 == 1 )
          {
            v18 = ptr;
            v19 = 0;
            goto LABEL_19;
          }
          goto LABEL_17;
        }
LABEL_16:
        LODWORD(v17) = 0;
LABEL_17:
        v18 = ptr;
        if ( v9 != (unsigned int)v41 )
        {
          v19 = 0;
          v17 = 1;
          goto LABEL_19;
        }
        goto LABEL_28;
      }
      do
      {
LABEL_10:
        while ( !*v10 )
        {
          v15 = (unsigned int)v41;
          v16 = (unsigned int)v41 + 1LL;
          if ( v16 > HIDWORD(v41) )
          {
            sub_2237220(&ptr, v42, v16, 8);
            v15 = (unsigned int)v41;
          }
          ++v10;
          *((_QWORD *)ptr + v15) = 0;
          LODWORD(v41) = v41 + 1;
          if ( (__m128i **)v11 == v10 )
            goto LABEL_14;
        }
        v31 = *v10;
        sub_1AF3B20(*(_QWORD *)(*a1 + 760), (*v10)->m128i_u32[2]);
        v32 = sub_1974620(a1, v31, *(double *)a3.m128_u64, a4);
        sub_1AF3B30(*(_QWORD *)(*a1 + 760));
        v12 = v32;
        if ( v32 )
        {
          v13 = (unsigned int)v41;
          v14 = (unsigned int)v41 + 1LL;
          if ( v14 > HIDWORD(v41) )
          {
            sub_2237220(&ptr, v42, v14, 8);
            v13 = (unsigned int)v41;
            v12 = v32;
          }
          *((_QWORD *)ptr + v13) = v12;
          LODWORD(v41) = v41 + 1;
        }
        ++v10;
      }
      while ( (__m128i **)v11 != v10 );
    }
    else
    {
      sub_2237220(&ptr, v42, *v8, 8);
      if ( v10 != (__m128i **)v11 )
        goto LABEL_10;
    }
LABEL_14:
    v8 = *(unsigned int **)(a2 + 24);
    if ( !v8 )
      goto LABEL_16;
    goto LABEL_15;
  }
  LODWORD(v9) = 0;
  LODWORD(v17) = 0;
  LODWORD(v18) = (_DWORD)ptr;
LABEL_28:
  v36.m128i_i64[0] = 0;
  v25 = *(_DWORD *)(a2 + 16);
  v36.m128i_i32[2] = 0;
  v26 = *(_DWORD *)(a2 + 12);
  v27 = _mm_load_si128(&v36);
  v28 = *a1;
  v37 = 0;
  v39 = 0;
  v29 = *(_DWORD *)(a2 + 8);
  v38 = v27;
  v30 = sub_1AF4010(
          *(_QWORD *)(v28 + 760),
          v29,
          (unsigned int)&v38,
          (_DWORD)v18,
          v9,
          (unsigned int)v17 & 0xFFFFFFFE,
          v26,
          v25);
  v18 = ptr;
  v17 = v30;
  v19 = v30 & 0xFFFFFFFFFFFFFFFELL;
LABEL_19:
  if ( v18 != v42 )
    free(v18);
  sub_1B335B0(*(_QWORD *)(*a1 + 760), v19);
  return v17;
}
