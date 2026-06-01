__int64 __fastcall sub_3C4E80(__m128 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __m128 a6)
{
  __int64 v6; // rax
  int v8; // eax
  __m128 *v9; // r12
  unsigned int v11; // r13d
  __m128i i; // xmm1
  __int64 v13; // rdi
  int v14; // eax
  __m128 *v15; // rdi
  unsigned int v16; // eax
  unsigned int v17; // ebp
  size_t v18; // rdi
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  _DWORD *v21; // r14
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 *v28; // rdx
  __int64 v29; // rbp
  __int64 v30; // r14
  __int16 v31; // ax
  int v32; // eax
  _QWORD *v33; // rax
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rax
  char **exception; // rbx
  __m128 v41; // [rsp+0h] [rbp-88h] BYREF
  __int64 v42; // [rsp+18h] [rbp-70h]
  __int64 v43; // [rsp+20h] [rbp-68h]
  __m128 *v44; // [rsp+28h] [rbp-60h]
  __int64 v45; // [rsp+30h] [rbp-58h] BYREF
  int v46; // [rsp+38h] [rbp-50h]

  v6 = *(_QWORD *)(a2 + 16);
  v44 = (__m128 *)a4;
  v43 = a5;
  if ( *(_QWORD *)(a3 + 16) != v6 )
    return 0;
  v8 = *(_DWORD *)(a2 + 24);
  if ( v8 != *(_DWORD *)(a3 + 24) )
    return 0;
  v9 = (__m128 *)a1->m128_u64[1];
  if ( v9 )
  {
    v9[-1].m128_i32[3] = 0;
    if ( *(_DWORD *)(a2 + 24) )
    {
      v11 = 0;
      for ( i = (__m128i)_mm_loadh_ps((const double *)(a3 + 32));
            ;
            i = (__m128i)_mm_loadh_ps((const double *)(a3 + 8LL * v11 + 32)) )
      {
        v16 = v9[-1].m128_u32[3];
        if ( v16 == v9[-1].m128_i32[2] )
        {
          v17 = (3 * v16 + 1) >> 1;
          v18 = 16 * v17 + 8;
          if ( 16 * v16 + 8 >= (unsigned int)v18 || v16 >= v17 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_3BCB70(&v45, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v45);
            sub_233E40((__int64)&v45);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v42 = a3;
          v41 = (__m128)i;
          v19 = sub_186B270(v18);
          v20 = a1->m128_u64[1];
          i = _mm_load_si128((const __m128i *)&v41);
          a3 = v42;
          v21 = (_DWORD *)v19;
          v9 = (__m128 *)(v19 + 8);
          if ( v20 )
          {
            v22 = *(unsigned int *)(v20 - 4);
            *(_DWORD *)(v19 + 4) = v22;
            v23 = 0;
            v24 = 16 * v22;
            if ( v24 )
            {
              do
              {
                a6 = (__m128)_mm_loadu_si128((const __m128i *)(v20 + v23));
                *(__m128 *)&v21[v23 / 4 + 2] = a6;
                v23 += 16LL;
              }
              while ( v23 != v24 );
            }
            v42 = a3;
            v41 = (__m128)i;
            sub_186B220((void *)(v20 - 8));
            i = _mm_load_si128((const __m128i *)&v41);
            a3 = v42;
            v15 = &v9[v21[1]];
            v14 = v21[1] + 1;
          }
          else
          {
            *(_DWORD *)(v19 + 4) = 0;
            v15 = (__m128 *)(v19 + 8);
            v14 = 1;
          }
          a1->m128_u64[1] = (unsigned __int64)v9;
          *v21 = v17;
        }
        else
        {
          v13 = v16;
          v14 = v16 + 1;
          v15 = &v9[v13];
        }
LABEL_8:
        *v15 = (__m128)i;
        ++v11;
        v9[-1].m128_i32[3] = v14;
        if ( v11 >= *(_DWORD *)(a2 + 24) )
          break;
      }
      while ( 1 )
      {
        if ( !v14 )
          return 1;
        v27 = (unsigned int)(v14 - 1);
        v28 = (__int64 *)&v9[v27];
        v29 = v28[1];
        v30 = *v28;
        v9[-1].m128_i32[3] = v27;
        if ( *(_WORD *)(v29 + 4) )
        {
          if ( (unsigned int)sub_180B130(v15) > 1 )
          {
            if ( (unsigned __int8)sub_186A530(*(double *)a6.m128_u64) )
            {
              sub_186A4C0(*(double *)a6.m128_u64);
              v37 = sub_180B150(v15, a2);
              sub_3BCC00(v37, "term is not app\n");
              sub_186A500(v37, "term is not app\n");
            }
            else
            {
              v38 = sub_180B150(v15, a2);
              sub_3BCC00(v38, "term is not app\n");
            }
          }
          return 0;
        }
        v31 = *(_WORD *)(v30 + 4);
        if ( v31 == 1 )
        {
          v15 = v44;
          a2 = *(unsigned int *)(v30 + 16);
          v34 = v44->m128_u64[1] + 24 * a2;
          if ( *(_DWORD *)(v34 + 16) != v44[1].m128_i32[2] )
          {
            v45 = v29;
            v46 = 1;
            sub_3C4C80((__int64)v44, a2, 0, &v45);
            goto LABEL_21;
          }
          v15 = a1;
          a2 = *(_QWORD *)v34;
          v35 = sub_3BDF40(a1, *(_QWORD *)v34, v29);
          if ( v35 != -1 )
          {
            if ( v35 == 1 )
              goto LABEL_21;
            v25 = a1->m128_u64[0];
            goto LABEL_18;
          }
          v31 = *(_WORD *)(v30 + 4);
        }
        if ( v31 )
        {
          if ( (unsigned int)sub_180B130(v15) > 1 )
          {
            if ( (unsigned __int8)sub_186A530(*(double *)a6.m128_u64) )
            {
              sub_186A4C0(*(double *)a6.m128_u64);
              v36 = sub_180B150(v15, a2);
              sub_3BCC00(v36, "pattern is not app\n");
              sub_186A500(v36, "pattern is not app\n");
            }
            else
            {
              v39 = sub_180B150(v15, a2);
              sub_3BCC00(v39, "pattern is not app\n");
            }
          }
          return 0;
        }
        a2 = v30;
        v15 = a1;
        v32 = sub_3BDF40(a1, v30, v29);
        if ( v32 == -1 )
          return 0;
        if ( v32 != 1 )
        {
          v25 = a1->m128_u64[0];
LABEL_18:
          v26 = sub_15E1B70(v25);
          v45 = v26;
          if ( v26 )
            ++*(_DWORD *)(v26 + 8);
          a2 = (__int64)&v45;
          v15 = (__m128 *)(v43 + 8);
          sub_3BD3D0((_QWORD *)(v43 + 8), &v45);
        }
LABEL_21:
        v9 = (__m128 *)a1->m128_u64[1];
        if ( !v9 )
          return 1;
        v14 = v9[-1].m128_i32[3];
      }
    }
  }
  else if ( v8 )
  {
    v42 = a3;
    v11 = 0;
    v41 = _mm_loadh_ps((const double *)(a3 + 32));
    v33 = (_QWORD *)sub_186B270(0x28u);
    i = _mm_load_si128((const __m128i *)&v41);
    a3 = v42;
    v9 = (__m128 *)(v33 + 1);
    *v33 = 2;
    v14 = 1;
    a1->m128_u64[1] = (unsigned __int64)v9;
    v15 = v9;
    goto LABEL_8;
  }
  return 1;
}

