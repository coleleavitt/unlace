__int64 __fastcall sub_7A7B20(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i v7; // xmm0
  __int64 *v8; // rcx
  __int64 (__fastcall ***v9)(); // rdi
  __int64 (__fastcall *v10)(); // rax
  __int64 v11; // rax
  __int64 *v12; // r15
  __int64 v13; // rax
  __int64 *v14; // r12
  __int64 *v15; // rbx
  __int64 *v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rbx
  __int64 v24; // rax
  _QWORD *v25; // r12
  void *v26; // rdi
  __int64 v27; // rax
  _QWORD *v28; // rbx
  __int64 v29; // rax
  _QWORD *v30; // r12
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdi
  void *v35; // rdi
  void (__fastcall *v36)(__m128i *, __m128i *, __int64, __int64 *, __int64, __int64, __int64, __int64, __int64, __int64); // rax
  void (__fastcall *v37)(__m128i *, __m128i *, __int64); // rax
  void (__fastcall *v38)(__m128i *, __m128i *, __int64); // rax
  void (__fastcall *v39)(__m128i *, __m128i *, __int64); // rax
  void (__fastcall *v40)(__m128i *, __m128i *, __int64); // rax
  void (__fastcall *v41)(__m128i *, __m128i *, __int64); // rax
  void (__fastcall *v42)(__m128i *, __m128i *, __int64); // rax
  void (__fastcall *v43)(__m128i *, __m128i *, __int64); // rax
  void (__fastcall *v44)(__m128i *, __m128i *, __int64); // rax
  __m128i v45; // xmm6
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 result; // rax
  __m128i v50; // [rsp+0h] [rbp-68h] BYREF
  __m128i v51; // [rsp+10h] [rbp-58h] BYREF
  __int64 (__fastcall ***v52)(); // [rsp+28h] [rbp-40h]

  v7 = _mm_loadl_epi64((const __m128i *)off_1C548D0);
  v8 = &`vtable for'euf::th_solver;
  a1->m128i_i64[0] = (__int64)&off_1C6AB08;
  v50 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)qword_1C6C4D8, (__m128i)(unsigned __int64)qword_1C6C528);
  a1[3].m128i_i64[0] = (__int64)off_1C6ADE8;
  a1[7].m128i_i64[0] = (__int64)off_1C6AE40;
  a1[2] = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)off_1C6ADC0);
  v9 = (__int64 (__fastcall ***)())a1[26].m128i_i64[0];
  v51 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)algn_1C6C7D0, (__m128i)(unsigned __int64)qword_1C6C820);
  if ( v9 )
  {
    v10 = **v9;
    if ( v10 != nullsub_409 )
    {
      v52 = v9;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64, __int64 (__fastcall *)(), __int64 *))v10)(
        v9,
        a2,
        nullsub_409,
        &`vtable for'euf::th_solver);
    }
    sub_186B220(v9);
  }
  v11 = a1[32].m128i_i64[0];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = (__int64 *)a1[31].m128i_i64[0];
  if ( v12 )
  {
    v13 = *((unsigned int *)v12 - 1);
    if ( (_DWORD)v13 )
    {
      v14 = &v12[2 * v13];
      do
      {
        v15 = (__int64 *)v12[1];
        if ( v15 )
        {
          v16 = &v15[*((unsigned int *)v15 - 1)];
          if ( v15 >= v16 )
            goto LABEL_18;
          do
          {
            while ( 1 )
            {
              v17 = *v15;
              if ( *v15 )
              {
                v18 = *v12;
                v19 = (*(_DWORD *)(v17 + 8))-- == 1;
                if ( v19 )
                  break;
              }
              if ( ++v15 >= v16 )
                goto LABEL_17;
            }
            sub_15D7BC0(v18, v17);
            ++v15;
          }
          while ( v15 < v16 );
LABEL_17:
          v15 = (__int64 *)v12[1];
          if ( v15 )
LABEL_18:
            sub_186B220(v15 - 1);
        }
        v12 += 2;
      }
      while ( v12 != v14 );
      v12 = (__int64 *)a1[31].m128i_i64[0];
    }
    sub_186B220(v12 - 1);
  }
  v20 = a1[29].m128i_i64[1];
  if ( v20 )
    sub_186B220((void *)(v20 - 8));
  v21 = a1[29].m128i_i64[0];
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  v22 = a1[28].m128i_i64[1];
  if ( v22 )
    sub_186B220((void *)(v22 - 8));
  v23 = (_QWORD *)a1[28].m128i_i64[0];
  if ( v23 )
  {
    v24 = *((unsigned int *)v23 - 1);
    if ( (_DWORD)v24 )
    {
      v25 = &v23[v24];
      do
      {
        while ( *v23 )
        {
          v26 = (void *)(*v23++ - 8LL);
          sub_186B220(v26);
          if ( v23 == v25 )
          {
            v23 = (_QWORD *)a1[28].m128i_i64[0];
            goto LABEL_34;
          }
        }
        ++v23;
      }
      while ( v23 != v25 );
      v23 = (_QWORD *)a1[28].m128i_i64[0];
    }
LABEL_34:
    sub_186B220(v23 - 1);
  }
  v27 = a1[27].m128i_i64[1];
  if ( v27 )
    sub_186B220((void *)(v27 - 8));
  v28 = (_QWORD *)a1[27].m128i_i64[0];
  if ( v28 )
  {
    v29 = *((unsigned int *)v28 - 1);
    if ( (_DWORD)v29 )
    {
      v30 = &v28[6 * v29];
      do
      {
        while ( 1 )
        {
          v31 = v28[4];
          if ( v31 )
            sub_186B220((void *)(v31 - 8));
          v32 = v28[3];
          if ( v32 )
            sub_186B220((void *)(v32 - 8));
          v33 = v28[1];
          if ( v33 )
          {
            v34 = v28[2];
            v19 = (*(_DWORD *)(v33 + 8))-- == 1;
            if ( v19 )
              sub_15D7BC0(v34, v33);
          }
          if ( !*v28 )
            break;
          v35 = (void *)(*v28 - 8LL);
          v28 += 6;
          sub_186B220(v35);
          if ( v30 == v28 )
          {
            v28 = (_QWORD *)a1[27].m128i_i64[0];
            goto LABEL_50;
          }
        }
        v28 += 6;
      }
      while ( v28 != v30 );
      v28 = (_QWORD *)a1[27].m128i_i64[0];
    }
LABEL_50:
    sub_186B220(v28 - 1);
  }
  v36 = (void (__fastcall *)(__m128i *, __m128i *, __int64, __int64 *, __int64, __int64, __int64, __int64, __int64, __int64))a1[25].m128i_i64[0];
  if ( v36 )
    v36(a1 + 24, a1 + 24, 3, v8, a5, a6, v50.m128i_i64[0], v50.m128i_i64[1], v51.m128i_i64[0], v51.m128i_i64[1]);
  v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))a1[23].m128i_i64[0];
  if ( v37 )
    v37(a1 + 22, a1 + 22, 3);
  v38 = (void (__fastcall *)(__m128i *, __m128i *, __int64))a1[21].m128i_i64[0];
  if ( v38 )
    v38(a1 + 20, a1 + 20, 3);
  v39 = (void (__fastcall *)(__m128i *, __m128i *, __int64))a1[19].m128i_i64[0];
  if ( v39 )
    v39(a1 + 18, a1 + 18, 3);
  v40 = (void (__fastcall *)(__m128i *, __m128i *, __int64))a1[17].m128i_i64[0];
  if ( v40 )
    v40(a1 + 16, a1 + 16, 3);
  v41 = (void (__fastcall *)(__m128i *, __m128i *, __int64))a1[15].m128i_i64[0];
  if ( v41 )
    v41(a1 + 14, a1 + 14, 3);
  v42 = (void (__fastcall *)(__m128i *, __m128i *, __int64))a1[13].m128i_i64[0];
  if ( v42 )
    v42(a1 + 12, a1 + 12, 3);
  v43 = (void (__fastcall *)(__m128i *, __m128i *, __int64))a1[11].m128i_i64[0];
  if ( v43 )
    v43(a1 + 10, a1 + 10, 3);
  v44 = (void (__fastcall *)(__m128i *, __m128i *, __int64))a1[9].m128i_i64[0];
  if ( v44 )
    v44(a1 + 8, a1 + 8, 3);
  v45 = _mm_load_si128(&v51);
  a1->m128i_i64[0] = (__int64)qword_1C6C5A8;
  a1[3].m128i_i64[0] = (__int64)off_1C6C848;
  v46 = a1[6].m128i_i64[0];
  a1[2] = v45;
  if ( v46 )
    sub_186B220((void *)(v46 - 8));
  v47 = a1[5].m128i_i64[1];
  if ( v47 )
    sub_186B220((void *)(v47 - 8));
  a1[2] = _mm_load_si128(&v50);
  a1->m128i_i64[0] = (__int64)qword_1C6C2C8;
  a1[3].m128i_i64[0] = (__int64)off_1C6A6A8;
  v48 = a1[4].m128i_i64[0];
  if ( v48 )
    sub_186B220((void *)(v48 - 8));
  result = a1[3].m128i_i64[1];
  if ( result )
    return sub_186B220((void *)(result - 8));
  return result;
}

