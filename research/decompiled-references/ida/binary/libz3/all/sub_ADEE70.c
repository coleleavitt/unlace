_QWORD *__fastcall sub_ADEE70(__int64 *a1)
{
  _QWORD *result; // rax
  __int64 *v2; // r15
  _QWORD *v3; // rbx
  __int64 v4; // r12
  _QWORD *v5; // rdi
  __int64 v6; // r13
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r9
  __m128 *v10; // rbp
  unsigned int v11; // r11d
  __int64 v12; // r9
  __m128 *v13; // r14
  int v14; // esi
  __m128 v15; // xmm0
  __int64 v16; // r11
  __m128 *v17; // r8
  __m128 *v18; // rax
  __m128 *v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __m128 *v22; // rax
  int v23; // edx
  __m128 *v24; // r10
  __int64 v25; // r8
  __int64 v26; // rsi
  __m128i *v27; // rcx
  size_t v28; // rax
  __int64 v29; // r14
  const __m128i *v30; // rbx
  __m128 *v31; // r13
  __int64 *v32; // r8
  __m128i *v33; // rbp
  __int64 v34; // r15
  const __m128i *v35; // r12
  __m128 *v36; // rcx
  int v37; // r10d
  __int64 v38; // rdx
  __m128 *v39; // rsi
  __m128i *v40; // rdx
  __m128i v41; // xmm0
  __int64 v42; // [rsp+0h] [rbp-70h] BYREF
  __int64 v43; // [rsp+8h] [rbp-68h]
  __int64 v44; // [rsp+10h] [rbp-60h]
  __int64 v45; // [rsp+18h] [rbp-58h]
  unsigned __int64 *v46; // [rsp+20h] [rbp-50h]
  __int64 *v47; // [rsp+28h] [rbp-48h]
  int v48; // [rsp+34h] [rbp-3Ch]

  result = (_QWORD *)*((unsigned int *)a1 + 27);
  if ( !(_DWORD)result )
  {
    v2 = a1;
    result = (_QWORD *)a1[7];
    v3 = (_QWORD *)*result;
    v4 = *result + 16LL * *((unsigned int *)result + 2);
    if ( *result != v4 )
    {
      while ( *v3 <= 1u )
      {
        v3 += 2;
        if ( (_QWORD *)v4 == v3 )
          return result;
      }
      if ( (_QWORD *)v4 != v3 )
      {
        v5 = (_QWORD *)*v3;
        while ( 1 )
        {
          v6 = v3[1];
          v7 = (__int64 *)sub_B39520(v5);
          v8 = *v2;
          v42 = *v7;
          if ( (unsigned __int8)sub_15D26C0(v8, v42) )
            goto LABEL_9;
          v9 = *((unsigned int *)v2 + 26);
          if ( 3 * (int)v9 < (unsigned int)(4 * (*((_DWORD *)v2 + 27) + *((_DWORD *)v2 + 28))) )
          {
            LODWORD(v44) = 2 * v9;
            v43 = 16LL * (unsigned int)(2 * v9);
            v22 = (__m128 *)sub_186B270(v43);
            v12 = v43;
            v23 = v44;
            v10 = v22;
            v24 = (__m128 *)((char *)v22 + v43);
            if ( (_DWORD)v44 )
            {
              if ( (v43 & 0x10) == 0 || (*v22 = 0, ++v22, v22 != v24) )
              {
                do
                {
                  *v22 = 0;
                  v22 += 2;
                  v22[-1] = 0;
                }
                while ( v22 != v24 );
              }
            }
            v25 = v2[12];
            v11 = v23 - 1;
            v13 = v24;
            v26 = 16LL * *((unsigned int *)v2 + 26);
            v27 = (__m128i *)(v25 + v26);
            if ( v25 != v25 + v26 )
            {
              v28 = (size_t)v3;
              v29 = v6;
              v30 = (const __m128i *)v2[12];
              v31 = v10;
              v32 = v2;
              v33 = (__m128i *)v24;
              v34 = v4;
              v35 = v27;
              v36 = v24;
              v37 = v23;
              do
              {
                while ( v30->m128i_i64[0] <= 1uLL )
                {
                  if ( v35 == ++v30 )
                    goto LABEL_47;
                }
                v38 = 16LL * (*(_DWORD *)(v30->m128i_i64[0] + 12) & v11);
                v39 = &v31[(unsigned __int64)v38 / 0x10];
                if ( v12 == v38 )
                {
LABEL_51:
                  if ( v31 == v39 )
                  {
LABEL_59:
                    v48 = v37;
                    v47 = v32;
                    v46 = (unsigned __int64 *)v36;
                    v45 = v12;
                    LODWORD(v44) = v11;
                    v43 = v28;
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v40 = (__m128i *)v31;
                  while ( v40->m128i_i64[0] )
                  {
                    if ( v39 == (__m128 *)++v40 )
                      goto LABEL_59;
                  }
                }
                else
                {
                  v40 = (__m128i *)&v31[(unsigned __int64)v38 / 0x10];
                  while ( v40->m128i_i64[0] )
                  {
                    if ( v33 == ++v40 )
                      goto LABEL_51;
                  }
                }
                v41 = _mm_loadu_si128(v30++);
                *v40 = v41;
              }
              while ( v35 != v30 );
LABEL_47:
              v10 = v31;
              v6 = v29;
              v13 = v36;
              v27 = (__m128i *)v32[12];
              v4 = v34;
              v3 = (_QWORD *)v28;
              v2 = v32;
              v23 = v37;
            }
            if ( v27 )
            {
              LODWORD(v45) = v23;
              v44 = v12;
              LODWORD(v43) = v11;
              sub_186B220(v27);
              v23 = v45;
              v12 = v44;
              v11 = v43;
            }
            v2[12] = (__int64)v10;
            *((_DWORD *)v2 + 26) = v23;
            *((_DWORD *)v2 + 28) = 0;
          }
          else
          {
            v10 = (__m128 *)v2[12];
            v11 = v9 - 1;
            v12 = 16 * v9;
            v13 = (__m128 *)((char *)v10 + v12);
          }
          v14 = *(_DWORD *)(v6 + 12);
          v15 = _mm_loadh_ps((const double *)&v42);
          v16 = 16LL * (v14 & v11);
          v17 = &v10[(unsigned __int64)v16 / 0x10];
          if ( v16 != v12 )
          {
            v18 = &v10[(unsigned __int64)v16 / 0x10];
            v19 = nullptr;
            while ( 1 )
            {
              v20 = v18->m128_u64[0];
              if ( v18->m128_u64[0] > 1 )
              {
                if ( *(_DWORD *)(v20 + 12) == v14 && v6 == v20 )
                {
                  *v18 = v15;
                  goto LABEL_9;
                }
              }
              else
              {
                if ( !v20 )
                {
                  if ( v19 )
                    goto LABEL_57;
                  v19 = v18;
                  goto LABEL_58;
                }
                v19 = v18;
              }
              if ( ++v18 == v13 )
                goto LABEL_29;
            }
          }
          v19 = nullptr;
          while ( 1 )
          {
LABEL_29:
            if ( v17 == v10 )
            {
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
            v21 = v10->m128_u64[0];
            if ( v10->m128_u64[0] <= 1 )
              break;
            if ( *(_DWORD *)(v21 + 12) == v14 && v6 == v21 )
            {
              *v10 = v15;
              goto LABEL_9;
            }
LABEL_28:
            ++v10;
          }
          if ( v21 )
            break;
          if ( v19 )
LABEL_57:
            --*((_DWORD *)v2 + 28);
          else
            v19 = v10;
LABEL_58:
          *v19 = v15;
          ++*((_DWORD *)v2 + 27);
LABEL_9:
          result = v3 + 2;
          if ( (_QWORD *)v4 != v3 + 2 )
          {
            while ( 1 )
            {
              v5 = (_QWORD *)*result;
              v3 = result;
              if ( *result > 1u )
                break;
              result += 2;
              if ( (_QWORD *)v4 == result )
                return result;
            }
            if ( (_QWORD *)v4 != result )
              continue;
          }
          return result;
        }
        v19 = v10;
        goto LABEL_28;
      }
    }
  }
  return result;
}

