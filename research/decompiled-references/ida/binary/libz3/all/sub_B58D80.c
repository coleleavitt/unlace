__int64 __fastcall sub_B58D80(__int64 a1)
{
  __m128i *v1; // rax
  __m128i v2; // xmm0
  unsigned __int64 *v3; // r15
  unsigned __int64 *v4; // rbx
  unsigned __int64 v5; // r14
  unsigned int v6; // eax
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 *v11; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // r13
  int v15; // esi
  __int64 v16; // r8
  const __m128i *v17; // r12
  __int64 v18; // r11
  __m128i *v19; // r9
  const __m128i *v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // edx
  _QWORD *v23; // r8
  __m128i *v24; // rax
  __m128i *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned int *v29; // r13
  unsigned int *v30; // r12
  __int64 v31; // rcx
  bool v32; // zf
  unsigned int v33; // r12d
  __int64 v34; // rdi
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rdi
  __m128i *v40; // rax
  __m128i *v41; // rcx
  const __m128i *v42; // r10
  _QWORD *v43; // rsi
  unsigned int v44; // r9d
  const __m128i *i; // rcx
  __int64 v46; // rdx
  __m128i *v47; // rsi
  __m128i *v48; // rdx
  __int64 v49; // r13
  __int64 v50; // rax
  __int64 v51; // [rsp+18h] [rbp-78h]
  __m128i *v52; // [rsp+18h] [rbp-78h]
  int v53; // [rsp+20h] [rbp-70h]
  int v54; // [rsp+24h] [rbp-6Ch]
  unsigned int v55; // [rsp+24h] [rbp-6Ch]
  __int64 v56; // [rsp+28h] [rbp-68h]
  unsigned int v57; // [rsp+28h] [rbp-68h]
  __m128i *v58; // [rsp+28h] [rbp-68h]
  unsigned int v59; // [rsp+30h] [rbp-60h]
  unsigned int v60; // [rsp+30h] [rbp-60h]
  unsigned int v61; // [rsp+34h] [rbp-5Ch]
  __int64 v62; // [rsp+38h] [rbp-58h]
  __int64 v63; // [rsp+38h] [rbp-58h]
  size_t v64; // [rsp+38h] [rbp-58h]
  __m128i *ptr; // [rsp+40h] [rbp-50h]
  _QWORD *v66; // [rsp+48h] [rbp-48h]
  unsigned int v67[16]; // [rsp+50h] [rbp-40h] BYREF

  v1 = (__m128i *)sub_186B270(0x80u);
  v2.m128i_i64[0] = 0;
  v3 = *(unsigned __int64 **)(a1 + 168);
  ptr = v1;
  *v1 = 0;
  v1[1] = 0;
  v1[2] = 0;
  v1[3] = 0;
  v1[4] = 0;
  v1[5] = 0;
  v1[6] = 0;
  v1[7] = 0;
  v4 = &v3[2 * *(unsigned int *)(a1 + 176)];
  if ( v3 != v4 )
  {
    while ( *v3 <= 1 )
    {
      v3 += 2;
      if ( v4 == v3 )
        goto LABEL_85;
    }
    v66 = (_QWORD *)a1;
    if ( v4 != v3 )
    {
      v54 = 0;
      v5 = *v3;
      v53 = 0;
      v61 = 8;
      v59 = 1;
      while ( 1 )
      {
        v6 = sub_B645B0(*(_QWORD *)(v66[1] + 16LL), v5);
        v7 = v6;
        v8 = *(_QWORD *)(v66[1] + 16LL);
        v62 = *(_QWORD *)(*(_QWORD *)(v8 + 8840) + 8LL * (v6 >> 1));
        if ( (unsigned int)sub_8E7030(v8)
          && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v8 + 7488) + 56LL))(
                *(_QWORD *)(v8 + 7488),
                v62) )
        {
          goto LABEL_10;
        }
        v9 = v66[1];
        v10 = *(_QWORD *)(v9 + 16);
        if ( *(_BYTE *)(*(_QWORD *)(v10 + 8848) + v7) != 1 )
          goto LABEL_10;
        v13 = *(_QWORD *)(v10 + 8656);
        v14 = *(_QWORD *)(*(_QWORD *)(v13 + 8LL * **(unsigned int **)(v5 + 32)) + 8LL);
        v15 = *(_DWORD *)(*(_QWORD *)v14 + 12LL);
        v16 = 16LL * v61;
        v17 = (__m128i *)((char *)ptr + v16);
        v18 = 16LL * (v15 & (v61 - 1));
        v19 = &ptr[(unsigned __int64)v18 / 0x10];
        if ( v18 != v16 )
        {
          v20 = &ptr[(unsigned __int64)v18 / 0x10];
          do
          {
            v21 = v20->m128i_i64[0];
            if ( v20->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(*(_QWORD *)v21 + 12LL) == v15 && v14 == v21 )
                goto LABEL_43;
            }
            else if ( !v21 )
            {
              goto LABEL_25;
            }
            ++v20;
          }
          while ( v17 != v20 );
          v20 = ptr;
          if ( v19 != ptr )
            goto LABEL_55;
          v22 = 2 * v61;
          if ( 3 * v61 < 4 * (v54 + v53) )
            goto LABEL_63;
          v2 = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v5);
          if ( v16 )
            goto LABEL_27;
          goto LABEL_42;
        }
        v20 = ptr;
        if ( v19 == ptr )
        {
          v22 = 2 * v61;
          if ( 3 * v61 < 4 * (v54 + v53) )
            goto LABEL_63;
          v25 = nullptr;
          v2 = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v5);
