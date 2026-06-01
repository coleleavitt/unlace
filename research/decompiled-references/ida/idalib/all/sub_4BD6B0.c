__int64 __fastcall sub_4BD6B0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rsi
  char *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rsi
  void *v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  char *v12; // rdi
  int place_class_id; // edx
  __int64 place_class; // rax
  __m128i si128; // xmm0
  __int64 v16; // r14
  int v17; // ebx
  const char *v18; // r8
  _OWORD *v19; // rsi
  __int64 v20; // rdx
  char *v21; // rsi
  char *v22; // rdi
  char *v23; // rcx
  __m128 v24; // xmm0
  void *v25; // rdx
  __m128i v26; // xmm1
  char *v27; // rdx
  __int64 v28; // rbp
  __int64 v29; // rbx
  char *v30; // rax
  void *v31; // rdi
  __int64 v33; // rdx
  char *v34; // rsi
  char *v35; // rdi
  int v36; // [rsp+14h] [rbp-124h]
  __int64 v38; // [rsp+38h] [rbp-100h] BYREF
  void *v39; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v40; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v41; // [rsp+50h] [rbp-E8h] BYREF
  void *v42; // [rsp+58h] [rbp-E0h] BYREF
  void *v43; // [rsp+60h] [rbp-D8h] BYREF
  __m128i v44; // [rsp+68h] [rbp-D0h] BYREF
  char *s1; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v46; // [rsp+88h] [rbp-B0h]
  void *ptr; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v48; // [rsp+A8h] [rbp-90h]
  __m128i v49; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v50; // [rsp+D0h] [rbp-68h]
  __int64 v51; // [rsp+D8h] [rbp-60h]
  __int64 v52; // [rsp+E0h] [rbp-58h]
  void *v53; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v54; // [rsp+F8h] [rbp-40h]

  v3 = *a1;
  v54 = __readfsqword(0x28u);
  v43 = nullptr;
  v44 = 0;
  sub_7BEFF0(&v38, v3, "$ BMARKS ", 0, 0);
  if ( v38 != -1 )
  {
    v4 = *a1;
    v46 = 0;
    s1 = nullptr;
    if ( sub_7BF580(&v38, v4, &s1, 72) >= 0 )
    {
      do
      {
        v5 = (char *)haystack;
        if ( (_QWORD)v46 )
          v5 = s1;
        v6 = sub_7BF490(&v38, *a1, v5, 72);
        v7 = *a1;
        v40 = v6;
        v8 = (void *)v6;
        sub_7BF4E0(&v38, v7, v5, &v40, 8, 72);
        v39 = v8;
        if ( (unsigned __int8)sub_7BEFD0(&v39, *a1, &v40, 0, 65) )
        {
          v9 = *a1;
          v41 = v40;
          sub_7BE7C0(&v39, v9, 0, &v41, 8, 65);
        }
        v10 = *a1;
        v42 = v39;
        v40 = sub_7BE710(&v42, v10, 1, 65);
        v49.m128i_i64[0] = v40;
        v11 = *a1;
        ptr = v39;
        sub_7BE7C0(&ptr, v11, 1, &v49, 8, 65);
        v12 = (char *)haystack;
        if ( (_QWORD)v46 )
          v12 = s1;
        place_class_id = get_place_class_id(v12);
        if ( place_class_id == -1 || (place_class = get_place_class(nullptr, nullptr, place_class_id)) == 0 )
        {
          v33 = v44.m128i_i64[0];
          v34 = (char *)v43;
          if ( v44.m128i_i64[1] < (unsigned __int64)(v44.m128i_i64[0] + 1) )
          {
            v43 = (void *)qvector_reserve(&v43, v43, v44.m128i_i64[0] + 1, 24);
            v33 = v44.m128i_i64[0];
            v34 = (char *)v43;
          }
          v35 = &v34[24 * v33];
          *(_QWORD *)v35 = 0;
          *(_OWORD *)(v35 + 8) = 0;
          ++v44.m128i_i64[0];
          sub_35A790((char **)v35);
        }
        else
        {
          v50 = 0;
          si128.m128i_i64[0] = 0;
          v51 = -1;
          v52 = 0;
          v53 = nullptr;
          v49 = 0;
          v53 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)place_class + 16LL))(place_class);
          if ( (_QWORD)v46 && !strcmp(s1, "tiplace_t") )
            v16 = sub_55C400(qword_2CCB598);
          else
            v16 = 0;
          v36 = sub_4B8130(a1, (__int64)&v49, v16, 0.0);
          v17 = 0;
          if ( v36 )
          {
            do
            {
              while ( 1 )
              {
                LODWORD(v42) = v17;
                ptr = nullptr;
                v48 = 0;
                if ( (unsigned __int8)sub_4B92B0(a1, (__int64)&v49, (__int64)&ptr, (unsigned int *)&v42, v16, 0.0) )
                {
                  if ( (unsigned __int64)v48 > 1 )
                    goto LABEL_16;
                  v19 = ptr;
                  if ( *((_QWORD *)&v48 + 1) <= 0x10u )
                  {
                    ptr = (void *)qvector_reserve(&ptr, ptr, 17, 1);
                    v19 = ptr;
                  }
                  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7A20);
                  *(_QWORD *)&v48 = 17;
                  *v19 = si128;
                  *((_BYTE *)ptr + 16) = 0;
                  if ( (_QWORD)v48 )
LABEL_16:
                    v18 = (const char *)ptr;
                  else
                    v18 = haystack;
                  sub_4BAD40(a1, &v49, (unsigned int)v42, 0, v18, v16, *(double *)si128.m128i_i64);
                }
                v20 = v44.m128i_i64[0];
                v21 = (char *)v43;
                if ( v44.m128i_i64[1] < (unsigned __int64)(v44.m128i_i64[0] + 1) )
                {
                  v43 = (void *)qvector_reserve(&v43, v43, v44.m128i_i64[0] + 1, 24);
                  v20 = v44.m128i_i64[0];
                  v21 = (char *)v43;
                }
                v22 = &v21[24 * v20];
                *(_QWORD *)v22 = 0;
                *(_OWORD *)(v22 + 8) = 0;
                ++v44.m128i_i64[0];
                sub_35A790((char **)v22);
                if ( ptr )
                  break;
                if ( v36 == ++v17 )
                  goto LABEL_29;
              }
              *(_QWORD *)&v48 = 0;
              ++v17;
              qfree(ptr);
            }
            while ( v36 != v17 );
          }
