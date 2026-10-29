_QWORD *__fastcall sub_B58680(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rbp
  _QWORD *v4; // rbx
  __int64 v5; // r15
  __int64 v6; // r12
  char *v7; // r8
  int v8; // esi
  __int64 v9; // rdi
  char *v10; // rax
  char *v11; // rdx
  unsigned int v12; // edx
  size_t v13; // r13
  _OWORD *v14; // rax
  _OWORD *v15; // rsi
  _OWORD *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  const double **v22; // r13
  __m128i *v23; // r15
  __int64 v24; // rdi
  __int64 v25; // rcx
  _QWORD *v26; // rbp
  __int64 v27; // rbx
  __int64 v28; // rsi
  _DWORD *v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rdi
  int v32; // eax
  __int64 v33; // rsi
  const double *v34; // r8
  __int64 v35; // rdi
  char v36; // al
  __int64 v37; // rdx
  __int64 v38; // rax
  __m128i *v39; // rax
  __m128i *v40; // r9
  int v41; // r11d
  __int64 v42; // rdx
  __m128i *v43; // r10
  __m128i *v44; // rdx
  __m128i *v45; // rdi
  __int64 v46; // rsi
  unsigned int v47; // edi
  __int64 v48; // rdx
  __m128i *v49; // rdx
  __m128i *v50; // r11
  const __m128i *v51; // r10
  __int64 v52; // rdx
  __m128i *v53; // r8
  __m128i *v54; // rdx
  const __m128i *v55; // rsi
  __m128i *v56; // rax
  __int64 v57; // r8
  _QWORD *v58; // r15
  const __m128i *v59; // rbx
  const double **v60; // r10
  const __m128i *v61; // r13
  __m128i *v62; // rbp
  __int64 v63; // rdx
  __m128i *v64; // rsi
  __m128i *v65; // rdx
  __m128i *v66; // rdi
  int v67; // edi
  unsigned int v68; // [rsp+0h] [rbp-98h]
  __int64 v69; // [rsp+0h] [rbp-98h]
  unsigned int v70; // [rsp+0h] [rbp-98h]
  size_t v71; // [rsp+0h] [rbp-98h]
  __int64 v72; // [rsp+8h] [rbp-90h]
  const double *v73; // [rsp+8h] [rbp-90h]
  __int64 v74; // [rsp+8h] [rbp-90h]
  __m128 v75; // [rsp+10h] [rbp-88h] BYREF
  const double *v76; // [rsp+20h] [rbp-78h]
  __int64 v77; // [rsp+28h] [rbp-70h]
  __m128i *v78; // [rsp+30h] [rbp-68h]
  __m128i *v79; // [rsp+38h] [rbp-60h]
  __int64 v80; // [rsp+40h] [rbp-58h]
  const double **v81; // [rsp+48h] [rbp-50h]
  __m128i *v82; // [rsp+50h] [rbp-48h]
  __int64 v83; // [rsp+58h] [rbp-40h]

  result = *(_QWORD **)(a1 + 168);
  v2 = &result[2 * *(unsigned int *)(a1 + 176)];
  if ( v2 != result )
  {
    while ( 1 )
    {
      v4 = result;
      if ( *result > 1u )
        break;
      result += 2;
      if ( v2 == result )
        return result;
    }
    if ( v2 != result )
    {
      v5 = *result;
      while ( 1 )
      {
        v6 = v4[1];
        if ( *(_DWORD *)(v6 + 52) || *(_DWORD *)(v6 + 56) )
          break;
LABEL_23:
        v17 = sub_B645B0(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v5);
        v18 = v17;
        v69 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
        v72 = *(_QWORD *)(*(_QWORD *)(v69 + 8840) + 8LL * (v17 >> 1));
        if ( (unsigned int)sub_8E7030(v69)
          && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v69 + 7488) + 56LL))(
                *(_QWORD *)(v69 + 7488),
                v72) )
        {
          goto LABEL_26;
        }
        v19 = *(_QWORD *)(a1 + 8);
        v20 = *(_QWORD *)(v19 + 16);
        if ( *(_BYTE *)(*(_QWORD *)(v20 + 8848) + v18) != 1 )
          goto LABEL_26;
        if ( !*(_BYTE *)v6 )
          goto LABEL_26;
        v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 8656) + 8LL * **(unsigned int **)(v5 + 32)) + 8LL);
        v22 = *(const double ***)(v21 + 56);
        if ( !v22 )
          goto LABEL_26;
        v23 = (__m128i *)&v22[*((unsigned int *)v22 - 1)];
        if ( v23 == (__m128i *)v22 )
          goto LABEL_26;
        v24 = v21;
        v25 = (__int64)v2;
        v26 = v4;
        v27 = v24;
        while ( 2 )
        {
          v28 = *(_QWORD *)*v22;
          v29 = *(_DWORD **)(*(_QWORD *)(v28 + 16) + 24LL);
          if ( !v29 )
            goto LABEL_36;
          if ( *(_DWORD *)(v19 + 8) != *v29 )
            goto LABEL_36;
          if ( v29[1] != 1 )
            goto LABEL_36;
          if ( v27 != *(_QWORD *)(*((_QWORD *)*v22 + 14) + 8LL) )
            goto LABEL_36;
          v30 = *(_QWORD *)(v19 + 16);
          v76 = *v22;
          v77 = v25;
          v70 = sub_B645B0(v30, v28);
          v31 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
          v75.m128_u64[0] = *(_QWORD *)(*(_QWORD *)(v31 + 8840) + 8LL * (v70 >> 1));
          v32 = sub_8E7030(v31);
          v33 = v75.m128_u64[0];
          v34 = v76;
          v25 = v77;
          if ( v32 )
          {
            v35 = *(_QWORD *)(v31 + 7488);
            v75.m128_u64[0] = v77;
            v73 = v76;
            v36 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 56LL))(v35, v33);
            v34 = v73;
            v25 = v75.m128_u64[0];
            if ( !v36 )
              goto LABEL_36;
          }
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 8848LL) + v70) != 1 )
            goto LABEL_36;
          v37 = *(unsigned int *)(v6 + 48);
          v38 = *(_QWORD *)(*((_QWORD *)v34 + 15) + 8LL);
          LODWORD(v76) = 2 * v37;
          v74 = v38;
          LODWORD(v38) = 4 * (*(_DWORD *)(v6 + 52) + *(_DWORD *)(v6 + 56));
          v75 = _mm_loadh_ps(v34);
          if ( 3 * (int)v37 < (unsigned int)v38 )
          {
            v77 = v25;
            v71 = 16LL * (unsigned int)v76;
            v39 = (__m128i *)sub_186B270(v71);
            v49 = v39;
            v50 = &v39[v71 / 0x10];
            v25 = v77;
            if ( (_DWORD)v76 )
            {
              if ( (v71 & 0x10) == 0 || (v49 = v39 + 1, *v39 = 0, v50 != &v39[1]) )
              {
                do
                {
                  *v49 = 0;
                  v49 += 2;
                  v49[-1] = 0;
                }
                while ( v50 != v49 );
              }
            }
            v51 = *(const __m128i **)(v6 + 40);
            v40 = &v39[v71 / 0x10];
            v52 = *(unsigned int *)(v6 + 48);
            v53 = (__m128i *)&v51[v52];
            LODWORD(v77) = (_DWORD)v76 - 1;
            if ( v51 != &v51[v52] )
            {
              v54 = v39;
              v55 = v53;
              v56 = v23;
              v57 = v27;
              v58 = v26;
              v59 = v51;
              v60 = v22;
              v61 = v55;
              v62 = v54;
              do
              {
                if ( v59->m128i_i64[0] > 1uLL )
                {
                  v63 = 16LL * (*(_DWORD *)(*(_QWORD *)v59->m128i_i64[0] + 12LL) & (unsigned int)v77);
                  v64 = &v62[(unsigned __int64)v63 / 0x10];
                  if ( v71 == v63 )
                  {
LABEL_78:
                    if ( v62 == v64 )
                    {
LABEL_90:
                      v83 = a1;
                      v82 = v40;
                      v81 = v60;
                      v80 = v57;
                      v79 = v56;
                      v78 = (__m128i *)v25;
                      sub_1872CE0("");
                      sub_1873130(114, 213);
                    }
                    v65 = v62;
                    while ( v65->m128i_i64[0] )
                    {
                      if ( v64 == ++v65 )
                        goto LABEL_90;
                    }
                  }
                  else
                  {
                    v65 = &v62[(unsigned __int64)v63 / 0x10];
                    while ( v65->m128i_i64[0] )
                    {
                      if ( v40 == ++v65 )
                        goto LABEL_78;
                    }
                  }
                  *v65 = _mm_loadu_si128(v59);
                }
                ++v59;
              }
              while ( v61 != v59 );
              v66 = v62;
              v27 = v57;
              v26 = v58;
              v53 = *(__m128i **)(v6 + 40);
              v23 = v56;
              v22 = v60;
              v39 = v66;
            }
            if ( v53 )
            {
              v80 = v25;
              v79 = v40;
              v78 = v39;
              sub_186B220(v53);
              v25 = v80;
              v40 = v79;
              v39 = v78;
            }
            v67 = (int)v76;
            *(_QWORD *)(v6 + 40) = v39;
            *(_DWORD *)(v6 + 56) = 0;
            *(_DWORD *)(v6 + 48) = v67;
          }
          else
          {
            LODWORD(v77) = v37 - 1;
            v39 = *(__m128i **)(v6 + 40);
            v71 = 16 * v37;
            v40 = &v39[v37];
          }
          v41 = *(_DWORD *)(*(_QWORD *)v74 + 12LL);
          v42 = 16LL * (v41 & (unsigned int)v77);
          v43 = &v39[(unsigned __int64)v42 / 0x10];
          if ( v42 == v71 )
          {
            v45 = nullptr;
            while ( 1 )
            {
LABEL_60:
              if ( v43 == v39 )
              {
                sub_1872CE0("");
                sub_1873130(114, 405);
              }
              v48 = v39->m128i_i64[0];
              if ( v39->m128i_i64[0] > 1uLL )
              {
                if ( *(_DWORD *)(*(_QWORD *)v48 + 12LL) == v41 && v74 == v48 )
                {
                  *v39 = _mm_load_si128((const __m128i *)&v75);
                  goto LABEL_36;
                }
              }
              else
              {
                if ( !v48 )
                {
                  if ( v45 )
                  {
                    --*(_DWORD *)(v6 + 56);
                    v39 = v45;
                  }
                  *v39 = _mm_load_si128((const __m128i *)&v75);
                  ++*(_DWORD *)(v6 + 52);
                  goto LABEL_36;
                }
                v45 = v39;
              }
              ++v39;
            }
          }
          v44 = &v39[(unsigned __int64)v42 / 0x10];
          v45 = nullptr;
          while ( 1 )
          {
            v46 = v44->m128i_i64[0];
            if ( v44->m128i_i64[0] <= 1uLL )
              break;
            if ( *(_DWORD *)(*(_QWORD *)v46 + 12LL) == v41 && v74 == v46 )
            {
              *v44 = _mm_load_si128((const __m128i *)&v75);
              goto LABEL_36;
            }
LABEL_51:
            if ( ++v44 == v40 )
              goto LABEL_60;
          }
          if ( v46 )
          {
            v45 = v44;
            goto LABEL_51;
          }
          if ( v45 )
          {
            --*(_DWORD *)(v6 + 56);
            v44 = v45;
          }
          *v44 = _mm_load_si128((const __m128i *)&v75);
          ++*(_DWORD *)(v6 + 52);
