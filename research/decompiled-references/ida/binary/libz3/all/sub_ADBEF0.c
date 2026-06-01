__int64 __fastcall sub_ADBEF0(__int64 a1)
{
  char **exception; // r14
  __int64 v2; // rax
  __int64 **v3; // r15
  __m128i *v4; // r12
  __int64 result; // rax
  _QWORD *v6; // rbp
  int v7; // r10d
  unsigned int v8; // ecx
  unsigned int v9; // r8d
  __int64 v10; // r14
  __int64 v11; // r9
  const __m128i *v12; // rbx
  int v13; // esi
  __int64 v14; // rax
  __m128i *v15; // rdi
  __m128i *i; // rax
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  _QWORD *v21; // rdx
  __m128 v22; // xmm1
  __m128 v23; // xmm0
  unsigned int v24; // r13d
  int v25; // esi
  __m128 v26; // xmm1
  __int64 v27; // r8
  __m128i *v28; // rdi
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rdx
  _QWORD *v32; // r15
  __int64 v33; // rdi
  int v34; // ecx
  __int64 v35; // rax
  __m128i *v36; // rsi
  __int8 *k; // rax
  __int64 v38; // rdx
  const char *v39; // rcx
  __m128i *m; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  _QWORD *v43; // rbp
  __m128i *v44; // rax
  __m128i *v45; // r11
  __m128i *v46; // rdx
  __m128i *v47; // rax
  const __m128i *j; // r13
  __int64 v49; // rdi
  __m128i *v50; // rsi
  __m128i *v51; // rdx
  __m128i v52; // xmm2
  unsigned int v53; // edx
  size_t v54; // rsi
  unsigned int *v55; // rax
  __int64 v56; // [rsp+10h] [rbp-B8h]
  int v57; // [rsp+18h] [rbp-B0h]
  _QWORD *v58; // [rsp+18h] [rbp-B0h]
  unsigned int v59; // [rsp+20h] [rbp-A8h]
  unsigned int v60; // [rsp+20h] [rbp-A8h]
  unsigned int v61; // [rsp+20h] [rbp-A8h]
  unsigned int v62; // [rsp+20h] [rbp-A8h]
  __int64 v63; // [rsp+28h] [rbp-A0h]
  __int64 v64; // [rsp+28h] [rbp-A0h]
  __int64 v65; // [rsp+28h] [rbp-A0h]
  int v66; // [rsp+30h] [rbp-98h]
  unsigned int v67; // [rsp+30h] [rbp-98h]
  unsigned int v68; // [rsp+38h] [rbp-90h]
  unsigned int v69; // [rsp+38h] [rbp-90h]
  unsigned int v70; // [rsp+38h] [rbp-90h]
  int v71; // [rsp+3Ch] [rbp-8Ch]
  unsigned int v72; // [rsp+3Ch] [rbp-8Ch]
  int v73; // [rsp+3Ch] [rbp-8Ch]
  __int64 v74; // [rsp+40h] [rbp-88h]
  __m128i *v75; // [rsp+48h] [rbp-80h]
  __m128i *v76; // [rsp+50h] [rbp-78h]
  __int64 v77[11]; // [rsp+70h] [rbp-58h] BYREF

  v2 = sub_186B270(0xC0u);
  v3 = *(__int64 ***)(a1 + 1040);
  *(_QWORD *)v2 = 0;
  v4 = (__m128i *)v2;
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 12) = 0;
  *(_QWORD *)(v2 + 24) = 0;
  *(_DWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 36) = 0;
  *(_QWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 60) = 0;
  *(_QWORD *)(v2 + 72) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 84) = 0;
  *(_QWORD *)(v2 + 96) = 0;
  *(_DWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 108) = 0;
  *(_QWORD *)(v2 + 120) = 0;
  *(_DWORD *)(v2 + 128) = 0;
  *(_QWORD *)(v2 + 132) = 0;
  *(_QWORD *)(v2 + 144) = 0;
  *(_DWORD *)(v2 + 152) = 0;
  *(_QWORD *)(v2 + 156) = 0;
  *(_QWORD *)(v2 + 168) = 0;
  *(_DWORD *)(v2 + 176) = 0;
  *(_QWORD *)(v2 + 180) = 0;
  if ( !v3 )
    return sub_186B220(v4);
  result = (__int64)&v3[2 * *((unsigned int *)v3 - 1)];
  v56 = result;
  if ( v3 == (__int64 **)result )
    return sub_186B220(v4);
  v57 = 0;
  v6 = nullptr;
  v7 = 0;
  v8 = 8;
