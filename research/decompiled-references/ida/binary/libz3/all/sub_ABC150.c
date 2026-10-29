__int64 __fastcall sub_ABC150(__int64 *a1, _QWORD *a2)
{
  char **exception; // rbp
  __int64 v3; // rdx
  __int64 *v4; // rbx
  __int64 *v5; // rsi
  __int64 v6; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  const __m128i *v10; // r12
  __int64 result; // rax
  const __m128i **v12; // r13
  const __m128i **v13; // r14
  const __m128i *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // r15
  __int64 v17; // rax
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  __int64 v20; // r15
  __m128i v21; // xmm2
  unsigned int v22; // eax
  const __m128i *v23; // rdx
  unsigned int v24; // eax
  __m128i v25; // xmm0
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // r14
  int v30; // r13d
  __int64 v31; // r13
  int v32; // eax
  unsigned int v33; // r14d
  _QWORD *v34; // rax
  __int64 v35; // r14
  __int64 v36; // rcx
  __m128i v37; // xmm0
  __int64 v38; // rax
  unsigned int v39; // edx
  __int64 v40; // r14
  __int64 v41; // rdx
  __int64 v42; // rdi
  __int64 v43; // r14
  _QWORD *v44; // rax
  unsigned int v45; // edx
  const __m128i **v46; // rcx
  __int64 v47; // r14
  unsigned int v48; // ebp
  unsigned int v49; // ecx
  unsigned int v50; // ebp
  unsigned int v51; // ecx
  unsigned int *v52; // rdx
  _QWORD *v53; // rax
  __m128i v54; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v55; // [rsp+18h] [rbp-C0h]
  __int64 v56; // [rsp+20h] [rbp-B8h]
  __int64 *v57; // [rsp+28h] [rbp-B0h]
  __int64 v58; // [rsp+30h] [rbp-A8h]
  __int64 *v59; // [rsp+38h] [rbp-A0h]
  __int64 v60; // [rsp+48h] [rbp-90h] BYREF
  __int64 (__fastcall **v61)(); // [rsp+50h] [rbp-88h] BYREF
  char v62; // [rsp+58h] [rbp-80h]
  int v63; // [rsp+5Ch] [rbp-7Ch]
  __int64 v64; // [rsp+60h] [rbp-78h]
  int v65; // [rsp+68h] [rbp-70h]
  __int64 v66; // [rsp+70h] [rbp-68h]
  int v67; // [rsp+78h] [rbp-60h]
  __int64 v68; // [rsp+80h] [rbp-58h]
  __m128i v69; // [rsp+88h] [rbp-50h] BYREF

  v6 = (__int64)a2;
  v8 = *a1;
  v9 = *(_QWORD *)(*a1 + 16);
  if ( *(_BYTE *)(*(_QWORD *)(v9 + 112) + 429LL) )
    v10 = (const __m128i *)a2[14];
  else
    v10 = *(const __m128i **)(*(_QWORD *)(v9 + 8656) + 8LL * **(unsigned int **)(*a2 + 32LL));
  result = *(_QWORD *)(*(_QWORD *)a1[1] + 8LL);
  v12 = *(const __m128i ***)(result + 56);
  if ( !v12 )
    return result;
  result = *((unsigned int *)v12 - 1);
  v13 = &v12[result];
  if ( v12 == v13 )
    return result;
  while ( 1 )
  {
    v14 = *v12;
    v15 = (*v12)->m128i_i64[0];
    if ( !*(_WORD *)(v15 + 4) )
    {
      result = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 24LL);
      if ( result )
      {
        if ( *(_DWORD *)(v8 + 80) == *(_DWORD *)result && *(_DWORD *)(result + 4) == 65 )
        {
          result = v14->m128i_i64[1];
          if ( v10->m128i_i64[1] != result )
          {
            v54.m128i_i64[0] = v6;
            v16 = sub_15D1F10(v15);
            result = sub_15D1F10(v10->m128i_i64[0]);
            v6 = v54.m128i_i64[0];
            if ( v16 == result )
              break;
          }
        }
      }
    }
    if ( v13 == ++v12 )
      return result;
    v8 = *a1;
  }
  v17 = *(_QWORD *)(*a1 + 16);
  if ( *(_BYTE *)(*(_QWORD *)(v17 + 112) + 429LL) )
    v18 = _mm_loadl_epi64(v14 + 7);
  else
    v18 = _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(v17 + 8656) + 8LL * **(unsigned int **)(v14->m128i_i64[0] + 32)));
  v19 = _mm_loadl_epi64((const __m128i *)a1[1]);
  v55 = v54.m128i_i64[0];
  v60 = 0;
  v54 = _mm_unpacklo_epi64(v19, v18);
  sub_AC5220(&v60);
  v20 = v60;
  v21 = (__m128i)(unsigned __int64)v55;
  v22 = *(_DWORD *)(v60 - 4);
  *(__m128i *)(v60 + 16LL * v22) = _mm_load_si128(&v54);
  v23 = (const __m128i *)a1[1];
  v24 = v22 + 1;
  *(_DWORD *)(v20 - 4) = v24;
  v25 = _mm_unpacklo_epi64(_mm_loadl_epi64(v23), v21);
  if ( v24 == *(_DWORD *)(v20 - 8) )
  {
    v54 = v25;
    sub_AC5220(&v60);
    v20 = v60;
    v25 = _mm_load_si128(&v54);
    v24 = *(_DWORD *)(v60 - 4);
  }
  v26 = v24;
  v27 = v24 + 1;
  v28 = *a1;
  v29 = *(_QWORD *)(*a1 + 16);
  *(__m128i *)(v20 + 16 * v26) = v25;
  *(_DWORD *)(v20 - 4) = v27;
  v30 = *(_DWORD *)(v28 + 8);
  v58 = v29;
  v57 = (__int64 *)&v61;
  sub_B72D60(&v61, v29, 0, 0, v27, v20);
  v67 = v30;
  v68 = 0;
  v69.m128i_i64[0] = (__int64)v14;
  v61 = &off_1C579E8;
  v69.m128i_i64[1] = (__int64)v10;
  nullsub_687(v57, v29);
  v59 = qword_1C6E7C8;
  v31 = sub_180C100(v58 + 8400, 72);
  *(_BYTE *)(v31 + 8) = v62 & 3 | *(_BYTE *)(v31 + 8) & 0xFC;
  *(_DWORD *)(v31 + 12) = v63;
  *(_QWORD *)(v31 + 16) = v64;
  *(_DWORD *)(v31 + 24) = v65;
  *(_QWORD *)(v31 + 32) = v66;
  v59 = qword_1C6E7C8;
  *(_QWORD *)v31 = qword_1C6E7C8;
  v32 = v67;
  *(_QWORD *)(v31 + 48) = 0;
  *(_DWORD *)(v31 + 40) = v32;
  if ( v68 )
  {
    v33 = *(_DWORD *)(v68 - 4);
    v54.m128i_i32[0] = *(_DWORD *)(v68 - 8);
    v34 = (_QWORD *)sub_186B270(16LL * v54.m128i_u32[0] + 8);
    v55 = (__int64)(v34 + 1);
    *v34 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v54.m128i_u32[0]), _mm_cvtsi32_si128(v33)).m128i_u64[0];
    *(_QWORD *)(v31 + 48) = v34 + 1;
    v35 = v68;
    if ( !v68 || (v56 = v68 + 16LL * *(unsigned int *)(v68 - 4), v68 == v56) )
    {
      *(__m128i *)(v31 + 56) = _mm_loadu_si128(&v69);
      *(_QWORD *)v31 = &off_1C579E8;
      goto LABEL_24;
    }
    v54.m128i_i64[0] = (__int64)(v34 + 1);
    do
    {
      sub_15D0E50(v54.m128i_i64[0], v35);
      v54.m128i_i64[0] += 16;
      v35 += 16;
    }
    while ( v56 != v35 );
    v37 = _mm_loadu_si128(&v69);
    v55 = *(_QWORD *)(v31 + 48);
    v36 = v55;
    *(_QWORD *)v31 = &off_1C579E8;
    *(__m128i *)(v31 + 56) = v37;
    if ( v36 )
    {
LABEL_24:
      if ( *(_DWORD *)(v55 - 4) )
      {
        v38 = *(_QWORD *)(v58 + 8600);
        if ( !v38 || (v39 = *(_DWORD *)(v38 - 4), v39 == *(_DWORD *)(v38 - 8)) )
        {
          v47 = v58;
          sub_AC5130(v58 + 8600);
          v38 = *(_QWORD *)(v47 + 8600);
          v39 = *(_DWORD *)(v38 - 4);
        }
        *(_QWORD *)(v38 + 8LL * v39) = v31;
        *(_DWORD *)(v38 - 4) = v39 + 1;
      }
    }
  }
  else
  {
    *(__m128i *)(v31 + 56) = _mm_loadu_si128(&v69);
    *(_QWORD *)v31 = &off_1C579E8;
  }
  v40 = v68;
  v61 = (__int64 (__fastcall **)())v59;
  if ( v68 )
  {
    v41 = *(unsigned int *)(v68 - 4);
    if ( (_DWORD)v41 )
    {
      v54.m128i_i64[0] = v68 + 16 * v41;
      do
      {
        v42 = v40;
        v40 += 16;
        sub_15D0DF0(v42);
      }
      while ( v54.m128i_i64[0] != v40 );
      v40 = v68;
    }
    sub_186B220((void *)(v40 - 8));
  }
  if ( v14->m128i_i64[1] != v10->m128i_i64[1] )
  {
    v43 = *(_QWORD *)(*a1 + 16);
    v44 = *(_QWORD **)(v43 + 8760);
    if ( v44 )
    {
      v45 = *((_DWORD *)v44 - 1);
      if ( v45 == *((_DWORD *)v44 - 2) )
      {
        v48 = 3 * v45 + 1;
        v49 = v48 & 0xFFFFFFFE;
        v50 = v48 >> 1;
        v51 = 8 * (v50 + v49) + 8;
        if ( 24 * v45 + 8 >= v51 || v45 >= v50 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_139F3A(v57, "Overflow encountered when expanding vector", v3);
          v4 = v57;
          v5 = v57;
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v5);
          sub_233E40((__int64)v4);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v52 = (unsigned int *)sub_186B300(v44 - 1, v51);
        v44 = v52 + 2;
        *(_QWORD *)(v43 + 8760) = v52 + 2;
        *v52 = v50;
        v45 = v52[1];
      }
    }
    else
    {
      v53 = (_QWORD *)sub_186B270(0x38u);
      *v53 = 2;
      v44 = v53 + 1;
      v45 = 0;
      *(_QWORD *)(v43 + 8760) = v44;
    }
    v46 = (const __m128i **)&v44[3 * v45];
    *v46 = v14;
    v46[1] = v10;
    v46[2] = (const __m128i *)(v31 | 3);
    *((_DWORD *)v44 - 1) = v45 + 1;
  }
  return sub_186B220((void *)(v20 - 8));
}

