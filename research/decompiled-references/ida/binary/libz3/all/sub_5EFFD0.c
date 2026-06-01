void *__fastcall sub_5EFFD0(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r15
  bool v13; // bp
  char v14; // bp
  __int64 v15; // rbp
  char v16; // bl
  double v18; // r15
  void *v19; // rax
  double v20; // xmm2_8
  __int64 v21; // rsi
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // r13
  __int64 v25; // rdx
  double v26; // xmm4_8
  double v27; // xmm5_8
  __int64 v28; // rax
  int v29; // r9d
  __m128 v30; // xmm0
  unsigned __int64 v31; // r15
  __int64 v32; // rsi
  __int64 *v33; // rbx
  unsigned __int64 v34; // rbp
  __int64 v35; // rsi
  bool v36; // zf
  __int64 *v37; // rbx
  unsigned __int64 v38; // rbp
  __int64 v39; // rsi
  void *v40; // rbx
  __m128i v41; // [rsp+0h] [rbp-98h] BYREF
  void *v42; // [rsp+18h] [rbp-80h]
  __int64 *v43; // [rsp+20h] [rbp-78h]
  __m128i *v44; // [rsp+28h] [rbp-70h]
  __int64 v45; // [rsp+30h] [rbp-68h]
  __int64 v46; // [rsp+38h] [rbp-60h]
  double v47; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v48; // [rsp+48h] [rbp-50h]
  __m128i v49; // [rsp+50h] [rbp-48h] BYREF

  if ( (unsigned __int8)sub_64B400(*(_QWORD *)(a1 + 32)) )
  {
    v10 = *(_QWORD *)(a2 + 24);
    if ( v10 )
    {
      v11 = *(unsigned int *)(v10 - 4);
      v41.m128i_i64[0] = *(_QWORD *)(a1 + 32) + 656LL;
      if ( (_DWORD)v11 )
      {
        v12 = 0;
        while ( 1 )
        {
          v15 = *(_QWORD *)(v10 + 8 * v12);
          v16 = sub_62FDE0(v41.m128i_i64[0]);
          if ( (unsigned __int8)sub_62A4D0(v15) )
            break;
          v13 = (int)v12++ + 1 < (unsigned int)v11;
          v14 = (v16 ^ 1) & v13;
          if ( !v14 )
          {
            if ( !v16 )
              return nullptr;
            v18 = *(double *)(a1 + 24);
            v48 = nullptr;
            v45 = *(_QWORD *)&v18;
            v47 = v18;
            v19 = (void *)sub_186B270(0xF8u);
            v20 = v18;
            v21 = *(_QWORD *)(a1 + 32);
            v42 = v19;
            v41 = _mm_move_epi64((__m128i)*(unsigned __int64 *)&v18);
            sub_63D370(v19, v21);
            v22 = 8 * v11;
            v23 = _mm_load_si128(&v41);
            v24 = 0;
            v46 = v22;
            v44 = &v49;
            v43 = (__int64 *)&v47;
            do
            {
              while ( 1 )
              {
                v28 = *(_QWORD *)(a2 + 24);
                v49 = v23;
                v41.m128i_i64[0] = *(_QWORD *)(v28 + v24);
                sub_5EB5E0(a1, v41.m128i_i64[0], v43, v44->m128i_i64);
                v30 = (__m128)_mm_load_si128(&v49);
                v31 = v49.m128i_u64[1];
                v32 = v41.m128i_i64[0];
                a4 = _mm_movehl_ps(a4, v30);
                v45 = v49.m128i_i64[0];
                if ( !a4.m128_u64[0] || !*(_DWORD *)(a4.m128_u64[0] - 4) )
                  break;
                v41 = (__m128i)v30;
                sub_5EF5C0(a1, v32, (__int64)v43, (__int64)v44, (__int64)v42, v29);
                v23 = _mm_load_si128(&v41);
                v14 = v16;
                v24 += 8;
                if ( v46 == v24 )
                  goto LABEL_16;
              }
              v41 = (__m128i)v30;
              sub_63DAD0(v42, v32, *(double *)v30.m128_u64);
              v23 = _mm_load_si128(&v41);
              v24 += 8;
            }
            while ( v46 != v24 );
LABEL_16:
            if ( v14 )
            {
              sub_63DFA0(v42, a2, v25, *(double *)v23.m128i_i64, *(double *)a4.m128_u64, v20, a6, v26, v27, a9);
            }
            else
            {
              v40 = v42;
              sub_63D960(v42);
              sub_186B220(v40);
              v42 = nullptr;
            }
            if ( v31 )
            {
              v33 = (__int64 *)v31;
              v34 = v31 + 8LL * *(unsigned int *)(v31 - 4);
              if ( v31 < v34 )
              {
                do
                {
                  while ( 1 )
                  {
                    v35 = *v33;
                    if ( *v33 )
                    {
                      v36 = (*(_DWORD *)(v35 + 8))-- == 1;
                      if ( v36 )
                        break;
                    }
                    if ( (unsigned __int64)++v33 >= v34 )
                      goto LABEL_25;
                  }
                  ++v33;
                  sub_15D7BC0(v45, v35);
                }
                while ( (unsigned __int64)v33 < v34 );
              }
LABEL_25:
              sub_186B220((void *)(v31 - 8));
            }
            v37 = v48;
            if ( v48 )
            {
              v38 = (unsigned __int64)&v48[*((unsigned int *)v48 - 1)];
              if ( (unsigned __int64)v48 >= v38 )
                goto LABEL_34;
              do
              {
                while ( 1 )
                {
                  v39 = *v37;
                  if ( *v37 )
                  {
                    v36 = (*(_DWORD *)(v39 + 8))-- == 1;
                    if ( v36 )
                      break;
                  }
                  if ( (unsigned __int64)++v37 >= v38 )
                    goto LABEL_33;
                }
                sub_15D7BC0(*(_QWORD *)&v47, v39);
                ++v37;
              }
              while ( (unsigned __int64)v37 < v38 );
LABEL_33:
              v37 = v48;
              if ( v48 )
LABEL_34:
                sub_186B220(v37 - 1);
            }
            return v42;
          }
          v10 = *(_QWORD *)(a2 + 24);
        }
      }
    }
  }
  return nullptr;
}

