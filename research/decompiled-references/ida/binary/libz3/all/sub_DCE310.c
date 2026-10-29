__int64 __fastcall sub_DCE310(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v6; // rax
  unsigned __int64 *v7; // rdi
  unsigned int v8; // esi
  unsigned __int64 *v9; // rax
  _QWORD *v10; // rdx
  const __m128i *v11; // r13
  __int64 v12; // rax
  __m128i *v13; // rax
  __int64 result; // rax
  __int64 v15; // rax
  __m128i *v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rax
  __m128i v19; // xmm0
  unsigned int v20; // r12d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rax
  unsigned int v24; // r13d
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  char **exception; // rbp
  __m128i v31; // [rsp+0h] [rbp-68h] BYREF
  __int64 v32; // [rsp+10h] [rbp-58h]
  __int64 v33; // [rsp+20h] [rbp-48h] BYREF
  __m128i v34; // [rsp+28h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 && *(_DWORD *)(v6 - 4) )
  {
    v7 = *(unsigned __int64 **)a1;
    v8 = *(_DWORD *)(a1 + 8);
    v31 = (__m128i)(unsigned __int64)a2;
    LODWORD(v32) = 0;
    v9 = sub_DBF240(v7, v8, (unsigned __int64 *)&v31);
    v10 = *(_QWORD **)(a1 + 24);
    v11 = (const __m128i *)v9;
    if ( v9 )
    {
      if ( !v10 )
      {
        v28 = (_QWORD *)sub_186B270(0x38u);
        v10 = v28 + 1;
        *v28 = 2;
        *(_QWORD *)(a1 + 24) = v28 + 1;
        v13 = (__m128i *)(v28 + 1);
        goto LABEL_7;
      }
      v12 = *((unsigned int *)v10 - 1);
      if ( (_DWORD)v12 != *((_DWORD *)v10 - 2) )
      {
        v13 = (__m128i *)&v10[3 * v12];
LABEL_7:
        *v13 = _mm_loadu_si128(v11);
        v13[1].m128i_i64[0] = v11[1].m128i_i64[0];
        ++*((_DWORD *)v10 - 1);
        v11->m128i_i64[1] = a3->m128i_i64[0];
        result = a3->m128i_u32[2];
        v11[1].m128i_i32[0] = result;
        return result;
      }
      v20 = (unsigned int)(3 * v12 + 1) >> 1;
      v21 = 8 * (v20 + ((3 * (_DWORD)v12 + 1) & 0xFFFFFFFE)) + 8;
      if ( 24 * (int)v12 + 8 < (unsigned int)v21 && (unsigned int)v12 < v20 )
      {
        v22 = (unsigned int *)sub_186B300(v10 - 1, v21);
        v10 = v22 + 2;
        *v22 = v20;
        v23 = v22[1];
        *(_QWORD *)(a1 + 24) = v10;
        v13 = (__m128i *)&v10[3 * v23];
        goto LABEL_7;
      }
LABEL_21:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_DBF430(&v33, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v33);
      sub_233E40((__int64)&v33);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    if ( v10 )
    {
      v15 = *((unsigned int *)v10 - 1);
      if ( (_DWORD)v15 == *((_DWORD *)v10 - 2) )
      {
        v24 = (unsigned int)(3 * v15 + 1) >> 1;
        v25 = 8 * (v24 + ((3 * (_DWORD)v15 + 1) & 0xFFFFFFFE)) + 8;
        if ( 24 * (int)v15 + 8 >= (unsigned int)v25 || (unsigned int)v15 >= v24 )
          goto LABEL_21;
        v26 = (unsigned int *)sub_186B300(v10 - 1, v25);
        v10 = v26 + 2;
        *v26 = v24;
        v27 = v26[1];
        *(_QWORD *)(a1 + 24) = v10;
        v16 = (__m128i *)&v10[3 * v27];
      }
      else
      {
        v16 = (__m128i *)&v10[3 * v15];
      }
    }
    else
    {
      v29 = (_QWORD *)sub_186B270(0x38u);
      v10 = v29 + 1;
      *v29 = 2;
      *(_QWORD *)(a1 + 24) = v29 + 1;
      v16 = (__m128i *)(v29 + 1);
    }
    v17 = _mm_load_si128(&v31);
    v16[1].m128i_i64[0] = v32;
    *v16 = v17;
    v18 = *((unsigned int *)v10 - 1);
    *((_DWORD *)v10 - 1) = v18 + 1;
    v10[3 * v18] = v10[3 * v18] & 0xFFFFFFFFFFFFFFF8LL | ((v10[3 * v18] & 7LL) + 2);
  }
  v19 = _mm_loadu_si128(a3);
  v33 = a2;
  v34 = v19;
  return sub_DCDE60(a1, (const __m128i *)&v33);
}

