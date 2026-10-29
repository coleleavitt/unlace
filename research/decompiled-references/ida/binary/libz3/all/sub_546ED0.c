__int64 __fastcall sub_546ED0(__int64 a1, __int64 a2)
{
  char **exception; // rbp
  char **v3; // rbp
  __int64 *v5; // r14
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // r12
  _QWORD *v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 result; // rax
  _QWORD *v13; // rdx
  int v14; // eax
  _QWORD *v15; // rax
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ebp
  size_t v19; // rdi
  unsigned int *v20; // rax
  __int64 *v21; // rbx
  unsigned int *v22; // r15
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 *v25; // r10
  unsigned __int64 v26; // rsi
  __int64 *v27; // r9
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rsi
  __m128i v30; // xmm0
  unsigned __int64 v31; // rsi
  __int64 *v32; // rax
  __int64 v33; // r9
  __int64 *v34; // r12
  void *v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // r15
  unsigned int v38; // ebx
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rdx
  __int64 *v42; // rax
  __int64 v43; // rsi
  int v44; // r12d
  _QWORD *v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 *v48; // rbp
  __int64 *v49; // r12
  __int64 v50; // rdx
  unsigned int v52; // [rsp+8h] [rbp-70h]
  unsigned int v53; // [rsp+Ch] [rbp-6Ch]
  __int64 v54[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *(__int64 **)(a1 + 56);
  v6 = *(_QWORD *)(a2 + 16);
  if ( v5 )
  {
    v7 = *((_DWORD *)v5 - 1);
    v53 = v7;
    if ( v6 )
    {
      v8 = *(unsigned int *)(v6 - 4);
      if ( (unsigned int)v8 < v7 )
      {
LABEL_4:
        v5 += v8;
        goto LABEL_5;
      }
      v14 = v8 + 1;
      v52 = v8 + 1;
      if ( v53 >= (int)v8 + 1 )
      {
        v46 = 8LL * v52;
        v47 = 8LL * v53;
        v48 = &v5[(unsigned __int64)v46 / 8];
        v49 = &v5[(unsigned __int64)v47 / 8];
        if ( v46 == v47 )
        {
          *((_DWORD *)v5 - 1) = v14;
          goto LABEL_32;
        }
        do
        {
          while ( 1 )
          {
            v50 = *v48;
            if ( !*v48 )
              break;
            ++v48;
            sub_186B220((void *)(v50 - 8));
            if ( v49 == v48 )
              goto LABEL_52;
          }
          ++v48;
        }
        while ( v49 != v48 );
LABEL_52:
        v5 = *(__int64 **)(a1 + 56);
        v6 = *(_QWORD *)(a2 + 16);
        *((_DWORD *)v5 - 1) = v52;
        goto LABEL_31;
      }
    }
    else
    {
      if ( v7 )
        goto LABEL_5;
      v52 = 1;
    }
  }
  else
  {
    if ( v6 )
    {
      v44 = *(_DWORD *)(v6 - 4);
      v52 = v44 + 1;
      if ( v44 == -1 )
      {
        v8 = 0xFFFFFFFFLL;
        goto LABEL_4;
      }
      v53 = 0;
    }
    else
    {
      v53 = 0;
      v52 = 1;
    }
    v15 = (_QWORD *)sub_186B270(0x18u);
    v5 = v15 + 1;
    *v15 = 2;
    *(_QWORD *)(a1 + 56) = v15 + 1;
  }
  while ( 1 )
  {
    v16 = *((_DWORD *)v5 - 2);
    v17 = v52;
    if ( v16 >= v52 )
      break;
    while ( 1 )
    {
      v18 = (3 * v16 + 1) >> 1;
      v19 = 8 * v18 + 8;
      if ( 8 * v16 + 8 >= (unsigned int)v19 || v16 >= v18 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v54, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v54);
        sub_233E40((__int64)v54);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v20 = (unsigned int *)sub_186B270(v19);
      v21 = *(__int64 **)(a1 + 56);
      v22 = v20;
      v5 = (__int64 *)(v20 + 2);
      if ( !v21 )
        break;
      v23 = *((unsigned int *)v21 - 1);
      v20[1] = v23;
      v24 = 8 * v23;
      v25 = &v21[v23];
      if ( v21 != v25 )
      {
        v26 = v24 - 8;
        v27 = v21;
        if ( (unsigned __int64)(v24 - 8) <= 8 || v5 < v21 + 2 && v21 < (__int64 *)v22 + 3 )
        {
          v42 = v5;
          do
          {
            v43 = *v27;
            *v27++ = 0;
            *v42++ = v43;
          }
          while ( v27 != v25 );
        }
        else
        {
          v28 = 0;
          v29 = (v26 >> 3) + 1;
          do
          {
            v30 = _mm_loadu_si128((const __m128i *)&v21[v28 / 2]);
            *(_OWORD *)&v21[v28 / 2] = 0;
            *(__m128i *)&v22[v28 + 2] = v30;
            v28 += 4LL;
          }
          while ( v28 != 4 * (v29 >> 1) );
          if ( (v29 & 1) != 0 )
          {
            v31 = v29 & 0xFFFFFFFFFFFFFFFELL;
            v32 = &v21[v31];
            v33 = *v32;
            *v32 = 0;
            v5[v31] = v33;
          }
        }
      }
      v34 = &v21[v23];
      if ( (_DWORD)v23 )
      {
        do
        {
          while ( *v21 )
          {
            v35 = (void *)(*v21++ - 8);
            sub_186B220(v35);
            if ( v34 == v21 )
              goto LABEL_27;
          }
          ++v21;
        }
        while ( v21 != v34 );
LABEL_27:
        v21 = *(__int64 **)(a1 + 56);
      }
      sub_186B220(v21 - 1);
      *v22 = v18;
      v17 = v52;
      v16 = *((_DWORD *)v5 - 2);
      *(_QWORD *)(a1 + 56) = v5;
      if ( v16 >= v52 )
        goto LABEL_29;
    }
    v20[1] = 0;
    *(_QWORD *)(a1 + 56) = v5;
    *v20 = v18;
  }
LABEL_29:
  *((_DWORD *)v5 - 1) = v17;
  v36 = 8LL * v17;
  v37 = 8LL * v53;
  v6 = *(_QWORD *)(a2 + 16);
  if ( v37 != v36 )
    memset(&v5[(unsigned __int64)v37 / 8], 0, v36 - v37);
LABEL_31:
  if ( v6 )
  {
LABEL_32:
    v8 = *(unsigned int *)(v6 - 4);
    goto LABEL_4;
  }
LABEL_5:
  v9 = (_QWORD *)*v5;
  if ( *v5 )
  {
    v10 = *((_DWORD *)v9 - 1);
    if ( v10 == *((_DWORD *)v9 - 2) )
    {
      v38 = (3 * v10 + 1) >> 1;
      v39 = 8 * v38 + 8;
      if ( 8 * v10 + 8 >= (unsigned int)v39 || v10 >= v38 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v54, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v54);
        sub_233E40((__int64)v54);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v40 = (unsigned int *)sub_186B300(v9 - 1, v39);
      v41 = v40[1];
      v9 = v40 + 2;
      *v5 = (__int64)(v40 + 2);
      *v40 = v38;
      LODWORD(v40) = v41;
      v13 = &v9[v41];
      result = (unsigned int)((_DWORD)v40 + 1);
    }
    else
    {
      v11 = v10;
      result = v10 + 1;
      v13 = &v9[v11];
    }
  }
  else
  {
    v45 = (_QWORD *)sub_186B270(0x18u);
    v9 = v45 + 1;
    *v45 = 2;
    result = 1;
    *v5 = (__int64)v9;
    v13 = v9;
  }
  *v13 = a2;
  *((_DWORD *)v9 - 1) = result;
  return result;
}

