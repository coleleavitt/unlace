/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4455A0
// Address: 0x00000000004455A0

//----- (00000000004455A0) ----------------------------------------------------
__int64 __fastcall sub_4455A0(
        _QWORD *a1,
        __m128i **a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rax
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 v14; // rbp
  unsigned __int8 *v15; // rax
  double v16; // xmm4_8
  double v17; // xmm5_8
  unsigned __int8 *v18; // rbx
  unsigned int v19; // ebx
  __int64 v21; // rax
  __int64 v22; // r13
  __m128i *v23; // r14
  __int64 v24; // rax
  __int64 v25; // r12
  void *v26; // rsi
  __int64 v27; // rax
  char *v28; // rsi
  char *v29; // rdi
  double v30; // xmm4_8
  double v31; // xmm5_8
  const char *v32; // rbp
  size_t v33; // r13
  __int64 v34; // rax
  char *v35; // rsi
  char *v36; // rdi
  double v37; // xmm4_8
  double v38; // xmm5_8
  double v39; // xmm4_8
  double v40; // xmm5_8
  double v41; // xmm4_8
  double v42; // xmm5_8
  char *v43; // rax
  void *v44; // rax
  char *v45; // rax
  void *ptr; // [rsp+8h] [rbp-A8h] BYREF
  int v47[4]; // [rsp+10h] [rbp-A0h]
  __m128i v48; // [rsp+28h] [rbp-88h] BYREF
  int v49[4]; // [rsp+38h] [rbp-78h]
  __m128i v50; // [rsp+48h] [rbp-68h] BYREF
  __int128 v51; // [rsp+58h] [rbp-58h]
  unsigned __int64 v52; // [rsp+70h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  *(_OWORD *)v47 = 0;
  ptr = nullptr;
  v11 = sub_443440((__int64)a1, (__int64)&ptr, 0.0, a4, a5, a6, a7, a8, a9, a10);
  v14 = v11;
  if ( v11 )
  {
    v15 = (unsigned __int8 *)sub_43D6F0(v11, (__int64)&ptr);
    if ( v15 == (unsigned __int8 *)(v14 + 8) )
    {
      v19 = sub_4448B0(a1, v14, (const char **)&ptr, a2, 0.0, a4, a5, a6, v16, v17, a9, a10);
    }
    else
    {
      v18 = v15 + 56;
      sub_4418C0((unsigned __int8 *)*a2, v15 + 56, 0.0, a4, a5, a6, v16, v17, a9, a10);
      *a2 = (__m128i *)v18;
      v19 = 1;
    }
  }
  else
  {
    v21 = a1[3] + 32LL * a1[4] - 32;
    if ( *(_BYTE *)v21 == 2 && SLODWORD(qword_4C5728[2]) > 0 )
    {
      v22 = *(_QWORD *)(v21 + 8);
      v23 = *a2;
      *a2 = nullptr;
      v24 = a1[10];
      v25 = a1[4];
      v26 = (void *)a1[9];
      if ( a1[11] < (unsigned __int64)(v24 + 1) )
      {
        v44 = sub_481540((__int64)(a1 + 9), v26, v24 + 1, 4u);
        a1[9] = v44;
        v26 = v44;
        v24 = a1[10];
      }
      *((_DWORD *)v26 + v24) = v25;
      v27 = a1[4];
      ++a1[10];
      v28 = (char *)a1[3];
      v48.m128i_i8[0] = 2;
      v48.m128i_i64[1] = v22;
      *(_OWORD *)v49 = 0;
      if ( a1[5] < (unsigned __int64)(v27 + 1) )
      {
        v43 = (char *)sub_481540((__int64)(a1 + 3), v28, v27 + 1, 0x20u);
        a1[3] = v43;
        v28 = v43;
        v27 = a1[4];
      }
      v29 = &v28[32 * v27];
      *v29 = 2;
      *((_QWORD *)v29 + 3) = 0;
      *(_OWORD *)(v29 + 8) = 0;
      ++a1[4];
      sub_442230((__m128i *)v29, &v48, 0.0, a4, a5, a6, v12, v13, a9, a10);
      v32 = s1;
      if ( *(_QWORD *)v47 )
        v32 = (const char *)ptr;
      v50 = (__m128i)7uLL;
      v51 = 0;
      if ( v32 )
      {
        v33 = strlen(v32);
        v50.m128i_i64[1] = (__int64)sub_481540((__int64)&v50.m128i_i64[1], nullptr, v33 + 1, 1u);
        *(_QWORD *)&v51 = v33 + 1;
        memmove((void *)v50.m128i_i64[1], v32, v33);
        *(_BYTE *)(v50.m128i_i64[1] + v33) = 0;
      }
      v34 = a1[4];
      v35 = (char *)a1[3];
      if ( a1[5] < (unsigned __int64)(v34 + 1) )
      {
        v45 = (char *)sub_481540((__int64)(a1 + 3), v35, v34 + 1, 0x20u);
        a1[3] = v45;
        v35 = v45;
        v34 = a1[4];
      }
      v36 = &v35[32 * v34];
      *v36 = 2;
      *((_QWORD *)v36 + 3) = 0;
      *(_OWORD *)(v36 + 8) = 0;
      ++a1[4];
      sub_442230((__m128i *)v36, &v50, 0.0, a4, a5, a6, v30, v31, a9, a10);
      v19 = sub_4411E0(a1, v23, nullptr, -LODWORD(qword_4C5728[2]), 0.0, a4, a5, a6, v37, v38, a9, a10);
      sub_441540((__int64)&v50, 0.0, a4, a5, a6, v39, v40, a9, a10);
      sub_441540((__int64)&v48, 0.0, a4, a5, a6, v41, v42, a9, a10);
    }
    else
    {
      sub_4446F0(a1, 0.0, a4, a5, a6, v12, v13, a9, a10);
      v19 = 0;
    }
  }
  if ( ptr )
  {
    *(_QWORD *)v47 = 0;
    j__free(ptr);
  }
  return v19;
}
// 44560F: variable 'v16' is possibly undefined
// 44560F: variable 'v17' is possibly undefined
// 44572C: variable 'v12' is possibly undefined
// 44572C: variable 'v13' is possibly undefined
// 4457EF: variable 'v30' is possibly undefined
// 4457EF: variable 'v31' is possibly undefined
// 445808: variable 'v37' is possibly undefined
// 445808: variable 'v38' is possibly undefined
// 445812: variable 'v39' is possibly undefined
// 445812: variable 'v40' is possibly undefined
// 44581A: variable 'v41' is possibly undefined
// 44581A: variable 'v42' is possibly undefined
// 4C5728: using guessed type __int64 qword_4C5728[3];