LABEL_4:
  while ( 2 )
  {
    while ( 2 )
    {
      while ( *((char *)v3 + 15) < 0 )
      {
        v3 += 2;
        if ( (__int64 **)v56 == v3 )
          goto LABEL_35;
      }
      v9 = v8 - 1;
      v10 = **v3;
      v11 = 24LL * v8;
      v12 = (__m128i *)((char *)v4 + v11);
      v13 = *(_DWORD *)(v10 + 12);
      v14 = 24LL * ((v8 - 1) & v13);
      v15 = (__m128i *)((char *)v4 + v14);
      if ( v14 != v11 )
      {
        for ( i = (__m128i *)((char *)v4 + v14); v12 != i; i = (__m128i *)((char *)i + 24) )
        {
          v17 = i->m128i_i64[0];
          if ( i->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v17 + 12) == v13 && v10 == v17 )
            {
LABEL_64:
              v23 = (__m128)*((unsigned int *)v3 + 2);
              v22 = v23;
              v23.m128_f32[0] = fminf(v23.m128_f32[0], *(float *)i[1].m128i_i32);
              v68 = i->m128i_i32[2] + 1;
              v22.m128_f32[0] = fminf(v22.m128_f32[0], *(float *)&i->m128i_i32[3]);
              goto LABEL_16;
            }
          }
          else if ( !v17 )
          {
            goto LABEL_12;
          }
        }
      }
      if ( v4 == v15 )
      {
LABEL_12:
        if ( !v6 )
          goto LABEL_73;
        goto LABEL_13;
      }
      i = v4;
      while ( 1 )
      {
        v42 = i->m128i_i64[0];
        if ( i->m128i_i64[0] <= 1uLL )
          break;
        if ( *(_DWORD *)(v42 + 12) == v13 && v10 == v42 )
          goto LABEL_64;
LABEL_69:
        i = (__m128i *)((char *)i + 24);
        if ( v15 == i )
          goto LABEL_12;
      }
      if ( v42 )
        goto LABEL_69;
      if ( !v6 )
      {
LABEL_73:
        v66 = v7;
        v64 = 24LL * v8;
        v60 = v8 - 1;
        v69 = v8;
        v43 = (_QWORD *)sub_186B270(0x18u);
        *v43 = 2;
        v8 = v69;
        v20 = 1;
        v6 = v43 + 1;
        v9 = v60;
        v11 = v64;
        v7 = v66;
        v21 = v6;
        goto LABEL_15;
      }
LABEL_13:
      v18 = *((_DWORD *)v6 - 1);
      if ( v18 == *((_DWORD *)v6 - 2) )
      {
        v53 = (3 * v18 + 1) >> 1;
        v54 = 8 * v53 + 8;
        if ( 8 * v18 + 8 >= (unsigned int)v54 || v18 >= v53 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v77, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v77);
          sub_233E40((__int64)v77);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v73 = v7;
        v67 = (3 * v18 + 1) >> 1;
        v65 = 24LL * v8;
        v62 = v8 - 1;
        v70 = v8;
        v55 = (unsigned int *)sub_186B300(v6 - 1, v54);
        v6 = v55 + 2;
        v8 = v70;
        v9 = v62;
        v11 = v65;
        *v55 = v67;
        v7 = v73;
        LODWORD(v55) = v55[1];
        v21 = &v6[(unsigned int)v55];
        v20 = (_DWORD)v55 + 1;
      }
      else
      {
        v19 = v18;
        v20 = v18 + 1;
        v21 = &v6[v19];
      }
