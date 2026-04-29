char __fastcall sub_1E0CA0(__int64 a1, __int64 a2)
{
  char result; // al
  _QWORD *v3; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r14
  __m128i v16; // xmm1
  __m128i v17; // xmm0
  __m128i v18; // xmm2
  __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rcx
  __int64 *v22; // rbp
  __int64 *v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __m128i v28; // xmm1
  __m128i v29; // xmm0
  __m128i v30; // xmm2
  unsigned __int64 v31; // rdx
  _QWORD *v32; // rdx
  _QWORD *k; // rax
  __m128i v34; // xmm1
  __m128i v35; // xmm0
  __m128i v36; // xmm2
  unsigned __int64 v37; // rdx
  __m128i v38; // xmm1
  __m128i v39; // xmm0
  __m128i v40; // xmm2
  unsigned __int8 v41; // al
  __int64 v42; // rax
  _QWORD *v43; // rsi
  unsigned __int64 v44; // rdx
  unsigned __int64 i; // rax
  __int64 *v46; // rax
  __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rdx
  _QWORD *j; // rcx
  unsigned __int64 v52; // rcx
  __m128i v53; // xmm1
  __m128i v54; // xmm0
  __m128i v55; // xmm2
  __m128i v56; // xmm1
  __m128i v57; // xmm0
  __m128i v58; // xmm2
  _QWORD *v59; // rsi
  __int64 *v60; // rax
  __int64 v61; // rdx
  _QWORD *v62; // rcx
  __int64 v63; // rsi
  unsigned __int64 v64; // rdi
  _QWORD *v65; // [rsp+10h] [rbp-E8h]
  __int64 v67; // [rsp+20h] [rbp-D8h]
  char v68; // [rsp+2Eh] [rbp-CAh]
  char v69; // [rsp+2Fh] [rbp-C9h]
  __m128i v70; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v71; // [rsp+40h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v73; // [rsp+60h] [rbp-98h] BYREF
  __m256i v74; // [rsp+70h] [rbp-88h] BYREF
  __m128i v75; // [rsp+90h] [rbp-68h]
  __m128i v76; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v77; // [rsp+B8h] [rbp-40h]

  v77 = __readfsqword(0x28u);
  result = *(_BYTE *)(a1 + 24);
  if ( result != *(_BYTE *)(a2 + 24) )
    return 0;
  if ( !result )
  {
    v3 = *(_QWORD **)(a1 + 8);
    v5 = *(_QWORD *)(a2 + 8);
    v6 = (unsigned __int64)v3;
    v65 = (_QWORD *)v5;
    v7 = v5;
    if ( !v3 )
    {
      v8 = *(_QWORD *)(a2 + 8);
      v9 = 0;
      if ( !v5 || !*(_QWORD *)(a2 + 16) )
      {
LABEL_7:
        while ( v3 != (_QWORD *)v9 )
        {
          if ( *((_DWORD *)v3 + 10) != 8 )
            return 0;
          if ( (*v3 & 2) == 0 )
          {
            v10 = (_QWORD *)v3[2];
            if ( (*(_BYTE *)v10 & 2) != 0 )
            {
              v11 = (_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
              v12 = *v11;
              if ( (*v11 & 2) == 0 )
              {
                while ( v3 == (_QWORD *)v11[2] )
                {
                  v3 = v11;
                  v20 = v12 & 0xFFFFFFFFFFFFFFFCLL;
                  v12 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v12 & 2) != 0 )
                  {
                    v3 = (_QWORD *)v20;
                    goto LABEL_7;
                  }
                  v11 = (_QWORD *)v20;
                }
              }
              v3 = v11;
            }
            else
            {
              do
              {
                v3 = v10;
                v10 = (_QWORD *)v10[1];
              }
              while ( (*(_BYTE *)v10 & 2) == 0 );
            }
          }
        }
        return *(_QWORD *)(a2 + 8) == (_QWORD)v65;
      }
LABEL_34:
      v65 = *(_QWORD **)(v8 + 8);
      goto LABEL_7;
    }
    if ( !*(_QWORD *)(a1 + 16) )
    {
      v8 = *(_QWORD *)(a2 + 8);
      v9 = (unsigned __int64)v3;
      if ( !v5 || !*(_QWORD *)(a2 + 16) )
        goto LABEL_7;
      goto LABEL_34;
    }
    v9 = v3[1];
    if ( !v5 || !*(_QWORD *)(a2 + 16) )
    {
      if ( v3 == (_QWORD *)v9 )
        goto LABEL_7;
      v65 = *(_QWORD **)(a2 + 8);
      v3 = (_QWORD *)v3[1];
      goto LABEL_31;
    }
    v21 = *(_QWORD *)(v5 + 8);
    v65 = (_QWORD *)v21;
    if ( v3 == (_QWORD *)v9 )
      goto LABEL_7;
    while ( 1 )
    {
      if ( v65 == (_QWORD *)v7 )
      {
        v6 = *(_QWORD *)(a1 + 8);
        v3 = (_QWORD *)v9;
LABEL_31:
        v9 = v6;
        goto LABEL_7;
      }
      v22 = (__int64 *)(v9 + 24);
      if ( *(_DWORD *)(v9 + 40) == 8 )
      {
        v41 = *(_BYTE *)(v9 + 32);
        v21 = *((unsigned __int8 *)v65 + 32);
        v23 = v65 + 3;
        if ( v41 < (unsigned __int8)v21 || (unsigned __int8)v21 >= v41 && *v22 <= v65[3] )
        {
          v42 = *v22 + *(int *)(v9 + 44);
LABEL_88:
          v21 = *((unsigned __int8 *)v23 + 8);
          if ( *(_BYTE *)(v9 + 32) == (_BYTE)v21 )
          {
            while ( *v23 < v42 )
            {
              if ( *v23 + *((int *)v23 + 5) > v42 )
                return 0;
              if ( (*v65 & 2) == 0 )
              {
                v43 = (_QWORD *)v65[2];
                if ( (*(_BYTE *)v43 & 2) != 0 )
                {
                  v62 = (_QWORD *)(*v65 & 0xFFFFFFFFFFFFFFFCLL);
                  v63 = *v62;
                  if ( (*v62 & 2) == 0 )
                  {
                    while ( (_QWORD *)v62[2] == v65 )
                    {
                      v65 = v62;
                      v64 = v63 & 0xFFFFFFFFFFFFFFFCLL;
                      v63 = *(_QWORD *)(v63 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v63 & 2) != 0 )
                      {
                        v65 = (_QWORD *)v64;
                        goto LABEL_94;
                      }
                      v62 = (_QWORD *)v64;
                    }
                  }
                  v65 = v62;
                }
                else
                {
                  do
                  {
                    v65 = v43;
                    v43 = (_QWORD *)v43[1];
                  }
                  while ( (*(_BYTE *)v43 & 2) == 0 );
                }
LABEL_94:
                v21 = (unsigned __int64)v65;
                if ( (_QWORD *)v7 != v65 )
                {
                  v23 = v65 + 3;
                  goto LABEL_88;
                }
                break;
              }
              v21 = *(unsigned __int8 *)(v9 + 32);
              if ( *((_BYTE *)v23 + 8) != (_BYTE)v21 )
                break;
            }
          }
          if ( (*(_QWORD *)v9 & 2) == 0 )
          {
            v44 = *(_QWORD *)(v9 + 16);
            if ( (*(_BYTE *)v44 & 2) != 0 )
            {
              v60 = (__int64 *)(*(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCLL);
              v61 = *v60;
              if ( (*v60 & 2) == 0 )
              {
                while ( v60[2] == v9 )
                {
                  v9 = (unsigned __int64)v60;
                  v21 = v61 & 0xFFFFFFFFFFFFFFFCLL;
                  v61 = *(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v61 & 2) != 0 )
                  {
                    v9 = v21;
                    goto LABEL_65;
                  }
                  v60 = (__int64 *)v21;
                }
              }
              v9 = (unsigned __int64)v60;
            }
            else
            {
              for ( i = *(_QWORD *)(v44 + 8); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 8) )
                v44 = i;
              v9 = v44;
            }
          }
          goto LABEL_65;
        }
      }
      else
      {
        v23 = v65 + 3;
      }
      v69 = *(_BYTE *)(v9 + 32);
      if ( v69 != *((_BYTE *)v23 + 8) )
        return 0;
      v68 = 0;
      if ( *(_BYTE *)(v9 + 32) == 5 )
        v68 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1504LL) + 96LL) + 145LL);
      sub_312C40((__int64)&v70, v9 + 40, v7, v21);
      sub_312C40((__int64)&si128, (__int64)(v23 + 2), v24, v25);
      v26 = *v23;
      v27 = *v22;
      v67 = si128.m128i_i32[1] + *v23;
      v15 = *v22 + v70.m128i_i32[1];
      if ( *v22 >= *v23 )
      {
        if ( v26 < *v22 )
        {
          if ( v15 != v67 )
            goto LABEL_25;
          memset(&v74.m256i_u64[1], 0, 24);
          v74.m256i_i64[0] = 0x800000000LL;
          if ( v68 )
          {
            if ( !(unsigned __int8)sub_314D00(
                                     &si128,
                                     (__m128i *)&v74,
                                     (unsigned int)(si128.m128i_i32[1] + v26 - v27),
                                     v26) )
            {
LABEL_102:
              sub_312B80((__int64)&v74);
LABEL_25:
              sub_312B80((__int64)&si128);
              sub_312B80((__int64)&v70);
              return 0;
            }
            v53 = _mm_load_si128(&si128);
            v54 = _mm_load_si128(&v73);
            si128 = _mm_load_si128((const __m128i *)&v74);
            v55 = _mm_load_si128((const __m128i *)&v74.m256i_u64[2]);
            v75 = v53;
            v76 = v54;
            v73 = v55;
            *(__m128i *)v74.m256i_i8 = v53;
            *(__m128i *)&v74.m256i_u64[2] = v54;
          }
          else if ( !(unsigned __int8)sub_314D00(&si128, (__m128i *)&v74, (unsigned int)(v27 - v26), v26) )
          {
            goto LABEL_102;
          }
          if ( si128.m128i_i32[0] != 1 )
            goto LABEL_102;
          v34 = _mm_load_si128(&si128);
          v35 = _mm_load_si128(&v73);
          si128 = _mm_load_si128((const __m128i *)&v74);
          v36 = _mm_load_si128((const __m128i *)&v74.m256i_u64[2]);
          *(__m128i *)v74.m256i_i8 = v34;
          *(__m128i *)&v74.m256i_u64[2] = v35;
          v75 = v34;
          v76 = v35;
          v73 = v36;
          sub_312B80((__int64)&v74);
        }
      }
      else
      {
        if ( v15 != si128.m128i_i32[1] + *v23 )
          goto LABEL_25;
        memset(&v74.m256i_u64[1], 0, 24);
        v74.m256i_i64[0] = 0x800000000LL;
        if ( v68 )
        {
          if ( !(unsigned __int8)sub_314D00(&v70, (__m128i *)&v74, (unsigned int)(v27 + v70.m128i_i32[1] - v26), v26) )
            goto LABEL_102;
          v56 = _mm_load_si128(&v70);
          v57 = _mm_load_si128(&v71);
          v70 = _mm_load_si128((const __m128i *)&v74);
          v58 = _mm_load_si128((const __m128i *)&v74.m256i_u64[2]);
          v75 = v56;
          v76 = v57;
          v71 = v58;
          *(__m128i *)v74.m256i_i8 = v56;
          *(__m128i *)&v74.m256i_u64[2] = v57;
        }
        else if ( !(unsigned __int8)sub_314D00(&v70, (__m128i *)&v74, (unsigned int)(v26 - v27), v26) )
        {
          goto LABEL_102;
        }
        if ( v70.m128i_i32[0] != 1 )
        {
          sub_312B80((__int64)&v74);
          sub_312B80((__int64)&si128);
          sub_312B80((__int64)&v70);
          v3 = (_QWORD *)v9;
          v9 = *(_QWORD *)(a1 + 8);
          goto LABEL_7;
        }
        v28 = _mm_load_si128(&v70);
        v29 = _mm_load_si128(&v71);
        v70 = _mm_load_si128((const __m128i *)&v74);
        v30 = _mm_load_si128((const __m128i *)&v74.m256i_u64[2]);
        *(__m128i *)v74.m256i_i8 = v28;
        *(__m128i *)&v74.m256i_u64[2] = v29;
        v75 = v28;
        v76 = v29;
        v71 = v30;
        sub_312B80((__int64)&v74);
      }
      if ( (unsigned int)sub_312DC0((__int64)&v70, (__int64)&si128) )
      {
        if ( v15 >= v67 )
          goto LABEL_25;
        do
        {
          if ( (*(_QWORD *)v9 & 2) == 0 )
          {
            v37 = *(_QWORD *)(v9 + 16);
            if ( (*(_BYTE *)v37 & 2) != 0 )
            {
              v13 = (__int64 *)(*(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCLL);
              v14 = *v13;
              if ( (*v13 & 2) != 0 || v13[2] != v9 )
              {
LABEL_14:
                v9 = (unsigned __int64)v13;
              }
              else
              {
                while ( 1 )
                {
                  v9 = v14 & 0xFFFFFFFFFFFFFFFCLL;
                  v14 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v14 & 2) != 0 )
                    break;
                  v19 = (__int64)v13;
                  v13 = (__int64 *)v9;
                  if ( *(_QWORD *)(v9 + 16) != v19 )
                    goto LABEL_14;
                }
              }
            }
            else
            {
              do
              {
                v9 = v37;
                v37 = *(_QWORD *)(v37 + 8);
              }
              while ( (*(_BYTE *)v37 & 2) == 0 );
            }
          }
          if ( *(_QWORD *)(a1 + 8) == v9 )
            goto LABEL_25;
          if ( *(_BYTE *)(v9 + 32) != v69 )
            goto LABEL_25;
          if ( *(_QWORD *)(v9 + 24) != v15 )
            goto LABEL_25;
          if ( *(_DWORD *)(v9 + 40) == 8 )
            goto LABEL_25;
          v15 += *(int *)(v9 + 44);
          if ( v67 < v15 )
            goto LABEL_25;
          memset(&v74.m256i_u64[1], 0, 24);
          v74.m256i_i64[0] = 0x800000000LL;
          if ( v68 )
          {
            if ( !(unsigned __int8)sub_314D00(
                                     &si128,
                                     (__m128i *)&v74,
                                     (unsigned int)(si128.m128i_i32[1] - v70.m128i_i32[1]),
                                     v19) )
              goto LABEL_102;
            v38 = _mm_load_si128(&si128);
            v39 = _mm_load_si128(&v73);
            si128 = _mm_load_si128((const __m128i *)&v74);
            v40 = _mm_load_si128((const __m128i *)&v74.m256i_u64[2]);
            v75 = v38;
            v76 = v39;
            v73 = v40;
            *(__m128i *)v74.m256i_i8 = v38;
            *(__m128i *)&v74.m256i_u64[2] = v39;
          }
          else if ( !(unsigned __int8)sub_314D00(&si128, (__m128i *)&v74, v70.m128i_u32[1], v19) )
          {
            goto LABEL_102;
          }
          if ( (unsigned int)sub_312DC0((__int64)&v70, (__int64)&si128) )
            goto LABEL_102;
          sub_312D90((__int64)&v70, v9 + 40);
          v16 = _mm_load_si128(&si128);
          v17 = _mm_load_si128(&v73);
          si128 = _mm_load_si128((const __m128i *)&v74);
          v18 = _mm_load_si128((const __m128i *)&v74.m256i_u64[2]);
          *(__m128i *)v74.m256i_i8 = v16;
          *(__m128i *)&v74.m256i_u64[2] = v17;
          v75 = v16;
          v76 = v17;
          v73 = v18;
          sub_312B80((__int64)&v74);
        }
        while ( si128.m128i_i32[1] > v70.m128i_i32[1] );
        if ( (unsigned int)sub_312DC0((__int64)&v70, (__int64)&si128) )
          goto LABEL_25;
      }
      if ( (*(_QWORD *)v9 & 2) == 0 )
      {
        v31 = *(_QWORD *)(v9 + 16);
        if ( (*(_BYTE *)v31 & 2) != 0 )
        {
          v46 = (__int64 *)(*(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCLL);
          v47 = *v46;
          if ( (*v46 & 2) == 0 )
          {
            while ( v46[2] == v9 )
            {
              v9 = (unsigned __int64)v46;
              v48 = v47 & 0xFFFFFFFFFFFFFFFCLL;
              v47 = *(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v47 & 2) != 0 )
              {
                v9 = v48;
                goto LABEL_59;
              }
              v46 = (__int64 *)v48;
            }
          }
          v9 = (unsigned __int64)v46;
        }
        else
        {
          do
          {
            v9 = v31;
            v31 = *(_QWORD *)(v31 + 8);
          }
          while ( (*(_BYTE *)v31 & 2) == 0 );
        }
      }
