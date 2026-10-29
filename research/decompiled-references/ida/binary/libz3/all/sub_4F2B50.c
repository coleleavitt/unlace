__m128i *__fastcall sub_4F2B50(__int64 a1, _QWORD *a2, __int64 a3)
{
  char **exception; // r12
  char **v4; // r12
  __m128i *v5; // rbx
  void *v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // r13d
  int v12; // ebp
  _DWORD *v13; // rax
  _QWORD *v14; // r14
  __m128i *v15; // r15
  _QWORD *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rsi
  int v19; // eax
  __m128i **v20; // rsi
  __int64 v21; // rax
  unsigned int v22; // eax
  _QWORD *v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // ecx
  size_t v26; // rsi
  unsigned int v27; // r14d
  unsigned int *v28; // rax
  __int64 v29; // rax
  unsigned int v30; // r9d
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rsi
  __int64 v34; // r15
  __int64 v35; // rbp
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  unsigned int v38; // [rsp+14h] [rbp-A4h]
  __int64 v39; // [rsp+18h] [rbp-A0h]
  __int64 v40; // [rsp+20h] [rbp-98h]
  __int64 v42; // [rsp+30h] [rbp-88h]
  __int64 *v43; // [rsp+38h] [rbp-80h]
  unsigned int v44; // [rsp+54h] [rbp-64h] BYREF
  __int64 v45; // [rsp+58h] [rbp-60h] BYREF
  __int64 v46; // [rsp+60h] [rbp-58h] BYREF
  __int64 v47; // [rsp+68h] [rbp-50h]

  v5 = nullptr;
  if ( a1 == a2[1] )
  {
    v5 = (__m128i *)sub_186B270(0x100u);
    v39 = sub_4D6490(*(_QWORD *)(a1 + 24));
    v7 = sub_4EC5D0(a2);
    v5->m128i_i64[1] = 0;
    v40 = (__int64)v7;
    v5->m128i_i64[0] = (__int64)&off_1C4FEF8;
    v5[1].m128i_i64[0] = 0;
    v43 = &v5->m128i_i64[1];
    sub_180C0A0(&v5[1].m128i_u64[1]);
    v8 = *(_QWORD *)(v40 + 32);
    v5[5].m128i_i64[0] = v39;
    v5[4] = _mm_unpacklo_epi64((__m128i)v8, (__m128i)(unsigned __int64)a3);
    if ( a3 )
      ++*(_DWORD *)(a3 + 8);
    v5[13].m128i_i64[1] = 0;
    v5[14].m128i_i64[0] = 0;
    v5[6].m128i_i64[0] = v39;
    v5[6].m128i_i64[1] = (__int64)&v5[7].m128i_i64[1];
    v5[14].m128i_i64[1] = 0;
    v5[7].m128i_i64[0] = 0x800000000LL;
    v42 = (__int64)&v5[11].m128i_i64[1];
    v5[15].m128i_i64[1] = (__int64)&v5[12].m128i_i64[1];
    v5[12].m128i_i64[1] = (__int64)v43;
    v9 = *(_QWORD *)(v40 + 120);
    v5[13].m128i_i64[0] = (__int64)v43;
    v10 = 0x3FFFFFFFCLL;
    v5[5].m128i_i64[1] = 0;
    v5[11].m128i_i64[1] = 0;
    v5[12].m128i_i64[0] = 0;
    v5[15].m128i_i64[0] = (__int64)off_1C4F498;
    if ( v9 )
      v10 = 4LL * (unsigned int)(*(_DWORD *)(v9 - 4) - 1);
    v11 = *(_DWORD *)(v9 + v10);
    sub_186B510(v42, v11, 0);
    v12 = 0;
    if ( !v11 )
    {
LABEL_24:
      v46 = 0;
      v47 = v39;
      sub_4EF0C0(v40, a3, &v46, &v5[5].m128i_i64[1]);
      v34 = v47;
      v35 = v46;
      v45 = sub_552E50(v5[4].m128i_i64[0]);
      sub_4FA720(&v5[6].m128i_u64[1], &v45);
      sub_4F1700((unsigned int *)v40, v35, (__int64)&v5[6].m128i_i64[1], (__int64)&v5[12].m128i_i64[1], v42);
      sub_4EBFD0(v35, v34);
      return v5;
    }
    while ( 1 )
    {
      v21 = v5[13].m128i_i64[1];
      v22 = v21 ? *(_DWORD *)(v21 - 4) : 0;
      v44 = v22;
      sub_4EE3A0(&v5[13].m128i_i64[1], &v44);
      v23 = (_QWORD *)v5[14].m128i_i64[0];
      if ( v23 )
      {
        v24 = *((unsigned int *)v23 - 1);
        if ( (_DWORD)v24 == *((_DWORD *)v23 - 2) )
        {
          v25 = (unsigned int)(3 * v24 + 1) >> 1;
          v26 = 4 * v25 + 8;
          v27 = v25;
          if ( 4 * (int)v24 + 8 >= (unsigned int)v26 || (unsigned int)v24 >= v25 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v46, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v46);
            sub_233E40((__int64)&v46);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v28 = (unsigned int *)sub_186B300(v23 - 1, v26);
          v23 = v28 + 2;
          *v28 = v27;
          v29 = v28[1];
          v5[14].m128i_i64[0] = (__int64)v23;
          v13 = (_DWORD *)v23 + v29;
        }
        else
        {
          v13 = (_DWORD *)v23 + v24;
        }
      }
      else
      {
        v36 = (_QWORD *)sub_186B270(0x10u);
        v23 = v36 + 1;
        *v36 = 2;
        v5[14].m128i_i64[0] = (__int64)(v36 + 1);
        v13 = v36 + 1;
      }
      *v13 = 1;
      ++*((_DWORD *)v23 - 1);
      sub_4EE3A0(&v5[14].m128i_i64[1], &v44);
      v14 = (_QWORD *)v5[13].m128i_i64[0];
      v15 = v5 + 15;
      v16 = (_QWORD *)*v14;
      if ( !*v14 )
        break;
      v17 = *((_DWORD *)v16 - 1);
      if ( v17 == *((_DWORD *)v16 - 2) )
      {
        v30 = (3 * v17 + 1) >> 1;
        v31 = 8 * v30 + 8;
        if ( 8 * v17 + 8 >= (unsigned int)v31 || v17 >= v30 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v46, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, &v46);
          sub_233E40((__int64)&v46);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v38 = (3 * v17 + 1) >> 1;
        v32 = (unsigned int *)sub_186B300(v16 - 1, v31);
        v33 = v32[1];
        ++v12;
        *v14 = v32 + 2;
        *v32 = v38;
        *(_QWORD *)&v32[2 * v33 + 2] = v15;
        v32[1] = v33 + 1;
        if ( v11 == v12 )
          goto LABEL_24;
      }
      else
      {
        v18 = v17;
        v19 = v17 + 1;
        v20 = (__m128i **)&v16[v18];
LABEL_13:
        ++v12;
        *v20 = v15;
        *((_DWORD *)v16 - 1) = v19;
        if ( v11 == v12 )
          goto LABEL_24;
      }
    }
    v37 = (_QWORD *)sub_186B270(0x18u);
    v16 = v37 + 1;
    *v37 = 2;
    v19 = 1;
    *v14 = v16;
    v20 = (__m128i **)v16;
    goto LABEL_13;
  }
  return v5;
}

