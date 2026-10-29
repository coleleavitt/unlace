__int64 __fastcall sub_7F2950(_QWORD *a1, unsigned int a2)
{
  char **exception; // rbp
  char **v3; // rbp
  __int64 v5; // rdx
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned int *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  _QWORD *v12; // rdx
  __int64 result; // rax
  int v14; // r12d
  unsigned __int64 v15; // rbp
  unsigned int *v16; // rbx
  unsigned int *v17; // r13
  __int64 v18; // rbp
  _BYTE *v19; // rdi
  unsigned int v20; // r12d
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r9
  unsigned int v24; // r14d
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rsi
  __m128i v27; // xmm0
  unsigned __int64 v28; // rsi
  __int64 v29; // r9
  __int64 *v30; // r14
  void *v31; // rdi
  __int64 *v32; // rbx
  unsigned int v33; // eax
  unsigned int v34; // ecx
  unsigned int v35; // r13d
  size_t v36; // rdi
  unsigned int *v37; // rax
  unsigned int *v38; // r12
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 *v41; // r10
  unsigned __int64 v42; // rsi
  __int64 *v43; // r9
  __int64 v44; // rsi
  __int64 v45; // r10
  unsigned __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rdx
  _QWORD *v49; // rax
  _QWORD *v50; // rdx
  __int64 v51; // rax
  unsigned int v52; // r14d
  unsigned int v53; // edx
  __int64 v54; // rax
  __int64 v55; // rdi
  _DWORD *v56; // rsi
  __int64 v57; // r8
  unsigned __int64 v58; // rax
  __int64 v59; // r8
  __int64 v60; // rdi
  _QWORD *v61; // rax
  __int64 v62; // rdi
  unsigned int v63; // [rsp+8h] [rbp-80h]
  _QWORD *v64; // [rsp+8h] [rbp-80h]
  unsigned int v65; // [rsp+10h] [rbp-78h]
  unsigned int v66; // [rsp+1Ch] [rbp-6Ch]
  __int64 v67[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = a2 >> 1;
  v7 = *a1;
  v8 = *(_QWORD *)(*a1 + 2328LL);
  if ( !v8
    || (unsigned int)v5 >= *(_DWORD *)(v8 - 4)
    || (v9 = *(unsigned int **)(v8 + 8 * v5)) == nullptr
    || (v10 = *(_QWORD *)(v7 + 1720)) == 0
    || (v11 = *v9, (unsigned int)v11 >= *(_DWORD *)(v10 - 4))
    || (v12 = *(_QWORD **)(v10 + 8 * v11)) == nullptr
    || (result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 152) + 16LL))(
                   *(_QWORD *)(v7 + 152),
                   *v12),
        (_BYTE)result) )
  {
    v14 = a2 ^ 1;
    v15 = a1[79];
    v65 = v14;
    v63 = v14 + 1;
    if ( v15 )
    {
      result = *(unsigned int *)(v15 - 4);
      v66 = result;
      if ( (unsigned int)result >= v14 + 1 )
        goto LABEL_10;
    }
    else
    {
      result = v63;
      if ( v14 == -1 )
        goto LABEL_10;
      v66 = 0;
      v49 = (_QWORD *)sub_186B270(0x18u);
      *v49 = 2;
      v15 = (unsigned __int64)(v49 + 1);
      a1[79] = v49 + 1;
    }
    while ( 1 )
    {
      v33 = *(_DWORD *)(v15 - 8);
      v34 = v63;
      if ( v33 >= v63 )
        break;
      while ( 1 )
      {
        v35 = (3 * v33 + 1) >> 1;
        v36 = 8 * v35 + 8;
        if ( 8 * v33 + 8 >= (unsigned int)v36 || v33 >= v35 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v67, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v67);
          sub_233E40((__int64)v67);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v37 = (unsigned int *)sub_186B270(v36);
        v32 = (__int64 *)a1[79];
        v38 = v37;
        v15 = (unsigned __int64)(v37 + 2);
        if ( v32 )
          break;
        v37[1] = 0;
        v34 = v63;
        *v37 = v35;
        v33 = *v37;
        a1[79] = v15;
        if ( v33 >= v63 )
          goto LABEL_51;
      }
      v39 = *((unsigned int *)v32 - 1);
      v37[1] = v39;
      v40 = 8 * v39;
      v41 = &v32[v39];
      if ( v41 != v32 )
      {
        v42 = v40 - 8;
        v43 = v32;
        if ( (unsigned __int64)(v40 - 8) <= 8 || v15 < (unsigned __int64)(v32 + 2) && v32 < (__int64 *)v38 + 3 )
        {
          v46 = v15;
          do
          {
            v47 = *v43;
            *v43++ = 0;
            v46 += 8LL;
            *(_QWORD *)(v46 - 8) = v47;
          }
          while ( v41 != v43 );
        }
        else
        {
          v25 = 0;
          v26 = (v42 >> 3) + 1;
          do
          {
            v27 = _mm_loadu_si128((const __m128i *)&v32[v25 / 2]);
            *(_OWORD *)&v32[v25 / 2] = 0;
            *(__m128i *)&v38[v25 + 2] = v27;
            v25 += 4LL;
          }
          while ( 4 * (v26 >> 1) != v25 );
          if ( (v26 & 1) != 0 )
          {
            v28 = 2 * (v26 & 0xFFFFFFFFFFFFFFFELL);
            v29 = v32[v28 / 2];
            v32[v28 / 2] = 0;
            *(_QWORD *)&v38[v28 + 2] = v29;
          }
        }
      }
      v30 = &v32[v39];
      if ( (_DWORD)v39 )
      {
        do
        {
          while ( *v32 )
          {
            v31 = (void *)(*v32++ - 8);
            sub_186B220(v31);
            if ( v32 == v30 )
              goto LABEL_30;
          }
          ++v32;
        }
        while ( v32 != v30 );
LABEL_30:
        v32 = (__int64 *)a1[79];
      }
      sub_186B220(v32 - 1);
      a1[79] = v15;
      *v38 = v35;
    }
LABEL_51:
    *(_DWORD *)(v15 - 4) = v34;
    v48 = 8LL * v34;
    result = 8LL * v66;
    if ( result != v48 )
      result = (__int64)memset((void *)(v15 + result), 0, v48 - result);
LABEL_10:
    v16 = *(unsigned int **)(v15 + 8LL * v65);
    if ( !v16 )
      return result;
    result = *(v16 - 1);
    v17 = &v16[result];
    if ( v16 == v17 )
      return result;
    do
    {
      while ( 1 )
      {
        v18 = *v16;
        v19 = (_BYTE *)(v18 + a1[78]);
        v20 = *v16;
        if ( !*v19 )
          break;
LABEL_13:
        if ( v17 == ++v16 )
          return result;
      }
      v21 = *(_QWORD *)(a1[77] + 8 * v18);
      result = v21 + 20;
      v22 = 4LL * *(unsigned int *)(v21 + 4);
      v23 = result + v22;
      if ( !v22 )
        goto LABEL_55;
      v24 = -2;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 24LL) + 3288LL) + 4LL * *(unsigned int *)result) == 1 )
        {
          if ( !*((_BYTE *)a1 + 8) )
            goto LABEL_13;
          v44 = a1[5];
          if ( v44 )
          {
            v45 = *(_DWORD *)result >> 1;
            if ( (unsigned int)v45 < *(_DWORD *)(v44 - 4) )
            {
              if ( *(_BYTE *)(v44 + v45) )
                goto LABEL_13;
            }
          }
          v24 = *(_DWORD *)result;
        }
        result += 4;
      }
      while ( v23 != result );
      if ( v24 == -2 )
      {
LABEL_55:
        v50 = (_QWORD *)a1[2];
        if ( v50 )
        {
          v51 = *((unsigned int *)v50 - 1);
          if ( (_DWORD)v51 == *((_DWORD *)v50 - 2) )
          {
            v52 = (unsigned int)(3 * v51 + 1) >> 1;
            v53 = 8 * v52 + 8;
            if ( 8 * (int)v51 + 8 >= v53 || (unsigned int)v51 >= v52 )
            {
              v3 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v67, "Overflow encountered when expanding vector");
              *v3 = (char *)off_1C63128;
              sub_2333C0(v3 + 1, v67);
              sub_233E40((__int64)v67);
              __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v54 = sub_186B270(v53);
            v55 = a1[2];
            v56 = (_DWORD *)v54;
            v50 = (_QWORD *)(v54 + 8);
            if ( v55 )
            {
              v57 = *(unsigned int *)(v55 - 4);
              *(_DWORD *)(v54 + 4) = v57;
              v58 = 0;
              v59 = 8 * v57;
              if ( v59 )
              {
                do
                {
                  *(_QWORD *)&v56[v58 / 4 + 2] = *(_QWORD *)(v55 + v58);
                  v58 += 8LL;
                }
                while ( v59 != v58 );
              }
              v64 = v50;
              sub_186B220((void *)(v55 - 8));
              v50 = v64;
              result = (__int64)&v64[v56[1]];
            }
            else
            {
              *(_DWORD *)(v54 + 4) = 0;
              result = v54 + 8;
            }
            v60 = a1[78];
            a1[2] = v50;
            *v56 = v52;
            v19 = (_BYTE *)(v18 + v60);
          }
          else
          {
            result = (__int64)&v50[v51];
          }
        }
        else
        {
          v61 = (_QWORD *)sub_186B270(0x18u);
          v62 = a1[78];
          v50 = v61 + 1;
          *v61 = 2;
          a1[2] = v61 + 1;
          v19 = (_BYTE *)(v18 + v62);
          result = (__int64)(v61 + 1);
        }
        *(_DWORD *)result = 3;
        *(_DWORD *)(result + 4) = v20;
        ++*((_DWORD *)v50 - 1);
        *v19 = 1;
        goto LABEL_13;
      }
      ++v16;
      sub_7F1380(a1, v24);
      sub_7F0DF0((__int64)a1, v24);
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 112LL))(*a1, v24);
    }
    while ( v17 != v16 );
  }
  return result;
}