LABEL_36:
          if ( v23 != (__m128i *)++v22 )
          {
            v19 = *(_QWORD *)(a1 + 8);
            continue;
          }
          break;
        }
        v4 = v26;
        v2 = (_QWORD *)v25;
LABEL_26:
        result = v4 + 2;
        if ( v2 != v4 + 2 )
        {
          while ( 1 )
          {
            v5 = *result;
            v4 = result;
            if ( *result > 1u )
              break;
            result += 2;
            if ( v2 == result )
              return result;
          }
          if ( v2 != result )
            continue;
        }
        return result;
      }
      v7 = *(char **)(v6 + 40);
      v8 = 0;
      v9 = *(unsigned int *)(v6 + 48);
      v10 = v7;
      v11 = &v7[16 * v9];
      if ( v7 == v11 )
        goto LABEL_22;
      do
      {
        while ( *(_QWORD *)v10 )
        {
          *(_QWORD *)v10 = 0;
          v10 += 16;
          if ( v11 == v10 )
            goto LABEL_14;
        }
        v10 += 16;
        ++v8;
      }
      while ( v11 != v10 );
LABEL_14:
      if ( (unsigned int)v9 <= 0x10 || 3 * (int)v9 >= (unsigned int)(4 * v8) )
      {
LABEL_22:
        *(_QWORD *)(v6 + 52) = 0;
        goto LABEL_23;
      }
      if ( v7 )
      {
        sub_186B220(v7);
        v12 = *(_DWORD *)(v6 + 48);
        *(_QWORD *)(v6 + 40) = 0;
        v12 >>= 1;
        *(_DWORD *)(v6 + 48) = v12;
        v13 = 16LL * v12;
        v68 = v12;
        v14 = (_OWORD *)sub_186B270(v13);
        if ( !v68 )
        {
LABEL_21:
          *(_QWORD *)(v6 + 40) = v14;
          goto LABEL_22;
        }
      }
      else
      {
        *(_QWORD *)(v6 + 40) = 0;
        v47 = (unsigned int)v9 >> 1;
        *(_DWORD *)(v6 + 48) = v47;
        v13 = 16LL * v47;
        v14 = (_OWORD *)sub_186B270(v13);
      }
      v15 = &v14[v13 / 0x10];
      v16 = v14;
      if ( (v13 & 0x10) == 0 || (v16 = v14 + 1, *v14 = 0, v14 + 1 != v15) )
      {
        do
        {
          v16 += 2;
          *(v16 - 2) = 0;
          *(v16 - 1) = 0;
        }
        while ( v16 != v15 );
      }
      goto LABEL_21;
    }
  }
  return result;
}

