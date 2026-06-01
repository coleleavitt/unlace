void **__fastcall sub_520650(__int64 **a1, __int64 a2, __int64 a3)
{
  char **exception; // rbp
  __int64 v6; // r8
  int v7; // edi
  unsigned int v8; // ebp
  void **v9; // rbx
  unsigned int v10; // r10d
  __int64 v11; // r8
  void **v12; // r12
  int v13; // ecx
  __int64 v14; // r10
  void **v15; // rsi
  void **result; // rax
  void **v17; // r13
  _DWORD *v18; // rdx
  void **v19; // rax
  void **v20; // rcx
  const __m128i *v21; // r13
  __m128i *v22; // r11
  __int64 v23; // rax
  void **v24; // rdx
  void **v25; // rax
  __m128i v26; // xmm0
  __int64 *v27; // rbx
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned int v30; // ebx
  _QWORD *v31; // r12
  __int64 v32; // rax
  _DWORD *v33; // rsi
  unsigned int v34; // ebp
  _QWORD *v35; // rsi
  size_t v36; // rdx
  bool v37; // zf
  __int64 *v38; // rax
  __int64 v39; // rax
  unsigned int v40; // ebp
  unsigned int v41; // eax
  __int64 *v42; // r12
  __int64 *v43; // rsi
  __int64 v44; // r9
  __int64 *v45; // rdi
  unsigned __int64 v46; // rax
  __int64 *v47; // rax
  unsigned __int64 v48; // r10
  __int64 v49; // r11
  unsigned __int64 v50; // rdi
  unsigned __int64 v51; // rax
  __m128i v52; // xmm0
  unsigned __int64 v53; // rdi
  __int64 *v54; // rax
  __int64 v55; // r10
  __int64 *v56; // rax
  void *v57; // rdi
  _QWORD *v58; // rdx
  unsigned int v60; // [rsp+10h] [rbp-88h]
  __int64 *v61; // [rsp+18h] [rbp-80h]
  unsigned __int64 v62; // [rsp+18h] [rbp-80h]
  unsigned __int64 v63; // [rsp+20h] [rbp-78h]
  void *src; // [rsp+38h] [rbp-60h] BYREF
  __int64 v65[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = *((unsigned int *)a1 + 8);
  v7 = *((_DWORD *)a1 + 10);
  v8 = 2 * v6;
  if ( 3 * (int)v6 < (unsigned int)(4 * (v7 + *((_DWORD *)a1 + 9))) )
  {
    v19 = (void **)sub_186B270(16LL * v8);
    v11 = 16LL * v8;
    v9 = v19;
    v20 = &v19[(unsigned __int64)v11 / 8];
    if ( v8 )
    {
      do
      {
        *v19 = nullptr;
        v19 += 2;
        *((_DWORD *)v19 - 2) = 0;
      }
      while ( v19 != v20 );
    }
    v21 = (const __m128i *)a1[3];
    v10 = v8 - 1;
    v12 = v20;
    v22 = (__m128i *)&v21[*((unsigned int *)a1 + 8)];
    if ( v21 != v22 )
    {
      do
      {
        while ( v21->m128i_i64[0] <= 1uLL )
        {
          if ( v22 == ++v21 )
            goto LABEL_29;
        }
        v23 = 16LL * (*(_DWORD *)(v21->m128i_i64[0] + 12) & v10);
        v24 = &v9[(unsigned __int64)v23 / 8];
        if ( v11 == v23 )
        {
LABEL_33:
          if ( v9 == v24 )
          {
LABEL_75:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v25 = v9;
          while ( *v25 )
          {
            v25 += 2;
            if ( v24 == v25 )
              goto LABEL_75;
          }
        }
        else
        {
          v25 = &v9[(unsigned __int64)v23 / 8];
          while ( *v25 )
          {
            v25 += 2;
            if ( v20 == v25 )
              goto LABEL_33;
          }
        }
        v26 = _mm_loadu_si128(v21++);
        *(__m128i *)v25 = v26;
      }
      while ( v22 != v21 );
LABEL_29:
      v22 = (__m128i *)a1[3];
    }
    if ( v22 )
    {
      sub_186B220(v22);
      v11 = 16LL * v8;
      v10 = v8 - 1;
    }
    a1[3] = (__int64 *)v9;
    v7 = 0;
    *((_DWORD *)a1 + 8) = v8;
    *((_DWORD *)a1 + 10) = 0;
  }
  else
  {
    v9 = (void **)a1[3];
    v10 = v6 - 1;
    v11 = 16 * v6;
    v12 = &v9[(unsigned __int64)v11 / 8];
  }
  v13 = *(_DWORD *)(a2 + 12);
  v14 = 16LL * (v13 & v10);
  v15 = &v9[(unsigned __int64)v14 / 8];
  if ( v14 != v11 )
  {
    result = &v9[(unsigned __int64)v14 / 8];
    v17 = nullptr;
    while ( 1 )
    {
      v18 = *result;
      if ( (unsigned __int64)*result > 1 )
      {
        if ( v18[3] == v13 && (_DWORD *)a2 == v18 )
        {
          v17 = result;
          goto LABEL_41;
        }
      }
      else
      {
        if ( !v18 )
        {
          if ( v17 )
            goto LABEL_39;
          v17 = result;
          goto LABEL_40;
        }
        v17 = result;
      }
      result += 2;
      if ( result == v12 )
        goto LABEL_14;
    }
  }
  v17 = nullptr;
  while ( 1 )
  {
LABEL_14:
    if ( v15 == v9 )
    {
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    result = (void **)*v9;
    if ( (unsigned __int64)*v9 <= 1 )
      break;
    if ( *((_DWORD *)result + 3) == v13 && (void **)a2 == result )
    {
      v17 = v9;
      goto LABEL_41;
    }
LABEL_13:
    v9 += 2;
  }
  if ( result )
  {
    v17 = v9;
    goto LABEL_13;
  }
  if ( v17 )
LABEL_39:
    *((_DWORD *)a1 + 10) = v7 - 1;
  else
    v17 = v9;
LABEL_40:
  *v17 = (void *)a2;
  *((_DWORD *)v17 + 2) = -1;
  ++*((_DWORD *)a1 + 9);
LABEL_41:
  if ( *((_DWORD *)v17 + 2) == -1 )
  {
    src = nullptr;
    v27 = *a1;
    sub_654200(*a1, 0);
    v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27[371] + 192LL))(v27[371]);
    sub_4C51C0(v28, a2, &src);
    v29 = (unsigned __int64)a1[6];
    if ( v29 )
    {
      v30 = *(_DWORD *)(v29 - 4);
      if ( v30 == *(_DWORD *)(v29 - 8) )
      {
        v40 = (3 * v30 + 1) >> 1;
        v41 = 8 * v40 + 8;
        if ( 8 * v30 + 8 >= v41 || v30 >= v40 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v65, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v65);
          sub_233E40((__int64)v65);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v32 = sub_186B270(v41);
        v42 = a1[6];
        v43 = (__int64 *)v32;
        v29 = v32 + 8;
        if ( v42 )
        {
          v44 = *((unsigned int *)v42 - 1);
          *(_DWORD *)(v32 + 4) = v44;
          v45 = &v42[v44];
          if ( v45 != v42 )
          {
            v46 = 8 * v44 - 8;
            if ( v46 > 8 && (v29 >= (unsigned __int64)(v42 + 2) || v42 >= v43 + 3) )
            {
              v50 = (v46 >> 3) + 1;
              v51 = 0;
              do
              {
                v52 = _mm_loadu_si128((const __m128i *)&v42[v51]);
                *(_OWORD *)&v42[v51] = 0;
                *(__m128i *)&v43[v51 + 1] = v52;
                v51 += 2LL;
              }
              while ( v51 != 2 * (v50 >> 1) );
              if ( (v50 & 1) != 0 )
              {
                v53 = v50 & 0xFFFFFFFFFFFFFFFELL;
                v54 = &v42[v53];
                v55 = *v54;
                *v54 = 0;
                *(_QWORD *)(v29 + 8 * v53) = v55;
              }
            }
            else
            {
              v47 = v42;
              v48 = v29;
              do
              {
                v49 = *v47;
                *v47++ = 0;
                v48 += 8LL;
                *(_QWORD *)(v48 - 8) = v49;
              }
              while ( v47 != v45 );
            }
          }
          v56 = &v42[v44];
          if ( (_DWORD)v44 )
          {
            do
            {
              while ( *v42 )
              {
                v57 = (void *)(*v42 - 8);
                v63 = v29;
                ++v42;
                v61 = v56;
                sub_186B220(v57);
                v56 = v61;
                v29 = v63;
                if ( v61 == v42 )
                  goto LABEL_70;
              }
              ++v42;
            }
            while ( v42 != v56 );
LABEL_70:
            v42 = a1[6];
          }
          v62 = v29;
          sub_186B220(v42 - 1);
          v29 = v62;
          v32 = *((unsigned int *)v43 + 1);
          v31 = (_QWORD *)(v62 + 8 * v32);
        }
        else
        {
          *(_DWORD *)(v32 + 4) = 0;
          v31 = (_QWORD *)(v32 + 8);
          LODWORD(v32) = 0;
        }
        a1[6] = (__int64 *)v29;
        *(_DWORD *)v43 = v40;
      }
      else
      {
        v31 = (_QWORD *)(v29 + 8LL * v30);
        LODWORD(v32) = *(_DWORD *)(v29 - 4);
      }
    }
    else
    {
      v58 = (_QWORD *)sub_186B270(0x18u);
      *v58 = 2;
      v30 = 0;
      LODWORD(v32) = 0;
      v29 = (unsigned __int64)(v58 + 1);
      a1[6] = (__int64 *)v29;
      v31 = (_QWORD *)v29;
    }
    v33 = src;
    *v31 = 0;
    if ( !v33 )
      goto LABEL_51;
    v34 = *(v33 - 1);
    v60 = *(v33 - 2);
    v35 = (_QWORD *)sub_186B270(8LL * v60 + 8);
    *v35 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v60), _mm_cvtsi32_si128(v34)).m128i_u64[0];
    *v31 = v35 + 1;
    if ( src )
    {
      v36 = 8LL * *((unsigned int *)src - 1);
      v37 = v36 == 8;
      if ( v36 <= 8 )
      {
        v29 = (unsigned __int64)a1[6];
        LODWORD(v32) = *(_DWORD *)(v29 - 4);
        if ( v37 )
          v35[1] = *(_QWORD *)src;
        goto LABEL_51;
      }
      memmove(v35 + 1, src, v36);
    }
    v29 = (unsigned __int64)a1[6];
    LODWORD(v32) = *(_DWORD *)(v29 - 4);
LABEL_51:
    *(_DWORD *)(v29 - 4) = v32 + 1;
    v38 = *a1;
    *((_DWORD *)v17 + 2) = v30;
    v39 = sub_4DA8C0(*v38, a2, v30);
    sub_52C6B0(a3, v39);
    result = (void **)src;
    if ( src )
      return (void **)sub_186B220((char *)src - 8);
  }
  return result;
}

