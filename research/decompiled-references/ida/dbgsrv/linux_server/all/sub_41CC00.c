/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41CC00
// Address: 0x000000000041CC00

//----- (000000000041CC00) ----------------------------------------------------
unsigned __int64 __fastcall sub_41CC00(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  const td_thragent_t *v11; // rdi
  td_err_e v12; // eax
  double v13; // xmm4_8
  double v14; // xmm5_8
  double v15; // xmm4_8
  double v16; // xmm5_8
  int v17; // r12d
  __int64 i; // rax
  __int64 v19; // rbx
  double v20; // xmm4_8
  double v21; // xmm5_8
  void *v22; // rdi
  const char *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  _QWORD cbdata_p[2]; // [rsp+0h] [rbp-50h] BYREF
  void *ptr; // [rsp+10h] [rbp-40h] BYREF
  __int128 v32; // [rsp+18h] [rbp-38h]
  unsigned __int64 v33; // [rsp+28h] [rbp-28h]

  v33 = __readfsqword(0x28u);
  v11 = *(const td_thragent_t **)(a1 + 952);
  if ( v11 )
  {
    cbdata_p[0] = a1;
    cbdata_p[1] = &ptr;
    ptr = nullptr;
    v32 = 0;
    v12 = td_ta_thr_iter(v11, (td_thr_iter_f *)callback, cbdata_p, TD_THR_ANY_STATE, -20, nullptr, 0xFFFFFFFF);
    if ( v12 )
    {
      v24 = sub_40D5E0(v12);
      sub_410EA0(
        (int)"%s: %s\n",
        (__int64)"td_ta_thr_iter",
        (__int64)v24,
        v25,
        v26,
        v27,
        (__m128)0LL,
        a3,
        a4,
        a5,
        v28,
        v29,
        a8,
        a9,
        cbdata_p[0]);
      v22 = ptr;
      if ( !ptr )
        return v33 - __readfsqword(0x28u);
      goto LABEL_7;
    }
    if ( (_QWORD)v32 )
    {
      sub_41B7C0(a1, *((unsigned int *)ptr + 26), *((_QWORD *)ptr + 4), (__m128)0LL, a3, a4, a5, v13, v14, a8, a9);
      v17 = 1;
      for ( i = 1; v17 < (unsigned __int64)v32; i = ++v17 )
      {
        v19 = 384 * i;
        sub_41C660(a1, *((_DWORD *)ptr + 96 * i + 26), 0, 0.0, a3, a4, a5, v15, v16, a8, a9);
        sub_41B7C0(
          a1,
          *(unsigned int *)((char *)ptr + v19 + 104),
          *(_QWORD *)((char *)ptr + v19 + 32),
          (__m128)0LL,
          a3,
          a4,
          a5,
          v20,
          v21,
          a8,
          a9);
      }
    }
    v22 = ptr;
    if ( ptr )
    {
LABEL_7:
      *(_QWORD *)&v32 = 0;
      j__free(v22);
    }
  }
  return v33 - __readfsqword(0x28u);
}
// 41CC8F: variable 'v13' is possibly undefined
// 41CC8F: variable 'v14' is possibly undefined
// 41CCB9: variable 'v15' is possibly undefined
// 41CCB9: variable 'v16' is possibly undefined
// 41CCCF: variable 'v20' is possibly undefined
// 41CCCF: variable 'v21' is possibly undefined
// 41CD3A: variable 'v25' is possibly undefined
// 41CD3A: variable 'v26' is possibly undefined
// 41CD3A: variable 'v27' is possibly undefined
// 41CD3A: variable 'v28' is possibly undefined
// 41CD3A: variable 'v29' is possibly undefined
