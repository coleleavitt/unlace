__int64 __fastcall sub_7D4DE0(__int64 a1)
{
  char **exception; // rbx
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned __int64 **v7; // r12
  __int64 v8; // rbx
  unsigned int *v9; // rax
  unsigned __int64 *v10; // rbp
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r9
  __m128i *v14; // r15
  int v15; // ecx
  __int64 v16; // r14
  unsigned int v17; // edi
  int v18; // r10d
  __int64 v19; // r9
  __m128i *v20; // r13
  __int64 v21; // rdi
  __m128i *v22; // rsi
  __int64 v23; // rdx
  __m128i v24; // xmm0
  __m128i *v25; // rax
  __m128i *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r13
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  _QWORD *v33; // rbp
  unsigned int v34; // eax
  __int64 v35; // rcx
  _QWORD *v36; // rcx
  unsigned int v37; // r14d
  unsigned int v38; // ecx
  unsigned int *v39; // rax
  __int64 v40; // rcx
  __m128i *v41; // rax
  int v42; // r11d
  __m128i *v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rsi
  __m128i *v46; // r10
  __m128i *v47; // rax
  unsigned __int64 v48; // r13
  __m128i *v49; // rbp
  __int64 v50; // r8
  const __m128i *v51; // rbx
  __int64 v52; // rdx
  __m128i *v53; // rsi
  __m128i *v54; // rdx
  __m128i v55; // xmm0
  _QWORD *v56; // rdx
  unsigned __int64 **v57; // [rsp+8h] [rbp-A0h]
  __int64 v58; // [rsp+8h] [rbp-A0h]
  size_t v59; // [rsp+10h] [rbp-98h]
  int v60; // [rsp+10h] [rbp-98h]
  int v61; // [rsp+18h] [rbp-90h]
  __int64 v62; // [rsp+18h] [rbp-90h]
  int v63; // [rsp+20h] [rbp-88h]
  __int64 v64[11]; // [rsp+50h] [rbp-58h] BYREF

  v2 = a1;
  v3 = *(_QWORD *)(a1 + 80);
  result = *(_QWORD *)(*(_QWORD *)v3 + 440LL);
  if ( (__int64 (__fastcall *)(__int64))result == sub_79F010 )
  {
    v5 = v3 + 1592;
  }
  else
  {
    v58 = v2;
    result = ((__int64 (*)(void))result)();
    v2 = v58;
    v5 = result;
  }
  v6 = *(_QWORD *)(v5 + 176);
  if ( !v6 )
    return result;
  result = *(unsigned int *)(v6 - 4);
  if ( v6 == v6 + 8 * result )
    return result;
  v57 = (unsigned __int64 **)(v6 + 8 * result);
  v7 = *(unsigned __int64 ***)(v5 + 176);
  v8 = v2;
  while ( 2 )
  {
    v10 = *v7;
    if ( !*((_BYTE *)*v7 + 12) )
    {
      v9 = *(unsigned int **)(sub_15D1F10(*v10) + 24);
      if ( v9 )
      {
        result = *v9;
        if ( (_DWORD)result != -1 && (_DWORD)result != 4 )
          goto LABEL_9;
      }
    }
    v11 = *v10;
    v12 = sub_15D1F10(v11);
    v13 = *(unsigned int *)(v8 + 3128);
    v14 = *(__m128i **)(v8 + 3120);
    v15 = *(_DWORD *)(v12 + 12);
    v16 = v12;
    v17 = v13 - 1;
    v18 = *(_DWORD *)(v8 + 3128);
    v19 = 16 * v13;
    v20 = (__m128i *)((char *)v14 + v19);
    v21 = 16LL * (v15 & v17);
    v22 = &v14[(unsigned __int64)v21 / 0x10];
    result = (__int64)v14[(unsigned __int64)v21 / 0x10].m128i_i64;
    if ( v21 != v19 )
    {
      do
      {
        v23 = *(_QWORD *)result;
        if ( *(_QWORD *)result > 1u )
        {
          if ( *(_DWORD *)(v23 + 12) == v15 && v16 == v23 )
            goto LABEL_9;
        }
        else if ( !v23 )
        {
          goto LABEL_18;
        }
        result += 16;
      }
      while ( v20 != (__m128i *)result );
    }
    if ( v14 != v22 )
    {
      for ( result = *(_QWORD *)(v8 + 3120); v22 != (__m128i *)result; result += 16 )
      {
        v29 = *(_QWORD *)result;
        if ( *(_QWORD *)result > 1u )
        {
          if ( *(_DWORD *)(v29 + 12) == v15 && v16 == v29 )
            goto LABEL_9;
        }
        else if ( !v29 )
        {
          break;
        }
      }
    }
LABEL_18:
    if ( 3 * v18 < (unsigned int)(4 * (*(_DWORD *)(v8 + 3132) + *(_DWORD *)(v8 + 3136))) )
    {
      v61 = 2 * v18;
      v59 = 16LL * (unsigned int)(2 * v18);
      v41 = (__m128i *)sub_186B270(v59);
      v19 = v59;
      v42 = v61;
      v14 = v41;
      v43 = &v41[v59 / 0x10];
      if ( v61 )
      {
        if ( (v59 & 0x10) == 0 || (*v41 = 0, ++v41, v41 != v43) )
        {
          do
          {
            *v41 = 0;
            v41 += 2;
            v41[-1] = 0;
          }
          while ( v41 != v43 );
        }
      }
      v44 = *(_QWORD *)(v8 + 3120);
      v20 = v43;
      v60 = v61 - 1;
      v45 = 16LL * *(unsigned int *)(v8 + 3128);
      v46 = (__m128i *)(v44 + v45);
      if ( v44 != v44 + v45 )
      {
        v47 = v43;
        v48 = v11;
        v49 = v43;
        v50 = v8;
        v51 = *(const __m128i **)(v8 + 3120);
        do
        {
          while ( v51->m128i_i64[0] <= 1uLL )
          {
            if ( v46 == ++v51 )
              goto LABEL_64;
          }
          v52 = 16LL * (*(_DWORD *)(v51->m128i_i64[0] + 12) & (unsigned int)v60);
          v53 = &v14[(unsigned __int64)v52 / 0x10];
          if ( v19 == v52 )
          {
LABEL_68:
            if ( v14 == v53 )
            {
LABEL_76:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v54 = v14;
            while ( v54->m128i_i64[0] )
            {
              if ( v53 == ++v54 )
                goto LABEL_76;
            }
          }
          else
          {
            v54 = &v14[(unsigned __int64)v52 / 0x10];
            while ( v54->m128i_i64[0] )
            {
              if ( v49 == ++v54 )
                goto LABEL_68;
            }
          }
          v55 = _mm_loadu_si128(v51++);
          *v54 = v55;
        }
        while ( v46 != v51 );
LABEL_64:
        v46 = *(__m128i **)(v50 + 3120);
        v11 = v48;
        v20 = v47;
        v8 = v50;
      }
      if ( v46 )
      {
        v63 = v61;
        v62 = v19;
        sub_186B220(v46);
        v42 = v63;
        v19 = v62;
      }
      v15 = *(_DWORD *)(v16 + 12);
      *(_QWORD *)(v8 + 3120) = v14;
      *(_DWORD *)(v8 + 3128) = v42;
      *(_DWORD *)(v8 + 3136) = 0;
      v21 = 16LL * (v15 & (unsigned int)v60);
      v22 = &v14[(unsigned __int64)v21 / 0x10];
    }
    v24 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)v11);
    if ( v21 != v19 )
    {
      v25 = v22;
      v26 = nullptr;
      while ( 1 )
      {
        v27 = v25->m128i_i64[0];
        if ( v25->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v27 + 12) == v15 && v16 == v27 )
          {
            *v25 = v24;
            goto LABEL_44;
          }
        }
        else
        {
          if ( !v27 )
          {
            if ( v26 )
              goto LABEL_74;
            v26 = v25;
            goto LABEL_75;
          }
          v26 = v25;
        }
        if ( ++v25 == v20 )
          goto LABEL_30;
      }
    }
    v26 = nullptr;
    while ( 1 )
    {
LABEL_30:
      if ( v14 == v22 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v28 = v14->m128i_i64[0];
      if ( v14->m128i_i64[0] <= 1uLL )
        break;
      if ( *(_DWORD *)(v28 + 12) == v15 && v16 == v28 )
      {
        *v14 = v24;
        goto LABEL_44;
      }
LABEL_29:
      ++v14;
    }
    if ( v28 )
    {
      v26 = v14;
      goto LABEL_29;
    }
    if ( v26 )
LABEL_74:
      --*(_DWORD *)(v8 + 3136);
    else
      v26 = v14;
LABEL_75:
    *v26 = v24;
    ++*(_DWORD *)(v8 + 3132);
LABEL_44:
    v30 = *(_QWORD *)(v8 + 80);
    v31 = (_QWORD *)sub_180C100(v30 + 2144, 24);
    v32 = *(_QWORD **)(v30 + 2128);
    v33 = v31;
    *v31 = off_1C549A8;
    v31[1] = v8 + 3120;
    v31[2] = v16;
    if ( v32 )
    {
      v34 = *((_DWORD *)v32 - 1);
      if ( v34 == *((_DWORD *)v32 - 2) )
      {
        v37 = (3 * v34 + 1) >> 1;
        v38 = 8 * v37 + 8;
        if ( 8 * v34 + 8 >= v38 || v34 >= v37 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v64, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v64);
          sub_233E40((__int64)v64);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v39 = (unsigned int *)sub_186B300(v32 - 1, v38);
        v40 = v39[1];
        v32 = v39 + 2;
        *(_QWORD *)(v30 + 2128) = v39 + 2;
        *v39 = v37;
        LODWORD(v39) = v40;
        v36 = &v32[v40];
        result = (unsigned int)((_DWORD)v39 + 1);
      }
      else
      {
        v35 = v34;
        result = v34 + 1;
        v36 = &v32[v35];
      }
    }
    else
    {
      v56 = (_QWORD *)sub_186B270(0x18u);
      *v56 = 2;
      result = 1;
      v32 = v56 + 1;
      *(_QWORD *)(v30 + 2128) = v32;
      v36 = v32;
    }
    *v36 = v33;
    *((_DWORD *)v32 - 1) = result;
LABEL_9:
    if ( v57 != ++v7 )
      continue;
    return result;
  }
}

