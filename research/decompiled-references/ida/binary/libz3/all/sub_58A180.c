_QWORD *__fastcall sub_58A180(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4, int *a5)
{
  char **exception; // rbx
  __int64 v9; // r15
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, _QWORD, int *); // r13
  _QWORD *v11; // rax
  int v12; // eax
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  _DWORD *v16; // rax
  int *v17; // r15
  _DWORD *v18; // rdx
  int v19; // esi
  int v20; // r9d
  __int64 v21; // rax
  unsigned int v22; // edi
  unsigned int v23; // r10d
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rcx
  __int64 v28; // rax
  __m128i v29; // xmm1
  __int64 v30; // rax
  _QWORD *v31; // rax
  __m128i v32; // xmm0
  __m128i v33; // xmm1
  _QWORD *v34; // rsi
  size_t v35; // rdx
  __m128 v36; // xmm0
  __int64 v38; // [rsp+0h] [rbp-98h]
  _QWORD *v41; // [rsp+10h] [rbp-88h]
  __int64 v42; // [rsp+18h] [rbp-80h] BYREF
  unsigned int v43; // [rsp+20h] [rbp-78h]
  unsigned int v44; // [rsp+24h] [rbp-74h]
  _QWORD *v45; // [rsp+28h] [rbp-70h]
  __int64 v46[11]; // [rsp+40h] [rbp-58h] BYREF

  v9 = *(_QWORD *)(a1 + 48);
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int *))(*(_QWORD *)v9 + 160LL);
  v11 = __dynamic_cast(
          a2,
          (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
          (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
          0);
  if ( !v11 )
    __cxa_bad_cast();
  v38 = v10(v9, v11[5], a3, a4, a5);
  v42 = *(_QWORD *)(a1 + 40);
  if ( a3 )
  {
    v12 = *(_DWORD *)(a3 + 8);
    *(_DWORD *)(a3 + 8) = v12 + 1;
    if ( !v38 )
    {
      v14 = nullptr;
      goto LABEL_21;
    }
  }
  else
  {
    v14 = nullptr;
    if ( !v38 )
      return v14;
  }
  v13 = (_QWORD *)sub_186B270(0x30u);
  v13[1] = 0;
  v14 = v13;
  *v13 = qword_1C66740;
  v13[2] = 0;
  if ( !a4 )
  {
    v27 = v13 + 1;
    if ( v13 + 1 == a2 + 2 )
      goto LABEL_19;
    v28 = a2[2];
    if ( !v28 )
      goto LABEL_19;
    goto LABEL_14;
  }
  v15 = (_QWORD *)sub_186B270(0x10u);
  *v15 = 2;
  v16 = v15 + 1;
  v14[2] = v16;
  v17 = a5;
  v18 = v16;
  while ( 1 )
  {
    v19 = *v17++;
    *v16 = v19;
    v20 = *(v18 - 1);
    v21 = (unsigned int)(v20 + 1);
    *(v18 - 1) = v21;
    if ( v17 == &a5[a4] )
      break;
    v22 = *(v18 - 2);
    if ( v22 == (_DWORD)v21 )
    {
      v23 = (3 * v22 + 1) >> 1;
      v24 = 4 * v23 + 8;
      if ( 4 * v20 + 12 >= (unsigned int)v24 || v22 >= v23 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v46, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v46);
        sub_233E40((__int64)v46);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v25 = (unsigned int *)sub_186B300(v18 - 2, v24);
      v18 = v25 + 2;
      *v25 = (3 * v22 + 1) >> 1;
      v26 = v25[1];
      v14[2] = v18;
      v16 = &v18[v26];
    }
    else
    {
      v16 = &v18[v21];
    }
  }
  v27 = v14 + 1;
  if ( v14 + 1 != a2 + 2 )
  {
    v28 = a2[2];
    if ( v28 )
    {
LABEL_14:
      v29 = _mm_cvtsi32_si128(*(_DWORD *)(v28 - 4));
      v30 = *(unsigned int *)(v28 - 8);
      v45 = v27;
      v43 = v30;
      v44 = _mm_cvtsi128_si32(v29);
      v31 = (_QWORD *)sub_186B270(8 * v30 + 8);
      v32 = _mm_cvtsi32_si128(v43);
      v33 = _mm_cvtsi32_si128(v44);
      v14[1] = v31 + 1;
      v34 = (_QWORD *)a2[2];
      v27 = v45;
      *v31 = _mm_unpacklo_epi32(v32, v33).m128i_u64[0];
      if ( v34 )
      {
        v35 = 8LL * *((unsigned int *)v34 - 1);
        if ( v35 <= 8 )
        {
          if ( v35 == 8 )
            v31[1] = *v34;
        }
        else
        {
          v41 = v27;
          memmove(v31 + 1, v34, v35);
          v27 = v41;
        }
      }
      if ( !a4 )
        goto LABEL_19;
    }
  }
  sub_5881D0(v27, a4, a5);
LABEL_19:
  v36 = _mm_loadh_ps((const double *)&v42);
  *v14 = &off_1C51A60;
  *(__m128 *)(v14 + 3) = v36;
  if ( !a3 )
  {
    v14[5] = v38;
    return v14;
  }
  v12 = *(_DWORD *)(a3 + 8);
  v14[5] = v38;
LABEL_21:
  *(_DWORD *)(a3 + 8) = v12;
  if ( !v12 )
    sub_15D7BC0(v42, a3);
  return v14;
}

