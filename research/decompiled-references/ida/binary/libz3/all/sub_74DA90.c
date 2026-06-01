_DWORD *__fastcall sub_74DA90(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **exception; // r13
  __int64 v5; // rdx
  int v7; // ebp
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rbp
  __m128 *v16; // r15
  unsigned int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  __m128 *v20; // rdx
  unsigned __int64 v21; // rcx
  __m128 v22; // xmm0
  _DWORD *result; // rax
  __m128i *v24; // rbp
  __m128i v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // r14
  __m128i v28; // xmm0
  _DWORD *v29; // r12
  bool v30; // zf
  __int64 v31; // rax
  __m128i *v32; // r14
  __m128i v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // rdx
  __m128i si128; // xmm0
  _DWORD *v37; // r15
  __int64 v38; // rax
  unsigned int v39; // r13d
  size_t v40; // rdi
  __int64 v41; // rax
  _QWORD *v42; // r14
  _DWORD *v43; // rcx
  __int64 v44; // r9
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
  void (__fastcall **v56)(_DWORD *); // rax
  _QWORD *v57; // rax
  unsigned __int64 v58; // [rsp+8h] [rbp-70h] BYREF
  _DWORD *v59; // [rsp+10h] [rbp-68h]
  _QWORD *v60; // [rsp+18h] [rbp-60h]
  __int64 v61[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = a3;
  sub_1692DB0(*a1, a2, a3, 0, 0);
  v12 = a1[1];
  if ( *(_BYTE *)(v12 + 168) )
  {
    v13 = *(_QWORD *)(v12 + 144);
    if ( !v13 )
    {
      v32 = (__m128i *)sub_186B270(0x50u);
      v33 = _mm_loadl_epi64((const __m128i *)(a1[1] + 16LL));
      v32[1].m128i_i8[8] = 1;
      v32->m128i_i32[2] = 0;
      v32[1].m128i_i64[0] = 0;
      v32->m128i_i64[0] = (__int64)&off_1C60CE8;
      v32[2] = _mm_unpacklo_epi64(v33, (__m128i)(unsigned __int64)&v32[3].m128i_u64[1]);
      v34 = operator new(0x12u);
      v35 = a1[1];
      ++v32->m128i_i32[2];
      si128 = _mm_load_si128((const __m128i *)&xmmword_18B6680);
      v32[3].m128i_i64[1] = 17;
      *(_BYTE *)(v34 + 16) = 110;
      *(_BYTE *)(v34 + 17) = 0;
      *(__m128i *)v34 = si128;
      v37 = *(_DWORD **)(v35 + 144);
      v32[2].m128i_i64[1] = v34;
      v32[3].m128i_i64[0] = 17;
      v32[4].m128i_i64[1] = 0;
      if ( v37 && (v30 = v37[2] == 1, --v37[2], v30) )
      {
        v56 = *(void (__fastcall ***)(_DWORD *))v37;
        v58 = v35;
        (*v56)(v37);
        sub_186B220(v37);
        v38 = a1[1];
        v35 = v58;
      }
      else
      {
        v38 = v35;
      }
      *(_QWORD *)(v35 + 144) = v32;
      v13 = *(_QWORD *)(v38 + 144);
    }
    sub_13333D0(v13, *(_QWORD *)(a2 + 16), v7, v9, v10, v11);
    v14 = *(_QWORD *)(a1[1] + 152LL);
    if ( v14 )
    {
      if ( !a4 )
        goto LABEL_11;
    }
    else
    {
      if ( !a4 )
        goto LABEL_11;
      v24 = (__m128i *)sub_186B270(0x50u);
      v25 = _mm_loadl_epi64((const __m128i *)(a1[1] + 16LL));
      v24[1].m128i_i8[8] = 1;
      v24->m128i_i32[2] = 0;
      v24[1].m128i_i64[0] = 0;
      v24->m128i_i64[0] = (__int64)&off_1C60CE8;
      v24[2] = _mm_unpacklo_epi64(v25, (__m128i)(unsigned __int64)&v24[3].m128i_u64[1]);
      v26 = operator new(0x12u);
      v27 = a1[1];
      ++v24->m128i_i32[2];
      v28 = _mm_load_si128((const __m128i *)&xmmword_18B6680);
      v24[3].m128i_i64[1] = 17;
      *(_BYTE *)(v26 + 16) = 110;
      *(_BYTE *)(v26 + 17) = 0;
      *(__m128i *)v26 = v28;
      v29 = *(_DWORD **)(v27 + 152);
      v24[2].m128i_i64[1] = v26;
      v24[3].m128i_i64[0] = 17;
      v24[4].m128i_i64[1] = 0;
      if ( v29 && (v30 = v29[2] == 1, --v29[2], v30) )
      {
        (**(void (__fastcall ***)(_DWORD *))v29)(v29);
        sub_186B220(v29);
        v31 = a1[1];
      }
      else
      {
        v31 = v27;
      }
      *(_QWORD *)(v27 + 152) = v24;
      v14 = *(_QWORD *)(v31 + 152);
    }
    v15 = *(_QWORD *)(a4 + 16);
    v58 = *(_QWORD *)(v14 + 32);
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    v16 = *(__m128 **)(v14 + 72);
    if ( v16 )
    {
      v17 = v16[-1].m128_u32[3];
      if ( v17 == v16[-1].m128_i32[2] )
      {
        v39 = (3 * v17 + 1) >> 1;
        v40 = 40 * v39 + 8;
        if ( 40 * v17 + 8 >= (unsigned int)v40 || v17 >= v39 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_10D83A(v61, "Overflow encountered when expanding vector", v5);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v61);
          sub_233E40((__int64)v61);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v41 = sub_186B270(v40);
        v42 = *(_QWORD **)(v14 + 72);
        v43 = (_DWORD *)v41;
        v16 = (__m128 *)(v41 + 8);
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
                v30 = (*(_DWORD *)(v54 + 8))-- == 1;
                if ( v30 )
                {
                  v60 = v51;
                  v59 = v43;
                  sub_15D7BC0(v55, v54);
                  v51 = v60;
                  v43 = v59;
                }
              }
              v52 = *v42;
              if ( *v42 )
              {
                v53 = v42[1];
                v30 = (*(_DWORD *)(v52 + 8))-- == 1;
                if ( v30 )
                {
                  v60 = v51;
                  v59 = v43;
                  sub_15D7BC0(v53, v52);
                  v51 = v60;
                  v43 = v59;
                }
              }
              v42 += 5;
            }
            while ( v42 != v51 );
            v42 = *(_QWORD **)(v14 + 72);
          }
          v59 = v43;
          sub_186B220(v42 - 1);
          v43 = v59;
          v20 = (__m128 *)((char *)v16 + 40 * (unsigned int)v59[1]);
          v19 = v59[1] + 1;
        }
        else
        {
          *(_DWORD *)(v41 + 4) = 0;
          v20 = (__m128 *)(v41 + 8);
          v19 = 1;
        }
        *(_QWORD *)(v14 + 72) = v16;
        *v43 = v39;
      }
      else
      {
        v18 = v17;
        v19 = v17 + 1;
        v20 = (__m128 *)((char *)v16 + 40 * v18);
      }
    }
    else
    {
      v57 = (_QWORD *)sub_186B270(0x58u);
      v16 = (__m128 *)(v57 + 1);
      *v57 = 2;
      v19 = 1;
      *(_QWORD *)(v14 + 72) = v16;
      v20 = v16;
    }
    v21 = v58;
    v20[1].m128_u64[0] = 0;
    v22 = _mm_loadh_ps((const double *)&v58);
    v20[2].m128_i32[0] = 0;
    v20[1].m128_u64[1] = v21;
    *v20 = v22;
    v16[-1].m128_i32[3] = v19;
  }
LABEL_11:
  result = (_DWORD *)a1[2];
  ++*result;
  return result;
}

