__int64 *__fastcall sub_115BB60(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // r12
  void *v10; // rdi
  _QWORD *v11; // rdi
  __int64 j; // rbx
  void *v13; // rdi
  void *v14; // rdi
  void **v15; // r14
  void **v16; // r12
  void *v17; // rdi
  void *v18; // rdi
  unsigned __int64 v19; // rbp
  __int64 i; // r12
  signed __int64 v22; // rdx
  signed __int64 v23; // rbp
  __int64 v24; // r15
  __m128i v25; // xmm0
  __int64 v26; // r14
  __int64 v27; // rbp
  __int64 v28; // r10
  _QWORD *v29; // r8
  _BYTE *v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // r14
  __int64 v33; // rbx
  void *v34; // rdi
  void *v35; // rdi
  void **v36; // r15
  void **v37; // r12
  void *v38; // rdi
  void *v39; // rdi
  __int64 v40; // rbp
  void *v41; // rdi
  _QWORD *v42; // rdi
  __int64 v43; // rbx
  signed __int64 v44; // r14
  _QWORD *v45; // r12
  __m128i v46; // xmm0
  __int64 v47; // r15
  _BYTE *v48; // rax
  _BYTE *v49; // rsi
  signed __int64 v50; // r14
  __int64 v51; // [rsp+8h] [rbp-60h]
  __m128i src; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v53; // [rsp+20h] [rbp-48h]
  __int64 v54; // [rsp+28h] [rbp-40h]

  src.m128i_i64[0] = (__int64)a2;
  if ( a2 != a1 )
  {
    v3 = *a2;
    v4 = *a1;
    v51 = a2[1];
    v53 = v51 - v3;
    v5 = 0xAAAAAAAAAAAAAAABLL * ((v51 - v3) >> 6);
    v6 = v5;
    if ( 0xAAAAAAAAAAAAAAABLL * ((a1[2] - v4) >> 6) < v5 )
    {
      if ( v5 )
      {
        if ( v5 > 0x155555555555555LL )
LABEL_117:
          std::__throw_bad_alloc();
        v54 = operator new(v53);
      }
      else
      {
        v54 = 0;
      }
      for ( i = v54; v51 != v3; v3 += 192 )
      {
        *(_QWORD *)i = i + 16;
        sub_115A670((_QWORD *)i, *(_BYTE **)v3, *(_QWORD *)v3 + *(_QWORD *)(v3 + 8));
        *(_QWORD *)(i + 32) = i + 48;
        sub_115A670((_QWORD *)(i + 32), *(_BYTE **)(v3 + 32), *(_QWORD *)(v3 + 32) + *(_QWORD *)(v3 + 40));
        *(_QWORD *)(i + 64) = i + 80;
        sub_115A670((_QWORD *)(i + 64), *(_BYTE **)(v3 + 64), *(_QWORD *)(v3 + 64) + *(_QWORD *)(v3 + 72));
        v22 = *(_QWORD *)(v3 + 104) - *(_QWORD *)(v3 + 96);
        v23 = v22;
        *(_OWORD *)(i + 96) = 0;
        *(_QWORD *)(i + 112) = 0;
        if ( v22 >> 5 )
        {
          if ( (unsigned __int64)(v22 >> 5) > 0x7FFFFFFFFFFFFFFLL )
            goto LABEL_117;
          v24 = operator new(v22);
        }
        else
        {
          v24 = 0;
        }
        src.m128i_i64[0] = v24;
        v25 = _mm_loadl_epi64(&src);
        *(_QWORD *)(i + 112) = v24 + v23;
        *(__m128i *)(i + 96) = _mm_unpacklo_epi64(v25, v25);
        v26 = *(_QWORD *)(v3 + 104);
        v27 = *(_QWORD *)(v3 + 96);
        if ( v26 != v27 )
        {
          v28 = *(_QWORD *)(v3 + 96);
          v29 = (_QWORD *)v24;
          do
          {
            src.m128i_i64[1] = v28;
            *v29 = v29 + 2;
            v30 = *(_BYTE **)v28;
            v31 = *(_QWORD *)(v28 + 8);
            src.m128i_i64[0] = (__int64)v29;
            sub_115A670(v29, v30, (__int64)&v30[v31]);
            v28 = src.m128i_i64[1] + 32;
            v29 = (_QWORD *)(src.m128i_i64[0] + 32);
          }
          while ( v26 != src.m128i_i64[1] + 32 );
          v24 += ((v26 - 32 - v27) & 0xFFFFFFFFFFFFFFE0LL) + 32;
        }
        *(_QWORD *)(i + 104) = v24;
        *(_QWORD *)(i + 120) = i + 136;
        sub_115A670((_QWORD *)(i + 120), *(_BYTE **)(v3 + 120), *(_QWORD *)(v3 + 120) + *(_QWORD *)(v3 + 128));
        *(_BYTE *)(i + 184) = 0;
        if ( *(_BYTE *)(v3 + 184) )
        {
          *(_QWORD *)(i + 152) = i + 168;
          sub_115A670((_QWORD *)(i + 152), *(_BYTE **)(v3 + 152), *(_QWORD *)(v3 + 152) + *(_QWORD *)(v3 + 160));
          *(_BYTE *)(i + 184) = 1;
        }
        i += 192;
      }
      v32 = a1[1];
      v33 = *a1;
      if ( v32 != *a1 )
      {
        do
        {
          while ( 1 )
          {
            if ( *(_BYTE *)(v33 + 184) )
            {
              v34 = *(void **)(v33 + 152);
              if ( v34 != (void *)(v33 + 168) )
                operator delete(v34);
            }
            v35 = *(void **)(v33 + 120);
            if ( v35 != (void *)(v33 + 136) )
              operator delete(v35);
            v36 = *(void ***)(v33 + 104);
            v37 = *(void ***)(v33 + 96);
            if ( v36 != v37 )
            {
              do
              {
                while ( *v37 != v37 + 2 )
                {
                  operator delete(*v37);
                  v37 += 4;
                  if ( v36 == v37 )
                    goto LABEL_57;
                }
                v37 += 4;
              }
              while ( v36 != v37 );
LABEL_57:
              v37 = *(void ***)(v33 + 96);
            }
            if ( v37 )
              operator delete(v37);
            v38 = *(void **)(v33 + 64);
            if ( v38 != (void *)(v33 + 80) )
              operator delete(v38);
            v39 = *(void **)(v33 + 32);
            if ( v39 != (void *)(v33 + 48) )
              operator delete(v39);
            if ( *(_QWORD *)v33 == v33 + 16 )
              break;
            operator delete(*(void **)v33);
            v33 += 192;
            if ( v32 == v33 )
              goto LABEL_66;
          }
          v33 += 192;
        }
        while ( v32 != v33 );
LABEL_66:
        v33 = *a1;
      }
      if ( v33 )
        operator delete((void *)v33);
      v40 = v54;
      *a1 = v54;
      v19 = v53 + v40;
      a1[2] = v19;
      goto LABEL_32;
    }
    v7 = a1[1];
    v8 = v7 - v4;
    v9 = 0xAAAAAAAAAAAAAAABLL * ((v7 - v4) >> 6);
    if ( v6 <= v9 )
    {
      if ( (__int64)v53 > 0 )
      {
        do
        {
          sub_9CAB60(v4, v3);
          sub_9CAB60(v4 + 32, v3 + 32);
          sub_9CAB60(v4 + 64, v3 + 64);
          sub_10F4C70(v4 + 96, (__int64 *)(v3 + 96));
          sub_9CAB60(v4 + 120, v3 + 120);
          v11 = (_QWORD *)(v4 + 152);
          if ( *(_BYTE *)(v4 + 184) )
          {
            if ( *(_BYTE *)(v3 + 184) )
            {
              sub_9CAB60((__int64)v11, v3 + 152);
            }
            else
            {
              v10 = *(void **)(v4 + 152);
              *(_BYTE *)(v4 + 184) = 0;
              if ( v10 != (void *)(v4 + 168) )
                operator delete(v10);
            }
          }
          else if ( *(_BYTE *)(v3 + 184) )
          {
            *(_QWORD *)(v4 + 152) = v4 + 168;
            sub_115A670(v11, *(_BYTE **)(v3 + 152), *(_QWORD *)(v3 + 152) + *(_QWORD *)(v3 + 160));
            *(_BYTE *)(v4 + 184) = 1;
          }
          v3 += 192;
          v4 += 192;
          --v6;
        }
        while ( v6 );
      }
      for ( j = v4; v7 != j; j += 192 )
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(j + 184) )
          {
            v13 = *(void **)(j + 152);
            if ( v13 != (void *)(j + 168) )
              operator delete(v13);
          }
          v14 = *(void **)(j + 120);
          if ( v14 != (void *)(j + 136) )
            operator delete(v14);
          v15 = *(void ***)(j + 104);
          v16 = *(void ***)(j + 96);
          if ( v15 != v16 )
          {
            do
            {
              while ( *v16 != v16 + 2 )
              {
                operator delete(*v16);
                v16 += 4;
                if ( v16 == v15 )
                  goto LABEL_22;
              }
              v16 += 4;
            }
            while ( v15 != v16 );
LABEL_22:
            v16 = *(void ***)(j + 96);
          }
          if ( v16 )
            operator delete(v16);
          v17 = *(void **)(j + 64);
          if ( v17 != (void *)(j + 80) )
            operator delete(v17);
          v18 = *(void **)(j + 32);
          if ( v18 != (void *)(j + 48) )
            operator delete(v18);
          if ( *(_QWORD *)j == j + 16 )
            break;
          operator delete(*(void **)j);
          j += 192;
          if ( v7 == j )
            goto LABEL_31;
        }
      }
