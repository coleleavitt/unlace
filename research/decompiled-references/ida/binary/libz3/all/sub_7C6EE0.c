__m128i *__fastcall sub_7C6EE0(__m128i *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v6; // rsi
  __int64 v7; // r12
  int *v8; // r15
  _QWORD *v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  int v13; // edx
  __int64 v14; // r13
  __int64 v15; // rbp
  char *v16; // rax
  char *v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rsi
  _BYTE *v20; // rdx
  unsigned __int64 v21; // r12
  __int64 v22; // rbp
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdi
  unsigned __int64 v31; // rax
  __int64 v32; // r10
  _QWORD *v35; // [rsp+28h] [rbp-F0h]
  int v36; // [rsp+38h] [rbp-E0h] BYREF
  int v37; // [rsp+3Ch] [rbp-DCh] BYREF
  __int64 v38; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v39; // [rsp+48h] [rbp-D0h]
  void *v40; // [rsp+50h] [rbp-C8h]
  __int64 v41; // [rsp+58h] [rbp-C0h]
  _BYTE v42[184]; // [rsp+60h] [rbp-B8h] BYREF

  v40 = v42;
  v41 = 0x1000000000LL;
  v6 = (unsigned int)a4[8];
  v7 = (__int64)&a4[v6 + 16];
  if ( 4 * v6 )
  {
    v8 = a4 + 16;
    do
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(a3 + 16) == 0;
        v36 = *v8;
        if ( v12 )
          std::__throw_bad_function_call();
        (*(void (__fastcall **)(__int64 *, __int64, int *))(a3 + 24))(&v38, a3, &v36);
        v13 = v41;
        v14 = v38;
        if ( (unsigned int)v41 < HIDWORD(v41) )
        {
          v9 = v40;
        }
        else
        {
          v15 = (unsigned int)(2 * HIDWORD(v41));
          v16 = (char *)sub_186B270(8 * v15);
          v13 = v41;
          v17 = (char *)v40;
          v9 = v16;
          if ( (_DWORD)v41 )
          {
            if ( (unsigned int)(v41 - 1) <= 2 || v16 == (char *)v40 + 8 )
            {
              v31 = 0;
              v32 = 8LL * (unsigned int)v41;
              do
              {
                v9[v31 / 8] = *(_QWORD *)&v17[v31];
                v31 += 8LL;
              }
              while ( v31 != v32 );
            }
            else
            {
              v18 = 0;
              v19 = 16LL * ((unsigned int)v41 >> 1);
              do
              {
                *(__m128i *)&v9[v18 / 8] = _mm_loadu_si128((const __m128i *)&v17[v18]);
                v18 += 16LL;
              }
              while ( v19 != v18 );
              if ( (v13 & 1) != 0 )
                v9[v13 & 0xFFFFFFFE] = *(_QWORD *)&v17[8 * (v13 & 0xFFFFFFFE)];
            }
          }
          if ( v17 != v42 && v17 )
          {
            v35 = v9;
            sub_186B220(v17);
            v13 = v41;
            v9 = v35;
          }
          v40 = v9;
          HIDWORD(v41) = v15;
        }
        v9[v13] = v14;
        v10 = v38;
        LODWORD(v41) = v13 + 1;
        if ( v38 )
        {
          v11 = v39;
          v12 = (*(_DWORD *)(v38 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( (int *)v7 == ++v8 )
          goto LABEL_21;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( (int *)v7 != v8 );
LABEL_21:
    v6 = (unsigned int)a4[8];
    v20 = v40;
  }
  else
  {
    v20 = v42;
  }
  v21 = *(_QWORD *)(a2 + 72);
  v22 = sub_168DA70(a2 + 96, v6, v20, (unsigned int)a4[15]);
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)v21);
  if ( v22 )
    ++*(_DWORD *)(v22 + 8);
  if ( a4[4] != -2 )
  {
    v12 = *(_QWORD *)(a3 + 16) == 0;
    v37 = a4[4];
    v23 = *(_QWORD *)(a2 + 72);
    if ( v12 )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64 *, __int64, int *))(a3 + 24))(&v38, a3, &v37);
    v24 = sub_15E1B70(v23);
    v25 = v24;
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    v26 = a1->m128i_i64[0];
    if ( a1->m128i_i64[0] )
    {
      v27 = a1->m128i_i64[1];
      v12 = (*(_DWORD *)(v26 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v27, v26);
    }
    v28 = v38;
    a1->m128i_i64[0] = v25;
    if ( v28 )
    {
      v29 = v39;
      v12 = (*(_DWORD *)(v28 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v29, v28);
    }
  }
  if ( v40 != v42 && v40 )
    sub_186B220(v40);
  return a1;
}

