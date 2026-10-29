const __m128i *__fastcall sub_47D180(const __m128i **a1, __int64 *a2)
{
  char **exception; // rbx
  const __m128i *v5; // rdx
  __int64 v6; // rax
  __int64 *v7; // rbx
  _DWORD *v8; // rax
  const __m128i *result; // rax
  size_t v10; // rdi
  __int64 v11; // rax
  const __m128i *v12; // rbx
  __m128i *v13; // rax
  __int64 v14; // rax
  const __m128i *v15; // rdx
  const __m128i *v16; // rsi
  const __m128i *i; // rax
  __m128i v18; // xmm0
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  const __m128i *v27; // r15
  _QWORD *v28; // r14
  __int64 v29; // rdx
  _QWORD *v30; // rbp
  void *v31; // rdi
  __int64 *v32; // rbp
  __int64 *v33; // r14
  __int64 v34; // rsi
  __int64 v35; // rdi
  bool v36; // zf
  _QWORD *v37; // r14
  __int64 v38; // rdx
  _QWORD *v39; // rbp
  void *v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 *v43; // rbp
  __int64 *v44; // r14
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rdi
  _QWORD *v49; // rbp
  void (***v50)(void); // rdi
  _QWORD *v51; // rdi
  char *v52; // rax
  char *v53; // rcx
  __int64 v54; // rsi
  __int64 v55; // rdi
  char *v56; // rax
  char *v57; // rcx
  __int64 v58; // rsi
  __int64 v59; // rdi
  char *v60; // rax
  char *v61; // rcx
  __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rsi
  __int64 v65; // rdi
  _QWORD *v66; // rax
  _DWORD *v67; // [rsp+8h] [rbp-90h]
  const __m128i *v68; // [rsp+10h] [rbp-88h]
  char *ptr; // [rsp+18h] [rbp-80h]
  char *ptra; // [rsp+18h] [rbp-80h]
  char *ptrb; // [rsp+18h] [rbp-80h]
  unsigned __int64 v72; // [rsp+20h] [rbp-78h]
  unsigned __int64 v73; // [rsp+20h] [rbp-78h]
  unsigned __int64 v74; // [rsp+20h] [rbp-78h]
  unsigned int v75; // [rsp+2Ch] [rbp-6Ch]
  __int64 v76[11]; // [rsp+40h] [rbp-58h] BYREF

  v5 = *a1;
  if ( *a1 )
  {
    v6 = v5[-1].m128i_u32[3];
    if ( (_DWORD)v6 == v5[-1].m128i_i32[2] )
    {
      v75 = (unsigned int)(3 * v6 + 1) >> 1;
      v10 = 136 * v75 + 8;
      if ( 136 * (int)v6 + 8 >= (unsigned int)v10 || (unsigned int)v6 >= (unsigned int)(3 * v6 + 1) >> 1 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v76, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v76);
        sub_233E40((__int64)v76);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v11 = sub_186B270(v10);
      v12 = *a1;
      v67 = (_DWORD *)v11;
      v13 = (__m128i *)(v11 + 8);
      v68 = v13;
      if ( *a1 )
      {
        v14 = v12[-1].m128i_u32[3];
        v67[1] = v14;
        v15 = v68;
        v16 = (const __m128i *)((char *)v12 + 136 * v14);
        for ( i = v12; v16 != i; v15[-1].m128i_i32[2] = i[-1].m128i_i32[2] )
        {
          v18 = _mm_loadu_si128(i);
          i->m128i_i64[0] = 0;
          i = (const __m128i *)((char *)i + 136);
          v15 = (const __m128i *)((char *)v15 + 136);
          *(__m128i *)((char *)v15 - 136) = v18;
          v19 = i[-8].m128i_i64[1];
          i[-8].m128i_i64[1] = 0;
          v15[-8].m128i_i64[1] = v19;
          v15[-7].m128i_i64[0] = i[-7].m128i_i64[0];
          v15[-7].m128i_i32[2] = i[-7].m128i_i32[2];
          v20 = i[-6].m128i_i64[0];
          i[-6].m128i_i64[0] = 0;
          v15[-6].m128i_i64[0] = v20;
          v15[-6].m128i_i64[1] = i[-6].m128i_i64[1];
          v21 = i[-5].m128i_i64[0];
          i[-5].m128i_i64[0] = 0;
          v15[-5].m128i_i64[0] = v21;
          v22 = i[-5].m128i_i64[1];
          i[-5].m128i_i64[1] = 0;
          v15[-5].m128i_i64[1] = v22;
          v23 = i[-4].m128i_i64[0];
          i[-4].m128i_i64[0] = 0;
          v15[-4].m128i_i64[0] = v23;
          v24 = i[-4].m128i_i64[1];
          i[-4].m128i_i64[1] = 0;
          v15[-4].m128i_i64[1] = v24;
          v15[-3].m128i_i32[0] = i[-3].m128i_i32[0];
          v15[-3].m128i_i64[1] = i[-3].m128i_i64[1];
          v15[-2].m128i_i64[0] = i[-2].m128i_i64[0];
          v25 = i[-2].m128i_i64[1];
          i[-2].m128i_i64[0] = 0;
          v15[-2].m128i_i64[1] = v25;
          LODWORD(v25) = i[-1].m128i_i32[0];
          i[-2].m128i_i64[1] = 0;
          v15[-1].m128i_i32[0] = v25;
        }
        v26 = v12[-1].m128i_u32[3];
        if ( (_DWORD)v26 )
        {
          v27 = (const __m128i *)((char *)v12 + 136 * v26);
          do
          {
            v28 = (_QWORD *)v12[7].m128i_i64[0];
            if ( v28 )
            {
              v29 = *((unsigned int *)v28 - 1);
              if ( (_DWORD)v29 )
              {
                v30 = &v28[v29];
                do
                {
                  while ( *v28 )
                  {
                    v31 = (void *)(*v28++ - 8LL);
                    sub_186B220(v31);
                    if ( v30 == v28 )
                      goto LABEL_19;
                  }
                  ++v28;
                }
                while ( v28 != v30 );
LABEL_19:
                v28 = (_QWORD *)v12[7].m128i_i64[0];
              }
              sub_186B220(v28 - 1);
            }
            v32 = (__int64 *)v12[6].m128i_i64[1];
            if ( v32 )
            {
              v33 = &v32[*((unsigned int *)v32 - 1)];
              if ( v32 >= v33 )
                goto LABEL_29;
              do
              {
                while ( 1 )
                {
                  v34 = *v32;
                  if ( *v32 )
                  {
                    v35 = v12[6].m128i_i64[0];
                    v36 = (*(_DWORD *)(v34 + 8))-- == 1;
                    if ( v36 )
                      break;
                  }
                  if ( ++v32 >= v33 )
                    goto LABEL_28;
                }
                sub_15D7BC0(v35, v34);
                ++v32;
              }
              while ( v32 < v33 );
LABEL_28:
              v32 = (__int64 *)v12[6].m128i_i64[1];
              if ( v32 )
LABEL_29:
                sub_186B220(v32 - 1);
            }
            v37 = (_QWORD *)v12[5].m128i_i64[0];
            if ( v37 )
            {
              v38 = *((unsigned int *)v37 - 1);
              if ( (_DWORD)v38 )
              {
                v39 = &v37[v38];
                do
                {
                  while ( *v37 )
                  {
                    v40 = (void *)(*v37++ - 8LL);
                    sub_186B220(v40);
                    if ( v39 == v37 )
                      goto LABEL_35;
                  }
                  ++v37;
                }
                while ( v37 != v39 );
LABEL_35:
                v37 = (_QWORD *)v12[5].m128i_i64[0];
              }
              sub_186B220(v37 - 1);
            }
            v41 = v12[4].m128i_i64[1];
            if ( v41 )
              sub_186B220((void *)(v41 - 8));
            v42 = v12[4].m128i_i64[0];
            if ( v42 )
              sub_186B220((void *)(v42 - 8));
            v43 = (__int64 *)v12[3].m128i_i64[1];
            if ( v43 )
            {
              v44 = &v43[*((unsigned int *)v43 - 1)];
              if ( v43 >= v44 )
                goto LABEL_49;
              do
              {
                while ( 1 )
                {
                  v45 = *v43;
                  if ( *v43 )
                  {
                    v46 = v12[3].m128i_i64[0];
                    v36 = (*(_DWORD *)(v45 + 8))-- == 1;
                    if ( v36 )
                      break;
                  }
                  if ( ++v43 >= v44 )
                    goto LABEL_48;
                }
                sub_15D7BC0(v46, v45);
                ++v43;
              }
              while ( v43 < v44 );
LABEL_48:
              v43 = (__int64 *)v12[3].m128i_i64[1];
              if ( v43 )
LABEL_49:
                sub_186B220(v43 - 1);
            }
            v47 = v12[2].m128i_i64[1];
            if ( v47 )
              sub_186B220((void *)(v47 - 8));
            v48 = v12[1].m128i_i64[0];
            if ( v48 )
              sub_186B220((void *)(v48 - 8));
            v49 = (_QWORD *)v12->m128i_i64[0];
            if ( v12->m128i_i64[0] )
            {
              v36 = (*(_DWORD *)v49)-- == 1;
              if ( v36 )
              {
                v50 = (void (***)(void))v49[11];
                if ( v50 )
                {
                  v36 = (*((_DWORD *)v50 + 4))-- == 1;
                  if ( v36 )
                  {
                    (**v50)();
                    sub_186B220(v50);
                  }
                }
                v51 = (_QWORD *)v49[10];
                if ( v51 )
                {
                  v36 = (*(_DWORD *)v51)-- == 1;
                  if ( v36 )
                  {
                    sub_41CB00(v51);
                    sub_186B220(v51);
                  }
                }
                v52 = (char *)v49[9];
                if ( v52 )
                {
                  v53 = &v52[8 * *((unsigned int *)v52 - 1)];
                  if ( v52 >= v53 )
                    goto LABEL_78;
                  do
                  {
                    while ( 1 )
                    {
                      v54 = *(_QWORD *)v52;
                      if ( *(_QWORD *)v52 )
                      {
                        v55 = v49[8];
                        v36 = (*(_DWORD *)(v54 + 8))-- == 1;
                        if ( v36 )
                          break;
                      }
                      v52 += 8;
                      if ( v52 >= v53 )
                        goto LABEL_77;
                    }
                    v72 = (unsigned __int64)v53;
                    ptr = v52;
                    sub_15D7BC0(v55, v54);
                    v53 = (char *)v72;
                    v52 = ptr + 8;
                  }
                  while ( (unsigned __int64)(ptr + 8) < v72 );
LABEL_77:
                  v52 = (char *)v49[9];
                  if ( v52 )
LABEL_78:
                    sub_186B220(v52 - 8);
                }
                v56 = (char *)v49[7];
                if ( v56 )
                {
                  v57 = &v56[8 * *((unsigned int *)v56 - 1)];
                  if ( v56 >= v57 )
                    goto LABEL_87;
                  do
                  {
                    while ( 1 )
                    {
                      v58 = *(_QWORD *)v56;
                      if ( *(_QWORD *)v56 )
                      {
                        v59 = v49[6];
                        v36 = (*(_DWORD *)(v58 + 8))-- == 1;
                        if ( v36 )
                          break;
                      }
                      v56 += 8;
                      if ( v56 >= v57 )
                        goto LABEL_86;
                    }
                    v73 = (unsigned __int64)v57;
                    ptra = v56;
                    sub_15D7BC0(v59, v58);
                    v57 = (char *)v73;
                    v56 = ptra + 8;
                  }
                  while ( (unsigned __int64)(ptra + 8) < v73 );
LABEL_86:
                  v56 = (char *)v49[7];
                  if ( v56 )
LABEL_87:
                    sub_186B220(v56 - 8);
                }
                v60 = (char *)v49[5];
                if ( v60 )
                {
                  v61 = &v60[8 * *((unsigned int *)v60 - 1)];
                  if ( v60 >= v61 )
                    goto LABEL_96;
                  do
                  {
                    while ( 1 )
                    {
                      v62 = *(_QWORD *)v60;
                      if ( *(_QWORD *)v60 )
                      {
                        v63 = v49[4];
                        v36 = (*(_DWORD *)(v62 + 8))-- == 1;
                        if ( v36 )
                          break;
                      }
                      v60 += 8;
                      if ( v60 >= v61 )
                        goto LABEL_95;
                    }
                    v74 = (unsigned __int64)v61;
                    ptrb = v60;
                    sub_15D7BC0(v63, v62);
                    v61 = (char *)v74;
                    v60 = ptrb + 8;
                  }
                  while ( (unsigned __int64)(ptrb + 8) < v74 );
LABEL_95:
                  v60 = (char *)v49[5];
                  if ( v60 )
LABEL_96:
                    sub_186B220(v60 - 8);
                }
                v64 = v49[2];
                if ( v64 )
                {
                  v65 = v49[3];
                  v36 = (*(_DWORD *)(v64 + 8))-- == 1;
                  if ( v36 )
                    sub_15D7BC0(v65, v64);
                }
                sub_186B220(v49);
              }
            }
            v12 = (const __m128i *)((char *)v12 + 136);
          }
          while ( v12 != v27 );
          v12 = *a1;
        }
        sub_186B220(&v12[-1].m128i_u64[1]);
        v7 = &v68->m128i_i64[17 * (unsigned int)v67[1]];
      }
      else
      {
        v7 = (__int64 *)v13;
        v67[1] = 0;
      }
      *a1 = v68;
      *v67 = v75;
    }
    else
    {
      v7 = &v5->m128i_i64[17 * v6];
    }
  }
  else
  {
    v66 = (_QWORD *)sub_186B270(0x118u);
    v7 = v66 + 1;
    *v66 = 2;
    *a1 = (const __m128i *)(v66 + 1);
  }
  v8 = (_DWORD *)*a2;
  *v7 = *a2;
  if ( v8 )
    ++*v8;
  sub_482680(v7 + 1, a2 + 1);
  result = *a1;
  ++(*a1)[-1].m128i_i32[3];
  return result;
}