LABEL_15:
      *v21 = v10;
      v22 = (__m128)*((unsigned int *)v3 + 2);
      *((_DWORD *)v6 - 1) = v20;
      v68 = 1;
      v23 = v22;
LABEL_16:
      v24 = v8;
      if ( 3 * v8 < 4 * (v7 + v57) )
      {
        v71 = 2 * v8;
        v44 = (__m128i *)sub_186B270(12LL * v24);
        v11 = 12LL * v24;
        v45 = v44;
        v8 = v71;
        v22 = (__m128)v22.m128_u32[0];
        v23 = (__m128)v23.m128_u32[0];
        if ( v24 * 2 )
        {
          v46 = &v44[12 * v24 / 0x10];
          do
          {
            v44->m128i_i64[0] = 0;
            v44 = (__m128i *)((char *)v44 + 24);
            v44[-1].m128i_i32[0] = 0;
            *(__int64 *)((char *)v44[-1].m128i_i64 + 4) = 0;
          }
          while ( v44 != v46 );
        }
        v9 = v24 * 2 - 1;
        v47 = (__m128i *)((char *)v45 + v11);
        for ( j = v4; v12 != j; v51[1].m128i_i64[0] = j[-1].m128i_i64[1] )
        {
          while ( j->m128i_i64[0] <= 1uLL )
          {
            j = (const __m128i *)((char *)j + 24);
            if ( v12 == j )
              goto LABEL_91;
          }
          v49 = *(_DWORD *)(j->m128i_i64[0] + 12) & v9;
          v50 = (__m128i *)((char *)v45 + 24 * v49);
          if ( v11 == 24 * v49 )
          {
LABEL_94:
            if ( v45 == v50 )
            {
LABEL_99:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v51 = v45;
            while ( v51->m128i_i64[0] )
            {
              v51 = (__m128i *)((char *)v51 + 24);
              if ( v50 == v51 )
                goto LABEL_99;
            }
          }
          else
          {
            v51 = (__m128i *)((char *)v45 + 24 * v49);
            while ( v51->m128i_i64[0] )
            {
              v51 = (__m128i *)((char *)v51 + 24);
              if ( v47 == v51 )
                goto LABEL_94;
            }
          }
          v52 = _mm_loadu_si128(j);
          j = (const __m128i *)((char *)j + 24);
          *v51 = v52;
        }
LABEL_91:
        if ( v4 )
        {
          v76 = (__m128i *)((char *)v45 + v11);
          v75 = v45;
          v74 = v11;
          v72 = v9;
          v61 = v8;
          sub_186B220(v4);
          v47 = v76;
          v45 = v75;
          v11 = v74;
          v9 = v72;
          v23 = (__m128)v23.m128_u32[0];
          v22 = (__m128)v22.m128_u32[0];
          v8 = v61;
        }
        v12 = v47;
        v4 = v45;
        v7 = 0;
      }
      v25 = *(_DWORD *)(v10 + 12);
      v26 = _mm_unpacklo_ps(v22, v23);
      v27 = v25 & v9;
      v28 = (__m128i *)((char *)v4 + 24 * v27);
      if ( 24 * v27 == v11 )
      {
        v29 = 0;
LABEL_25:
        if ( v4 == v28 )
        {
LABEL_33:
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        result = (__int64)v4;
        while ( 1 )
        {
          while ( 1 )
          {
            v31 = *(_QWORD *)result;
            if ( *(_QWORD *)result > 1u )
              break;
            if ( !v31 )
              goto LABEL_74;
            v29 = result;
            result += 24;
            if ( v28 == (__m128i *)result )
              goto LABEL_33;
          }
          if ( *(_DWORD *)(v31 + 12) == v25 && v10 == v31 )
            break;
          result += 24;
          if ( v28 == (__m128i *)result )
            goto LABEL_33;
        }
        *(_QWORD *)result = v10;
        v3 += 2;
        _mm_storel_ps((double *)(result + 12), v26);
        *(_DWORD *)(result + 8) = v68;
        if ( (__int64 **)v56 == v3 )
          goto LABEL_35;
        continue;
      }
      break;
    }
    result = (__int64)&v4->m128i_i64[3 * v27];
    v29 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v30 = *(_QWORD *)result;
        if ( *(_QWORD *)result <= 1u )
          break;
        if ( *(_DWORD *)(v30 + 12) == v25 && v10 == v30 )
        {
          *(_QWORD *)result = v10;
          v3 += 2;
          _mm_storel_ps((double *)(result + 12), v26);
          *(_DWORD *)(result + 8) = v68;
          if ( (__int64 **)v56 == v3 )
            goto LABEL_35;
          goto LABEL_4;
        }
        result += 24;
        if ( (const __m128i *)result == v12 )
          goto LABEL_25;
      }
      if ( !v30 )
        break;
      v29 = result;
      result += 24;
      if ( (const __m128i *)result == v12 )
        goto LABEL_25;
    }
