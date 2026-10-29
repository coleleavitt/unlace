__m128i *__fastcall sub_71BB00(__m128i *a1, __m128i *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rbx
  __m128i v6; // xmm0
  __int16 v7; // ax
  __int64 (__fastcall *v8)(__int64 *); // rax
  __int64 v9; // rax
  __int64 v10; // r13
  void (__fastcall ***v11)(void *); // r15
  bool v12; // zf
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r13
  void (__fastcall ***v17)(void *); // r14
  __int64 v18; // rdi
  __int64 v19; // rax
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // r12
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r15
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // r15
  void **v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v43; // rdi
  _QWORD *v44; // rdx
  __int64 v45; // r15
  _QWORD *v46; // rax
  char v47; // al
  __int64 v48; // rcx
  _QWORD *v49; // rdx
  unsigned int v50; // r8d
  __int64 v51; // rdi
  __int64 *v52; // r15
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rdi
  __m128i si128; // xmm0
  unsigned __int64 v57; // rcx
  _QWORD *v58; // rax
  __int64 v59; // rsi
  __int64 v60; // rdi
  char **exception; // r12
  __int64 v62; // rdx
  __int64 v64; // [rsp+8h] [rbp-98h]
  _QWORD *v65; // [rsp+8h] [rbp-98h]
  _QWORD *v66; // [rsp+10h] [rbp-90h]
  unsigned __int64 v67; // [rsp+10h] [rbp-90h]
  unsigned int v68; // [rsp+10h] [rbp-90h]
  _QWORD *v69; // [rsp+18h] [rbp-88h]
  _QWORD *v70; // [rsp+20h] [rbp-80h]
  int v71[4]; // [rsp+28h] [rbp-78h] BYREF
  int v72[2]; // [rsp+38h] [rbp-68h] BYREF
  __int64 v73; // [rsp+40h] [rbp-60h]
  __m128i v74[5]; // [rsp+48h] [rbp-58h] BYREF

  v5 = a2[1].m128i_i64[0];
  v6 = _mm_unpacklo_epi64((__m128i)a4, (__m128i)(unsigned __int64)v5);
  *(__m128i *)v71 = v6;
  if ( a4 )
    ++*(_DWORD *)(a4 + 8);
  v7 = *(_WORD *)(a4 + 4);
  if ( v7 )
  {
    if ( v7 != 2 )
      goto LABEL_5;
LABEL_38:
    v29 = 0;
    a1->m128i_i64[0] = 0;
    a1->m128i_i64[1] = v5;
    goto LABEL_39;
  }
  if ( (*(_BYTE *)(a4 + 30) & 2) != 0 )
    goto LABEL_38;
LABEL_5:
  v8 = *(__int64 (__fastcall **)(__int64 *))(a2->m128i_i64[0] + 160);
  if ( v8 == sub_717550 )
  {
    sub_717280((__int64)a2);
    v9 = sub_374300(a2[4].m128i_i64[0], (__int64)&a2[4].m128i_i64[1], (__int64)&qword_18D6CD0);
    v10 = v9;
    if ( v9 )
      ++*(_DWORD *)(v9 + 48);
    v11 = (void (__fastcall ***)(void *))a2[5].m128i_i64[0];
    if ( v11 )
    {
      v12 = (*((_DWORD *)v11 + 12))-- == 1;
      if ( v12 )
      {
        (**v11)(v11);
        sub_186B220(v11);
      }
    }
    v13 = a2[6].m128i_i64[0];
    v14 = a2[5].m128i_i64[1];
    a2[5].m128i_i64[0] = v10;
    sub_710AA0(v14, v13);
    a2[5].m128i_i64[1] = 0;
    v15 = sub_374300(a2[6].m128i_i64[1], (__int64)a2[7].m128i_i64, (__int64)&qword_18D6CD0);
    v16 = v15;
    if ( v15 )
      ++*(_DWORD *)(v15 + 48);
    v17 = (void (__fastcall ***)(void *))a2[7].m128i_i64[1];
    if ( v17 )
    {
      v12 = (*((_DWORD *)v17 + 12))-- == 1;
      if ( v12 )
      {
        (**v17)(v17);
        sub_186B220(v17);
      }
    }
    a2[7].m128i_i64[1] = v16;
    sub_710AA0(a2[8].m128i_i64[0], a2[8].m128i_i64[1]);
    a2[8].m128i_i64[0] = 0;
  }
  else
  {
    v8(a2->m128i_i64);
  }
  sub_16983D0(v74);
  v18 = *(_QWORD *)v71;
  v19 = v74[0].m128i_i64[0];
  v74[0].m128i_i64[0] = *(_QWORD *)v71;
  *(_QWORD *)v71 = v19;
  sub_710AA0(v18, v74[0].m128i_i64[1]);
  sub_15ECFD0((unsigned int)v74, (unsigned int)v71, 8, v20, v21, v22);
  v23 = *(_QWORD *)v71;
  v24 = v74[0].m128i_i64[0];
  v74[0].m128i_i64[0] = *(_QWORD *)v71;
  *(_QWORD *)v71 = v24;
  sub_710AA0(v23, v74[0].m128i_i64[1]);
  sub_719980((__int64)a2, (__int64 *)v71, v25, v26, v27, v28);
  if ( *(_WORD *)(*(_QWORD *)v71 + 4LL) || (*(_BYTE *)(*(_QWORD *)v71 + 30LL) & 1) == 0 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_109F38(v74[0].m128i_i64, "formula is not hoistable", v62);
    *exception = (char *)off_1C63670;
    sub_2333C0(exception + 1, v74);
    sub_233E40((__int64)v74);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
  }
  v74[0].m128i_i64[0] = -1;
  *(_QWORD *)v72 = v5;
  v73 = 0;
  sub_715950((__m128i *)a2[9].m128i_i64, *(__int64 *)v71, (unsigned int *)v74, (__int64)v72);
  v5 = *(_QWORD *)v72;
  v29 = v73;
  sub_714210(v74, a2 + 9, *(__int64 *)v71);
  v30 = *(_QWORD *)v71;
  *(_QWORD *)v71 = v74[0].m128i_i64[0];
  sub_710AA0(v30, v74[0].m128i_i64[1]);
  if ( v29 )
    v31 = *(unsigned int *)(v29 - 4);
  else
    v31 = 0;
  v32 = sub_15EC1C0(v5, v31);
  v33 = v32;
  if ( v32 )
    ++*(_DWORD *)(v32 + 8);
  if ( *(_QWORD *)(a2[6].m128i_i64[1] + 856) != v32 )
    sub_E5EBF0(a2[7].m128i_i64[1], v32);
  sub_710AA0(v33, v5);
  if ( v29 )
    v34 = *(unsigned int *)(v29 - 4);
  else
    v34 = 0;
  v35 = sub_15EC1C0(v5, v34);
  v36 = v35;
  if ( v35 )
    ++*(_DWORD *)(v35 + 8);
  if ( *(_QWORD *)(a2[4].m128i_i64[0] + 856) != v35 )
    sub_E5EBF0(a2[5].m128i_i64[0], v35);
  sub_710AA0(v36, v5);
  if ( *(_QWORD *)(a2[6].m128i_i64[1] + 856) != *(_QWORD *)v71 )
    sub_E5EBF0(a2[7].m128i_i64[1], *(_QWORD *)v71);
  v37 = nullptr;
  v38 = sub_15E1A70(a2[1].m128i_i64[0]);
  if ( v38 != *(_QWORD *)(a2[4].m128i_i64[0] + 856) )
  {
    v37 = (void **)v38;
    sub_E5EBF0(a2[5].m128i_i64[0], v38);
  }
  if ( (unsigned int)sub_71AF20((void **)a2, v37, *(double *)v6.m128i_i64) == -1 )
  {
    sub_41C800(v74, &a2[22].m128i_u64[1]);
    v43 = *(_QWORD *)v71;
    *(_QWORD *)v71 = v74[0].m128i_i64[0];
    sub_710AA0(v43, v74[0].m128i_i64[1]);
    v44 = (_QWORD *)a2[28].m128i_i64[0];
    if ( v44 )
    {
      v45 = 0;
      v46 = &v44[*((unsigned int *)v44 - 1)];
      v69 = v46;
      if ( v46 == v44 )
      {
        *((_DWORD *)v46 - 1) = 0;
      }
      else
      {
        do
        {
          v66 = v44;
          v64 = *v44;
          v47 = sub_167C200(*v44, *(_QWORD *)v71);
          v48 = v64;
          v49 = v66;
          if ( v47 )
          {
            v50 = v45 + 1;
            v51 = a2[27].m128i_i64[1];
            v52 = (__int64 *)(a2[28].m128i_i64[0] + 8 * v45);
            if ( v64 )
              ++*(_DWORD *)(v64 + 8);
            v53 = *v52;
            if ( *v52 )
            {
              v12 = (*(_DWORD *)(v53 + 8))-- == 1;
              if ( v12 )
              {
                v70 = v66;
                v68 = v50;
                sub_15D7BC0(v51, v53);
                v49 = v70;
                v50 = v68;
                v48 = v64;
              }
            }
            *v52 = v48;
            v45 = v50;
          }
          v44 = v49 + 1;
        }
        while ( v69 != v44 );
        v54 = a2[28].m128i_i64[0];
        if ( v54 )
        {
          v57 = v54 + 8LL * *(unsigned int *)(v54 - 4);
          v58 = (_QWORD *)(v54 + 8LL * (unsigned int)v45);
          if ( (unsigned __int64)v58 >= v57 )
            goto LABEL_56;
          do
          {
            v59 = *v58;
            if ( *v58 )
            {
              v60 = a2[27].m128i_i64[1];
              v12 = (*(_DWORD *)(v59 + 8))-- == 1;
              if ( v12 )
              {
                v67 = v57;
                v65 = v58;
                sub_15D7BC0(v60, v59);
                v57 = v67;
                v58 = v65;
              }
            }
            ++v58;
          }
          while ( (unsigned __int64)v58 < v57 );
          v54 = a2[28].m128i_i64[0];
          if ( v54 )
          {
LABEL_56:
            *(_DWORD *)(v54 - 4) = v45;
            if ( (_DWORD)v45 )
            {
              sub_16983D0(v74);
              v55 = *(_QWORD *)v71;
              *(_QWORD *)v71 = v74[0].m128i_i64[0];
              v74[0].m128i_i64[0] = v55;
              sub_710AA0(v55, v74[0].m128i_i64[1]);
            }
          }
        }
      }
    }
    si128 = _mm_load_si128((const __m128i *)v71);
    *(_QWORD *)v71 = 0;
    *a1 = si128;
  }
  else
  {
    v39 = a2[1].m128i_i64[0];
    a1->m128i_i64[0] = 0;
    a1->m128i_i64[1] = v39;
  }
LABEL_39:
  *(_QWORD *)v72 = v5;
  v73 = v29;
  sub_2334C0((__int64 *)v72);
  v40 = *(_QWORD *)v71;
  if ( *(_QWORD *)v71 )
  {
    v41 = *(_QWORD *)&v71[2];
    v12 = (*(_DWORD *)(*(_QWORD *)v71 + 8LL))-- == 1;
    if ( v12 )
      sub_15D7BC0(v41, v40);
  }
  return a1;
}