LABEL_34:
          v24 = ptr;
          if ( ptr != v19 )
          {
            v23 = v66;
            do
            {
              while ( 1 )
              {
                v27 = v24->m128i_i64[0];
                if ( v24->m128i_i64[0] <= 1uLL )
                  break;
                if ( *(_DWORD *)(*(_QWORD *)v27 + 12LL) == v15 && v14 == v27 )
                  goto LABEL_88;
                if ( ++v24 == v19 )
                  goto LABEL_42;
              }
              if ( !v27 )
                goto LABEL_58;
              v25 = v24++;
            }
            while ( v24 != v19 );
          }
LABEL_42:
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
LABEL_55:
        while ( 1 )
        {
          v36 = v20->m128i_i64[0];
          if ( v20->m128i_i64[0] <= 1uLL )
            break;
          if ( *(_DWORD *)(*(_QWORD *)v36 + 12LL) == v15 && v14 == v36 )
          {
LABEL_43:
            v28 = v20->m128i_i64[1];
            v29 = *(unsigned int **)(v5 + 40);
            v30 = *(unsigned int **)(v28 + 40);
            v63 = v28;
            if ( *(_QWORD *)(*(_QWORD *)(v13 + 8LL * *v30) + 8LL) != *(_QWORD *)(*(_QWORD *)(v13 + 8LL * *v29) + 8LL) )
            {
              v31 = *v66;
              ++v29[2];
              ++v30[2];
              v51 = v31;
              v60 = sub_966380(v9, v29, v30);
              v56 = *(_QWORD *)(v66[1] + 16LL);
              (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v56 + 7488) + 48LL))(
                *(_QWORD *)(v56 + 7488),
                *(_QWORD *)(*(_QWORD *)(v56 + 8840) + 8LL * (v60 >> 1)));
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v56 + 7488) + 64LL))(*(_QWORD *)(v56 + 7488));
              v32 = v30[2]-- == 1;
              if ( v32 )
                sub_15D7BC0(v51, v30);
              v32 = v29[2]-- == 1;
              if ( v32 )
                sub_15D7BC0(v51, v29);
              v33 = sub_B645B0(*(_QWORD *)(v66[1] + 16LL), v63) ^ 1;
              v34 = *(_QWORD *)(v66[1] + 16LL);
              v35 = sub_B645B0(v34, v5);
              v67[1] = v33;
              v67[0] = v35 ^ 1;
              v67[2] = v60;
              if ( (unsigned int)sub_180B130(v34) > 9 )
              {
                if ( (unsigned __int8)sub_186A530(*(double *)v2.m128i_i64) )
                {
                  sub_186A4C0(*(double *)v2.m128i_i64);
                  v37 = *(_QWORD *)(v66[1] + 16LL);
                  v38 = sub_180B150(v34, v5);
                  v39 = sub_AA55A0(v37, v38, 3, v67);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_186A500(v39, "\n");
                }
                else
                {
                  v49 = *(_QWORD *)(v66[1] + 16LL);
                  v50 = sub_180B150(v34, v5);
                  sub_AA55A0(v49, v50, 3, v67);
                  std::__ostream_insert<char,std::char_traits<char>>();
                }
              }
              sub_B69FE0(*(_QWORD *)(v66[1] + 16LL), *(_DWORD *)(v66[1] + 8LL), 3, (unsigned int)v67, 0, 0, 1);
              v59 = -1;
            }
            goto LABEL_10;
          }
