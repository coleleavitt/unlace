__int64 __fastcall sub_2CBEC0(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 *v3; // rsi
  __int64 v4; // r12
  __int64 v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rbp
  unsigned int v8; // r15d
  _QWORD *v9; // r10
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // r8
  unsigned __int64 v18; // r15
  _QWORD *v19; // rdx
  __int64 v20; // rdi
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __int64 v23; // rax
  __m128i v24; // xmm1
  __m128i v25; // xmm2
  int v26; // edx
  __m128i v27; // xmm0
  __int64 v28; // rdx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // r14
  _QWORD *v36; // r10
  _QWORD *v37; // r13
  __int64 *v38; // rbx
  __int64 v39; // r14
  __int64 v40; // rbp
  __int64 v41; // r12
  __int64 v42; // rcx
  __m128i v43; // xmm0
  __int64 v44; // rdi
  __int64 v46; // rbx
  char v48; // cl
  unsigned __int64 v49; // rsi
  char v50; // dl
  _BYTE *v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rdx
  const void *v54; // r13
  void *v55; // rax
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rbp
  __int64 v59; // r15
  const char *v60; // rsi
  __int64 v61; // r12
  __int64 v62; // rbp
  __int64 *v63; // rax
  __int64 v64; // rdi
  _QWORD *exception; // rdi
  _QWORD *v66; // rdi
  __m128i v67; // [rsp+0h] [rbp-128h] BYREF
  __m128i v68; // [rsp+18h] [rbp-110h]
  __int64 v69; // [rsp+28h] [rbp-100h]
  __int64 v70; // [rsp+30h] [rbp-F8h]
  __int64 v71; // [rsp+38h] [rbp-F0h]
  _QWORD *v72; // [rsp+40h] [rbp-E8h]
  __int64 v73; // [rsp+48h] [rbp-E0h]
  __int64 v74; // [rsp+50h] [rbp-D8h]
  __int64 *v75; // [rsp+58h] [rbp-D0h]
  const __m128i *v76; // [rsp+68h] [rbp-C0h] BYREF
  __m128i v77; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v78; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v79; // [rsp+88h] [rbp-A0h]
  int v80; // [rsp+A0h] [rbp-88h]
  __int64 v81; // [rsp+A8h] [rbp-80h] BYREF
  __m128i v82; // [rsp+B0h] [rbp-78h] BYREF
  int v83; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v84; // [rsp+C8h] [rbp-60h]
  __m128i v85; // [rsp+D0h] [rbp-58h] BYREF
  unsigned __int64 v86; // [rsp+E8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 24) == 0;
  v69 = a2;
  v86 = __readfsqword(0x28u);
  v3 = *(__int64 **)(a1 + 32);
  if ( !v2 )
  {
    v4 = a1;
    v78 = 0;
    v79 = 0;
    v5 = *v3;
    v68.m128i_i64[0] = v5;
    if ( v5 )
    {
      v68.m128i_i64[1] = v3[1];
      if ( v68.m128i_i64[1] )
      {
        v68.m128i_i64[1] = 0;
        v6 = *(_QWORD **)(v5 + 8);
        if ( (_QWORD *)v5 != v6 )
        {
          v7 = 0;
          while ( 1 )
          {
LABEL_6:
            v8 = *((_DWORD *)v6 + 6);
            v9 = v6 + 3;
            v10 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL);
            if ( (signed int)v8 < *(_DWORD *)(v10 + 64) )
            {
              if ( v8 >= *(_DWORD *)(v10 + 64) )
              {
                if ( !under_debugger )
                  sub_37CFE0(52719);
                BUG();
              }
              v11 = *(_QWORD *)(*(_QWORD *)(v10 + 528) + 8LL * v8);
              v12 = *(_QWORD *)(v11 + 48);
              if ( v12 )
                v13 = *(_QWORD *)(v12 + 24);
              else
                v13 = *(_QWORD *)(v11 + 32);
              v14 = *((_QWORD *)&v79 + 1);
              v67.m128i_i64[0] = (__int64)(v6 + 4);
              v15 = v79;
              if ( *((_QWORD *)&v79 + 1) < (unsigned __int64)(v79 + 1) )
              {
                v72 = v6 + 3;
                v71 = v13;
                v75 = &v78;
                v32 = qvector_reserve(&v78, 0, v79 + 1, 40);
                v33 = v71;
                v34 = *((_QWORD *)&v79 + 1);
                v35 = v78;
                *((_QWORD *)&v79 + 1) = v14;
                v36 = v72;
                v70 = v34;
                if ( (__int64)v79 - 1 >= 0 )
                {
                  v37 = v72;
                  v72 = v6;
                  v38 = (__int64 *)v78;
                  v39 = v32;
                  v73 = v7;
                  v40 = v32;
                  v74 = v4;
                  v41 = v79 - 1;
                  do
                  {
                    v42 = *v38;
                    v43 = _mm_loadu_si128((const __m128i *)(v38 + 1));
                    *v38 = 0;
                    v38[2] = 0;
                    *(_QWORD *)v40 = v42;
                    *(__m128i *)(v40 + 8) = v43;
                    *(_QWORD *)(v40 + 24) = v38[3];
                    *(_DWORD *)(v40 + 32) = *((_DWORD *)v38 + 8);
                    v44 = *v38;
                    if ( *v38 )
                    {
                      v38[1] = 0;
                      qfree(v44);
                    }
                    v38 += 5;
                    v40 += 40;
                  }
                  while ( v41-- != 0 );
                  v32 = v39;
                  v33 = v71;
                  v6 = v72;
                  v36 = v37;
                  v7 = v73;
                  v4 = v74;
                  v35 = v78;
                }
                v73 = v32;
                v72 = v36;
                v71 = v33;
                qfree(v35);
                v16 = v73;
                v13 = v71;
                v9 = v72;
                *((_QWORD *)&v79 + 1) = v70;
                v15 = v79;
                v78 = v73;
              }
              else
              {
                v16 = v78;
              }
              v17 = (__int64 *)(v16 + 40 * v15);
              *v17 = 0;
              *(_OWORD *)(v17 + 1) = 0;
              *((_DWORD *)v17 + 8) = v8;
              *(_QWORD *)&v79 = v79 + 1;
              v17[3] = v13;
              if ( (__int64 *)v67.m128i_i64[0] != v17 )
              {
                v18 = v9[2];
                if ( v18 > 1 )
                {
                  v52 = *v17;
                  v53 = v9[2];
                  v67.m128i_i64[0] = v16 + 40 * v15;
                  v54 = (const void *)v9[1];
                  v55 = (void *)qvector_reserve(v17, v52, v53, 1);
                  v56 = v67.m128i_i64[0];
                  *(_QWORD *)v67.m128i_i64[0] = v55;
                  *(_QWORD *)(v56 + 8) = v18;
                  memmove(v55, v54, v18 - 1);
                  *(_BYTE *)(*(_QWORD *)v67.m128i_i64[0] + v18 - 1) = 0;
                }
                else
                {
                  v17[1] = 0;
                }
              }
              goto LABEL_15;
            }
            v80 = *((_DWORD *)v6 + 6);
            v81 = 0;
            v82 = 0;
            sub_2A8F60(&v81, (__int64)(v6 + 4));
            v20 = v81;
            v21 = _mm_load_si128(&v82);
            v76 = (const __m128i *)&v83;
            v83 = v80;
            v84 = v81;
            v85 = v21;
            if ( !v7 )
            {
              v57 = qalloc(56);
              v7 = v57;
              v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v57, (__m128i)(unsigned __int64)v57);
              if ( !v57 )
              {
                exception = __cxa_allocate_exception(8u);
                *exception = (char *)&`vtable for'std::bad_alloc + 16;
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'std::bad_alloc,
                  (void (*)(void *))&std::bad_alloc::~bad_alloc);
              }
              *(_QWORD *)(v57 + 48) = 0;
              *(_OWORD *)(v57 + 16) = 0;
              *(_OWORD *)(v57 + 32) = 0;
              *(__m128i *)(v57 + 8) = v22;
              *(_QWORD *)v57 = v57 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_22:
              v67 = v22;
              v23 = qalloc(56);
              v24 = _mm_load_si128(&v67);
              v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v23);
              if ( !v23 )
              {
                v66 = __cxa_allocate_exception(8u);
                *v66 = (char *)&`vtable for'std::bad_alloc + 16;
                __cxa_throw(
                  v66,
                  (struct type_info *)&`typeinfo for'std::bad_alloc,
                  (void (*)(void *))&std::bad_alloc::~bad_alloc);
              }
              *(_OWORD *)v23 = 0;
              v26 = v83;
              *(_OWORD *)(v23 + 16) = 0;
              *(_DWORD *)(v23 + 24) = v26;
              v27 = _mm_load_si128(&v85);
              v85 = 0;
              *(_QWORD *)(v23 + 32) = v84;
              *(__m128i *)(v23 + 40) = v27;
              v84 = 0;
              *(_QWORD *)v23 = v7 & 0xFFFFFFFFFFFFFFFCLL | 1;
              *(__m128i *)(v23 + 8) = v24;
              v28 = *(_QWORD *)v7;
              *(__m128i *)(v7 + 8) = v25;
              ++v68.m128i_i64[1];
              *(_QWORD *)v7 = v23 & 0xFFFFFFFFFFFFFFFCLL | v28 & 3;
              *(_QWORD *)v23 = v7 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v23 & 2LL;
              v20 = v84;
              goto LABEL_24;
            }
            v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)(unsigned __int64)v7);
            if ( !v68.m128i_i64[1] )
              goto LABEL_22;
            v48 = 1;
            v49 = *(_QWORD *)v7 & 0xFFFFFFFFFFFFFFFCLL;
            if ( (*(_BYTE *)v49 & 2) != 0 )
            {
              v49 = v7;
              v50 = 1;
LABEL_48:
              v77.m128i_i64[0] = v7;
              v77.m128i_i64[1] = v68.m128i_i64[1];
              sub_2CB100(&v77, (unsigned __int64 *)v49, v50, &v76);
              v7 = v77.m128i_i64[0];
              v20 = v84;
              v68.m128i_i64[1] = v77.m128i_i64[1];
              goto LABEL_24;
            }
            while ( 1 )
            {
              if ( *(_DWORD *)(v49 + 24) > v80 )
              {
                v51 = *(_BYTE **)(v49 + 8);
                v48 = 1;
                goto LABEL_52;
              }
              if ( *(_DWORD *)(v49 + 24) >= v80 )
                break;
              v51 = *(_BYTE **)(v49 + 16);
              v48 = 0;
LABEL_52:
              if ( (*v51 & 2) != 0 )
                goto LABEL_53;
              v49 = (unsigned __int64)v51;
            }
            if ( !v49 )
            {
LABEL_53:
              v50 = v48;
              goto LABEL_48;
            }
LABEL_24:
            if ( v20 )
            {
              v85.m128i_i64[0] = 0;
              qfree(v20);
            }
LABEL_15:
            if ( (*v6 & 2) != 0 )
            {
LABEL_18:
              if ( (_QWORD *)v68.m128i_i64[0] == v6 )
                goto LABEL_19;
            }
            else
            {
              v19 = (_QWORD *)v6[2];
              if ( (*(_BYTE *)v19 & 2) == 0 )
              {
                do
                {
                  v6 = v19;
                  v19 = (_QWORD *)v19[1];
                }
                while ( (*(_BYTE *)v19 & 2) == 0 );
                goto LABEL_18;
              }
              v29 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
              v30 = *v29;
              if ( (*v29 & 2) == 0 )
              {
                while ( v6 == (_QWORD *)v29[2] )
                {
                  v6 = v29;
                  v31 = v30 & 0xFFFFFFFFFFFFFFFCLL;
                  v30 = *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v30 & 2) != 0 )
                  {
                    v6 = (_QWORD *)v31;
                    if ( v68.m128i_i64[0] != v31 )
                      goto LABEL_6;
                    goto LABEL_19;
                  }
                  v29 = (_QWORD *)v31;
                }
              }
              v6 = v29;
              if ( (_QWORD *)v68.m128i_i64[0] == v29 )
              {
LABEL_19:
                v68.m128i_i64[0] = v7;
                goto LABEL_43;
              }
            }
          }
        }
      }
      v68.m128i_i64[0] = 0;
    }
    else
    {
      v68 = 0u;
    }
LABEL_43:
    v77 = v68;
    sub_2AD160(v69, v77.m128i_i64);
    if ( (_QWORD)v79 )
    {
      sub_32C5E0(v69, v79);
      v46 = v78 + 40 * v79;
      if ( v78 != v46 )
      {
        v58 = v78;
        do
        {
          v59 = v69;
          sub_32C5E0(v69, *(unsigned int *)(v58 + 32));
          sub_32C8A0(v59, *(_QWORD *)(v58 + 24) - *(_QWORD *)(v4 + 8));
          v60 = s1;
          if ( *(_QWORD *)(v58 + 8) )
            v60 = *(const char **)v58;
          sub_32C760(v69, v60);
          v58 += 40;
        }
        while ( v46 != v58 );
        v46 = v78;
      }
      if ( !v46 )
        goto LABEL_45;
      v61 = v79;
      if ( (_QWORD)v79 )
      {
        v62 = 0;
        do
        {
          v63 = (__int64 *)(v46 + 40 * v62);
          v64 = *v63;
          if ( *v63 )
          {
            v63[1] = 0;
            qfree(v64);
            v46 = v78;
          }
          ++v62;
        }
        while ( v61 != v62 );
      }
    }
    else
    {
      v46 = v78;
      if ( !v78 )
      {
LABEL_45:
        sub_2B6770(v77.m128i_i64);
        return v86 - __readfsqword(0x28u);
      }
    }
    *(_QWORD *)&v79 = 0;
    qfree(v46);
    goto LABEL_45;
  }
  return sub_2AD160(v69, v3);
}
