_QWORD *__fastcall sub_BA0DF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5, double a6, __m128 a7)
{
  char **exception; // rbx
  _QWORD *v8; // r14
  __int64 v9; // r12
  _QWORD *v10; // rbp
  _QWORD *v12; // rax
  int *v13; // rsi
  _QWORD *v14; // r13
  char v15; // al
  _QWORD *v16; // rax
  int *v17; // rsi
  _QWORD *v18; // r14
  char v19; // al
  __int64 v20; // rax
  int v21; // ebp
  __m128i *v22; // rax
  __m128i v23; // xmm1
  __int64 v24; // r15
  __int64 v25; // roff
  __m128i v26; // xmm0
  __m128 v27; // xmm0
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rax
  _QWORD *v34; // rdx
  _QWORD *v35; // rbp
  unsigned int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  _QWORD *v39; // rcx
  unsigned int v41; // r13d
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rax
  _QWORD *v46; // [rsp+0h] [rbp-88h]
  unsigned int v47; // [rsp+Ch] [rbp-7Ch]
  __m128i v50; // [rsp+20h] [rbp-68h] BYREF
  char *v51[11]; // [rsp+30h] [rbp-58h] BYREF

  v8 = nullptr;
  v9 = a2;
  v10 = (_QWORD *)(a1 + 88);
  v47 = *(_DWORD *)(a2 + 24);
  v46 = nullptr;
  while ( 1 )
  {
    v12 = (_QWORD *)sub_180C100(*(_QWORD *)(a1 + 560), 64);
    v13 = *(int **)v9;
    v14 = v12;
    *v12 = *(_QWORD *)v9;
    LODWORD(v12) = *(_DWORD *)(v9 + 8);
    v14[3] = 0;
    *((_DWORD *)v14 + 2) = (_DWORD)v12;
    v14[2] = *(_QWORD *)(v9 + 16);
    v15 = sub_B9B270(v10, v13);
    v14[7] = 0;
    *(_OWORD *)(v14 + 5) = 0;
    v14[4] = 1LL << v15;
    if ( v8 )
      v8[6] = v14;
    v9 = *(_QWORD *)(v9 + 32);
    if ( v46 )
    {
      if ( !v9 )
        goto LABEL_12;
      while ( 1 )
      {
        v16 = (_QWORD *)sub_180C100(*(_QWORD *)(a1 + 560), 64);
        v17 = *(int **)v9;
        v18 = v16;
        *v16 = *(_QWORD *)v9;
        LODWORD(v16) = *(_DWORD *)(v9 + 8);
        v18[3] = 0;
        *((_DWORD *)v18 + 2) = (_DWORD)v16;
        v18[2] = *(_QWORD *)(v9 + 16);
        v19 = sub_B9B270(v10, v17);
        v18[7] = 0;
        *(_OWORD *)(v18 + 5) = 0;
        v18[4] = 1LL << v19;
        if ( v14 )
        {
          v9 = *(_QWORD *)(v9 + 32);
          v14[6] = v18;
          if ( !v9 )
            goto LABEL_11;
        }
        else
        {
          v9 = *(_QWORD *)(v9 + 32);
          if ( !v9 )
          {
LABEL_11:
            v14 = v18;
            goto LABEL_12;
          }
        }
        v14 = v18;
      }
    }
    if ( !v9 )
      break;
    v46 = v14;
    v8 = v14;
  }
  v46 = v14;
LABEL_12:
  v20 = *(_QWORD *)(a4 + 8LL * v47 + 32);
  v50.m128i_i64[1] = *(_QWORD *)(a1 + 136);
  v21 = *(_DWORD *)(v20 + 24);
  v50.m128i_i64[0] = *(_QWORD *)(v20 + 16);
  v22 = (__m128i *)sub_186B270(0x30u);
  v23 = _mm_loadl_epi64(&v50);
  v24 = (__int64)v22;
  v25 = v50.m128i_i64[1];
  v26 = _mm_loadl_epi64((const __m128i *)v50.m128i_i64[1]);
  v22[1].m128i_i32[0] = (unsigned __int16)v21;
  v22[1].m128i_i8[4] = 1;
  v27 = (__m128)_mm_unpacklo_epi64(v26, v23);
  *v22 = (__m128i)v27;
  v28 = *(_QWORD *)(v25 + 16);
  v22[1].m128i_i64[1] = (unsigned int)(unsigned __int16)v21 + 1;
  v22[2].m128i_i64[1] = 0;
  if ( (unsigned __int16)v21 > 6u )
  {
    v29 = sub_180C100(v28, 24);
    *(_DWORD *)v29 = 6;
    *(_QWORD *)(v29 + 8) = 0;
    *(_DWORD *)(v29 + 16) = (unsigned __int16)v21;
  }
  else
  {
    v29 = sub_180C100(v28, 16);
    *(_QWORD *)(v29 + 8) = 0;
    *(_DWORD *)v29 = (unsigned __int16)v21 - 1;
  }
  *(_QWORD *)(v24 + 32) = v29;
  sub_B9BFE0(a1 + 120, v24, a3, a4, v47);
  sub_B9F490(a1 + 120, *(_QWORD *)(v24 + 32), v47, v27, (__m128)v23, a7, v30, v31, v32);
  *(_DWORD *)(v24 + 28) = *(_DWORD *)(a1 + 216);
  v14[3] = v24;
  v33 = (_QWORD *)sub_180C100(a1 + 48, 16);
  v34 = *(_QWORD **)(a1 + 32);
  v35 = v33;
  *v33 = off_1C57BF0;
  v33[1] = v24;
  if ( v34 )
  {
    v36 = *((_DWORD *)v34 - 1);
    if ( v36 == *((_DWORD *)v34 - 2) )
    {
      v41 = (3 * v36 + 1) >> 1;
      v42 = 8 * v41 + 8;
      if ( 8 * v36 + 8 >= (unsigned int)v42 || v36 >= v41 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_151CF2(v51);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v51);
        sub_233E40((__int64)v51);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v43 = (unsigned int *)sub_186B300(v34 - 1, v42);
      v44 = v43[1];
      v34 = v43 + 2;
      *v43 = v41;
      *(_QWORD *)(a1 + 32) = v43 + 2;
      LODWORD(v43) = v44;
      v39 = &v34[v44];
      v38 = (_DWORD)v43 + 1;
    }
    else
    {
      v37 = v36;
      v38 = v36 + 1;
      v39 = &v34[v37];
    }
  }
  else
  {
    v45 = (_QWORD *)sub_186B270(0x18u);
    v34 = v45 + 1;
    *v45 = 2;
    v38 = 1;
    *(_QWORD *)(a1 + 32) = v34;
    v39 = v34;
  }
  *v39 = v35;
  *((_DWORD *)v34 - 1) = v38;
  return v46;
}