LABEL_54:
          if ( v19 == ++v20 )
            goto LABEL_25;
        }
        if ( v36 )
          goto LABEL_54;
LABEL_25:
        v22 = 2 * v61;
        if ( 3 * v61 >= 4 * (v54 + v53) )
          goto LABEL_26;
LABEL_63:
        v61 = v22;
        v57 = v22;
        v64 = 16LL * v22;
        v40 = (__m128i *)sub_186B270(v64);
        v16 = v64;
        v41 = v40;
        v42 = &v40[v64 / 0x10];
        if ( v57 )
        {
          if ( (v64 & 0x10) != 0 )
          {
            v41 = v40 + 1;
            v43 = v66;
            *v40 = 0;
            if ( v42 != &v40[1] )
              goto LABEL_66;
          }
          else
          {
            v43 = v66;
            do
            {
LABEL_66:
              *v41 = 0;
              v41 += 2;
              v41[-1] = 0;
            }
            while ( v42 != v41 );
            v66 = v43;
          }
        }
        v44 = v57 - 1;
        for ( i = ptr; v17 != i; ++i )
        {
          if ( i->m128i_i64[0] > 1uLL )
          {
            v46 = 16LL * (*(_DWORD *)(*(_QWORD *)i->m128i_i64[0] + 12LL) & v44);
            v47 = &v40[(unsigned __int64)v46 / 0x10];
            if ( v64 == v46 )
            {
LABEL_80:
              if ( v40 == v47 )
              {
LABEL_87:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v48 = v40;
              while ( v48->m128i_i64[0] )
              {
                if ( v47 == ++v48 )
                  goto LABEL_87;
              }
            }
            else
            {
              v48 = &v40[(unsigned __int64)v46 / 0x10];
              while ( v48->m128i_i64[0] )
              {
                if ( v42 == ++v48 )
                  goto LABEL_80;
              }
            }
            *v48 = _mm_loadu_si128(i);
          }
        }
        if ( ptr )
        {
          v52 = &v40[v64 / 0x10];
          v55 = v57 - 1;
          v58 = v40;
          sub_186B220(ptr);
          v42 = v52;
          v44 = v55;
          v40 = v58;
          v16 = v64;
        }
        ptr = v40;
        v17 = v42;
        v54 = 0;
        v15 = *(_DWORD *)(*(_QWORD *)v14 + 12LL);
        v18 = 16LL * (v15 & v44);
        v19 = &v40[(unsigned __int64)v18 / 0x10];
LABEL_26:
        v2 = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v5);
        if ( v18 == v16 )
        {
          v25 = nullptr;
          goto LABEL_34;
        }
LABEL_27:
        v23 = v66;
        v24 = v19;
        v25 = nullptr;
        while ( 1 )
        {
          while ( 1 )
          {
            v26 = v24->m128i_i64[0];
            if ( v24->m128i_i64[0] <= 1uLL )
              break;
            if ( *(_DWORD *)(*(_QWORD *)v26 + 12LL) == v15 && v14 == v26 )
            {
LABEL_88:
              v66 = v23;
              *v24 = v2;
              goto LABEL_10;
            }
            if ( ++v24 == v17 )
              goto LABEL_34;
          }
          if ( !v26 )
            break;
          v25 = v24++;
          if ( v24 == v17 )
            goto LABEL_34;
        }
LABEL_58:
        v66 = v23;
        if ( v25 )
          --v54;
        else
          v25 = v24;
        *v25 = v2;
        ++v53;
LABEL_10:
        v11 = v3 + 2;
        if ( v4 != v3 + 2 )
        {
          while ( 1 )
          {
            v5 = *v11;
            v3 = v11;
            if ( *v11 > 1 )
              break;
            v11 += 2;
            if ( v4 == v11 )
              goto LABEL_15;
          }
          if ( v4 != v11 )
            continue;
        }
LABEL_15:
        if ( ptr )
          goto LABEL_16;
        return v59;
      }
    }
  }
LABEL_85:
  v59 = 1;
LABEL_16:
  sub_186B220(ptr);
  return v59;
}

