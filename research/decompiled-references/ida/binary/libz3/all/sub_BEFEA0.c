void __fastcall sub_BEFEA0(__int64 *a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // r12
  __int64 v7; // rax
  __m128i v8; // xmm0
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 i; // rdx
  __int64 v13; // rax
  __int64 v14; // rsi
  _QWORD *v15; // rbx
  unsigned int v16; // r13d
  __int64 v17; // r14
  unsigned int v18; // eax
  __int64 v19; // rdi
  int v20; // eax
  _QWORD *v21; // rdi
  __int64 v22; // rax
  _QWORD *v23; // rbp
  __int64 v24; // rsi
  __int64 v25; // rdi
  unsigned int v27; // r8d
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rax
  _QWORD *v32; // rax
  char **exception; // rbp
  unsigned int v34; // [rsp+8h] [rbp-D0h]
  __int64 v37[2]; // [rsp+30h] [rbp-A8h] BYREF
  char v38; // [rsp+40h] [rbp-98h]
  __m128i v39; // [rsp+50h] [rbp-88h] BYREF
  int v40; // [rsp+60h] [rbp-78h]
  _QWORD *v41; // [rsp+68h] [rbp-70h]
  __int64 v42; // [rsp+70h] [rbp-68h]
  _QWORD *v43; // [rsp+78h] [rbp-60h]
  __m128i v44; // [rsp+80h] [rbp-58h]
  __m128i v45; // [rsp+90h] [rbp-48h]

  if ( a1 )
  {
    v4 = *a1;
    v41 = nullptr;
    v40 = *(_DWORD *)(v4 + 1768);
    v7 = *(_QWORD *)(v4 + 1776);
    v39 = _mm_loadu_si128((const __m128i *)(v4 + 1752));
    if ( v7 )
    {
      v8 = _mm_loadl_epi64((const __m128i *)(v7 - 8));
      v9 = (_QWORD *)sub_186B270(16LL * (unsigned int)_mm_cvtsi128_si32(v8) + 8);
      v10 = *(_QWORD *)(v4 + 1776);
      v41 = v9 + 1;
      *v9 = v8.m128i_i64[0];
      if ( v10 )
      {
        v11 = 16LL * *(unsigned int *)(v10 - 4);
        if ( v11 )
        {
          for ( i = 0; i != v11; i += 16LL )
            *(__m128i *)&v9[i / 8 + 1] = _mm_loadu_si128((const __m128i *)(v10 + i));
        }
      }
    }
    v13 = *(_QWORD *)(v4 + 1784);
    v14 = *(_QWORD *)(v4 + 1792);
    v43 = nullptr;
    v42 = v13;
    if ( v14 )
    {
      v15 = nullptr;
      v16 = 0;
      do
      {
        if ( v16 >= *(_DWORD *)(v14 - 4) )
          break;
        v17 = *(_QWORD *)(v14 + 8LL * v16);
        if ( v17 )
          ++*(_DWORD *)(v17 + 8);
        if ( v15 )
        {
          v18 = *((_DWORD *)v15 - 1);
          if ( v18 == *((_DWORD *)v15 - 2) )
          {
            v27 = (3 * v18 + 1) >> 1;
            v28 = 8 * v27 + 8;
            if ( 8 * v18 + 8 >= (unsigned int)v28 || v18 >= v27 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v37, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v37);
              sub_233E40((__int64)v37);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v34 = (3 * v18 + 1) >> 1;
            v29 = (unsigned int *)sub_186B300(v15 - 1, v28);
            v30 = v29[1];
            v15 = v29 + 2;
            v43 = v29 + 2;
            *v29 = v34;
            LODWORD(v29) = v30;
            v21 = &v15[v30];
            v14 = *(_QWORD *)(v4 + 1792);
            v20 = (_DWORD)v29 + 1;
          }
          else
          {
            v19 = v18;
            v20 = v18 + 1;
            v21 = &v15[v19];
          }
        }
        else
        {
          v32 = (_QWORD *)sub_186B270(0x18u);
          v15 = v32 + 1;
          *v32 = 2;
          v14 = *(_QWORD *)(v4 + 1792);
          v20 = 1;
          v43 = v15;
          v21 = v15;
        }
        *v21 = v17;
        ++v16;
        *((_DWORD *)v15 - 1) = v20;
      }
      while ( v14 );
      v44 = _mm_loadu_si128((const __m128i *)(v4 + 1800));
      v45 = _mm_loadu_si128((const __m128i *)(v4 + 1816));
      if ( !a3 )
        goto LABEL_19;
      v22 = a1[8];
      if ( !v22 || *(_DWORD *)(v22 - 4) < a3 )
        goto LABEL_19;
    }
    else
    {
      v44 = _mm_loadu_si128((const __m128i *)(v4 + 1800));
      v45 = _mm_loadu_si128((const __m128i *)(v4 + 1816));
      if ( !a3 || (v22 = a1[8]) == 0 || *(_DWORD *)(v22 - 4) < a3 )
      {
LABEL_28:
        if ( v41 )
          sub_186B220(v41 - 1);
        return;
      }
    }
    v31 = *(_QWORD *)(v22 + 8LL * (a3 - 1));
    v37[0] = (__int64)&v39;
    v37[1] = v31;
    v38 = a4;
    sub_1641460(v37, a2);
    v15 = v43;
LABEL_19:
    if ( v15 )
    {
      v23 = &v15[*((unsigned int *)v15 - 1)];
      if ( v15 >= v23 )
        goto LABEL_27;
      do
      {
        while ( 1 )
        {
          v24 = *v15;
          if ( *v15 )
          {
            v25 = v42;
            if ( (*(_DWORD *)(v24 + 8))-- == 1 )
              break;
          }
          if ( ++v15 >= v23 )
            goto LABEL_26;
        }
        sub_15D7BC0(v25, v24);
        ++v15;
      }
      while ( v15 < v23 );
LABEL_26:
      v15 = v43;
      if ( v43 )
LABEL_27:
        sub_186B220(v15 - 1);
    }
    goto LABEL_28;
  }
}

