__int64 __fastcall sub_3252D0(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  char v8; // bp
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  int v13; // r9d
  _QWORD *v14; // rbx
  __int64 v15; // rbx
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r12
  __int16 v18; // bp
  const char *v19; // rsi
  __int64 v20; // rdi
  double v21; // xmm4_8
  double v22; // xmm5_8
  const char *v24; // rsi
  __int64 v25; // r14
  __int64 v26; // r14
  double v27; // xmm4_8
  double v28; // xmm5_8
  __int16 v29; // [rsp+6h] [rbp-62h] BYREF
  __int64 v30; // [rsp+8h] [rbp-60h] BYREF
  const char *v31; // [rsp+10h] [rbp-58h] BYREF
  __int64 v32; // [rsp+18h] [rbp-50h] BYREF
  const char *v33; // [rsp+20h] [rbp-48h] BYREF
  __int128 v34; // [rsp+28h] [rbp-40h]
  unsigned __int64 v35; // [rsp+38h] [rbp-30h]

  v35 = __readfsqword(0x28u);
  v29 = 3;
  v8 = sub_1F09E0(0, &v30, &v31);
  if ( v8 )
  {
    v25 = getseg(v30);
    if ( v25 == get_first_seg() )
    {
      v26 = getseg(v31 - 1);
      if ( v26 == get_last_seg() )
      {
        sub_325170(a1, a2, a3, a4, v27, v28, a7, a8);
        return 1;
      }
    }
    v9 = v30;
  }
  else
  {
    v9 = xmmword_8CC810;
    v30 = xmmword_8CC810;
    v31 = (const char *)xmmword_8CC810;
  }
  v10 = (__int64 *)getseg(v9);
  if ( v10 )
    v30 = *v10;
  v11 = getseg(v31);
  if ( v11 )
    v31 = *(const char **)(v11 + 8);
  v12 = (_QWORD *)getseg(v30);
  v14 = v12;
  if ( v12 )
  {
    v32 = *v12;
    if ( !v8 )
    {
      a1 = 0;
      v33 = nullptr;
      v34 = 0;
      get_segm_name(&v33, v12, 0);
      v24 = &s1;
      if ( (_QWORD)v34 )
        v24 = v33;
      if ( !(unsigned int)sub_507F10(
                            1026,
                            (_DWORD)v24,
                            (_DWORD)v14,
                            (int)v14 + 8,
                            (unsigned int)&v32,
                            (unsigned int)&v29) )
      {
        if ( v33 )
        {
          *(_QWORD *)&v34 = 0;
          qfree(v33, v24);
        }
        return 1;
      }
      v15 = v32 - *v14;
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        *(double *)a1.m128_u64 = qfree(v33, v24);
      }
      goto LABEL_11;
    }
    if ( (unsigned int)sub_507F10(
                         1027,
                         (unsigned int)&v30,
                         (unsigned int)&v31,
                         (unsigned int)&v32,
                         (unsigned int)&v29,
                         v13) )
    {
      v15 = v32 - *v14;
LABEL_11:
      v16 = (unsigned __int64)v31;
      v17 = v30;
      v18 = v29;
      v19 = v31;
      v20 = v30;
      if ( sub_323E80(v30, (__int64)v31, v15) )
      {
        v19 = (const char *)v16;
        v20 = v17;
        sub_323CD0(v17, v16, v15, v18, a1, a2, a3, a4, v21, v22, a7, a8);
      }
      sub_1FDB10(*(double *)a1.m128_u64, a2, a3, a4, v21, v22, a7, a8, v20, v19);
    }
    return 1;
  }
  return 0;
}
