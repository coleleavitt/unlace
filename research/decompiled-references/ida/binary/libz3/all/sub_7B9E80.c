void __fastcall sub_7B9E80(__m128i a1, __int64 a2, __int64 a3, __int64 **a4)
{
  char **v4; // rbp
  __int64 v5; // rdx
  char **exception; // rbp
  __int64 v7; // rdx
  __int64 *v8; // rbp
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r13
  int *v15; // r12
  int v16; // r15d
  int *v17; // r13
  _DWORD *i; // rax
  __int64 v19; // rax
  unsigned int v20; // r8d
  size_t v21; // rsi
  unsigned int v22; // r14d
  unsigned int *v23; // rax
  __int64 v24; // rax
  unsigned int *v25; // rax
  __int64 v26; // r9
  _QWORD *v27; // r15
  unsigned int *v28; // r13
  __int64 v29; // r12
  __m128i v30; // xmm0
  __m128i v31; // xmm1
  unsigned int *v32; // r12
  unsigned int *v33; // r14
  _QWORD *v34; // rax
  __int64 v35; // rax
  unsigned int v36; // ebx
  size_t v37; // rdi
  __int64 v38; // rax
  _QWORD *v39; // rdi
  _DWORD *v40; // rsi
  __int64 v41; // r9
  unsigned __int64 v42; // rax
  __int64 v43; // r9
  __int64 v44; // rax
  _QWORD *v45; // rax
  unsigned int *v46; // r8
  __int64 v47; // rax
  _QWORD *v48; // rax
  unsigned int v49; // [rsp+0h] [rbp-88h]
  unsigned int v50; // [rsp+8h] [rbp-80h]
  __int64 *v51; // [rsp+10h] [rbp-78h]
  _QWORD *v53; // [rsp+20h] [rbp-68h] BYREF
  int v54[2]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v55[11]; // [rsp+30h] [rbp-58h] BYREF

  v8 = *a4;
  v53 = nullptr;
  *(_QWORD *)v54 = 0;
  if ( v8 )
  {
    v51 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 != v51 )
    {
      do
      {
        while ( 1 )
        {
          v9 = *v8;
          v10 = *(_DWORD *)(*v8 + 8);
          if ( v10 )
            break;
          v11 = sub_828140(v9);
          v12 = (__int64)v53;
          v13 = v11;
          if ( v53 )
          {
            *((_DWORD *)v53 - 1) = 0;
            v14 = 4LL * *(unsigned int *)(v11 + 32);
            if ( v14 )
            {
              v15 = (int *)(v11 + 64);
              v16 = *(_DWORD *)(v11 + 64);
              v17 = (int *)(v11 + 64 + v14);
              goto LABEL_14;
            }
          }
          else
          {
            v15 = (int *)(v11 + 64);
            v44 = *(unsigned int *)(v11 + 32);
            v17 = &v15[v44];
            if ( v44 * 4 )
            {
              v16 = *(_DWORD *)(v13 + 64);
              v45 = (_QWORD *)sub_186B270(0x10u);
              v12 = (__int64)(v45 + 1);
              v53 = v45 + 1;
              *v45 = 2;
              for ( i = v45 + 1; ; i = (_DWORD *)(v12 + 4 * v19) )
              {
                ++v15;
                *i = v16;
                ++*(_DWORD *)(v12 - 4);
                if ( v17 == v15 )
                  break;
                while ( 1 )
                {
                  v16 = *v15;
LABEL_14:
                  v19 = *(unsigned int *)(v12 - 4);
                  if ( (_DWORD)v19 != *(_DWORD *)(v12 - 8) )
                    break;
                  v20 = (unsigned int)(3 * v19 + 1) >> 1;
                  v21 = 4 * v20 + 8;
                  v22 = v20;
                  if ( 4 * (int)v19 + 8 >= (unsigned int)v21 || (unsigned int)v19 >= v20 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_113C8C(v55, "Overflow encountered when expanding vector", v7);
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v55);
                    sub_233E40((__int64)v55);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v23 = (unsigned int *)sub_186B300((void *)(v12 - 8), v21);
                  v12 = (__int64)(v23 + 2);
                  *v23 = v22;
                  v24 = v23[1];
                  ++v15;
                  v53 = (_QWORD *)v12;
                  *(_DWORD *)(v12 + 4 * v24) = v16;
                  ++*(_DWORD *)(v12 - 4);
                  if ( v17 == v15 )
                    goto LABEL_18;
                }
              }
            }
          }
LABEL_18:
          sub_7B8AC0(
            a3,
            *(_DWORD *)(v13 + 16),
            (__int64 *)&v53,
            *(_DWORD *)(v13 + 60),
            *(unsigned __int8 *)(v13 + 48),
            a1);
          if ( v51 == ++v8 )
            goto LABEL_19;
        }
        if ( v10 != 1 )
        {
          sub_1872CE0("");
          sub_1873130(114, 3096);
        }
        v25 = (unsigned int *)sub_81AF20(v9);
        v27 = *(_QWORD **)v54;
        v28 = v25;
        if ( *(_QWORD *)v54 )
        {
          *(_DWORD *)(*(_QWORD *)v54 - 4LL) = 0;
          v29 = 2LL * v25[8];
          if ( v29 * 4 )
          {
            v30 = _mm_cvtsi32_si128(v25[19]);
            v31 = _mm_cvtsi32_si128(v25[20]);
            v32 = &v25[v29 + 19];
            v33 = v25 + 19;
            goto LABEL_30;
          }
        }
        else
        {
          v46 = v25 + 19;
          v47 = 2LL * v25[8];
          v32 = &v46[v47];
          if ( v47 * 4 )
          {
            v33 = v46;
            v50 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(v28[19]));
            v49 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(v46[1]));
            v48 = (_QWORD *)sub_186B270(0x18u);
            v27 = v48 + 1;
            v31 = _mm_cvtsi32_si128(v49);
            *(_QWORD *)v54 = v48 + 1;
            v30 = _mm_cvtsi32_si128(v50);
            *v48 = 2;
            v34 = v48 + 1;
            while ( 1 )
            {
              a1 = _mm_unpacklo_epi32(v30, v31);
              v33 += 2;
              *v34 = a1.m128i_i64[0];
              ++*((_DWORD *)v27 - 1);
              if ( v32 == v33 )
                break;
              v30 = _mm_cvtsi32_si128(*v33);
              v31 = _mm_cvtsi32_si128(v33[1]);
LABEL_30:
              v35 = *((unsigned int *)v27 - 1);
              if ( (_DWORD)v35 == *((_DWORD *)v27 - 2) )
              {
                v36 = (unsigned int)(3 * v35 + 1) >> 1;
                v37 = 8 * v36 + 8;
                if ( 8 * (int)v35 + 8 >= (unsigned int)v37 || (unsigned int)v35 >= v36 )
                {
                  v4 = (char **)__cxa_allocate_exception(0x28u);
                  sub_113C8C(v55, "Overflow encountered when expanding vector", v5);
                  *v4 = (char *)off_1C63128;
                  sub_2333C0(v4 + 1, v55);
                  sub_233E40((__int64)v55);
                  __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v38 = sub_186B270(v37);
                v39 = *(_QWORD **)v54;
                v31 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v31));
                v40 = (_DWORD *)v38;
                v27 = (_QWORD *)(v38 + 8);
                v30 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v30));
                if ( *(_QWORD *)v54 )
                {
                  v41 = *(unsigned int *)(*(_QWORD *)v54 - 4LL);
                  *(_DWORD *)(v38 + 4) = v41;
                  v42 = 0;
                  v43 = 8 * v41;
                  if ( v43 )
                  {
                    do
                    {
                      *(_QWORD *)&v40[v42 / 4 + 2] = v39[v42 / 8];
                      v42 += 8LL;
                    }
                    while ( v43 != v42 );
                  }
                  sub_186B220(v39 - 1);
                  v31 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v31));
                  v30 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v30));
                  v34 = &v27[v40[1]];
                }
                else
                {
                  *(_DWORD *)(v38 + 4) = 0;
                  v34 = (_QWORD *)(v38 + 8);
                }
                *(_QWORD *)v54 = v27;
                *v40 = v36;
              }
              else
              {
                v34 = &v27[v35];
              }
            }
          }
        }
        sub_7B8DC0(a3, v28[4], (int **)v54, v28[15], *((_BYTE *)v28 + 48), v26, a1);
        ++v8;
      }
      while ( v51 != v8 );
LABEL_19:
      if ( *(_QWORD *)v54 )
        sub_186B220((void *)(*(_QWORD *)v54 - 8LL));
      if ( v53 )
        sub_186B220(v53 - 1);
    }
  }
}

