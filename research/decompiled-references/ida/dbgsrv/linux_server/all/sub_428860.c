/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428860
// Address: 0x0000000000428860

//----- (0000000000428860) ----------------------------------------------------
__int64 __fastcall sub_428860(__int64 a1, __m128i **a2, __int64 *a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // r13
  __int64 v6; // r14
  __int64 v9; // rdi
  __int64 v10; // r8
  unsigned int v11; // edx
  unsigned int v12; // eax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r15
  __m128i *v24; // rdx
  __m128i *v25; // rsi
  char *v26; // rbx
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __m128i *v29; // rax
  char *v30; // rsi
  __m128i v31; // [rsp+8h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v32)(); // [rsp+18h] [rbp-B0h]
  unsigned __int64 v33; // [rsp+28h] [rbp-A0h] BYREF
  __int64 (__fastcall **v34)(); // [rsp+30h] [rbp-98h] BYREF
  __int64 v35; // [rsp+38h] [rbp-90h]
  __m128i v36; // [rsp+40h] [rbp-88h]
  unsigned __int64 v37; // [rsp+50h] [rbp-78h]
  void *ptr; // [rsp+58h] [rbp-70h] BYREF
  __int128 v39; // [rsp+60h] [rbp-68h]
  unsigned __int64 v40; // [rsp+70h] [rbp-58h]
  __int64 v41; // [rsp+78h] [rbp-50h]
  unsigned __int64 v42; // [rsp+88h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v3 = a3[2];
  if ( !v3 )
    return 0;
  v5 = *(int *)(a1 + 400);
  v6 = *a3;
  v9 = *(_QWORD *)(a1 + 472);
  v10 = *a3;
  if ( !v5 )
    v5 = 1;
  v33 = v3 / v5;
  sub_428780(v9, &v33, v5, (__int64)"Dynamic info size", v10, -1);
  if ( !v33 )
    return 0;
  v11 = 0;
  v12 = 0;
  v34 = &off_4C2300;
  v35 = a1;
  v37 = v5;
  ptr = nullptr;
  v40 = 0;
  v41 = 0;
  v32 = &v34;
  v36 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)v33);
  v39 = 0;
  while ( 1 )
  {
    if ( v12 < v11 )
      goto LABEL_25;
    v13 = v40;
    v14 = v36.m128i_i64[1] - v40;
    if ( v36.m128i_i64[1] == v40 )
      goto LABEL_9;
    v15 = v39;
    if ( (unsigned __int64)v39 < v14 )
    {
      v30 = (char *)ptr;
      if ( *((_QWORD *)&v39 + 1) < v14 )
      {
        ptr = sub_481540((__int64)&ptr, ptr, v36.m128i_i64[1] - v40, 0x10u);
        v15 = v39;
        v30 = (char *)ptr;
      }
      memset(&v30[16 * v15], 0, 16 * (v14 - v15));
      *(_QWORD *)&v39 = v14;
      v13 = v40;
    }
    else if ( v14 != (_QWORD)v39 )
    {
      *(_QWORD *)&v39 = v36.m128i_i64[1] - v40;
    }
    LODWORD(v41) = 0;
    if ( v37 && (v13 && !is_mul_ok(v37, v13) || !is_mul_ok(v14, v37)) )
      goto LABEL_30;
    v16 = v35;
    v17 = sub_47F740(*(_QWORD *)(v35 + 472), 0, 1);
    v18 = *(_QWORD *)(v16 + 480);
    v19 = *(_QWORD *)(v16 + 472);
    v31.m128i_i64[0] = v17 - v18;
    if ( sub_47F740(v19, v18 + v36.m128i_i64[0] + v37 * v40, 0) == -1 )
      break;
    v23 = 0;
    while ( sub_427740((__int64)&v34, (_BYTE *)ptr + 16 * v23, v20, v21, v22) )
    {
      if ( v14 == ++v23 )
        goto LABEL_23;
    }
    LODWORD(v14) = v23;
LABEL_23:
    sub_47F740(*(_QWORD *)(v16 + 472), *(_QWORD *)(v16 + 480) + v31.m128i_i64[0], 0);
    HIDWORD(v41) = v14;
    if ( !(_DWORD)v14 )
      goto LABEL_9;
    v40 += (unsigned int)v14;
    v12 = v41;
    if ( (unsigned int)v41 >= (unsigned int)v14 )
      goto LABEL_9;
LABEL_25:
    v24 = a2[1];
    v25 = *a2;
    v26 = (char *)ptr + 16 * v12;
    LODWORD(v41) = v12 + 1;
    v27 = _mm_loadl_epi64((const __m128i *)v26);
    v28 = _mm_loadl_epi64((const __m128i *)(v26 + 8));
    if ( a2[2] < (__m128i *)&v24->m128i_i8[1] )
    {
      v31.m128i_i64[1] = v28.m128i_i64[0];
      v31.m128i_i64[0] = v27.m128i_i64[0];
      v29 = (__m128i *)sub_481540((__int64)a2, v25, (unsigned __int64)v24->m128i_u64 + 1, 0x10u);
      *a2 = v29;
      v24 = a2[1];
      v25 = v29;
      v28 = _mm_loadl_epi64((const __m128i *)&v31.m128i_u64[1]);
      v27 = _mm_loadl_epi64(&v31);
    }
    v25[(_QWORD)v24] = _mm_unpacklo_epi64(v27, v28);
    a2[1] = (__m128i *)((char *)a2[1] + 1);
    if ( !*(_QWORD *)v26 )
      goto LABEL_9;
    v12 = v41;
    v11 = HIDWORD(v41);
  }
  sub_47F740(*(_QWORD *)(v16 + 472), *(_QWORD *)(v16 + 480) + v31.m128i_i64[0], 0);
LABEL_30:
  HIDWORD(v41) = 0;
LABEL_9:
  v34 = &off_4C2300;
  if ( ptr )
  {
    *(_QWORD *)&v39 = 0;
    j__free(ptr);
  }
  return 1;
}
// 428C13: conditional instruction was optimized away because %var_78.8!=0
// 428A7F: variable 'v20' is possibly undefined
// 428A7F: variable 'v21' is possibly undefined
// 428A7F: variable 'v22' is possibly undefined
// 4C2300: using guessed type __int64 (__fastcall *off_4C2300)();
