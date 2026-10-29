void __fastcall sub_4D7960(__int64 *a1, unsigned int a2, _DWORD *a3, __int64 a4)
{
  char **exception; // rbx
  __m128i v9; // xmm0
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  size_t v12; // rdx
  int v13; // edx
  _QWORD *v14; // rdi
  unsigned int v15; // r12d
  unsigned int v16; // eax
  _QWORD *v17; // rsi
  unsigned int v18; // ecx
  unsigned int v19; // r8d
  __int64 v20; // rax
  int v21; // ecx
  unsigned int v22; // r15d
  size_t v23; // rsi
  unsigned int *v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rdi
  unsigned int v29; // ecx
  int v30; // ebx
  __int64 v31; // rax
  _QWORD *v32; // rax
  unsigned int v33; // ecx
  __int64 v34; // rsi
  __int64 v35; // r8
  __int64 v36; // rsi
  unsigned int v37; // [rsp+8h] [rbp-70h]
  __int64 v38[11]; // [rsp+20h] [rbp-58h] BYREF

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
  v13 = *((_DWORD *)a1 + 2);
  *(_DWORD *)(a4 + 8) = v13;
  if ( a2 )
  {
    v14 = *(_QWORD **)a4;
    if ( *(_QWORD *)a4 )
    {
      v15 = *((_DWORD *)v14 - 1);
      v16 = *a3 + 1;
      v37 = v15 - a2;
      if ( v16 < v15 )
      {
        v17 = &v14[v16];
        v18 = 1;
        if ( a2 != 1 && v16 == a3[1] )
          goto LABEL_17;
        while ( 1 )
        {
          v19 = v16++;
          v14[v19 - v18] = *v17;
          if ( v16 >= v15 )
            break;
          if ( a2 == v18 )
          {
            v33 = v16 - a2;
            do
            {
              v34 = v16++;
              v35 = v14[v34];
              v36 = v33++;
              v14[v36] = v35;
            }
            while ( v16 < v15 );
            if ( v15 < a2 )
              goto LABEL_24;
            goto LABEL_19;
          }
          while ( 1 )
          {
            ++v17;
            if ( a2 == v18 || v16 != a3[v18] )
              break;
LABEL_17:
            ++v16;
            ++v18;
            if ( v16 >= v15 )
              goto LABEL_18;
          }
        }
      }
LABEL_18:
      if ( v15 >= a2 )
      {
LABEL_19:
        v20 = *a1;
        *((_DWORD *)v14 - 1) = v15 - a2;
        v13 = *((_DWORD *)a1 + 2);
        if ( !v20 )
        {
LABEL_20:
          v21 = 0;
          goto LABEL_29;
        }
LABEL_28:
        v21 = *(_DWORD *)(v20 - 4);
LABEL_29:
        v29 = v21 - v13;
        v30 = a2 - 1;
        if ( v30 >= 0 )
        {
          v31 = (unsigned int)v30;
          do
          {
            if ( a3[v31] < v29 )
              break;
            --v31;
            --v13;
          }
          while ( (int)v31 >= 0 );
        }
        goto LABEL_33;
      }
    }
    else
    {
      v15 = 0;
      v37 = -a2;
      v32 = (_QWORD *)sub_186B270(0x18u);
      v14 = v32 + 1;
      *v32 = 2;
      *(_QWORD *)a4 = v32 + 1;
    }
LABEL_24:
    while ( 1 )
    {
      v25 = *((_DWORD *)v14 - 2);
      if ( v25 >= v37 )
        break;
      v22 = (3 * v25 + 1) >> 1;
      v23 = 8 * v22 + 8;
      if ( 8 * v25 + 8 >= (unsigned int)v23 || v25 >= v22 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v38, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v38);
        sub_233E40((__int64)v38);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v24 = (unsigned int *)sub_186B300(v14 - 1, v23);
      v14 = v24 + 2;
      *v24 = v22;
      *(_QWORD *)a4 = v24 + 2;
    }
    *((_DWORD *)v14 - 1) = v37;
    v26 = 8LL * v15;
    v27 = 8LL * v37;
    v28 = &v14[(unsigned __int64)v26 / 8];
    if ( v26 != v27 )
      memset(v28, 0, v27 - v26);
    v20 = *a1;
    v13 = *((_DWORD *)a1 + 2);
    if ( !*a1 )
      goto LABEL_20;
    goto LABEL_28;
  }
LABEL_33:
  *(_DWORD *)(a4 + 8) = v13;
}