LABEL_31:
      v19 = *a1 + v53;
      goto LABEL_32;
    }
    if ( v8 > 0 )
    {
      do
      {
        sub_9CAB60(v4, v3);
        sub_9CAB60(v4 + 32, v3 + 32);
        sub_9CAB60(v4 + 64, v3 + 64);
        sub_10F4C70(v4 + 96, (__int64 *)(v3 + 96));
        sub_9CAB60(v4 + 120, v3 + 120);
        v42 = (_QWORD *)(v4 + 152);
        if ( *(_BYTE *)(v4 + 184) )
        {
          if ( *(_BYTE *)(v3 + 184) )
          {
            sub_9CAB60((__int64)v42, v3 + 152);
          }
          else
          {
            v41 = *(void **)(v4 + 152);
            *(_BYTE *)(v4 + 184) = 0;
            if ( v41 != (void *)(v4 + 168) )
              operator delete(v41);
          }
        }
        else if ( *(_BYTE *)(v3 + 184) )
        {
          *(_QWORD *)(v4 + 152) = v4 + 168;
          sub_115A670(v42, *(_BYTE **)(v3 + 152), *(_QWORD *)(v3 + 152) + *(_QWORD *)(v3 + 160));
          *(_BYTE *)(v4 + 184) = 1;
        }
        v3 += 192;
        v4 += 192;
        --v9;
      }
      while ( v9 );
      v7 = a1[1];
      v4 = *a1;
      v3 = *(_QWORD *)src.m128i_i64[0];
      v8 = v7 - *a1;
      v51 = *(_QWORD *)(src.m128i_i64[0] + 8);
    }
    v43 = v8 + v3;
    if ( v43 == v51 )
    {
      v19 = v4 + v53;
LABEL_32:
      a1[1] = v19;
      return a1;
    }
    while ( 1 )
    {
      *(_QWORD *)v7 = v7 + 16;
      sub_115A670((_QWORD *)v7, *(_BYTE **)v43, *(_QWORD *)v43 + *(_QWORD *)(v43 + 8));
      *(_QWORD *)(v7 + 32) = v7 + 48;
      sub_115A670((_QWORD *)(v7 + 32), *(_BYTE **)(v43 + 32), *(_QWORD *)(v43 + 32) + *(_QWORD *)(v43 + 40));
      *(_QWORD *)(v7 + 64) = v7 + 80;
      sub_115A670((_QWORD *)(v7 + 64), *(_BYTE **)(v43 + 64), *(_QWORD *)(v43 + 64) + *(_QWORD *)(v43 + 72));
      v44 = *(_QWORD *)(v43 + 104) - *(_QWORD *)(v43 + 96);
      *(_OWORD *)(v7 + 96) = 0;
      *(_QWORD *)(v7 + 112) = 0;
      if ( v44 >> 5 )
      {
        if ( (unsigned __int64)(v44 >> 5) > 0x7FFFFFFFFFFFFFFLL )
          goto LABEL_117;
        v45 = (_QWORD *)operator new(v44);
      }
      else
      {
        v45 = nullptr;
      }
      src.m128i_i64[0] = (__int64)v45;
      v46 = _mm_loadl_epi64(&src);
      *(_QWORD *)(v7 + 112) = (char *)v45 + v44;
      *(__m128i *)(v7 + 96) = _mm_unpacklo_epi64(v46, v46);
      v47 = *(_QWORD *)(v43 + 96);
      src.m128i_i64[1] = *(_QWORD *)(v43 + 104);
      if ( src.m128i_i64[1] != v47 )
        break;
LABEL_99:
      *(_QWORD *)(v7 + 104) = v45;
      *(_QWORD *)(v7 + 120) = v7 + 136;
      sub_115A670((_QWORD *)(v7 + 120), *(_BYTE **)(v43 + 120), *(_QWORD *)(v43 + 120) + *(_QWORD *)(v43 + 128));
      *(_BYTE *)(v7 + 184) = 0;
      if ( *(_BYTE *)(v43 + 184) )
      {
        *(_QWORD *)(v7 + 152) = v7 + 168;
        sub_115A670((_QWORD *)(v7 + 152), *(_BYTE **)(v43 + 152), *(_QWORD *)(v43 + 152) + *(_QWORD *)(v43 + 160));
        *(_BYTE *)(v7 + 184) = 1;
      }
      v43 += 192;
      v7 += 192;
      if ( v43 == v51 )
        goto LABEL_31;
    }
    while ( 1 )
    {
      *v45 = v45 + 2;
      v49 = *(_BYTE **)v47;
      v50 = *(_QWORD *)(v47 + 8);
      if ( v50 + *(_QWORD *)v47 && !v49 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v50 > 0xF )
        break;
      v48 = (_BYTE *)*v45;
      if ( v50 == 1 )
      {
        *v48 = *v49;
        v48 = (_BYTE *)*v45;
      }
      else if ( v50 )
      {
        goto LABEL_98;
      }
LABEL_89:
      v45[1] = v50;
      v47 += 32;
      v45 += 4;
      v48[v50] = 0;
      if ( src.m128i_i64[1] == v47 )
        goto LABEL_99;
    }
    if ( v50 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    src.m128i_i64[0] = *(_QWORD *)v47;
    v48 = (_BYTE *)operator new(v50 + 1);
    v45[2] = v50;
    v49 = (_BYTE *)src.m128i_i64[0];
    *v45 = v48;
LABEL_98:
    memcpy(v48, v49, v50);
    v48 = (_BYTE *)*v45;
    goto LABEL_89;
  }
  return a1;
}

