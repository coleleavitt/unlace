__int64 *__fastcall sub_A1C800(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4,
        __int64 ***a5,
        __int64 a6,
        double a7,
        __int64 a8)
{
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // r9d
  int v17; // edx
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned int v22; // eax
  int v23; // r15d
  __int64 v24; // rbx
  _QWORD *v25; // rax
  __int64 *m128i_i64; // rdi
  const __m128i *v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // ecx
  unsigned int v30; // r14d
  size_t v31; // rdi
  __int64 v32; // rax
  const __m128i *v33; // r15
  _DWORD *v34; // r13
  __m128i *v35; // rax
  __int64 v36; // rcx
  __m128i *v37; // rdx
  const __m128i *v38; // rax
  const __m128i *v39; // rcx
  bool v40; // zf
  __int64 v41; // rax
  const __m128i *v42; // rbp
  const __m128i *v43; // rdi
  int v44; // r12d
  __int64 *result; // rax
  const __m128i *v46; // rbx
  __int64 v47; // rax
  const __m128i *v48; // rbp
  const __m128i *v49; // rdi
  char **exception; // rbx
  __m128i *v52; // [rsp+0h] [rbp-C8h]
  unsigned int v53; // [rsp+8h] [rbp-C0h]
  __int64 v54; // [rsp+8h] [rbp-C0h]
  __int64 v55; // [rsp+20h] [rbp-A8h]
  __int64 v56; // [rsp+28h] [rbp-A0h]
  __int64 v57[4]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v58[5]; // [rsp+50h] [rbp-78h] BYREF
  int v59; // [rsp+78h] [rbp-50h]
  const __m128i *v60; // [rsp+80h] [rbp-48h]

  ++*(_DWORD *)(a1 + 320);
  ++*(_DWORD *)(a1 + 1116);
  v11 = sub_A0A3F0(*(__int64 **)(a6 + 8), a8);
  v12 = *(_QWORD *)(a6 + 8);
  v13 = *(_QWORD *)(v12 + 24);
  v14 = *(_QWORD *)(v12 + 16);
  if ( v13 )
  {
    v15 = *(_DWORD *)(v13 - 4);
    if ( v15 )
    {
      v16 = v15;
      if ( !v14 )
      {
LABEL_6:
        ++v16;
        goto LABEL_7;
      }
      v17 = *(_DWORD *)(v14 - 4);
LABEL_5:
      v16 = v15 + v17;
      goto LABEL_6;
    }
    v16 = 0;
    if ( v14 )
    {
      v17 = *(_DWORD *)(v14 - 4);
      v16 = v17;
      if ( v17 )
        goto LABEL_5;
    }
  }
  else
  {
    v16 = 0;
    if ( v14 )
    {
      v16 = *(_DWORD *)(v14 - 4);
      if ( v16 )
        goto LABEL_6;
    }
  }
LABEL_7:
  sub_A1B9E0(a1, a2, a3, a4, a5, v16, a7, v11);
  v55 = *(_QWORD *)(a1 + 16);
  v18 = sub_A0A3F0(*(__int64 **)(a6 + 8), a8);
  v19 = *(_QWORD *)(a6 + 8);
  v20 = *(_QWORD *)(v19 + 24);
  v21 = *(_QWORD *)(v19 + 16);
  if ( v20 )
  {
    v22 = *(_DWORD *)(v20 - 4);
    if ( !v22 )
    {
      if ( v21 && *(_DWORD *)(v21 - 4) )
        goto LABEL_11;
LABEL_34:
      v44 = *(_DWORD *)(a1 + 8);
      v56 = *(_QWORD *)(a1 + 16);
      sub_B72D60(v58, v56, a2, a3, a4, a5);
      v59 = v44;
      v60 = nullptr;
      goto LABEL_35;
    }
    if ( v21 )
LABEL_11:
      v22 += *(_DWORD *)(v21 - 4);
  }
  else
  {
    if ( !v21 )
      goto LABEL_34;
    v22 = *(_DWORD *)(v21 - 4);
    if ( !v22 )
      goto LABEL_34;
  }
  v53 = v22;
  v23 = *(_DWORD *)(a1 + 8);
  v56 = *(_QWORD *)(a1 + 16);
  sub_B72D60(v58, v56, a2, a3, a4, a5);
  v59 = v23;
  v58[0] = qword_1C6E7C8;
  v60 = nullptr;
  if ( v53 != -1 )
  {
    v24 = v18;
    v54 = v18 + 16LL * v53 + 16;
    v25 = (_QWORD *)sub_186B270(0x28u);
    m128i_i64 = v25 + 1;
    *v25 = 2;
    v60 = (const __m128i *)(v25 + 1);
    while ( 1 )
    {
      v24 += 16;
      sub_15D0E50(m128i_i64, v18);
      v27 = v60;
      v28 = (unsigned int)(v60[-1].m128i_i32[3] + 1);
      v60[-1].m128i_i32[3] = v28;
      if ( v54 == v24 )
        break;
      v29 = v27[-1].m128i_u32[2];
      v18 = v24;
      if ( v29 == (_DWORD)v28 )
      {
        v30 = (3 * v29 + 1) >> 1;
        v31 = 16 * v30 + 8;
        if ( 16 * v29 + 8 >= (unsigned int)v31 || v29 >= v30 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_98B3B0(v57, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v57);
          sub_233E40((__int64)v57);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v32 = sub_186B270(v31);
        v33 = v60;
        v34 = (_DWORD *)v32;
        v35 = (__m128i *)(v32 + 8);
        v52 = v35;
        if ( v60 )
        {
          v36 = v60[-1].m128i_u32[3];
          v37 = v35;
          v38 = v60;
          v34[1] = v36;
          v39 = &v33[v36];
          if ( v33 != v39 )
          {
            do
            {
              v40 = v38->m128i_i8[8] == 0;
              *v37 = _mm_loadu_si128(v38);
              v38->m128i_i32[0] = 0;
              if ( !v40 )
                v38->m128i_i8[8] = 0;
              ++v38;
              ++v37;
            }
            while ( v39 != v38 );
          }
          v41 = v33[-1].m128i_u32[3];
          v42 = &v33[v41];
          if ( (_DWORD)v41 )
          {
            do
            {
              v43 = v33++;
              sub_15D0DF0(v43);
            }
            while ( v33 != v42 );
            v33 = v60;
          }
          sub_186B220(&v33[-1].m128i_u64[1]);
          m128i_i64 = v52[v34[1]].m128i_i64;
          v35 = v52;
        }
        else
        {
          v34[1] = 0;
          m128i_i64 = (__int64 *)v35;
        }
        v60 = v35;
        *v34 = v30;
      }
      else
      {
        m128i_i64 = v27[v28].m128i_i64;
      }
    }
  }
LABEL_35:
  v58[0] = &off_1C57990;
  sub_B73430(v58, v56);
  v57[0] = sub_9E8700(v55, (__int64)v58) | 3;
  sub_8E8670(v55, v57, -2);
  result = qword_1C6E7C8;
  v46 = v60;
  v58[0] = qword_1C6E7C8;
  if ( v60 )
  {
    v47 = v60[-1].m128i_u32[3];
    if ( (_DWORD)v47 )
    {
      v48 = &v60[v47];
      do
      {
        v49 = v46++;
        sub_15D0DF0(v49);
      }
      while ( v46 != v48 );
      v46 = v60;
    }
    return (__int64 *)sub_186B220(&v46[-1].m128i_u64[1]);
  }
  return result;
}

