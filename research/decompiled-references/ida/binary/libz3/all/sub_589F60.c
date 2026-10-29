_QWORD *__fastcall sub_589F60(__int64 a1, _QWORD *a2, unsigned int a3, int *a4)
{
  char **exception; // rbx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD, _QWORD, int *); // r14
  _QWORD *v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _DWORD *v15; // rax
  int *v16; // r15
  _DWORD *v17; // rdx
  int v18; // ecx
  int v19; // edi
  __int64 v20; // rax
  unsigned int v21; // ecx
  unsigned int v22; // r9d
  size_t v23; // rsi
  unsigned int v24; // r12d
  unsigned int *v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // r15
  __int64 v28; // rax
  __m128i v29; // xmm1
  __int64 v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rsi
  size_t v33; // rdx
  __int64 v36; // [rsp+10h] [rbp-78h]
  unsigned int v37; // [rsp+18h] [rbp-70h]
  __int64 v38[11]; // [rsp+30h] [rbp-58h] BYREF

  v8 = *(_QWORD *)(a1 + 48);
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, int *))(*(_QWORD *)v8 + 88LL);
  v10 = __dynamic_cast(
          a2,
          (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
          (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
          0);
  if ( !v10 )
    __cxa_bad_cast();
  v11 = v9(v8, v10[5], a3, a4);
  v12 = nullptr;
  v36 = v11;
  if ( v11 )
  {
    v13 = (_QWORD *)sub_186B270(0x20u);
    v13[1] = 0;
    v12 = v13;
    *v13 = qword_1C66740;
    v13[2] = 0;
    if ( a3 )
    {
      v14 = (_QWORD *)sub_186B270(0x10u);
      *v14 = 2;
      v15 = v14 + 1;
      v12[2] = v15;
      v16 = a4;
      v17 = v15;
      while ( 1 )
      {
        v18 = *v16++;
        *v15 = v18;
        v19 = *(v17 - 1);
        v20 = (unsigned int)(v19 + 1);
        *(v17 - 1) = v20;
        if ( v16 == &a4[a3] )
          break;
        v21 = *(v17 - 2);
        if ( v21 == (_DWORD)v20 )
        {
          v22 = (3 * v21 + 1) >> 1;
          v23 = 4 * v22 + 8;
          v24 = v22;
          if ( 4 * v19 + 12 >= (unsigned int)v23 || v21 >= v22 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v38, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v38);
            sub_233E40((__int64)v38);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v25 = (unsigned int *)sub_186B300(v17 - 2, v23);
          v17 = v25 + 2;
          *v25 = v24;
          v26 = v25[1];
          v12[2] = v17;
          v15 = &v17[v26];
        }
        else
        {
          v15 = &v17[v20];
        }
      }
      v27 = v12 + 1;
      if ( v12 + 1 == a2 + 2 || (v28 = a2[2]) == 0 )
      {
LABEL_19:
        sub_5881D0(v27, a3, a4);
LABEL_17:
        *v12 = &off_1C519B0;
        v12[3] = v36;
        return v12;
      }
    }
    else
    {
      v27 = v13 + 1;
      if ( v13 + 1 == a2 + 2 )
        goto LABEL_17;
      v28 = a2[2];
      if ( !v28 )
        goto LABEL_17;
    }
    v29 = _mm_cvtsi32_si128(*(_DWORD *)(v28 - 4));
    v30 = *(unsigned int *)(v28 - 8);
    v37 = v30;
    v31 = (_QWORD *)sub_186B270(8 * v30 + 8);
    v32 = (_QWORD *)a2[2];
    v12[1] = v31 + 1;
    *v31 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v37), _mm_cvtsi32_si128(_mm_cvtsi128_si32(v29))).m128i_u64[0];
    if ( v32 )
    {
      v33 = 8LL * *((unsigned int *)v32 - 1);
      if ( v33 <= 8 )
      {
        if ( v33 == 8 )
          v31[1] = *v32;
      }
      else
      {
        memmove(v31 + 1, v32, v33);
      }
    }
    if ( !a3 )
      goto LABEL_17;
    goto LABEL_19;
  }
  return v12;
}

