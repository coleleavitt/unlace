__m128i *__fastcall sub_673C60(__int64 a1)
{
  __m128i *v1; // rax
  __m128i v2; // xmm0
  __int64 v3; // rdi
  __m128i *v4; // rbp
  __int64 v5; // rax
  _QWORD *v6; // r14
  __int64 v7; // r12
  __int64 v8; // rbx
  __m128 *v9; // r13
  _QWORD *v10; // rax
  int v11; // eax
  __m128 *v12; // rdx
  unsigned __int64 v13; // rdi
  __m128 v14; // xmm0
  _QWORD *v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 *v22; // rbx
  __int64 v23; // r12
  __int64 v24; // rsi
  __int64 *v25; // rax
  unsigned int v27; // r8d
  size_t v28; // rdi
  __int64 v29; // rax
  _QWORD *v30; // r15
  int v31; // r8d
  _DWORD *v32; // r9
  __int64 v33; // r10
  __int64 v34; // rdx
  _QWORD *v35; // rdi
  _QWORD *i; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 *v40; // rbx
  __int64 *v41; // rdx
  _DWORD *v42; // r15
  __int64 *v43; // rbp
  __int64 v44; // rsi
  __int64 v45; // rdi
  bool v46; // zf
  __int64 v47; // rsi
  __int64 v48; // rdi
  char **exception; // r13
  __int64 v50; // rdx
  __int64 v51; // [rsp+0h] [rbp-88h]
  __int64 v52; // [rsp+8h] [rbp-80h] BYREF
  __int64 v53; // [rsp+10h] [rbp-78h]
  __int64 v54; // [rsp+18h] [rbp-70h]
  _DWORD *v55; // [rsp+20h] [rbp-68h]
  __m128i *v56; // [rsp+28h] [rbp-60h]
  __int64 v57[11]; // [rsp+30h] [rbp-58h] BYREF

  v53 = a1 + 136;
  if ( !*(_DWORD *)(sub_14CD4E0(a1 + 136) + 12) && !*(_DWORD *)(sub_14CD4C0(v53) + 12) )
    return nullptr;
  v1 = (__m128i *)sub_186B270(0x50u);
  v2 = _mm_loadl_epi64((const __m128i *)(a1 + 120));
  v3 = v53;
  v1->m128i_i32[2] = 0;
  v4 = v1;
  v1[1].m128i_i64[0] = 0;
  v1[1].m128i_i8[8] = 1;
  strcpy(&v1[3].m128i_i8[8], "enum2bv");
  v1->m128i_i64[0] = (__int64)&off_1C60CE8;
  v1[3].m128i_i64[0] = 7;
  v1[4].m128i_i64[1] = 0;
  v1[2] = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)&v1[3].m128i_u64[1]);
  v5 = sub_14CD4C0(v3);
  v6 = *(_QWORD **)v5;
  v7 = *(_QWORD *)v5 + 16LL * *(unsigned int *)(v5 + 8);
  if ( *(_QWORD *)v5 != v7 )
  {
    while ( *v6 <= 1u )
    {
      v6 += 2;
      if ( (_QWORD *)v7 == v6 )
        goto LABEL_21;
    }
    if ( (_QWORD *)v7 != v6 )
    {
      v8 = v6[1];
      v9 = (__m128 *)v4[4].m128i_i64[1];
      v52 = v4[2].m128i_i64[0];
      if ( v8 )
        ++*(_DWORD *)(v8 + 8);
      if ( v9 )
        goto LABEL_19;
      v10 = (_QWORD *)sub_186B270(0x58u);
      v9 = (__m128 *)(v10 + 1);
      *v10 = 2;
      v11 = 1;
      v4[4].m128i_i64[1] = (__int64)v9;
      v12 = v9;
      while ( 1 )
      {
        v13 = v52;
        v12[1].m128_u64[0] = 0;
        v14 = _mm_loadh_ps((const double *)&v52);
        v12[2].m128_i32[0] = 0;
        v12[1].m128_u64[1] = v13;
        *v12 = v14;
        v9[-1].m128_i32[3] = v11;
        v15 = v6 + 2;
        if ( (_QWORD *)v7 == v6 + 2 )
          break;
        while ( 1 )
        {
          v6 = v15;
          if ( *v15 > 1u )
            break;
          v15 += 2;
          if ( (_QWORD *)v7 == v15 )
            goto LABEL_21;
        }
        if ( (_QWORD *)v7 == v15 )
          break;
        v8 = v15[1];
        v52 = v4[2].m128i_i64[0];
        if ( v8 )
          ++*(_DWORD *)(v8 + 8);
LABEL_19:
        v16 = v9[-1].m128_u32[3];
        if ( v16 == v9[-1].m128_i32[2] )
        {
          v27 = (3 * v16 + 1) >> 1;
          v28 = 40 * v27 + 8;
          if ( 40 * v16 + 8 >= (unsigned int)v28 || v16 >= v27 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_107E52(v57, "Overflow encountered when expanding vector", v50);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v57);
            sub_233E40((__int64)v57);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v54) = (3 * v16 + 1) >> 1;
          v29 = sub_186B270(v28);
          v30 = (_QWORD *)v4[4].m128i_i64[1];
          v31 = v54;
          v32 = (_DWORD *)v29;
          v9 = (__m128 *)(v29 + 8);
          if ( v30 )
          {
            v33 = *((unsigned int *)v30 - 1);
            v34 = v29 + 8;
            *(_DWORD *)(v29 + 4) = v33;
            v35 = &v30[5 * v33];
            for ( i = v30; v35 != i; *(_DWORD *)(v34 - 8) = *((_DWORD *)i - 2) )
            {
              v37 = i[1];
              i += 5;
              v34 += 40;
              *(_QWORD *)(v34 - 32) = v37;
              v38 = *(i - 5);
              *(i - 5) = 0;
              *(_QWORD *)(v34 - 40) = v38;
              *(_QWORD *)(v34 - 16) = *(i - 2);
              v39 = *(i - 3);
              *(i - 3) = 0;
              *(_QWORD *)(v34 - 24) = v39;
            }
            if ( (_DWORD)v33 )
            {
              v54 = v8;
              v40 = v30;
              v41 = &v30[5 * v33];
              v56 = v4;
              v42 = v32;
              LODWORD(v55) = v31;
              v43 = v41;
              do
              {
                while ( 1 )
                {
                  v47 = v40[2];
                  if ( v47 )
                  {
                    v48 = v40[3];
                    v46 = (*(_DWORD *)(v47 + 8))-- == 1;
                    if ( v46 )
                      sub_15D7BC0(v48, v47);
                  }
                  v44 = *v40;
                  if ( *v40 )
                  {
                    v45 = v40[1];
                    v46 = (*(_DWORD *)(v44 + 8))-- == 1;
                    if ( v46 )
                      break;
                  }
                  v40 += 5;
                  if ( v43 == v40 )
                    goto LABEL_47;
                }
                sub_15D7BC0(v45, v44);
                v40 += 5;
              }
              while ( v43 != v40 );
LABEL_47:
              v4 = v56;
              v32 = v42;
              v31 = (int)v55;
              v30 = (_QWORD *)v56[4].m128i_i64[1];
            }
            v55 = v32;
            LODWORD(v54) = v31;
            sub_186B220(v30 - 1);
            v32 = v55;
            v31 = v54;
            v12 = (__m128 *)((char *)v9 + 40 * (unsigned int)v55[1]);
            v11 = v55[1] + 1;
          }
          else
          {
            *(_DWORD *)(v29 + 4) = 0;
            v12 = (__m128 *)(v29 + 8);
            v11 = 1;
          }
          v4[4].m128i_i64[1] = (__int64)v9;
          *v32 = v31;
        }
        else
        {
          v17 = v16;
          v11 = v16 + 1;
          v12 = (__m128 *)((char *)v9 + 40 * v17);
        }
      }
    }
  }
LABEL_21:
  v18 = sub_14CD4E0(v53);
  v22 = *(__int64 **)v18;
  v23 = *(_QWORD *)v18 + 16LL * *(unsigned int *)(v18 + 8);
  if ( *(_QWORD *)v18 != v23 )
  {
    while ( (unsigned __int64)*v22 <= 1 )
    {
      v22 += 2;
      if ( (__int64 *)v23 == v22 )
        return v4;
    }
    if ( (__int64 *)v23 != v22 )
    {
      v24 = *v22;
      do
      {
        sub_13333D0((_DWORD)v4, v24, v22[1], v19, v20, v21, v51);
        v25 = v22 + 2;
        if ( (__int64 *)v23 == v22 + 2 )
          break;
        while ( 1 )
        {
          v24 = *v25;
          v22 = v25;
          if ( (unsigned __int64)*v25 > 1 )
            break;
          v25 += 2;
          if ( (__int64 *)v23 == v25 )
            return v4;
        }
      }
      while ( (__int64 *)v23 != v25 );
    }
  }
  return v4;
}

