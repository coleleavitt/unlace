void __fastcall sub_781420(const __m128i *a1, unsigned int a2, __int64 a3, int a4)
{
  char **exception; // rbp
  char **v5; // r13
  __int64 v8; // rbx
  unsigned int v9; // r13d
  _QWORD *v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 *v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  __m128i *v17; // rbx
  __int64 v18; // rbp
  _DWORD *v19; // rax
  unsigned int v20; // edx
  size_t v21; // rsi
  unsigned int v22; // r15d
  unsigned int *v23; // rax
  unsigned int v24; // eax
  __int64 v25; // r14
  __int64 v26; // rdx
  __m128i *v27; // rax
  __m128i v28; // xmm0
  void (__fastcall ***v29)(void *); // r13
  _QWORD *v30; // rax
  __int64 v31; // rax
  __m128 *v32; // r12
  unsigned int v33; // eax
  __int64 v34; // rdx
  int v35; // eax
  __m128 *v36; // rdx
  unsigned __int64 v37; // rbx
  __m128 v38; // xmm0
  unsigned int v39; // r13d
  unsigned int v40; // edx
  __int64 v41; // rax
  _QWORD *v42; // r15
  _DWORD *v43; // r14
  __int64 v44; // r8
  __int64 v45; // rdx
  _QWORD *v46; // rdi
  _QWORD *i; // rax
  __int64 v48; // rsi
  __int64 v49; // rsi
  __int64 v50; // rsi
  _QWORD *v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rdi
  _QWORD *v56; // rax
  unsigned __int64 v57; // [rsp+0h] [rbp-78h] BYREF
  _QWORD *v58; // [rsp+8h] [rbp-70h]
  __int64 v59[11]; // [rsp+20h] [rbp-58h] BYREF

  v8 = a2;
  v9 = a2 + 1;
  LODWORD(v57) = a4;
  v10 = (_QWORD *)a1[6].m128i_i64[0];
  if ( v10 )
  {
    v11 = *((unsigned int *)v10 - 1);
    if ( (unsigned int)v11 >= v9 )
      goto LABEL_3;
  }
  else
  {
    if ( a2 == -1 )
      goto LABEL_3;
    v11 = 0;
    v30 = (_QWORD *)sub_186B270(0x18u);
    v10 = v30 + 1;
    *v30 = 2;
    a1[6].m128i_i64[0] = (__int64)(v30 + 1);
  }
  while ( 1 )
  {
    v24 = *((_DWORD *)v10 - 2);
    if ( v24 >= v9 )
      break;
    v20 = (3 * v24 + 1) >> 1;
    v21 = 8 * v20 + 8;
    v22 = v20;
    if ( 8 * v24 + 8 >= (unsigned int)v21 || v24 >= v20 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v59, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v59);
      sub_233E40((__int64)v59);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v23 = (unsigned int *)sub_186B300(v10 - 1, v21);
    v10 = v23 + 2;
    *v23 = v22;
    a1[6].m128i_i64[0] = (__int64)(v23 + 2);
  }
  v25 = 8 * v11;
  *((_DWORD *)v10 - 1) = v9;
  v26 = 8LL * v9;
  if ( v25 != v26 )
  {
    v58 = v10;
    memset(&v10[(unsigned __int64)v25 / 8], 0, v26 - v25);
    v10 = v58;
  }
LABEL_3:
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v12 = v8;
  v13 = &v10[v12];
  v14 = *v13;
  if ( *v13 )
  {
    v15 = a1[5].m128i_i64[1];
    v16 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v16 )
    {
      sub_15D7BC0(v15, v14);
      v13 = (__int64 *)(a1[6].m128i_i64[0] + v12 * 8);
    }
  }
  v16 = (_BYTE)v57 == 0;
  *v13 = a3;
  if ( !v16 )
  {
    v17 = (__m128i *)a1[5].m128i_i64[0];
    if ( !v17 )
    {
      v27 = (__m128i *)sub_186B270(0x50u);
      v28 = _mm_loadl_epi64(a1 + 2);
      v29 = (void (__fastcall ***)(void *))a1[5].m128i_i64[0];
      v17 = v27;
      v27[1].m128i_i64[0] = 0;
      v27[1].m128i_i8[8] = 1;
      v27[3].m128i_i64[0] = 8;
      v27->m128i_i64[0] = (__int64)&off_1C60CE8;
      v27[4].m128i_i64[1] = 0;
      strcpy(&v27[3].m128i_i8[8], "sat2goal");
      v27->m128i_i32[2] = 1;
      v27[2] = _mm_unpacklo_epi64(v28, (__m128i)(unsigned __int64)&v27[3].m128i_u64[1]);
      if ( v29 )
      {
        v16 = (*((_DWORD *)v29 + 2))-- == 1;
        if ( v16 )
        {
          (**v29)(v29);
          sub_186B220(v29);
        }
      }
      a1[5].m128i_i64[0] = (__int64)v17;
    }
    if ( !*(_WORD *)(a3 + 4) && !*(_DWORD *)(a3 + 24) )
    {
      v18 = *(_QWORD *)(a3 + 16);
      v19 = *(_DWORD **)(v18 + 24);
      if ( !v19 || *v19 == -1 )
      {
        v31 = v17[2].m128i_i64[0];
        v32 = (__m128 *)v17[4].m128i_i64[1];
        ++*(_DWORD *)(v18 + 8);
        v57 = v31;
        if ( v32 )
        {
          v33 = v32[-1].m128_u32[3];
          if ( v33 == v32[-1].m128_i32[2] )
          {
            v39 = (3 * v33 + 1) >> 1;
            v40 = 40 * v39 + 8;
            if ( 40 * v33 + 8 >= v40 || v33 >= v39 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v59, "Overflow encountered when expanding vector");
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, v59);
              sub_233E40((__int64)v59);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v41 = sub_186B270(v40);
            v42 = (_QWORD *)v17[4].m128i_i64[1];
            v43 = (_DWORD *)v41;
            v32 = (__m128 *)(v41 + 8);
            if ( v42 )
            {
              v44 = *((unsigned int *)v42 - 1);
              v45 = v41 + 8;
              *(_DWORD *)(v41 + 4) = v44;
              v46 = &v42[5 * v44];
              for ( i = v42; v46 != i; *(_DWORD *)(v45 - 8) = *((_DWORD *)i - 2) )
              {
                v48 = i[1];
                i += 5;
                v45 += 40;
                *(_QWORD *)(v45 - 32) = v48;
                v49 = *(i - 5);
                *(i - 5) = 0;
                *(_QWORD *)(v45 - 40) = v49;
                *(_QWORD *)(v45 - 16) = *(i - 2);
                v50 = *(i - 3);
                *(i - 3) = 0;
                *(_QWORD *)(v45 - 24) = v50;
              }
              if ( (_DWORD)v44 )
              {
                v51 = &v42[5 * v44];
                do
                {
                  v54 = v42[2];
                  if ( v54 )
                  {
                    v55 = v42[3];
                    v16 = (*(_DWORD *)(v54 + 8))-- == 1;
                    if ( v16 )
                    {
                      v58 = v51;
                      sub_15D7BC0(v55, v54);
                      v51 = v58;
                    }
                  }
                  v52 = *v42;
                  if ( *v42 )
                  {
                    v53 = v42[1];
                    v16 = (*(_DWORD *)(v52 + 8))-- == 1;
                    if ( v16 )
                    {
                      v58 = v51;
                      sub_15D7BC0(v53, v52);
                      v51 = v58;
                    }
                  }
                  v42 += 5;
                }
                while ( v42 != v51 );
                v42 = (_QWORD *)v17[4].m128i_i64[1];
              }
              sub_186B220(v42 - 1);
              v36 = (__m128 *)((char *)v32 + 40 * (unsigned int)v43[1]);
              v35 = v43[1] + 1;
            }
            else
            {
              *(_DWORD *)(v41 + 4) = 0;
              v36 = (__m128 *)(v41 + 8);
              v35 = 1;
            }
            v17[4].m128i_i64[1] = (__int64)v32;
            *v43 = v39;
          }
          else
          {
            v34 = v33;
            v35 = v33 + 1;
            v36 = (__m128 *)((char *)v32 + 40 * v34);
          }
        }
        else
        {
          v56 = (_QWORD *)sub_186B270(0x58u);
          v32 = (__m128 *)(v56 + 1);
          *v56 = 2;
          v35 = 1;
          v17[4].m128i_i64[1] = (__int64)v32;
          v36 = v32;
        }
        v37 = v57;
        v36[1].m128_u64[0] = 0;
        v38 = _mm_loadh_ps((const double *)&v57);
        v36[2].m128_i32[0] = 0;
        v36[1].m128_u64[1] = v37;
        *v36 = v38;
        v32[-1].m128_i32[3] = v35;
      }
    }
  }
}

