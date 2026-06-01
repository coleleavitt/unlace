void *__fastcall sub_4D6640(__int64 a1)
{
  char **exception; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  _DWORD *v5; // rax
  unsigned int v6; // r13d
  __int64 v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  size_t v10; // rdx
  bool v11; // zf
  unsigned int v12; // edx
  void *v13; // rdi
  void *v14; // r12
  __int64 (__fastcall *v15)(__int64, __int64); // rdx
  char v16; // al
  __int64 v17; // rax
  _QWORD *v18; // r12
  unsigned int v19; // r12d
  size_t v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdi
  _DWORD *v23; // r15
  __int64 v24; // rax
  __int64 *v25; // r9
  unsigned __int64 v26; // rcx
  __int64 *v27; // r8
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __m128i v30; // xmm0
  unsigned __int64 v31; // rcx
  __int64 *v32; // rax
  __int64 v33; // r8
  _QWORD *v34; // r13
  _QWORD *v35; // r14
  void *v36; // rdi
  __int64 v37; // rax
  void (__fastcall ***v38)(_QWORD); // r12
  void (__fastcall ***v39)(_QWORD); // r12
  __int64 v40; // rax
  void (__fastcall *v41)(__int64, int, __int64 *); // rcx
  __int64 v42; // rsi
  _QWORD *v43; // r12
  _QWORD *v44; // r13
  __int64 (__fastcall *v45)(); // rdx
  char *v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // r12
  _QWORD *v49; // rbp
  void *v50; // rdi
  void *result; // rax
  _QWORD *v52; // rax
  unsigned __int64 v53; // rax
  __int64 v54; // rcx
  unsigned int v55; // [rsp+0h] [rbp-88h]
  unsigned __int64 v56; // [rsp+0h] [rbp-88h]
  void *src; // [rsp+18h] [rbp-70h] BYREF
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  void *v59; // [rsp+28h] [rbp-60h] BYREF
  __int64 v60[11]; // [rsp+30h] [rbp-58h] BYREF

  v3 = *(_QWORD *)a1;
  src = nullptr;
  (*(void (__fastcall **)(void **, __int64))(v3 + 200))(&ptr, a1);
  (*(void (__fastcall **)(void **, __int64))(*(_QWORD *)a1 + 208LL))(&v59, a1);
  v4 = 0;
  while ( 1 )
  {
    v14 = v59;
    v15 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)ptr + 40LL);
    if ( v15 == sub_4C9890 )
    {
      if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)ptr + 16LL))() )
        goto LABEL_12;
      v16 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    else
    {
      v16 = v15((__int64)ptr, (__int64)v59);
    }
    if ( v16 )
      break;
LABEL_12:
    v17 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ptr + 24LL))(ptr);
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v17 + 24LL))(v17, &src);
    if ( v4 )
    {
      v12 = *(_DWORD *)(v4 - 4);
      v18 = (_QWORD *)(v4 + 8LL * v12);
      if ( v12 == *(_DWORD *)(v4 - 8) )
      {
        v19 = (3 * v12 + 1) >> 1;
        v20 = 8 * v19 + 8;
        if ( 8 * v12 + 8 >= (unsigned int)v20 || v12 >= v19 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v60, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v60);
          sub_233E40((__int64)v60);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v21 = sub_186B270(v20);
        v22 = *(unsigned int *)(v4 - 4);
        v23 = (_DWORD *)v21;
        v21 += 8;
        *(_DWORD *)(v21 - 4) = v22;
        v56 = v21;
        v24 = 8 * v22;
        v25 = (__int64 *)(v4 + 8 * v22);
        if ( v25 != (__int64 *)v4 )
        {
          v26 = v24 - 8;
          v27 = (__int64 *)v4;
          if ( (unsigned __int64)(v24 - 8) <= 8 || v56 < v4 + 16 && v4 < (unsigned __int64)(v23 + 6) )
          {
            v53 = v56;
            do
            {
              v54 = *v27;
              *v27++ = 0;
              v53 += 8LL;
              *(_QWORD *)(v53 - 8) = v54;
            }
            while ( v25 != v27 );
          }
          else
          {
            v28 = 0;
            v29 = (v26 >> 3) + 1;
            do
            {
              v30 = _mm_loadu_si128((const __m128i *)(v4 + v28 * 4));
              *(_OWORD *)(v4 + v28 * 4) = 0;
              *(__m128i *)&v23[v28 + 2] = v30;
              v28 += 4;
            }
            while ( v28 != 4 * (v29 >> 1) );
            if ( (v29 & 1) != 0 )
            {
              v31 = v29 & 0xFFFFFFFFFFFFFFFELL;
              v32 = (__int64 *)(v4 + 8 * v31);
              v33 = *v32;
              *v32 = 0;
              *(_QWORD *)(v56 + 8 * v31) = v33;
            }
          }
        }
        v34 = (_QWORD *)(v4 + 8 * v22);
        v35 = (_QWORD *)v4;
        if ( (_DWORD)v22 )
        {
          do
          {
            while ( *v35 )
            {
              v36 = (void *)(*v35++ - 8LL);
              sub_186B220(v36);
              if ( v35 == v34 )
                goto LABEL_27;
            }
            ++v35;
          }
          while ( v35 != v34 );
        }
LABEL_27:
        sub_186B220((void *)(v4 - 8));
        v37 = (unsigned int)v23[1];
        v4 = v56;
        *v23 = v19;
        v12 = v37;
        v18 = (_QWORD *)(v56 + 8 * v37);
      }
    }
    else
    {
      v52 = (_QWORD *)sub_186B270(0x18u);
      v4 = (unsigned __int64)(v52 + 1);
      *v52 = 2;
      v12 = 0;
      v18 = v52 + 1;
    }
    v5 = src;
    *v18 = 0;
    if ( v5 )
    {
      v6 = *(v5 - 1);
      v7 = (unsigned int)*(v5 - 2);
      v55 = v7;
      v8 = (_QWORD *)sub_186B270(8 * v7 + 8);
      v9 = src;
      *v18 = v8 + 1;
      *v8 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v55), _mm_cvtsi32_si128(v6)).m128i_u64[0];
      if ( !v9 )
        goto LABEL_6;
      v10 = 8LL * *((unsigned int *)v9 - 1);
      v11 = v10 == 8;
      if ( v10 > 8 )
      {
        memmove(v8 + 1, v9, v10);
LABEL_6:
        v12 = *(_DWORD *)(v4 - 4);
        goto LABEL_7;
      }
      v12 = *(_DWORD *)(v4 - 4);
      if ( v11 )
        v8[1] = *v9;
    }
