__int64 __fastcall sub_B503B0(__int64 a1, unsigned __int64 *a2)
{
  char **v2; // rbp
  char **exception; // rbp
  int v5; // r13d
  unsigned __int64 v6; // r14
  __int64 result; // rax
  __int64 v8; // r13
  _QWORD *v9; // rbp
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 *v12; // r15
  __int64 *v13; // r12
  __int64 v14; // r14
  unsigned int v15; // eax
  __int64 v16; // rsi
  int v17; // eax
  _QWORD *v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // r10
  __int64 *v21; // r15
  __int64 v22; // rax
  __int64 *v23; // rbp
  unsigned int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // r13d
  unsigned int v27; // edx
  unsigned int *v28; // r12
  __int64 v29; // r9
  __int64 *v30; // r10
  unsigned __int64 v31; // rax
  __int64 *v32; // rsi
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rax
  __m128i v35; // xmm0
  unsigned int v36; // r8d
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rsi
  _QWORD *v40; // rax
  __int64 v41; // rcx
  _DWORD *v42; // rax
  __int64 v43; // r11
  _QWORD *v44; // rax
  unsigned int v46; // [rsp+8h] [rbp-70h]
  unsigned int v47; // [rsp+8h] [rbp-70h]
  unsigned int v48; // [rsp+Ch] [rbp-6Ch]
  __int64 v49[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *(_DWORD *)(a1 + 20);
  v6 = *a2;
  v46 = v5 + 1;
  if ( *a2 )
  {
    result = *(unsigned int *)(v6 - 4);
    v48 = result;
    if ( (unsigned int)result >= v5 + 1 )
      goto LABEL_3;
  }
  else
  {
    if ( v5 == -1 )
      goto LABEL_4;
    v48 = 0;
    v44 = (_QWORD *)sub_186B270(0x18u);
    *v44 = 2;
    v6 = (unsigned __int64)(v44 + 1);
    *a2 = (unsigned __int64)(v44 + 1);
  }
  while ( 1 )
  {
    v24 = *(_DWORD *)(v6 - 8);
    v25 = v46;
    if ( v24 >= v46 )
      break;
    while ( 1 )
    {
      v26 = (3 * v24 + 1) >> 1;
      v27 = 8 * v26 + 8;
      if ( 8 * v24 + 8 >= v27 || v24 >= v26 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v49, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v49);
        sub_233E40((__int64)v49);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v28 = (unsigned int *)sub_186B270(v27);
      v6 = (unsigned __int64)(v28 + 2);
      v23 = (__int64 *)*a2;
      if ( *a2 )
        break;
      v28[1] = 0;
      v25 = v46;
      *a2 = v6;
      *v28 = v26;
      v24 = *v28;
      if ( *v28 >= v46 )
        goto LABEL_48;
    }
    v29 = *((unsigned int *)v23 - 1);
    v28[1] = v29;
    v30 = &v23[v29];
    if ( v23 != v30 )
    {
      v31 = 8 * v29 - 8;
      v32 = v23;
      if ( v31 <= 8 || v6 < (unsigned __int64)(v23 + 2) && v23 < (__int64 *)v28 + 3 )
      {
        v42 = v28 + 2;
        do
        {
          v43 = *v32;
          *v32++ = 0;
          v42 += 2;
          *((_QWORD *)v42 - 1) = v43;
        }
        while ( v32 != v30 );
      }
      else
      {
        v33 = (v31 >> 3) + 1;
        v34 = 0;
        do
        {
          v35 = _mm_loadu_si128((const __m128i *)&v23[v34 / 2]);
          *(_OWORD *)&v23[v34 / 2] = 0;
          *(__m128i *)&v28[v34 + 2] = v35;
          v34 += 4LL;
        }
        while ( v34 != 4 * (v33 >> 1) );
        if ( (v33 & 1) != 0 )
        {
          v19 = 2 * (v33 & 0xFFFFFFFFFFFFFFFELL);
          v20 = v23[v19 / 2];
          v23[v19 / 2] = 0;
          *(_QWORD *)&v28[v19 + 2] = v20;
        }
      }
    }
    v21 = &v23[v29];
    if ( (_DWORD)v29 )
    {
      do
      {
        while ( 1 )
        {
          v22 = *v23;
          if ( !*v23 )
            break;
          ++v23;
          sub_186B220((void *)(v22 - 8));
          if ( v21 == v23 )
            goto LABEL_27;
        }
        ++v23;
      }
      while ( v21 != v23 );
LABEL_27:
      v23 = (__int64 *)*a2;
    }
    sub_186B220(v23 - 1);
    *v28 = v26;
    *a2 = v6;
  }
LABEL_48:
  *(_DWORD *)(v6 - 4) = v25;
  result = 8LL * v25;
  v5 = *(_DWORD *)(a1 + 20);
  v41 = 8LL * v48;
  if ( v41 != result )
    result = (__int64)memset((void *)(v6 + v41), 0, result - v41);
LABEL_3:
  if ( v5 )
  {
LABEL_4:
    v8 = 0;
    while ( 1 )
    {
      v9 = (_QWORD *)(v6 + 8 * v8);
      v10 = (_QWORD *)*v9;
      if ( *v9 )
        *((_DWORD *)v10 - 1) = 0;
      v11 = *(_QWORD *)(a1 + 32) + 24 * v8;
      v12 = *(__int64 **)v11;
      result = *(unsigned int *)(v11 + 8);
      v13 = &v12[result];
      if ( v12 != v13 )
      {
        while ( (unsigned __int64)*v12 <= 1 )
        {
          if ( v13 == ++v12 )
            goto LABEL_20;
        }
        if ( v13 != v12 )
          break;
      }
LABEL_20:
      if ( (unsigned int)++v8 >= *(_DWORD *)(a1 + 20) )
        return result;
      v6 = *a2;
    }
    v14 = *v12;
    if ( v10 )
    {
      while ( 1 )
      {
        v15 = *((_DWORD *)v10 - 1);
        if ( v15 == *((_DWORD *)v10 - 2) )
        {
          v36 = (3 * v15 + 1) >> 1;
          v37 = 8 * v36 + 8;
          if ( 8 * v15 + 8 >= (unsigned int)v37 || v15 >= v36 )
          {
            v2 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v49, "Overflow encountered when expanding vector");
            *v2 = (char *)off_1C63128;
            sub_2333C0(v2 + 1, v49);
            sub_233E40((__int64)v49);
            __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v47 = (3 * v15 + 1) >> 1;
          v38 = (unsigned int *)sub_186B300(v10 - 1, v37);
          v39 = v38[1];
          v10 = v38 + 2;
          *v9 = v38 + 2;
          *v38 = v47;
          LODWORD(v38) = v39;
          v18 = &v10[v39];
          v17 = (_DWORD)v38 + 1;
        }
        else
        {
          v16 = v15;
          v17 = v15 + 1;
          v18 = &v10[v16];
        }
LABEL_15:
        *v18 = v14;
        *((_DWORD *)v10 - 1) = v17;
        result = (__int64)(v12 + 1);
        if ( v13 != v12 + 1 )
        {
          while ( 1 )
          {
            v14 = *(_QWORD *)result;
            v12 = (__int64 *)result;
            if ( *(_QWORD *)result > 1u )
              break;
            result += 8;
            if ( v13 == (__int64 *)result )
              goto LABEL_20;
          }
          if ( v13 != (__int64 *)result )
            continue;
        }
        goto LABEL_20;
      }
    }
    v40 = (_QWORD *)sub_186B270(0x18u);
    v10 = v40 + 1;
    *v40 = 2;
    v18 = v10;
    v17 = 1;
    *v9 = v10;
    goto LABEL_15;
  }
  return result;
}

