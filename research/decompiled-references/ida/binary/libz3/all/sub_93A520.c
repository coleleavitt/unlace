__int64 __fastcall sub_93A520(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v10; // r11
  _DWORD *v11; // r9
  signed int v12; // edi
  int v13; // r10d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // rdx
  int v18; // r12d
  __int64 v19; // rbx
  __int64 v20; // rbp
  __int64 v21; // rbp
  __int64 v22; // rdi
  _DWORD *v23; // rcx
  __m128i v24; // xmm0
  _QWORD *v25; // r12
  __m128i v26; // xmm0
  __int64 v27; // rax
  __m128i *v28; // rax
  unsigned int v29; // r13d
  size_t v30; // rdi
  __int64 v31; // rax
  const __m128i *v32; // rdi
  _DWORD *v33; // r14
  __int64 v34; // rax
  _QWORD *v35; // rdx
  const __m128i *v36; // rsi
  const __m128i *i; // rax
  __m128i v38; // xmm1
  _QWORD *v39; // rax
  char **exception; // rbp
  __m128i v41; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v42[3]; // [rsp+1Ch] [rbp-6Ch] BYREF
  __int64 v43; // [rsp+28h] [rbp-60h] BYREF
  __int64 v44[3]; // [rsp+30h] [rbp-58h] BYREF
  int v45; // [rsp+48h] [rbp-40h]
  __int64 v46; // [rsp+50h] [rbp-38h]

  result = a2;
  v10 = *(_QWORD *)(a1 + 200);
  v42[0] = a5;
  v11 = (_DWORD *)(*(_QWORD *)(v10 + 8LL * a3) + 24LL * (unsigned int)result);
  v12 = *(_DWORD *)a4;
  if ( *v11 != -1 && ((v13 = -v11[1], v13 > v12) || v13 == v12 && *(_DWORD *)(a4 + 4) < -v11[2]) )
  {
    v14 = *(_QWORD *)(a1 + 264);
    if ( v14 )
      *(_DWORD *)(v14 - 4) = 0;
    sub_928BB0((_QWORD *)a1, a3, result, (_QWORD *)(a1 + 264));
    if ( a5 != -2 )
      sub_91D6F0((_QWORD *)(a1 + 264), v42);
    v15 = *(_QWORD *)(a1 + 264);
    v16 = *(_QWORD *)(a1 + 16);
    if ( v15 )
      v17 = *(unsigned int *)(v15 - 4);
    else
      v17 = 0;
    v18 = *(_DWORD *)(a1 + 8);
    sub_B727F0(v44, v16, v17);
    v45 = v18;
    v46 = 0;
    v44[0] = (__int64)&off_1C578E0;
    sub_B72D20(v44, v16);
    v43 = sub_9382C0(v16, (__int64)v44) | 3;
    sub_8E8670(v16, &v43, -2);
    v19 = v46;
    result = (__int64)qword_1C6F870;
    v44[0] = (__int64)qword_1C6F870;
    if ( v46 )
    {
      v20 = *(unsigned int *)(v46 - 4);
      if ( (_DWORD)v20 )
      {
        v21 = v46 + 16 * v20;
        do
        {
          v22 = v19;
          v19 += 16;
          sub_15D0DF0(v22);
        }
        while ( v19 != v21 );
        v19 = v46;
      }
      return sub_186B220((void *)(v19 - 8));
    }
  }
  else
  {
    v23 = (_DWORD *)(*(_QWORD *)(v10 + 8LL * (unsigned int)result) + 24LL * a3);
    if ( *v23 == -1 || v23[1] > v12 )
    {
      v24 = _mm_cvtsi32_si128(*(_DWORD *)(a4 + 4));
    }
    else
    {
      if ( v23[1] != v12 )
        return result;
      v24 = _mm_cvtsi32_si128(*(_DWORD *)(a4 + 4));
      if ( _mm_cvtsi128_si32(v24) >= v23[2] )
        return result;
    }
    v25 = *(_QWORD **)(a1 + 192);
    v26 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(result), _mm_cvtsi32_si128(a3)),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), v24));
    if ( v25 )
    {
      v27 = *((unsigned int *)v25 - 1);
      if ( (_DWORD)v27 == *((_DWORD *)v25 - 2) )
      {
        v29 = (unsigned int)(3 * v27 + 1) >> 1;
        v30 = 20 * v29 + 8;
        if ( 20 * (int)v27 + 8 >= (unsigned int)v30 || (unsigned int)v27 >= v29 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_91CD50(v44, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v44);
          sub_233E40((__int64)v44);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v41 = v26;
        v31 = sub_186B270(v30);
        v32 = *(const __m128i **)(a1 + 192);
        v26 = _mm_load_si128(&v41);
        v33 = (_DWORD *)v31;
        v25 = (_QWORD *)(v31 + 8);
        if ( v32 )
        {
          v34 = v32[-1].m128i_u32[3];
          v35 = v25;
          v33[1] = v34;
          v36 = (const __m128i *)((char *)v32 + 20 * v34);
          for ( i = v32; v36 != i; *((_DWORD *)v35 - 1) = i[-1].m128i_i32[3] )
          {
            v38 = _mm_loadu_si128(i);
            i = (const __m128i *)((char *)i + 20);
            v35 = (_QWORD *)((char *)v35 + 20);
            *(__m128i *)((char *)v35 - 20) = v38;
          }
          v41 = v26;
          sub_186B220(&v32[-1].m128i_u64[1]);
          v26 = _mm_load_si128(&v41);
          v28 = (__m128i *)((char *)v25 + 20 * (unsigned int)v33[1]);
        }
        else
        {
          *(_DWORD *)(v31 + 4) = 0;
          v28 = (__m128i *)(v31 + 8);
        }
        *(_QWORD *)(a1 + 192) = v25;
        *v33 = v29;
      }
      else
      {
        v28 = (__m128i *)((char *)v25 + 20 * v27);
      }
    }
    else
    {
      v41 = v26;
      v39 = (_QWORD *)sub_186B270(0x30u);
      v26 = _mm_load_si128(&v41);
      v25 = v39 + 1;
      *v39 = 2;
      *(_QWORD *)(a1 + 192) = v39 + 1;
      v28 = (__m128i *)(v39 + 1);
    }
    v28[1].m128i_i32[0] = a5;
    *v28 = v26;
    ++*((_DWORD *)v25 - 1);
    return sub_937D60((_QWORD *)a1);
  }
  return result;
}

