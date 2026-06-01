__int64 __fastcall sub_51E7C0(__int64 a1, _QWORD *a2, char a3, unsigned int a4)
{
  char **exception; // rbx
  unsigned __int64 v6; // r15
  unsigned int v8; // r14d
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  __m128i v12; // xmm0
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  size_t v15; // rdx
  unsigned int v17; // r13d
  size_t v18; // rdi
  __int64 v19; // rax
  __int64 *v20; // rbx
  __int64 *v21; // r13
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 *v24; // r8
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __m128i v28; // xmm0
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  __int64 *v31; // rax
  void *v32; // rdi
  unsigned int v33; // eax
  _QWORD *v34; // rbx
  __m128i v35; // xmm0
  _QWORD *v36; // rax
  _QWORD *v37; // rsi
  size_t v38; // rdx
  _QWORD *v39; // rax
  __int64 *v40; // rax
  unsigned __int64 v41; // rcx
  __int64 v42; // r9
  __int64 *v43; // [rsp+0h] [rbp-78h]
  unsigned int v44; // [rsp+Ch] [rbp-6Ch]
  __int64 v45[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a1 + 48);
  if ( !a3 )
  {
    if ( v6 )
    {
      v8 = *(_DWORD *)(v6 - 4);
      if ( v8 == *(_DWORD *)(v6 - 8) )
      {
        v17 = (3 * v8 + 1) >> 1;
        v18 = 8 * v17 + 8;
        v44 = v17;
        if ( 8 * v8 + 8 >= (unsigned int)v18 || v8 >= v17 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v45, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v45);
          sub_233E40((__int64)v45);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v19 = sub_186B270(v18);
        v20 = *(__int64 **)(a1 + 48);
        v21 = (__int64 *)v19;
        v6 = v19 + 8;
        if ( v20 )
        {
          v22 = *((unsigned int *)v20 - 1);
          *(_DWORD *)(v19 + 4) = v22;
          v23 = 8 * v22;
          v24 = &v20[v22];
          if ( v20 != v24 )
          {
            v25 = v23 - 8;
            if ( (unsigned __int64)(v23 - 8) <= 8 || v6 < (unsigned __int64)(v20 + 2) && v20 < v21 + 3 )
            {
              v40 = v20;
              v41 = v6;
              do
              {
                v42 = *v40;
                *v40++ = 0;
                v41 += 8LL;
                *(_QWORD *)(v41 - 8) = v42;
              }
              while ( v40 != v24 );
            }
            else
            {
              v26 = 0;
              v27 = (v25 >> 3) + 1;
              do
              {
                v28 = _mm_loadu_si128((const __m128i *)&v20[v26]);
                *(_OWORD *)&v20[v26] = 0;
                *(__m128i *)&v21[v26 + 1] = v28;
                v26 += 2LL;
              }
              while ( 2 * (v27 >> 1) != v26 );
              if ( (v27 & 1) != 0 )
              {
                v29 = v27 & 0xFFFFFFFFFFFFFFFELL;
                v30 = v20[v29];
                v20[v29] = 0;
                v21[v29 + 1] = v30;
              }
            }
          }
          v31 = &v20[v22];
          if ( (_DWORD)v22 )
          {
            do
            {
              while ( *v20 )
              {
                v32 = (void *)(*v20 - 8);
                v43 = v31;
                ++v20;
                sub_186B220(v32);
                v31 = v43;
                if ( v43 == v20 )
                  goto LABEL_26;
              }
              ++v20;
            }
            while ( v20 != v31 );
LABEL_26:
            v20 = *(__int64 **)(a1 + 48);
          }
          sub_186B220(v20 - 1);
          v9 = *((unsigned int *)v21 + 1);
          v10 = (_QWORD *)(v6 + 8 * v9);
        }
        else
        {
          *(_DWORD *)(v19 + 4) = 0;
          v10 = (_QWORD *)(v19 + 8);
          LODWORD(v9) = 0;
        }
        v33 = v44;
        *(_QWORD *)(a1 + 48) = v6;
        *(_DWORD *)v21 = v33;
      }
      else
      {
        LODWORD(v9) = *(_DWORD *)(v6 - 4);
        v10 = (_QWORD *)(v6 + 8LL * v8);
      }
    }
    else
    {
      v8 = 0;
      v39 = (_QWORD *)sub_186B270(0x18u);
      LODWORD(v9) = 0;
      v6 = (unsigned __int64)(v39 + 1);
      *v39 = 2;
      *(_QWORD *)(a1 + 48) = v39 + 1;
      v10 = v39 + 1;
    }
    v11 = (_QWORD *)*a2;
    *v10 = 0;
    if ( !v11 )
      goto LABEL_10;
    v12 = _mm_loadl_epi64((const __m128i *)(v11 - 1));
    v43 = (__int64 *)v12.m128i_i64[0];
    v13 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v12) + 8);
    *v13 = v12.m128i_i64[0];
    *v10 = v13 + 1;
    v14 = (_QWORD *)*a2;
    if ( *a2 )
    {
      v15 = 8LL * *((unsigned int *)v14 - 1);
      if ( v15 <= 8 )
      {
        v6 = *(_QWORD *)(a1 + 48);
        LODWORD(v9) = *(_DWORD *)(v6 - 4);
        if ( v15 == 8 )
          v13[1] = *v14;
        goto LABEL_10;
      }
      memmove(v13 + 1, v14, v15);
    }
    v6 = *(_QWORD *)(a1 + 48);
    LODWORD(v9) = *(_DWORD *)(v6 - 4);
LABEL_10:
    *(_DWORD *)(v6 - 4) = v9 + 1;
    return v8;
  }
  v8 = a4;
  v34 = (_QWORD *)(v6 + 8LL * a4);
  if ( v34 != a2 )
  {
    if ( *v34 )
      sub_186B220((void *)(*v34 - 8LL));
    if ( *a2 )
    {
      v35 = _mm_loadl_epi64((const __m128i *)(*a2 - 8LL));
      v43 = (__int64 *)v35.m128i_i64[0];
      v36 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v35) + 8);
      *v36 = v35.m128i_i64[0];
      *v34 = v36 + 1;
      v37 = (_QWORD *)*a2;
      if ( *a2 )
      {
        v38 = 8LL * *((unsigned int *)v37 - 1);
        if ( v38 <= 8 )
        {
          if ( v38 == 8 )
            v36[1] = *v37;
        }
        else
        {
          memmove(v36 + 1, v37, v38);
        }
      }
    }
    else
    {
      *v34 = 0;
    }
  }
  return v8;
}