LABEL_74:
    if ( v29 )
      --v7;
    else
      v29 = result;
    result = v68;
    *(_QWORD *)v29 = v10;
    v3 += 2;
    _mm_storel_ps((double *)(v29 + 12), v26);
    *(_DWORD *)(v29 + 8) = v68;
    ++v57;
    if ( (__int64 **)v56 != v3 )
      continue;
    break;
  }
LABEL_35:
  if ( v6 )
  {
    v58 = &v6[*((unsigned int *)v6 - 1)];
    if ( v58 != v6 )
    {
      v32 = v6;
      v63 = 24LL * v8;
      v59 = v8 - 1;
      do
      {
        v33 = *v32;
        v34 = *(_DWORD *)(*v32 + 12LL);
        v35 = 24LL * (v34 & v59);
        v36 = (__m128i *)((char *)v4 + v35);
        if ( v35 != v63 )
        {
          for ( k = &v4->m128i_i8[v35]; &v4->m128i_i8[v63] != k; k += 24 )
          {
            v38 = *(_QWORD *)k;
            if ( *(_QWORD *)k > 1u )
            {
              if ( *(_DWORD *)(v38 + 12) == v34 && v33 == v38 )
              {
LABEL_54:
                v39 = *(const char **)(v33 + 56);
                if ( ((unsigned __int8)v39 & 7) != 0 )
                  goto LABEL_55;
LABEL_46:
                if ( v39 )
                  strlen(v39);
                std::__ostream_insert<char,std::char_traits<char>>();
                goto LABEL_49;
              }
            }
            else if ( !v38 )
            {
              goto LABEL_45;
            }
          }
        }
        if ( v36 != v4 )
        {
          for ( m = v4; v36 != m; m = (__m128i *)((char *)m + 24) )
          {
            v41 = m->m128i_i64[0];
            if ( m->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v41 + 12) == v34 && v33 == v41 )
                goto LABEL_54;
            }
            else if ( !v41 )
            {
              break;
            }
          }
        }
LABEL_45:
        v39 = *(const char **)(v33 + 56);
        if ( ((unsigned __int8)v39 & 7) == 0 )
          goto LABEL_46;
LABEL_55:
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
LABEL_49:
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<double>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<double>();
        std::__ostream_insert<char,std::char_traits<char>>();
        ++v32;
      }
      while ( v58 != v32 );
    }
    result = sub_186B220(v6 - 1);
  }
  if ( v4 )
    return sub_186B220(v4);
  return result;
}