LABEL_29:
          if ( v53 )
            qfree(v53);
        }
        v23 = (char *)haystack;
        if ( (_QWORD)v46 )
          v23 = s1;
      }
      while ( sub_7BF600(&v38, *a1, &s1, v23, 72) >= 0 );
    }
    if ( v44.m128i_i64[0] )
    {
      v24 = _mm_loadh_ps((const double *)&v44.m128i_i64[1]);
      v25 = *(void **)a2;
      v26 = _mm_loadu_si128((const __m128i *)(a2 + 8));
      *(_QWORD *)a2 = v43;
      *(__m128 *)(a2 + 8) = v24;
      v43 = v25;
      v44 = v26;
    }
    if ( s1 )
    {
      *(_QWORD *)&v46 = 0;
      qfree(s1);
    }
  }
  v27 = (char *)v43;
  if ( v43 )
  {
    v28 = v44.m128i_i64[0];
    if ( v44.m128i_i64[0] )
    {
      v29 = 0;
      do
      {
        v30 = &v27[24 * v29];
        v31 = *(void **)v30;
        if ( *(_QWORD *)v30 )
        {
          *((_QWORD *)v30 + 1) = 0;
          qfree(v31);
          v27 = (char *)v43;
        }
        ++v29;
      }
      while ( v28 != v29 );
    }
    v44.m128i_i64[0] = 0;
    qfree(v27);
  }
  return 1;
}
