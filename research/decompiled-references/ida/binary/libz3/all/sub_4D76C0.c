__int64 __fastcall sub_4D76C0(__int64 *a1, unsigned int a2, unsigned int *a3, __int64 a4)
{
  char **exception; // rbx
  __m128i v9; // xmm0
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  size_t v12; // rdx
  _QWORD *v13; // rdi
  unsigned int v14; // r13d
  __int64 v15; // rax
  _QWORD *v16; // rsi
  unsigned int v17; // edx
  int v18; // r8d
  __int64 v19; // rdx
  __int64 result; // rax
  unsigned int v21; // edx
  unsigned int v22; // r15d
  size_t v23; // rsi
  unsigned int *v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  _QWORD *v28; // rdi
  unsigned int v29; // edx
  _QWORD *v30; // rax
  __int64 v31; // rsi
  unsigned int v32; // eax
  __int64 *v33; // rsi
  __int64 v34; // r11
  __int64 v35; // r8
  unsigned int v36; // [rsp+8h] [rbp-70h]
  __int64 v37[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( (__int64 *)a4 != a1 )
  {
    if ( *(_QWORD *)a4 )
      sub_186B220((void *)(*(_QWORD *)a4 - 8LL));
    if ( *a1 )
    {
      v9 = _mm_loadl_epi64((const __m128i *)(*a1 - 8));
      v10 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v9) + 8);
      *(_QWORD *)a4 = v10 + 1;
      v11 = (_QWORD *)*a1;
      *v10 = v9.m128i_i64[0];
      if ( v11 )
      {
        v12 = 8LL * *((unsigned int *)v11 - 1);
        if ( v12 <= 8 )
        {
          if ( v12 == 8 )
            v10[1] = *v11;
        }
        else
        {
          memmove(v10 + 1, v11, v12);
        }
      }
    }
    else
    {
      *(_QWORD *)a4 = 0;
    }
  }
  *(_DWORD *)(a4 + 8) = *((_DWORD *)a1 + 2);
  if ( a2 )
  {
    v13 = *(_QWORD **)a4;
    if ( *(_QWORD *)a4 )
    {
      v14 = *((_DWORD *)v13 - 1);
      v15 = *a3 + 1;
      v16 = &v13[v15];
      v17 = 1;
      v36 = v14 - a2;
      if ( (unsigned int)v15 < v14 )
      {
        if ( a2 != 1 && a3[1] == (_DWORD)v15 )
          goto LABEL_17;
        while ( 1 )
        {
          v18 = v15;
          LODWORD(v15) = v15 + 1;
          v13[v18 - v17] = *v16;
          if ( (unsigned int)v15 >= v14 )
            break;
          if ( a2 == v17 )
          {
            v31 = (unsigned int)v15;
            v32 = v15 - a2;
            v33 = &v13[v31];
            do
            {
              v34 = *v33;
              v35 = v32++;
              ++v33;
              v13[v35] = v34;
            }
            while ( v17 + v32 < v14 );
            if ( v14 < a2 )
              goto LABEL_25;
            goto LABEL_19;
          }
          while ( 1 )
          {
            ++v16;
            if ( a2 == v17 || a3[v17] != (_DWORD)v15 )
              break;
LABEL_17:
            LODWORD(v15) = v15 + 1;
            ++v17;
            if ( (unsigned int)v15 >= v14 )
              goto LABEL_18;
          }
        }
      }
LABEL_18:
      if ( v14 >= a2 )
      {
LABEL_19:
        v19 = *a1;
        *((_DWORD *)v13 - 1) = v14 - a2;
        LODWORD(result) = *((_DWORD *)a1 + 2);
        if ( !v19 )
          goto LABEL_20;
LABEL_30:
        v29 = *(_DWORD *)(v19 - 4) - result;
        result = (unsigned int)result - a2;
        if ( *a3 >= v29 )
          goto LABEL_21;
LABEL_31:
        result = 0;
        goto LABEL_21;
      }
    }
    else
    {
      v14 = 0;
      v36 = -a2;
      v30 = (_QWORD *)sub_186B270(0x18u);
      v13 = v30 + 1;
      *v30 = 2;
      *(_QWORD *)a4 = v30 + 1;
    }
LABEL_25:
    while ( 1 )
    {
      v25 = *((_DWORD *)v13 - 2);
      if ( v25 >= v36 )
        break;
      v22 = (3 * v25 + 1) >> 1;
      v23 = 8 * v22 + 8;
      if ( 8 * v25 + 8 >= (unsigned int)v23 || v25 >= v22 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v37, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v37);
        sub_233E40((__int64)v37);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v24 = (unsigned int *)sub_186B300(v13 - 1, v23);
      v13 = v24 + 2;
      *v24 = v22;
      *(_QWORD *)a4 = v24 + 2;
    }
    *((_DWORD *)v13 - 1) = v36;
    v26 = 8LL * v14;
    v27 = 8LL * v36;
    v28 = &v13[(unsigned __int64)v26 / 8];
    if ( v26 != v27 )
      memset(v28, 0, v27 - v26);
  }
  result = *((unsigned int *)a1 + 2);
  if ( !a3 )
    goto LABEL_21;
  v19 = *a1;
  if ( *a1 )
    goto LABEL_30;
LABEL_20:
  v21 = -(int)result;
  result = (unsigned int)result - a2;
  if ( *a3 < v21 )
    goto LABEL_31;
LABEL_21:
  *(_DWORD *)(a4 + 8) = result;
  return result;
}

