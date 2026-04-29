__int64 __fastcall sub_2D1280(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  bool v4; // zf
  __int64 *v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rbp
  unsigned int v10; // r15d
  _QWORD *v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // r15
  _QWORD *v20; // rdx
  __int64 v21; // rdi
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  __int64 v24; // rax
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  int v27; // edx
  __m128i v28; // xmm0
  __int64 v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // r14
  _QWORD *v36; // r10
  _QWORD *v37; // r13
  unsigned __int64 v38; // rbx
  __int64 v39; // r14
  __int64 v40; // rbp
  __int64 v41; // r12
  __int64 v42; // rcx
  __m128i v43; // xmm0
  __int64 v44; // rdi
  __int64 v46; // rbx
  unsigned __int64 v48; // rsi
  char v49; // dl
  _BYTE *v50; // rdx
  __int64 v51; // rsi
  __int64 v52; // rdx
  const void *v53; // r13
  void *v54; // rax
  __int64 v55; // r8
  __int64 v56; // rax
  unsigned __int64 v57; // rbp
  __int64 v58; // r15
  const char *v59; // rsi
  __int64 v60; // r12
  __int64 v61; // rbp
  __int64 *v62; // rax
  __int64 v63; // rdi
  _QWORD *exception; // rdi
  _QWORD *v65; // rdi
  __m128i v66; // [rsp+0h] [rbp-128h] BYREF
  __m128i v67; // [rsp+18h] [rbp-110h]
  __int64 v68; // [rsp+28h] [rbp-100h]
  __int64 v69; // [rsp+30h] [rbp-F8h]
  __int64 v70; // [rsp+38h] [rbp-F0h]
  _QWORD *v71; // [rsp+40h] [rbp-E8h]
  __int64 v72; // [rsp+48h] [rbp-E0h]
  __int64 v73; // [rsp+50h] [rbp-D8h]
  unsigned __int64 *v74; // [rsp+58h] [rbp-D0h]
  const __m128i *v75; // [rsp+68h] [rbp-C0h] BYREF
  __m128i v76; // [rsp+70h] [rbp-B8h] BYREF
  unsigned __int64 v77; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v78; // [rsp+88h] [rbp-A0h]
  int v79; // [rsp+A0h] [rbp-88h]
  __int64 v80; // [rsp+A8h] [rbp-80h] BYREF
  __m128i v81; // [rsp+B0h] [rbp-78h] BYREF
  int v82; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v83; // [rsp+C8h] [rbp-60h]
  __m128i v84; // [rsp+D0h] [rbp-58h] BYREF
  unsigned __int64 v85; // [rsp+E8h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 24) == 0;
  v68 = a2;
  v85 = __readfsqword(0x28u);
  v5 = *(__int64 **)(a1 + 32);
  if ( !v4 )
  {
    v6 = a1;
    v77 = 0;
    v78 = 0;
    v7 = *v5;
    v67.m128i_i64[0] = v7;
    if ( v7 )
    {
      v67.m128i_i64[1] = v5[1];
      if ( v67.m128i_i64[1] )
      {
        v67.m128i_i64[1] = 0;
        v8 = *(_QWORD **)(v7 + 8);
        if ( (_QWORD *)v7 != v8 )
        {
          v9 = 0;
          while ( 1 )
          {
LABEL_6:
            v10 = *((_DWORD *)v8 + 6);
            v11 = v8 + 3;
            v12 = *(_QWORD *)(*(_QWORD *)(v6 + 24) + 8LL);
            if ( (signed int)v10 < *(_DWORD *)(v12 + 64) )
            {
              if ( v10 >= *(_DWORD *)(v12 + 64) )
              {
                if ( !under_debugger )
                  sub_383060(52719);
                BUG();
              }
              v13 = *(_QWORD *)(*(_QWORD *)(v12 + 528) + 8LL * v10);
              v14 = *(_QWORD *)(v13 + 48);
              if ( v14 )
                v15 = *(_QWORD *)(v14 + 24);
              else
                v15 = *(_QWORD *)(v13 + 32);
              v16 = *((_QWORD *)&v78 + 1);
              v66.m128i_i64[0] = (__int64)(v8 + 4);
              v17 = v78;
              if ( *((_QWORD *)&v78 + 1) < (unsigned __int64)(v78 + 1) )
              {
                v71 = v8 + 3;
                v70 = v15;
                v74 = &v77;
                v32 = qvector_reserve((__int64)&v77, 0, v78 + 1, 40);
                v33 = v70;
                v34 = *((_QWORD *)&v78 + 1);
                v35 = v77;
                *((_QWORD *)&v78 + 1) = v16;
                v36 = v71;
                v69 = v34;
                if ( (__int64)v78 - 1 >= 0 )
                {
                  v37 = v71;
                  v71 = v8;
                  v38 = v77;
                  v39 = v32;
                  v72 = v9;
                  v40 = v32;
                  v73 = v6;
                  v41 = v78 - 1;
                  do
                  {
                    v42 = *(_QWORD *)v38;
                    v43 = _mm_loadu_si128((const __m128i *)(v38 + 8));
                    *(_QWORD *)v38 = 0;
                    *(_QWORD *)(v38 + 16) = 0;
                    *(_QWORD *)v40 = v42;
                    *(__m128i *)(v40 + 8) = v43;
                    *(_QWORD *)(v40 + 24) = *(_QWORD *)(v38 + 24);
                    *(_DWORD *)(v40 + 32) = *(_DWORD *)(v38 + 32);
                    v44 = *(_QWORD *)v38;
                    if ( *(_QWORD *)v38 )
                    {
                      *(_QWORD *)(v38 + 8) = 0;
                      qfree(v44);
                    }
                    v38 += 40LL;
                    v40 += 40;
                  }
                  while ( v41-- != 0 );
                  v32 = v39;
                  v33 = v70;
                  v8 = v71;
                  v36 = v37;
                  v9 = v72;
                  v6 = v73;
                  v35 = v77;
                }
                v72 = v32;
                v71 = v36;
                v70 = v33;
                qfree(v35);
                a4 = v72;
                v15 = v70;
                v11 = v71;
                *((_QWORD *)&v78 + 1) = v69;
                v17 = v78;
                v77 = v72;
              }
              else
              {
                a4 = v77;
              }
              v18 = a4 + 40 * v17;
              *(_QWORD *)v18 = 0;
              *(_OWORD *)(v18 + 8) = 0;
              *(_DWORD *)(v18 + 32) = v10;
              *(_QWORD *)&v78 = v78 + 1;
              *(_QWORD *)(v18 + 24) = v15;
              if ( v66.m128i_i64[0] != v18 )
              {
                v19 = v11[2];
                if ( v19 > 1 )
                {
                  v51 = *(_QWORD *)v18;
                  v52 = v11[2];
                  v66.m128i_i64[0] = a4 + 40 * v17;
                  v53 = (const void *)v11[1];
                  v54 = (void *)qvector_reserve(v18, v51, v52, 1);
                  v55 = v66.m128i_i64[0];
                  *(_QWORD *)v66.m128i_i64[0] = v54;
                  *(_QWORD *)(v55 + 8) = v19;
                  memmove(v54, v53, v19 - 1);
                  *(_BYTE *)(*(_QWORD *)v66.m128i_i64[0] + v19 - 1) = 0;
                }
                else
                {
                  *(_QWORD *)(v18 + 8) = 0;
                }
              }
              goto LABEL_15;
            }
            v79 = *((_DWORD *)v8 + 6);
            v80 = 0;
            v81 = 0;
            sub_2AE320(&v80, (__int64)(v8 + 4), v12, a4);
            v21 = v80;
            v22 = _mm_load_si128(&v81);
            v75 = (const __m128i *)&v82;
            v82 = v79;
            v83 = v80;
            v84 = v22;
            if ( !v9 )
            {
              v56 = qalloc();
              v9 = v56;
              v23 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v56, (__m128i)(unsigned __int64)v56);
              if ( !v56 )
              {
                exception = __cxa_allocate_exception(8u);
                *exception = (char *)&`vtable for'std::bad_alloc + 16;
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'std::bad_alloc,
                  (void (*)(void *))&std::bad_alloc::~bad_alloc);
              }
              *(_QWORD *)(v56 + 48) = 0;
              *(_OWORD *)(v56 + 16) = 0;
              *(_OWORD *)(v56 + 32) = 0;
              *(__m128i *)(v56 + 8) = v23;
              *(_QWORD *)v56 = v56 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_22:
              v66 = v23;
              v24 = qalloc();
              v25 = _mm_load_si128(&v66);
              v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v24, (__m128i)(unsigned __int64)v24);
              if ( !v24 )
              {
                v65 = __cxa_allocate_exception(8u);
                *v65 = (char *)&`vtable for'std::bad_alloc + 16;
                __cxa_throw(
                  v65,
                  (struct type_info *)&`typeinfo for'std::bad_alloc,
                  (void (*)(void *))&std::bad_alloc::~bad_alloc);
              }
              *(_OWORD *)v24 = 0;
              v27 = v82;
              a4 = v9 & 0xFFFFFFFFFFFFFFFCLL;
              *(_OWORD *)(v24 + 16) = 0;
              *(_DWORD *)(v24 + 24) = v27;
              v28 = _mm_load_si128(&v84);
              v84 = 0;
              *(_QWORD *)(v24 + 32) = v83;
              *(__m128i *)(v24 + 40) = v28;
              v83 = 0;
              *(_QWORD *)v24 = v9 & 0xFFFFFFFFFFFFFFFCLL | 1;
              *(__m128i *)(v24 + 8) = v25;
              v29 = *(_QWORD *)v9;
              *(__m128i *)(v9 + 8) = v26;
              ++v67.m128i_i64[1];
              *(_QWORD *)v9 = v24 & 0xFFFFFFFFFFFFFFFCLL | v29 & 3;
              *(_QWORD *)v24 = v9 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v24 & 2LL;
              v21 = v83;
              goto LABEL_24;
            }
            v23 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)(unsigned __int64)v9);
            if ( !v67.m128i_i64[1] )
              goto LABEL_22;
            a4 = 1;
            v48 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCLL;
            if ( (*(_BYTE *)v48 & 2) != 0 )
            {
              v48 = v9;
              v49 = 1;
LABEL_48:
              v76.m128i_i64[0] = v9;
              v76.m128i_i64[1] = v67.m128i_i64[1];
              sub_2D04C0(&v76, (unsigned __int64 *)v48, v49, &v75);
              v9 = v76.m128i_i64[0];
              v21 = v83;
              v67.m128i_i64[1] = v76.m128i_i64[1];
              goto LABEL_24;
            }
            while ( 1 )
            {
              if ( *(_DWORD *)(v48 + 24) > v79 )
              {
                v50 = *(_BYTE **)(v48 + 8);
                a4 = 1;
                goto LABEL_52;
              }
              if ( *(_DWORD *)(v48 + 24) >= v79 )
                break;
              v50 = *(_BYTE **)(v48 + 16);
              a4 = 0;
LABEL_52:
              if ( (*v50 & 2) != 0 )
                goto LABEL_53;
              v48 = (unsigned __int64)v50;
            }
            if ( !v48 )
            {
LABEL_53:
              v49 = a4;
              goto LABEL_48;
            }
LABEL_24:
            if ( v21 )
            {
              v84.m128i_i64[0] = 0;
              qfree(v21);
            }
LABEL_15:
            if ( (*v8 & 2) != 0 )
            {
LABEL_18:
              if ( (_QWORD *)v67.m128i_i64[0] == v8 )
                goto LABEL_19;
            }
            else
            {
              v20 = (_QWORD *)v8[2];
              if ( (*(_BYTE *)v20 & 2) == 0 )
              {
                do
                {
                  v8 = v20;
                  v20 = (_QWORD *)v20[1];
                }
                while ( (*(_BYTE *)v20 & 2) == 0 );
                goto LABEL_18;
              }
              v30 = (_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFFCLL);
              v31 = *v30;
              if ( (*v30 & 2) == 0 )
              {
                while ( v8 == (_QWORD *)v30[2] )
                {
                  v8 = v30;
                  a4 = v31 & 0xFFFFFFFFFFFFFFFCLL;
                  v31 = *(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v31 & 2) != 0 )
                  {
                    v8 = (_QWORD *)a4;
                    if ( v67.m128i_i64[0] != a4 )
                      goto LABEL_6;
                    goto LABEL_19;
                  }
                  v30 = (_QWORD *)a4;
                }
              }
              v8 = v30;
              if ( (_QWORD *)v67.m128i_i64[0] == v30 )
              {
LABEL_19:
                v67.m128i_i64[0] = v9;
                goto LABEL_43;
              }
            }
          }
        }
      }
      v67.m128i_i64[0] = 0;
    }
    else
    {
      v67 = 0u;
    }
LABEL_43:
    v76 = v67;
    sub_2B2520(v68, v76.m128i_i64);
    if ( (_QWORD)v78 )
    {
      sub_332160(v68, v78);
      v46 = v77 + 40 * v78;
      if ( v77 != v46 )
      {
        v57 = v77;
        do
        {
          v58 = v68;
          sub_332160(v68, *(unsigned int *)(v57 + 32));
          sub_332420(v58, *(_QWORD *)(v57 + 24) - *(_QWORD *)(v6 + 8));
          v59 = s1;
          if ( *(_QWORD *)(v57 + 8) )
            v59 = *(const char **)v57;
          sub_3322E0(v68, v59);
          v57 += 40LL;
        }
        while ( v46 != v57 );
        v46 = v77;
      }
      if ( !v46 )
        goto LABEL_45;
      v60 = v78;
      if ( (_QWORD)v78 )
      {
        v61 = 0;
        do
        {
          v62 = (__int64 *)(v46 + 40 * v61);
          v63 = *v62;
          if ( *v62 )
          {
            v62[1] = 0;
            qfree(v63);
            v46 = v77;
          }
          ++v61;
        }
        while ( v60 != v61 );
      }
    }
    else
    {
      v46 = v77;
      if ( !v77 )
      {
LABEL_45:
        sub_2BBB30(v76.m128i_i64);
        return v85 - __readfsqword(0x28u);
      }
    }
    *(_QWORD *)&v78 = 0;
    qfree(v46);
    goto LABEL_45;
  }
  return sub_2B2520(v68, v5);
}
