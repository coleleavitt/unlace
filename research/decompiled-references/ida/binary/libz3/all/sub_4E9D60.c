_QWORD *__fastcall sub_4E9D60(__int64 a1, _QWORD *a2, unsigned int a3, __int32 *a4)
{
  char **v4; // r15
  char **exception; // rbx
  __int64 v8; // r12
  _QWORD *v9; // r14
  _QWORD *v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  _DWORD *v13; // rax
  __int32 *v14; // r8
  __int32 *v15; // r15
  _DWORD *v16; // rdx
  int v17; // ecx
  int v18; // edi
  __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // r9d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rax
  _QWORD *v26; // rcx
  unsigned int v27; // r15d
  _QWORD *v28; // rax
  _QWORD *v29; // rsi
  size_t v30; // rdx
  __int64 v31; // r8
  __int32 *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdi
  __m128i *v37; // rax
  __int8 v38; // dl
  __m128i *v39; // rbx
  __int32 v40; // eax
  __int64 v41; // rax
  unsigned int v42; // r15d
  size_t v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rcx
  __m128i *v46; // rdx
  _DWORD *v47; // r13
  const __m128i *v48; // rax
  const __m128i *v49; // rcx
  bool v50; // zf
  __int64 v51; // r12
  __m128i *v52; // r15
  __m128i *v53; // r12
  __m128i *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rax
  __m128i *v57; // r12
  __m128i *v58; // rax
  __m128i *v59; // r15
  int v60; // [rsp+8h] [rbp-A8h]
  __int64 v61; // [rsp+18h] [rbp-98h]
  int v62; // [rsp+20h] [rbp-90h]
  unsigned int v63; // [rsp+24h] [rbp-8Ch]
  __int32 *v65; // [rsp+28h] [rbp-88h]
  __int32 *v66; // [rsp+30h] [rbp-80h]
  unsigned int v67; // [rsp+38h] [rbp-78h]
  unsigned int v68; // [rsp+38h] [rbp-78h]
  __int32 *v69; // [rsp+38h] [rbp-78h]
  __int64 v70; // [rsp+48h] [rbp-68h] BYREF
  __m128i v71; // [rsp+50h] [rbp-60h] BYREF
  __int64 v72[10]; // [rsp+60h] [rbp-50h] BYREF

  if ( a1 != a2[1] )
    return nullptr;
  v8 = a3;
  v9 = (_QWORD *)sub_186B270(0x40u);
  v10 = __dynamic_cast(
          a2,
          (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
          (const struct __class_type_info *)&`typeinfo for'datalog::external_relation,
          0);
  if ( !v10 )
    __cxa_bad_cast();
  v11 = sub_15D1F10(v10[4]);
  v9[1] = 0;
  v70 = v11;
  *v9 = qword_1C66768;
  v9[2] = 0;
  if ( (_DWORD)v8 )
  {
    v12 = (_QWORD *)sub_186B270(0x10u);
    *v12 = 2;
    v13 = v12 + 1;
    v9[2] = v13;
    v14 = &a4[(unsigned int)v8];
    v15 = a4;
    v16 = v13;
    while ( 1 )
    {
      v17 = *v15++;
      *v13 = v17;
      v18 = *(v16 - 1);
      v19 = (unsigned int)(v18 + 1);
      *(v16 - 1) = v19;
      if ( v14 == v15 )
        break;
      v20 = *(v16 - 2);
      if ( v20 == (_DWORD)v19 )
      {
        v21 = (3 * v20 + 1) >> 1;
        v22 = 4 * v21 + 8;
        if ( 4 * v18 + 12 >= (unsigned int)v22 || v20 >= v21 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v72, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v72);
          sub_233E40((__int64)v72);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v66 = v14;
        v67 = (3 * v20 + 1) >> 1;
        v23 = (unsigned int *)sub_186B300(v16 - 2, v22);
        v14 = v66;
        v16 = v23 + 2;
        *v23 = v67;
        v24 = v23[1];
        v9[2] = v16;
        v13 = &v16[v24];
      }
      else
      {
        v13 = &v16[v19];
      }
    }
    if ( v9 + 1 == a2 + 2 )
    {
      v26 = nullptr;
    }
    else
    {
      v26 = (_QWORD *)a2[2];
      if ( v26 )
        goto LABEL_15;
    }
LABEL_18:
    if ( (unsigned int)v8 > 1 )
    {
      v31 = v26[*a4];
      v32 = a4;
      do
      {
        v33 = (unsigned int)v32[1];
        v26[*v32++] = v26[v33];
      }
      while ( &a4[(unsigned int)(v8 - 2) + 1] != v32 );
      v26[a4[(unsigned int)(v8 - 1)]] = v31;
    }
    goto LABEL_22;
  }
  if ( a2 + 2 != v9 + 1 )
  {
    v26 = (_QWORD *)a2[2];
    if ( v26 )
    {
LABEL_15:
      v27 = *((_DWORD *)v26 - 1);
      v68 = *((_DWORD *)v26 - 2);
      v28 = (_QWORD *)sub_186B270(8LL * v68 + 8);
      v29 = (_QWORD *)a2[2];
      v26 = v28 + 1;
      v9[1] = v28 + 1;
      *v28 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v68), _mm_cvtsi32_si128(v27)).m128i_u64[0];
      if ( v29 )
      {
        v30 = 8LL * *((unsigned int *)v29 - 1);
        if ( v30 <= 8 )
        {
          if ( v30 == 8 )
            v28[1] = *v29;
        }
        else
        {
          v26 = memmove(v28 + 1, v29, v30);
        }
      }
      goto LABEL_18;
    }
  }
LABEL_22:
  v9[3] = a1;
  v34 = *(_QWORD *)(a1 + 24);
  *v9 = &off_1C4FB70;
  v35 = sub_4D6490(v34);
  v9[4] = 0;
  v36 = *(_QWORD *)(a1 + 24);
  v9[5] = v35;
  v60 = sub_4D6490(v36);
  v62 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 16LL))(*(_QWORD *)(a1 + 40));
  if ( (_DWORD)v8 )
  {
    v71.m128i_i8[8] = 0;
    v71.m128i_i32[0] = *a4;
    v69 = a4;
    v37 = (__m128i *)(sub_186B270(0x28u) + 8);
    v38 = 0;
    v37[-1].m128i_i64[1] = 2;
    v65 = &a4[v8];
    v39 = v37;
LABEL_24:
    *v37 = _mm_load_si128(&v71);
    if ( v38 )
    {
      v71.m128i_i32[0] = 0;
      v71.m128i_i8[8] = 0;
      goto LABEL_26;
    }
    while ( 1 )
    {
      v71.m128i_i32[0] = 0;
LABEL_26:
      ++v39[-1].m128i_i32[3];
      sub_15D0DF0(&v71);
      if ( v65 == ++v69 )
        break;
      v40 = *v69;
      v71.m128i_i8[8] = 0;
      v71.m128i_i32[0] = v40;
      v41 = v39[-1].m128i_u32[3];
      if ( (_DWORD)v41 == v39[-1].m128i_i32[2] )
      {
        v42 = (unsigned int)(3 * v41 + 1) >> 1;
        v63 = v42;
        v43 = 16 * v42 + 8;
        if ( 16 * (int)v41 + 8 >= (unsigned int)v43 || (unsigned int)v41 >= v42 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v72, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v72);
          sub_233E40((__int64)v72);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v44 = sub_186B270(v43);
        v45 = v39[-1].m128i_u32[3];
        v46 = (__m128i *)(v44 + 8);
        v47 = (_DWORD *)v44;
        v61 = v44 + 8;
        *(_DWORD *)(v44 + 4) = v45;
        v48 = v39;
        v49 = &v39[v45];
        if ( v49 != v39 )
        {
          do
          {
            v50 = v48->m128i_i8[8] == 0;
            *v46 = _mm_loadu_si128(v48);
            v48->m128i_i32[0] = 0;
            if ( !v50 )
              v48->m128i_i8[8] = 0;
            ++v48;
            ++v46;
          }
          while ( v48 != v49 );
        }
        v51 = v39[-1].m128i_u32[3];
        if ( (_DWORD)v51 )
        {
          v52 = v39;
          v53 = &v39[v51];
          do
          {
            v54 = v52++;
            sub_15D0DF0(v54);
          }
          while ( v52 != v53 );
        }
        sub_186B220(&v39[-1].m128i_u64[1]);
        v39 = (__m128i *)v61;
        v38 = v71.m128i_i8[8];
        *v47 = v63;
        v37 = (__m128i *)(v61 + 16LL * (unsigned int)v47[1]);
        goto LABEL_24;
      }
      v39[v41] = _mm_load_si128(&v71);
    }
    LODWORD(v8) = v39[-1].m128i_i32[3];
  }
  else
  {
    v39 = nullptr;
  }
  v55 = sub_15D2D10(v60, v62, 9, v8, (_DWORD)v39, 1, (__int64)&v70, 0);
  if ( v55 )
    ++*(_DWORD *)(v55 + 8);
  v9[4] = v55;
  if ( v39 )
  {
    v56 = v39[-1].m128i_u32[3];
    if ( (_DWORD)v56 )
    {
      v57 = &v39[v56];
      v58 = v39;
      do
      {
        v59 = v58;
        sub_15D0DF0(v58);
        v58 = v59 + 1;
      }
      while ( &v59[1] != v57 );
    }
    sub_186B220(&v39[-1].m128i_u64[1]);
  }
  return v9;
}