LABEL_7:
    v13 = ptr;
    *(_DWORD *)(v4 - 4) = v12 + 1;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 32LL))(v13);
  }
  v38 = (void (__fastcall ***)(_QWORD))v59;
  if ( v59 )
  {
    v11 = (*((_DWORD *)v59 + 2))-- == 1;
    if ( v11 )
    {
      (**v38)(v38);
      sub_186B220(v38);
    }
  }
  v39 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr && (v11 = *((_DWORD *)ptr + 2) == 1, --*((_DWORD *)ptr + 2), v11) )
  {
    (**v39)(v39);
    sub_186B220(v39);
    v40 = *(_QWORD *)a1;
    v41 = *(void (__fastcall **)(__int64, int, __int64 *))(*(_QWORD *)a1 + 176LL);
    if ( !v4 )
      goto LABEL_57;
LABEL_36:
    v42 = *(unsigned int *)(v4 - 4);
    if ( v41 != sub_4D57D0 )
      goto LABEL_64;
    if ( (_DWORD)v42 )
    {
      v43 = (_QWORD *)v4;
      v44 = (_QWORD *)(v4 + 8 * v42);
      while ( 1 )
      {
        v45 = *(__int64 (__fastcall **)())(v40 + 160);
        if ( v45 == sub_4D9400 )
        {
          (*(void (__fastcall **)(__int64, _QWORD))(v40 + 168))(a1, *v43++);
          if ( v44 == v43 )
            goto LABEL_43;
        }
        else
        {
          ((void (__fastcall *)(__int64, _QWORD *))v45)(a1, v43++);
          if ( v44 == v43 )
          {
LABEL_43:
            v46 = (char *)src;
            if ( src )
              goto LABEL_44;
LABEL_45:
            v47 = *(unsigned int *)(v4 - 4);
            if ( (_DWORD)v47 )
            {
              v48 = (_QWORD *)(v4 + 8 * v47);
              v49 = (_QWORD *)v4;
              do
              {
                while ( *v49 )
                {
                  v50 = (void *)(*v49++ - 8LL);
                  sub_186B220(v50);
                  if ( v48 == v49 )
                    return (void *)sub_186B220((void *)(v4 - 8));
                }
                ++v49;
              }
              while ( v48 != v49 );
            }
            return (void *)sub_186B220((void *)(v4 - 8));
          }
        }
        v40 = *(_QWORD *)a1;
      }
    }
    v46 = (char *)src;
    if ( src )
    {
LABEL_44:
      sub_186B220(v46 - 8);
      goto LABEL_45;
    }
    return (void *)sub_186B220((void *)(v4 - 8));
  }
  else
  {
    v40 = *(_QWORD *)a1;
    v41 = *(void (__fastcall **)(__int64, int, __int64 *))(*(_QWORD *)a1 + 176LL);
    if ( v4 )
      goto LABEL_36;
LABEL_57:
    v42 = 0;
    if ( v41 == sub_4D57D0 )
    {
      result = src;
      if ( src )
        return (void *)sub_186B220((char *)src - 8);
      return result;
    }
LABEL_64:
    v41(a1, v42, (__int64 *)v4);
    result = src;
    if ( src )
      result = (void *)sub_186B220((char *)src - 8);
    if ( v4 )
      goto LABEL_45;
  }
  return result;
}

