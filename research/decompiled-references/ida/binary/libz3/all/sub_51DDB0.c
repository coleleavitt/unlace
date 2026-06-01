__int64 __fastcall sub_51DDB0(__int64 a1, _QWORD *a2)
{
  char **exception; // rbx
  unsigned __int64 v5; // r15
  unsigned int v6; // r12d
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  __m128i v10; // xmm0
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  size_t v13; // rdx
  unsigned int v15; // r14d
  size_t v16; // rdi
  __int64 v17; // rax
  __int64 *v18; // rbx
  __int64 *v19; // r14
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 *v22; // r8
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __m128i v26; // xmm0
  unsigned __int64 v27; // rcx
  __int64 v28; // r8
  __int64 *v29; // rax
  void *v30; // rdi
  unsigned int v31; // eax
  __int64 *v32; // rax
  unsigned __int64 v33; // rcx
  __int64 v34; // r9
  _QWORD *v35; // rax
  __int64 *v36; // [rsp+0h] [rbp-78h]
  unsigned int v37; // [rsp+Ch] [rbp-6Ch]
  __int64 v38[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 - 4);
    if ( v6 == *(_DWORD *)(v5 - 8) )
    {
      v15 = (3 * v6 + 1) >> 1;
      v16 = 8 * v15 + 8;
      v37 = v15;
      if ( 8 * v6 + 8 >= (unsigned int)v16 || v6 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v38, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v38);
        sub_233E40((__int64)v38);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v17 = sub_186B270(v16);
      v18 = *(__int64 **)(a1 + 48);
      v19 = (__int64 *)v17;
      v5 = v17 + 8;
      if ( v18 )
      {
        v20 = *((unsigned int *)v18 - 1);
        *(_DWORD *)(v17 + 4) = v20;
        v21 = 8 * v20;
        v22 = &v18[v20];
        if ( v18 != v22 )
        {
          v23 = v21 - 8;
          if ( (unsigned __int64)(v21 - 8) <= 8 || v5 < (unsigned __int64)(v18 + 2) && v18 < v19 + 3 )
          {
            v32 = v18;
            v33 = v5;
            do
            {
              v34 = *v32;
              *v32++ = 0;
              v33 += 8LL;
              *(_QWORD *)(v33 - 8) = v34;
            }
            while ( v22 != v32 );
          }
          else
          {
            v24 = 0;
            v25 = (v23 >> 3) + 1;
            do
            {
              v26 = _mm_loadu_si128((const __m128i *)&v18[v24]);
              *(_OWORD *)&v18[v24] = 0;
              *(__m128i *)&v19[v24 + 1] = v26;
              v24 += 2LL;
            }
            while ( 2 * (v25 >> 1) != v24 );
            if ( (v25 & 1) != 0 )
            {
              v27 = v25 & 0xFFFFFFFFFFFFFFFELL;
              v28 = v18[v27];
              v18[v27] = 0;
              v19[v27 + 1] = v28;
            }
          }
        }
        v29 = &v18[v20];
        if ( (_DWORD)v20 )
        {
          do
          {
            while ( *v18 )
            {
              v30 = (void *)(*v18 - 8);
              v36 = v29;
              ++v18;
              sub_186B220(v30);
              v29 = v36;
              if ( v18 == v36 )
                goto LABEL_24;
            }
            ++v18;
          }
          while ( v18 != v29 );
LABEL_24:
          v18 = *(__int64 **)(a1 + 48);
        }
        sub_186B220(v18 - 1);
        v7 = *((unsigned int *)v19 + 1);
        v8 = (_QWORD *)(v5 + 8 * v7);
      }
      else
      {
        *(_DWORD *)(v17 + 4) = 0;
        v8 = (_QWORD *)(v17 + 8);
        LODWORD(v7) = 0;
      }
      v31 = v37;
      *(_QWORD *)(a1 + 48) = v5;
      *(_DWORD *)v19 = v31;
    }
    else
    {
      LODWORD(v7) = *(_DWORD *)(v5 - 4);
      v8 = (_QWORD *)(v5 + 8LL * v6);
    }
  }
  else
  {
    v6 = 0;
    v35 = (_QWORD *)sub_186B270(0x18u);
    LODWORD(v7) = 0;
    v5 = (unsigned __int64)(v35 + 1);
    *v35 = 2;
    *(_QWORD *)(a1 + 48) = v35 + 1;
    v8 = v35 + 1;
  }
  v9 = (_QWORD *)*a2;
  *v8 = 0;
  if ( v9 )
  {
    v10 = _mm_loadl_epi64((const __m128i *)(v9 - 1));
    v36 = (__int64 *)v10.m128i_i64[0];
    v11 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v10) + 8);
    *v11 = v10.m128i_i64[0];
    *v8 = v11 + 1;
    v12 = (_QWORD *)*a2;
    if ( !*a2 )
    {
LABEL_8:
      v5 = *(_QWORD *)(a1 + 48);
      LODWORD(v7) = *(_DWORD *)(v5 - 4);
      goto LABEL_9;
    }
    v13 = 8LL * *((unsigned int *)v12 - 1);
    if ( v13 > 8 )
    {
      memmove(v11 + 1, v12, v13);
      goto LABEL_8;
    }
    v5 = *(_QWORD *)(a1 + 48);
    LODWORD(v7) = *(_DWORD *)(v5 - 4);
    if ( v13 == 8 )
      v11[1] = *v12;
  }
LABEL_9:
  *(_DWORD *)(v5 - 4) = v7 + 1;
  return v6;
}

