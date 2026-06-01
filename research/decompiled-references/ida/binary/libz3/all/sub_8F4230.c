void __fastcall sub_8F4230(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5, char a6, double a7, __m128 a8)
{
  char **v8; // rbp
  char **v9; // rbp
  char **exception; // rbp
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v16; // rbp
  __int64 v17; // r14
  __int64 v18; // rax
  unsigned __int8 v19; // dl
  __int64 v20; // rcx
  __m128i *v21; // rdi
  __int64 v22; // rdx
  unsigned __int32 v23; // eax
  __int64 v24; // rsi
  int v25; // eax
  __m128i *v26; // rsi
  const __m128i *v27; // rbx
  __int8 v28; // al
  __m128 si128; // xmm0
  _QWORD *v30; // rdx
  unsigned int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  const __m128i **v34; // rcx
  unsigned int v35; // ecx
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rcx
  int v39; // eax
  unsigned int v40; // ebx
  __int64 v41; // rax
  __m128i v42; // xmm0
  __int64 v43; // rax
  char v44; // dl
  unsigned int v45; // r9d
  unsigned int v46; // esi
  unsigned __int32 v47; // r9d
  size_t v48; // rsi
  _DWORD *v49; // rax
  __int64 v50; // rsi
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rdx
  __int64 v54; // [rsp+0h] [rbp-98h]
  unsigned int v55; // [rsp+8h] [rbp-90h]
  __int64 v56; // [rsp+8h] [rbp-90h]
  __int64 v57; // [rsp+8h] [rbp-90h]
  __int64 v58; // [rsp+8h] [rbp-90h]
  __int64 v59; // [rsp+8h] [rbp-90h]
  __m128 v62; // [rsp+20h] [rbp-78h] BYREF
  _QWORD *v63; // [rsp+30h] [rbp-68h]
  __int64 v64; // [rsp+38h] [rbp-60h]
  __int64 v65[11]; // [rsp+40h] [rbp-58h] BYREF

  v12 = *(_QWORD *)(a2 + 56);
  v63 = a5;
  if ( v12 )
  {
    v13 = *(unsigned int *)(v12 - 4);
    if ( (_DWORD)v13 )
    {
      v16 = 0;
      v54 = a1 + 8712;
      v17 = 8 * v13;
      while ( 1 )
      {
        v27 = *(const __m128i **)(v12 + v16);
        v28 = v27[2].m128i_i8[12];
        if ( (v28 & 1) == 0 )
          goto LABEL_10;
        v27[2].m128i_i8[12] = v28 & 0xFE;
        if ( (v28 & 0x10) != 0 )
        {
          si128 = (__m128)_mm_loadu_si128(v27 + 7);
          a8 = _mm_movehl_ps(a8, si128);
          if ( *(_QWORD *)(si128.m128_u64[0] + 8) == *(_QWORD *)(a8.m128_u64[0] + 8) )
          {
            v38 = (unsigned int)(2 * *(_DWORD *)(*(_QWORD *)(a1 + 8832) + 4LL * *(unsigned int *)v27->m128i_i64[0]));
            v39 = *(char *)(*(_QWORD *)(a1 + 8848) + v38);
            v40 = 2 * *(_DWORD *)(*(_QWORD *)(a1 + 8832) + 4LL * *(unsigned int *)v27->m128i_i64[0]);
            if ( v39 != 1 )
            {
              if ( v39 == -1 && (a6 & 7) == 1 && **(_DWORD **)(a1 + 9096) == 1 )
              {
                v58 = v38;
                v62 = si128;
                sub_95A250(a1 + 9080, *a4, *v63);
                si128 = (__m128)_mm_load_si128((const __m128i *)&v62);
                v38 = v58;
              }
              v56 = v38;
              v62 = si128;
              v41 = sub_180C100(a1 + 8400, 32);
              v42 = _mm_load_si128((const __m128i *)&v62);
              *(_QWORD *)(v41 + 8) = 2;
              *(__m128i *)(v41 + 16) = v42;
              *(_QWORD *)v41 = off_1C57780;
              v43 = v41 | 3;
              v44 = *(_BYTE *)(*(_QWORD *)(a1 + 8848) + v56);
              if ( v44 == -1 )
              {
                if ( *(_QWORD *)(a1 + 8984) == qword_1C7EC50 && !*(_BYTE *)(a1 + 2416) )
                {
                  *(_QWORD *)(a1 + 8984) = v43;
                  *(_DWORD *)(a1 + 8992) = v40 ^ 1;
                }
              }
              else if ( !v44 )
              {
                sub_8F28B0(a1, v40, v43, 0);
              }
            }
LABEL_10:
            v16 += 8;
            if ( v16 == v17 )
              return;
            goto LABEL_11;
          }
        }
        if ( (v27[2].m128i_i8[13] & 1) != 0 )
        {
          v18 = sub_97A910(v54, v27);
          v20 = v18;
          if ( v27 != (const __m128i *)v18 )
          {
            v27[1].m128i_i64[1] = v18;
            if ( *(_QWORD *)(v18 + 8) != v27->m128i_i64[1] )
            {
              v21 = *(__m128i **)(a1 + 8760);
              v22 = 8LL * v19 + 1;
              if ( v21 )
              {
                v23 = v21[-1].m128i_u32[3];
                if ( v23 == v21[-1].m128i_i32[2] )
                {
                  v45 = 3 * v23 + 1;
                  v46 = v45 & 0xFFFFFFFE;
                  v47 = v45 >> 1;
                  v48 = 8 * (v47 + v46) + 8;
                  if ( 24 * v23 + 8 >= (unsigned int)v48 || v23 >= v47 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_8E4EB0(v65, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v65);
                    sub_233E40((__int64)v65);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v64 = v20;
                  v62.m128_i32[0] = v47;
                  v57 = v22;
                  v49 = (_DWORD *)sub_186B300(&v21[-1].m128i_u64[1], v48);
                  v22 = v57;
                  v50 = (unsigned int)v49[1];
                  v21 = (__m128i *)(v49 + 2);
                  v20 = v64;
                  *v49 = v62.m128_i32[0];
                  LODWORD(v49) = v50;
                  *(_QWORD *)(a1 + 8760) = v21;
                  v26 = (__m128i *)((char *)v21 + 24 * v50);
                  v25 = (_DWORD)v49 + 1;
                }
                else
                {
                  v24 = v23;
                  v25 = v23 + 1;
                  v26 = (__m128i *)((char *)v21 + 24 * v24);
                }
              }
              else
              {
                v62.m128_u64[0] = v18;
                v59 = v22;
                v52 = (_QWORD *)sub_186B270(0x38u);
                v22 = v59;
                v20 = v62.m128_u64[0];
                v21 = (__m128i *)(v52 + 1);
                *v52 = 2;
                v25 = 1;
                *(_QWORD *)(a1 + 8760) = v21;
                v26 = v21;
              }
              v26[1].m128i_i64[0] = v22;
              *v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v27, (__m128i)(unsigned __int64)v20);
              v21[-1].m128i_i32[3] = v25;
            }
            goto LABEL_10;
          }
          v30 = *(_QWORD **)(a3 + 56);
          if ( v30 )
          {
            v31 = *((_DWORD *)v30 - 1);
            if ( v31 != *((_DWORD *)v30 - 2) )
            {
LABEL_18:
              v32 = v31;
              v33 = v31 + 1;
              v34 = (const __m128i **)&v30[v32];
              goto LABEL_19;
            }
            v35 = (3 * v31 + 1) >> 1;
            v36 = 8 * v35 + 8;
            if ( 8 * v31 + 8 >= (unsigned int)v36 || v31 >= v35 )
            {
              v8 = (char **)__cxa_allocate_exception(0x28u);
              sub_8E4EB0(v65, "Overflow encountered when expanding vector");
              *v8 = (char *)off_1C63128;
              sub_2333C0(v8 + 1, v65);
              sub_233E40((__int64)v65);
              __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            goto LABEL_23;
          }
          v53 = (_QWORD *)sub_186B270(0x18u);
          *v53 = 2;
          v33 = 1;
          v30 = v53 + 1;
          *(_QWORD *)(a3 + 56) = v30;
          v34 = (const __m128i **)v30;
        }
        else
        {
          v30 = *(_QWORD **)(a3 + 56);
          if ( v30 )
          {
            v31 = *((_DWORD *)v30 - 1);
            if ( v31 != *((_DWORD *)v30 - 2) )
              goto LABEL_18;
            v35 = (3 * v31 + 1) >> 1;
            v36 = 8 * v35 + 8;
            if ( 8 * v31 + 8 >= (unsigned int)v36 || v31 >= v35 )
            {
              v9 = (char **)__cxa_allocate_exception(0x28u);
              sub_8E4EB0(v65, "Overflow encountered when expanding vector");
              *v9 = (char *)off_1C63128;
              sub_2333C0(v9 + 1, v65);
              sub_233E40((__int64)v65);
              __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
LABEL_23:
            v55 = v35;
            v37 = (unsigned int *)sub_186B300(v30 - 1, v36);
            v30 = v37 + 2;
            *(_QWORD *)(a3 + 56) = v37 + 2;
            *v37 = v55;
            LODWORD(v37) = v37[1];
            v34 = (const __m128i **)&v30[(unsigned int)v37];
            v33 = (_DWORD)v37 + 1;
            goto LABEL_19;
          }
          v51 = (_QWORD *)sub_186B270(0x18u);
          v30 = v51 + 1;
          *v51 = 2;
          v33 = 1;
          *(_QWORD *)(a3 + 56) = v30;
          v34 = (const __m128i **)v30;
        }
LABEL_19:
        v16 += 8;
        *v34 = v27;
        *((_DWORD *)v30 - 1) = v33;
        if ( v16 == v17 )
          return;
LABEL_11:
        v12 = *(_QWORD *)(a2 + 56);
      }
    }
  }
}