LABEL_59:
      if ( (*v65 & 2) == 0 )
      {
        v32 = (_QWORD *)v65[2];
        if ( (*(_BYTE *)v32 & 2) != 0 )
        {
          v49 = (_QWORD *)(*v65 & 0xFFFFFFFFFFFFFFFCLL);
          v50 = *v49;
          if ( (*v49 & 2) == 0 )
          {
            for ( j = v65; (_QWORD *)v49[2] == j; j = v59 )
            {
              v52 = v50 & 0xFFFFFFFFFFFFFFFCLL;
              v50 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v50 & 2) != 0 )
              {
                v65 = (_QWORD *)v52;
                goto LABEL_64;
              }
              v59 = v49;
              v49 = (_QWORD *)v52;
            }
          }
          v65 = v49;
        }
        else
        {
          for ( k = (_QWORD *)v32[1]; (*(_BYTE *)k & 2) == 0; k = (_QWORD *)k[1] )
            v32 = k;
          v65 = v32;
        }
      }
LABEL_64:
      sub_312B80((__int64)&si128);
      sub_312B80((__int64)&v70);
LABEL_65:
      if ( *(_QWORD *)(a1 + 8) == v9 )
      {
        v3 = (_QWORD *)v9;
        goto LABEL_7;
      }
      v7 = *(_QWORD *)(a2 + 8);
    }
  }
  return result;
}
