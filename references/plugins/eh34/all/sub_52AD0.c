__int64 __fastcall sub_52AD0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        const __m128i *a4,
        _QWORD *a5,
        double a6,
        double a7,
        double a8)
{
  char **v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rax
  double **v16; // rax
  __int64 v17; // r13
  double *v18; // r15
  _QWORD *v19; // rax
  _QWORD *v20; // r9
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned __int64 v23; // rax
  __m128i v24; // xmm0
  _QWORD *v26; // [rsp+0h] [rbp-98h]
  int v27; // [rsp+Ch] [rbp-8Ch]
  unsigned __int64 v28; // [rsp+18h] [rbp-80h] BYREF
  __int64 v29; // [rsp+20h] [rbp-78h] BYREF
  __int128 v30; // [rsp+28h] [rbp-70h]
  __m128 v31; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v32; // [rsp+58h] [rbp-40h]

  v28 = a3;
  v32 = __readfsqword(0x28u);
  v11 = sub_52840((char **)(a2 + 472), &v28);
  v31 = (__m128)_mm_loadu_si128(a4);
  rangeset_t_add(v11, &v31);
  v12 = sub_51B30(a5, v28);
  if ( v12 )
  {
    v13 = v12 + 2;
    v29 = 0;
    v30 = 0;
    v29 = qvector_reserve(&v29, 0, 1, 8);
    *(_QWORD *)(v29 + 8 * v30) = v13;
    v14 = v29;
    *(_QWORD *)&v30 = v30 + 1;
    if ( (_QWORD)v30 )
    {
      v27 = 0;
      v15 = 0;
      while ( 1 )
      {
        v16 = *(double ***)(v14 + 8 * v15);
        v17 = (__int64)&(*v16)[3 * (_QWORD)v16[1]];
        if ( (double *)v17 != *v16 )
          break;
LABEL_13:
        v15 = ++v27;
        if ( v27 >= (unsigned __int64)v30 )
          goto LABEL_14;
      }
      v18 = *v16;
      while ( !rangeset_t_find_range(v11) )
      {
        v31 = _mm_loadh_ps(v18 + 1);
        rangeset_t_add(v11, &v31);
        v19 = sub_51B30(a5, *(_QWORD *)v18);
        if ( v19 )
        {
          v20 = v19 + 2;
          v21 = v30;
          v31.m128_u64[0] = (unsigned __int64)v20;
          v22 = v29;
          if ( *((_QWORD *)&v30 + 1) < (unsigned __int64)(v30 + 1) )
          {
            v26 = v20;
            v29 = qvector_reserve(&v29, v29, v30 + 1, 8);
            v22 = v29;
            v20 = v26;
            v21 = v30;
          }
          *(_QWORD *)(v22 + 8 * v21) = v20;
          *(_QWORD *)&v30 = v30 + 1;
        }
        v18 += 3;
        if ( (double *)v17 == v18 )
        {
          v14 = v29;
          goto LABEL_13;
        }
      }
      sub_19A90((__int64)&v31, (__int64)"precompute_address_ranges: %a already exists in range [%a,%a)", *v18, a7, a8);
      v23 = v31.m128_u64[0];
      v24 = _mm_loadu_si128((const __m128i *)&v31.m128_u16[4]);
      *(_BYTE *)(a1 + 24) = 1;
      v14 = v29;
      *(_QWORD *)a1 = v23;
      *(__m128i *)(a1 + 8) = v24;
    }
    else
    {
LABEL_14:
      *(_BYTE *)(a1 + 24) = 0;
    }
    if ( v14 )
    {
      *(_QWORD *)&v30 = 0;
      qfree(v14);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 0;
  }
  return a1;
}
