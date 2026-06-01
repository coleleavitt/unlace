_QWORD *__fastcall sub_401A50(__int64 a1, __int64 a2, double a3)
{
  _QWORD *result; // rax
  _QWORD *v4; // rbx
  __int64 v5; // r14
  double v6; // r12
  __int64 v7; // r13
  __int64 v8; // r8
  int v9; // r10d
  __m128i v10; // xmm1
  __m128 *v11; // rbp
  __int32 v12; // r9d
  __int64 v13; // r8
  __m128 *v14; // r15
  int v15; // ecx
  __int64 v16; // r9
  __m128 *v17; // rdi
  __m128 *v18; // rax
  __m128 *v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __m128 *v22; // rax
  int v23; // esi
  __m128 *v24; // r10
  __int64 v25; // rcx
  __int64 v26; // rdi
  void *v27; // r11
  __m128i *v28; // rdx
  double v29; // rax
  _QWORD *v30; // r15
  const __m128i *v31; // r12
  const __m128i *v32; // rbx
  __int64 v33; // r10
  int v34; // r11d
  __m128 *v35; // r13
  __m128 *v36; // rcx
  __m128i *v37; // rbp
  __int64 v38; // rdx
  __m128 *v39; // rsi
  __m128i *v40; // rdx
  __m128i v41; // xmm2
  __m128i v42; // [rsp+0h] [rbp-88h] BYREF
  double v43; // [rsp+18h] [rbp-70h]
  __m128i v44; // [rsp+20h] [rbp-68h] BYREF
  __int64 v45; // [rsp+30h] [rbp-58h]
  __m128 *v46; // [rsp+38h] [rbp-50h]
  __int64 v47; // [rsp+40h] [rbp-48h]
  int v48; // [rsp+4Ch] [rbp-3Ch]

  v42.m128i_i64[0] = a1;
  result = (_QWORD *)sub_400CE0(a1, a3);
  v4 = *(_QWORD **)a2;
  v5 = *(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 8);
  if ( *(_QWORD *)a2 != v5 )
  {
    while ( *v4 <= 1u )
    {
      v4 += 2;
      if ( (_QWORD *)v5 == v4 )
        return result;
    }
    if ( (_QWORD *)v5 != v4 )
    {
      v6 = *(double *)v4;
      v7 = v42.m128i_i64[0];
      while ( 1 )
      {
        v8 = *(unsigned int *)(v7 + 272);
        v9 = *(_DWORD *)(v7 + 280);
        v10 = (__m128i)_mm_loadh_ps((const double *)v4 + 1);
        if ( 3 * (int)v8 < (unsigned int)(4 * (v9 + *(_DWORD *)(v7 + 276))) )
        {
          LODWORD(v43) = 2 * v8;
          v44 = v10;
          v42.m128i_i64[0] = 16LL * (unsigned int)(2 * v8);
          v22 = (__m128 *)sub_186B270(v42.m128i_u64[0]);
          v23 = LODWORD(v43);
          v13 = v42.m128i_i64[0];
          v10 = _mm_load_si128(&v44);
          v11 = v22;
          v24 = (__m128 *)((char *)v22 + v42.m128i_i64[0]);
          if ( LODWORD(v43) )
          {
            if ( (v42.m128i_i8[0] & 0x10) == 0 || (*v22 = 0, ++v22, v24 != v22) )
            {
              do
              {
                *v22 = 0;
                v22 += 2;
                v22[-1] = 0;
              }
              while ( v24 != v22 );
            }
          }
          v25 = *(_QWORD *)(v7 + 264);
          v12 = v23 - 1;
          v14 = v24;
          v26 = 16LL * *(unsigned int *)(v7 + 272);
          v27 = (void *)(v25 + v26);
          if ( v25 != v25 + v26 )
          {
            v28 = (__m128i *)v24;
            v29 = v6;
            v30 = v4;
            v31 = (const __m128i *)(v25 + v26);
            v32 = *(const __m128i **)(v7 + 264);
            v33 = v7;
            v34 = v23;
            v35 = v11;
            v36 = (__m128 *)v28;
            v37 = v28;
            do
            {
              while ( v32->m128i_i64[0] <= 1uLL )
              {
                if ( v31 == ++v32 )
                  goto LABEL_44;
              }
              v38 = 16LL * (*(_DWORD *)(v32->m128i_i64[0] + 12) & (unsigned int)v12);
              v39 = &v35[(unsigned __int64)v38 / 0x10];
              if ( v13 == v38 )
              {
LABEL_48:
                if ( v35 == v39 )
                {
LABEL_56:
                  v48 = v34;
                  v47 = v33;
                  v46 = v36;
                  v45 = v13;
                  v44.m128i_i32[0] = v12;
                  v43 = v29;
                  v42 = v10;
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v40 = (__m128i *)v35;
                while ( v40->m128i_i64[0] )
                {
                  if ( v39 == (__m128 *)++v40 )
                    goto LABEL_56;
                }
              }
              else
              {
                v40 = (__m128i *)&v35[(unsigned __int64)v38 / 0x10];
                while ( v40->m128i_i64[0] )
                {
                  if ( v37 == ++v40 )
                    goto LABEL_48;
                }
              }
              v41 = _mm_loadu_si128(v32++);
              *v40 = v41;
            }
            while ( v31 != v32 );
LABEL_44:
            v23 = v34;
            v27 = *(void **)(v33 + 264);
            v4 = v30;
            v11 = v35;
            v6 = v29;
            v14 = v36;
            v7 = v33;
          }
          if ( v27 )
          {
            LODWORD(v45) = v23;
            v44.m128i_i64[0] = v13;
            LODWORD(v43) = v12;
            v42 = v10;
            sub_186B220(v27);
            v23 = v45;
            v13 = v44.m128i_i64[0];
            v12 = LODWORD(v43);
            v10 = _mm_load_si128(&v42);
          }
          *(_QWORD *)(v7 + 264) = v11;
          v9 = 0;
          *(_DWORD *)(v7 + 272) = v23;
          *(_DWORD *)(v7 + 280) = 0;
        }
        else
        {
          v11 = *(__m128 **)(v7 + 264);
          v12 = v8 - 1;
          v13 = 16 * v8;
          v14 = (__m128 *)((char *)v11 + v13);
        }
        v15 = *(_DWORD *)(*(_QWORD *)&v6 + 12LL);
        v16 = 16LL * (v15 & (unsigned int)v12);
        v17 = &v11[(unsigned __int64)v16 / 0x10];
        if ( v16 != v13 )
        {
          v18 = &v11[(unsigned __int64)v16 / 0x10];
          v19 = nullptr;
          while ( 1 )
          {
            v20 = v18->m128_u64[0];
            if ( v18->m128_u64[0] > 1 )
            {
              if ( *(_DWORD *)(v20 + 12) == v15 && v20 == *(_QWORD *)&v6 )
              {
                *v18 = (__m128)v10;
                goto LABEL_25;
              }
            }
            else
            {
              if ( !v20 )
              {
                if ( v19 )
                  goto LABEL_54;
                v19 = v18;
                goto LABEL_55;
              }
              v19 = v18;
            }
            if ( ++v18 == v14 )
              goto LABEL_20;
          }
        }
        v19 = nullptr;
        while ( 1 )
        {
LABEL_20:
          if ( v17 == v11 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v21 = v11->m128_u64[0];
          if ( v11->m128_u64[0] <= 1 )
            break;
          if ( *(_DWORD *)(v21 + 12) == v15 && v21 == *(_QWORD *)&v6 )
          {
            *v11 = (__m128)v10;
            goto LABEL_25;
          }
LABEL_19:
          ++v11;
        }
        if ( v21 )
          break;
        if ( v19 )
LABEL_54:
          *(_DWORD *)(v7 + 280) = v9 - 1;
        else
          v19 = v11;
LABEL_55:
        *v19 = (__m128)v10;
        ++*(_DWORD *)(v7 + 276);
LABEL_25:
        result = v4 + 2;
        if ( (_QWORD *)v5 != v4 + 2 )
        {
          while ( 1 )
          {
            v6 = *(double *)result;
            v4 = result;
            if ( *result > 1u )
              break;
            result += 2;
            if ( (_QWORD *)v5 == result )
              return result;
          }
          if ( (_QWORD *)v5 != result )
            continue;
        }
        return result;
      }
      v19 = v11;
      goto LABEL_19;
    }
  }
  return result;
}

