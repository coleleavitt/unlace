__int64 __fastcall sub_5763E0(_QWORD *a1, const void *a2, const void *a3, double a4, double a5, __m128 a6)
{
  void *v7; // rax
  __int64 v8; // rbx
  _DWORD *v9; // r12
  __int64 v10; // rax
  bool (__fastcall *v11)(__int64); // rax
  __int64 (__fastcall *v12)(__int64); // rax
  __m128i *v13; // rdi
  unsigned __int64 v14; // r12
  __m128i *v16; // r12
  __int32 i; // eax
  __int64 v18; // rdx
  __int64 v19; // rsi
  unsigned __int64 v20; // r13
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // rax
  char *v23; // rdi
  int v24; // ecx
  __int64 v25; // rsi
  char *v26; // rax
  char *v27; // rdx
  __m128i *v28; // rax
  unsigned int v29; // r12d
  unsigned int v30; // r12d
  __int64 v31; // rax
  _QWORD *v32; // rdx
  unsigned int v33; // esi
  char **exception; // r12
  _BYTE v35[16]; // [rsp+10h] [rbp-58h] BYREF
  __m128i *v36[9]; // [rsp+20h] [rbp-48h] BYREF

  v7 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::sparse_table,
         0);
  if ( !v7
    || (v8 = (__int64)v7,
        (v9 = __dynamic_cast(
                a3,
                (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
                (const struct __class_type_info *)&`typeinfo for'datalog::sparse_table,
                0)) == nullptr) )
  {
    __cxa_bad_cast();
  }
  sub_644D80(v35, "filter_by_negation", 11);
  v10 = a1[2];
  if ( v10 && *(_DWORD *)(v10 - 4) )
  {
    if ( v9[35] < *(_DWORD *)(v8 + 140) >> 2 )
    {
      v36[0] = nullptr;
      sub_574A00(a1, (__int64)v9, v8, 0, v36, a4, a5, a6);
      v16 = v36[0];
      if ( v36[0] )
        goto LABEL_17;
    }
    else
    {
      v36[0] = nullptr;
      sub_574A00(a1, v8, (__int64)v9, 1, v36, a4, a5, a6);
      v16 = v36[0];
      if ( v36[0] )
      {
LABEL_17:
        for ( i = v16[-1].m128i_i32[3]; i; i = v16[-1].m128i_i32[3] )
        {
          v18 = (unsigned int)(i - 1);
          v19 = v16->m128i_i64[v18];
          v16[-1].m128i_i32[3] = v18;
          sub_56D9F0((unsigned int *)(v8 + 72), v19);
        }
        sub_5692F0(v8);
        sub_186B220(&v16[-1].m128i_u64[1]);
        return sub_644EE0(v35);
      }
    }
    sub_5692F0(v8);
    return sub_644EE0(v35);
  }
  v11 = *(bool (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL);
  if ( v11 != sub_56FE30 )
  {
    if ( v11((__int64)v9) )
      return sub_644EE0(v35);
LABEL_7:
    v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 64LL);
    if ( v12 != sub_56BD80 )
    {
      v12(v8);
      return sub_644EE0(v35);
    }
    sub_5692F0(v8);
    v13 = *(__m128i **)(v8 + 88);
    *(_QWORD *)(v8 + 80) = 0;
    if ( v13 )
    {
      v14 = v13[-1].m128i_u64[1];
      if ( v14 > 7 )
      {
        v13[-1].m128i_i64[1] = 8;
        goto LABEL_25;
      }
    }
    else
    {
      v28 = (__m128i *)sub_186B270(0x12u);
      v13 = v28 + 1;
      v14 = 0;
      *v28 = _mm_load_si128((const __m128i *)&xmmword_18B6640);
      *(_QWORD *)(v8 + 88) = v28 + 1;
    }
    while ( 1 )
    {
      v22 = v13[-1].m128i_u64[0];
      if ( v22 > 7 )
        break;
      v20 = (3 * v22 + 1) >> 1;
      if ( v22 + 16 >= v20 + 16 || v22 >= v20 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v36, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v36);
        sub_233E40((__int64)v36);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v21 = (unsigned __int64 *)sub_186B300(&v13[-1], v20 + 16);
      v13 = (__m128i *)(v21 + 2);
      *(_QWORD *)(v8 + 88) = v21 + 2;
      *v21 = v20;
    }
    v13[-1].m128i_i64[1] = 8;
    memset(&v13->m128i_i8[v14], 0, 8 - v14);
LABEL_25:
    if ( !*(_DWORD *)(v8 + 140) && !*(_DWORD *)(v8 + 144) )
      goto LABEL_13;
    v23 = *(char **)(v8 + 128);
    v24 = 0;
    v25 = *(unsigned int *)(v8 + 136);
    v26 = v23;
    v27 = &v23[16 * v25];
    if ( v23 == v27 )
      goto LABEL_12;
    do
    {
      if ( *((_DWORD *)v26 + 1) )
        *((_DWORD *)v26 + 1) = 0;
      else
        ++v24;
      v26 += 16;
    }
    while ( v27 != v26 );
    if ( (unsigned int)v25 <= 0x10 || 3 * (int)v25 >= (unsigned int)(4 * v24) )
    {
LABEL_12:
      *(_QWORD *)(v8 + 140) = 0;
LABEL_13:
      *(_QWORD *)(v8 + 152) = 0xFFFFFFFFLL;
      return sub_644EE0(v35);
    }
    if ( v23 )
    {
      sub_186B220(v23);
      v29 = *(_DWORD *)(v8 + 136);
      *(_QWORD *)(v8 + 128) = 0;
      v30 = v29 >> 1;
      *(_DWORD *)(v8 + 136) = v30;
      v31 = sub_186B270(16LL * v30);
      if ( !v30 )
        goto LABEL_45;
    }
    else
    {
      *(_QWORD *)(v8 + 128) = 0;
      v33 = (unsigned int)v25 >> 1;
      *(_DWORD *)(v8 + 136) = v33;
      v30 = v33;
      v31 = sub_186B270(16LL * v33);
    }
    v32 = (_QWORD *)v31;
    if ( v30 != 1 )
    {
      do
      {
        *v32 = 0;
        v32 += 4;
        *(v32 - 2) = 0;
      }
      while ( (_QWORD *)(v31 + 32LL * (v30 >> 1)) != v32 );
      if ( (v30 & 1) == 0 )
        goto LABEL_45;
      v32 = (_QWORD *)(v31 + 16LL * (v30 & 0x7FFFFFFE));
    }
    *v32 = 0;
LABEL_45:
    *(_QWORD *)(v8 + 128) = v31;
    goto LABEL_12;
  }
  if ( v9[35] )
    goto LABEL_7;
  return sub_644EE0(v35);
}

