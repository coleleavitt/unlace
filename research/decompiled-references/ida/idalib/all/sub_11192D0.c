__int64 *__fastcall sub_11192D0(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  __int64 *v11; // rsi
  void **v12; // r14
  void **v13; // rbx
  void *v14; // rdi
  void *v15; // rdi
  unsigned __int64 v16; // rbp
  __int64 v18; // rbp
  __int64 v19; // r15
  signed __int64 v20; // r12
  _QWORD *v21; // rbx
  __m128i v22; // xmm0
  __int64 v23; // r10
  _BYTE *v24; // rsi
  signed __int64 v25; // r12
  __int64 v26; // r14
  _BYTE *v27; // rax
  __int64 *v28; // rsi
  __int64 v29; // r15
  signed __int64 v30; // rbp
  _QWORD *v31; // rbx
  __m128i v32; // xmm0
  __int64 v33; // r9
  _BYTE *v34; // rsi
  size_t v35; // rbp
  __int64 v36; // r14
  _BYTE *v37; // rax
  __int64 v38; // r14
  __int64 v39; // r12
  void **v40; // r15
  void **v41; // rbx
  void *v42; // rdi
  void *v43; // rdi
  __int64 v44; // rbp
  __int64 v45; // [rsp+8h] [rbp-60h]
  unsigned __int64 v46; // [rsp+8h] [rbp-60h]
  __m128i src; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v48; // [rsp+20h] [rbp-48h]
  __int64 v49; // [rsp+28h] [rbp-40h]

  if ( a2 != a1 )
  {
    v3 = *a2;
    v5 = *a1;
    v45 = a2[1];
    v48 = v45 - v3;
    v6 = 0xEEEEEEEEEEEEEEEFLL * ((v45 - v3) >> 3);
    v7 = v6;
    if ( 0xEEEEEEEEEEEEEEEFLL * ((a1[2] - v5) >> 3) >= v6 )
    {
      v8 = a1[1];
      v9 = v8 - v5;
      v10 = 0xEEEEEEEEEEEEEEEFLL * ((v8 - v5) >> 3);
      if ( v6 <= v10 )
      {
        if ( (__int64)v48 > 0 )
        {
          do
          {
            sub_9EE8A0(v5, v3);
            sub_9EE8A0(v5 + 32, v3 + 32);
            sub_9EE8A0(v5 + 64, v3 + 64);
            v11 = (__int64 *)(v3 + 96);
            v3 += 120;
            sub_11189B0(v5 + 96, v11);
            v5 += 120;
            --v7;
          }
          while ( v7 );
        }
        for ( ; v8 != v5; v5 += 120 )
        {
          while ( 1 )
          {
            v12 = *(void ***)(v5 + 104);
            v13 = *(void ***)(v5 + 96);
            if ( v12 != v13 )
            {
              do
              {
                while ( *v13 != v13 + 2 )
                {
                  operator delete(*v13);
                  v13 += 4;
                  if ( v12 == v13 )
                    goto LABEL_10;
                }
                v13 += 4;
              }
              while ( v12 != v13 );
LABEL_10:
              v13 = *(void ***)(v5 + 96);
            }
            if ( v13 )
              operator delete(v13);
            v14 = *(void **)(v5 + 64);
            if ( v14 != (void *)(v5 + 80) )
              operator delete(v14);
            v15 = *(void **)(v5 + 32);
            if ( v15 != (void *)(v5 + 48) )
              operator delete(v15);
            if ( *(_QWORD *)v5 == v5 + 16 )
              break;
            operator delete(*(void **)v5);
            v5 += 120;
            if ( v8 == v5 )
              goto LABEL_19;
          }
        }
LABEL_19:
        v16 = *a1 + v48;
        goto LABEL_20;
      }
      if ( v9 > 0 )
      {
        do
        {
          v46 = v10;
          sub_9EE8A0(v5, v3);
          sub_9EE8A0(v5 + 32, v3 + 32);
          sub_9EE8A0(v5 + 64, v3 + 64);
          v28 = (__int64 *)(v3 + 96);
          v3 += 120;
          sub_11189B0(v5 + 96, v28);
          v5 += 120;
          v10 = v46 - 1;
        }
        while ( v46 != 1 );
        v8 = a1[1];
        v5 = *a1;
        v3 = *a2;
        v45 = a2[1];
        v9 = v8 - *a1;
      }
      v29 = v3 + v9;
      v16 = v48 + v5;
      if ( v3 + v9 == v45 )
      {
LABEL_20:
        a1[1] = v16;
        return a1;
      }
      while ( 1 )
      {
        *(_QWORD *)v8 = v8 + 16;
        sub_1117B80((_QWORD *)v8, *(_BYTE **)v29, *(_QWORD *)v29 + *(_QWORD *)(v29 + 8));
        *(_QWORD *)(v8 + 32) = v8 + 48;
        sub_1117B80((_QWORD *)(v8 + 32), *(_BYTE **)(v29 + 32), *(_QWORD *)(v29 + 32) + *(_QWORD *)(v29 + 40));
        *(_QWORD *)(v8 + 64) = v8 + 80;
        sub_1117B80((_QWORD *)(v8 + 64), *(_BYTE **)(v29 + 64), *(_QWORD *)(v29 + 64) + *(_QWORD *)(v29 + 72));
        v30 = *(_QWORD *)(v29 + 104) - *(_QWORD *)(v29 + 96);
        *(_OWORD *)(v8 + 96) = 0;
        *(_QWORD *)(v8 + 112) = 0;
        if ( v30 >> 5 )
        {
          if ( (unsigned __int64)(v30 >> 5) > 0x7FFFFFFFFFFFFFFLL )
            goto LABEL_100;
          v31 = (_QWORD *)operator new(v30);
        }
        else
        {
          v31 = nullptr;
        }
        src.m128i_i64[0] = (__int64)v31;
        v32 = _mm_loadl_epi64(&src);
        *(_QWORD *)(v8 + 112) = (char *)v31 + v30;
        *(__m128i *)(v8 + 96) = _mm_unpacklo_epi64(v32, v32);
        v33 = *(_QWORD *)(v29 + 96);
        src.m128i_i64[1] = *(_QWORD *)(v29 + 104);
        if ( src.m128i_i64[1] != v33 )
          break;
LABEL_67:
        *(_QWORD *)(v8 + 104) = v31;
        v29 += 120;
        v8 += 120;
        if ( v29 == v45 )
          goto LABEL_19;
      }
      *v31 = v31 + 2;
      v34 = *(_BYTE **)v33;
      v35 = *(_QWORD *)(v33 + 8);
      if ( v35 + *(_QWORD *)v33 && !v34 )
        goto LABEL_39;
      v36 = v33 + 32;
LABEL_55:
      if ( v35 > 0xF )
        goto LABEL_62;
      do
      {
        v37 = (_BYTE *)*v31;
        if ( v35 == 1 )
        {
          *v37 = *v34;
          v37 = (_BYTE *)*v31;
          goto LABEL_58;
        }
        if ( v35 )
          goto LABEL_64;
LABEL_58:
        v31[1] = v35;
        v31 += 4;
        v37[v35] = 0;
        if ( src.m128i_i64[1] == v36 )
          goto LABEL_67;
        v36 += 32;
        *v31 = v31 + 2;
        v34 = *(_BYTE **)(v36 - 32);
        v35 = *(_QWORD *)(v36 - 24);
        if ( !&v34[v35] )
          goto LABEL_55;
        if ( !v34 )
          goto LABEL_39;
      }
      while ( v35 <= 0xF );
LABEL_62:
      src.m128i_i64[0] = (__int64)v34;
      if ( (v35 & 0x8000000000000000LL) != 0LL )
        goto LABEL_99;
      v37 = (_BYTE *)operator new(v35 + 1);
      v31[2] = v35;
      v34 = (_BYTE *)src.m128i_i64[0];
      *v31 = v37;
LABEL_64:
      memcpy(v37, v34, v35);
      v37 = (_BYTE *)*v31;
      goto LABEL_58;
    }
    if ( v6 )
    {
      if ( v6 > 0x222222222222222LL )
LABEL_100:
        std::__throw_bad_alloc();
      v49 = operator new(v48);
    }
    else
    {
      v49 = 0;
    }
    v18 = v3;
    v19 = v49;
    if ( v3 == v45 )
    {
LABEL_77:
      v38 = a1[1];
      v39 = *a1;
      if ( v38 != *a1 )
      {
        do
        {
          while ( 1 )
          {
            v40 = *(void ***)(v39 + 104);
            v41 = *(void ***)(v39 + 96);
            if ( v40 != v41 )
            {
              do
              {
                while ( *v41 != v41 + 2 )
                {
                  operator delete(*v41);
                  v41 += 4;
                  if ( v40 == v41 )
                    goto LABEL_81;
                }
                v41 += 4;
              }
              while ( v40 != v41 );
LABEL_81:
              v41 = *(void ***)(v39 + 96);
            }
            if ( v41 )
              operator delete(v41);
            v42 = *(void **)(v39 + 64);
            if ( v42 != (void *)(v39 + 80) )
              operator delete(v42);
            v43 = *(void **)(v39 + 32);
            if ( v43 != (void *)(v39 + 48) )
              operator delete(v43);
            if ( *(_QWORD *)v39 == v39 + 16 )
              break;
            operator delete(*(void **)v39);
            v39 += 120;
            if ( v38 == v39 )
              goto LABEL_90;
          }
          v39 += 120;
        }
        while ( v38 != v39 );
LABEL_90:
        v39 = *a1;
      }
      if ( v39 )
        operator delete((void *)v39);
      v44 = v49;
      *a1 = v49;
      v16 = v48 + v44;
      a1[2] = v16;
      goto LABEL_20;
    }
    while ( 1 )
    {
      *(_QWORD *)v19 = v19 + 16;
      sub_1117B80((_QWORD *)v19, *(_BYTE **)v18, *(_QWORD *)v18 + *(_QWORD *)(v18 + 8));
      *(_QWORD *)(v19 + 32) = v19 + 48;
      sub_1117B80((_QWORD *)(v19 + 32), *(_BYTE **)(v18 + 32), *(_QWORD *)(v18 + 32) + *(_QWORD *)(v18 + 40));
      *(_QWORD *)(v19 + 64) = v19 + 80;
      sub_1117B80((_QWORD *)(v19 + 64), *(_BYTE **)(v18 + 64), *(_QWORD *)(v18 + 64) + *(_QWORD *)(v18 + 72));
      v20 = *(_QWORD *)(v18 + 104) - *(_QWORD *)(v18 + 96);
      *(_OWORD *)(v19 + 96) = 0;
      *(_QWORD *)(v19 + 112) = 0;
      if ( v20 >> 5 )
      {
        if ( (unsigned __int64)(v20 >> 5) > 0x7FFFFFFFFFFFFFFLL )
          goto LABEL_100;
        v21 = (_QWORD *)operator new(v20);
      }
      else
      {
        v21 = nullptr;
      }
      src.m128i_i64[0] = (__int64)v21;
      v22 = _mm_loadl_epi64(&src);
      *(_QWORD *)(v19 + 112) = (char *)v21 + v20;
      *(__m128i *)(v19 + 96) = _mm_unpacklo_epi64(v22, v22);
      v23 = *(_QWORD *)(v18 + 96);
      src.m128i_i64[1] = *(_QWORD *)(v18 + 104);
      if ( src.m128i_i64[1] != v23 )
        break;
LABEL_76:
      *(_QWORD *)(v19 + 104) = v21;
      v18 += 120;
      v19 += 120;
      if ( v45 == v18 )
        goto LABEL_77;
    }
    *v21 = v21 + 2;
    v24 = *(_BYTE **)v23;
    v25 = *(_QWORD *)(v23 + 8);
    if ( v25 + *(_QWORD *)v23 && !v24 )
LABEL_39:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v26 = v23 + 32;
    while ( (unsigned __int64)v25 <= 0xF )
    {
      v27 = (_BYTE *)*v21;
      if ( v25 == 1 )
      {
        *v27 = *v24;
        v27 = (_BYTE *)*v21;
      }
      else if ( v25 )
      {
        goto LABEL_75;
      }
LABEL_36:
      v21[1] = v25;
      v21 += 4;
      v27[v25] = 0;
      if ( src.m128i_i64[1] == v26 )
        goto LABEL_76;
      v26 += 32;
      *v21 = v21 + 2;
      v24 = *(_BYTE **)(v26 - 32);
      v25 = *(_QWORD *)(v26 - 24);
      if ( &v24[v25] && !v24 )
        goto LABEL_39;
    }
    if ( v25 < 0 )
LABEL_99:
      std::__throw_length_error("basic_string::_M_create");
    src.m128i_i64[0] = (__int64)v24;
    v27 = (_BYTE *)operator new(v25 + 1);
    v21[2] = v25;
    v24 = (_BYTE *)src.m128i_i64[0];
    *v21 = v27;
LABEL_75:
    memcpy(v27, v24, v25);
    v27 = (_BYTE *)*v21;
    goto LABEL_36;
  }
  return a1;
}
