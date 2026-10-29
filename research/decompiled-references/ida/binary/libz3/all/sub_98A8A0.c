__int64 __fastcall sub_98A8A0(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i *exception; // rax
  __m128i *v4; // r13
  char *v5; // rax
  __m128i *v6; // rax
  __m128i *v7; // r13
  char *v8; // rax
  __m128i *v9; // rax
  __m128i *v10; // r13
  char *v11; // rax
  _QWORD *v13; // rax
  _DWORD *v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r12
  unsigned int v18; // r15d
  _DWORD *v19; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // rcx
  unsigned int *v26; // rsi
  __int64 v27; // rcx
  unsigned int v28; // eax
  unsigned int v29; // r15d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r14
  __int64 v34; // r15
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // edx
  __int64 v38; // rdx
  unsigned int v39; // eax
  unsigned int v40; // edx
  __int64 v41; // rdx
  unsigned int v42; // r15d
  unsigned int v43; // eax
  unsigned int *v44; // rax
  unsigned int v45; // r14d
  unsigned int v46; // eax
  unsigned int *v47; // rax
  _BYTE v48[16]; // [rsp+0h] [rbp-A8h] BYREF
  _QWORD *v49; // [rsp+10h] [rbp-98h] BYREF
  __int64 v50; // [rsp+18h] [rbp-90h]
  _QWORD v51[2]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v52[3]; // [rsp+30h] [rbp-78h] BYREF
  void *v53; // [rsp+48h] [rbp-60h]
  __int64 v54; // [rsp+58h] [rbp-50h]
  void *v55; // [rsp+60h] [rbp-48h]

  sub_16669D0(v48, a2);
  v52[2] = 0;
  v53 = nullptr;
  v54 = 0;
  v52[0] = &off_1C62200;
  v55 = nullptr;
  v13 = (_QWORD *)sub_186B270(0x18u);
  v13[1] = a3;
  v14 = v13 + 1;
  *v13 = 0x100000002LL;
  v15 = 1;
LABEL_2:
  while ( v15 )
  {
    while ( 1 )
    {
      v16 = (unsigned int)(v15 - 1);
      v17 = *(_QWORD *)&v14[2 * v16];
      *(v14 - 1) = v16;
      v18 = sub_15D37A0(v52, v17);
      if ( (_BYTE)v18 )
        goto LABEL_7;
      sub_15D0A90(v52, v17, 1);
      if ( *(_WORD *)(v17 + 4) )
        goto LABEL_9;
      v19 = *(_DWORD **)(*(_QWORD *)(v17 + 16) + 24LL);
      if ( !v19 || *v19 != 5 )
        goto LABEL_7;
      v21 = (unsigned int)v19[1];
      if ( (unsigned int)v21 > 0x13 )
        goto LABEL_9;
      v22 = -786882;
      if ( _bittest64(&v22, v21) )
        break;
      v23 = *(unsigned int *)(v17 + 24);
      v24 = v17 + 8 * v23;
      if ( (_DWORD)v23 )
      {
        do
        {
          v28 = *(v14 - 1);
          if ( v28 == *(v14 - 2) )
          {
            v29 = (3 * v28 + 1) >> 1;
            v30 = 8 * v29 + 8;
            if ( 8 * v28 + 8 >= (unsigned int)v30 || v28 >= v29 )
            {
              exception = (__m128i *)__cxa_allocate_exception(0x28u);
              v49 = v51;
              v4 = exception;
              v5 = (char *)operator new(0x2Bu);
              strcpy(v5, "Overflow encountered when expanding vector");
              v4->m128i_i64[1] = (__int64)v5;
              v4->m128i_i64[0] = (__int64)off_1C63128;
              v4[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
              v49 = v51;
              v50 = 0;
              v51[0] = 0;
              sub_233E40((__int64)&v49);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v31 = (unsigned int *)sub_186B300(v14 - 2, v30);
            v32 = v31[1];
            v14 = v31 + 2;
            *v31 = v29;
            v26 = &v31[2 * v32 + 2];
            v15 = v32 + 1;
          }
          else
          {
            v25 = v28;
            v15 = v28 + 1;
            v26 = &v14[2 * v25];
          }
          v27 = *(_QWORD *)(v17 + 32);
          v17 += 8;
          *(_QWORD *)v26 = v27;
          *(v14 - 1) = v15;
        }
        while ( v24 != v17 );
        goto LABEL_2;
      }
LABEL_7:
      v15 = *(v14 - 1);
      if ( !v15 )
        goto LABEL_8;
    }
    if ( (_DWORD)v21 != 9 || *(_DWORD *)(v17 + 24) != 2 )
      goto LABEL_9;
    v33 = *(_QWORD *)(v17 + 32);
    v34 = *(_QWORD *)(v17 + 40);
    if ( sub_98A840(a1, (__int64)v48, v33) )
    {
      v39 = *(v14 - 1);
      v40 = *(v14 - 2);
      if ( v39 == v40 )
      {
        v45 = (3 * v40 + 1) >> 1;
        v46 = 8 * v45 + 8;
        if ( 8 * v40 + 8 >= v46 || v40 >= v45 )
        {
          v6 = (__m128i *)__cxa_allocate_exception(0x28u);
          v49 = v51;
          v7 = v6;
          v8 = (char *)operator new(0x2Bu);
          strcpy(v8, "Overflow encountered when expanding vector");
          v7->m128i_i64[1] = (__int64)v8;
          v7->m128i_i64[0] = (__int64)off_1C63128;
          v7[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
          v50 = 0;
          v51[0] = 0;
          v49 = v51;
          sub_233E40((__int64)&v49);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v47 = (unsigned int *)sub_186B300(v14 - 2, v46);
        *v47 = v45;
        v14 = v47 + 2;
        v39 = v47[1];
      }
      v41 = v39;
      v15 = v39 + 1;
      *(_QWORD *)&v14[2 * v41] = v34;
      *(v14 - 1) = v15;
    }
    else
    {
      LOBYTE(v35) = sub_98A840(a1, (__int64)v48, v34);
      v18 = v35;
      if ( !(_BYTE)v35 )
        goto LABEL_9;
      v36 = *(v14 - 1);
      v37 = *(v14 - 2);
      if ( v36 == v37 )
      {
        v42 = (3 * v37 + 1) >> 1;
        v43 = 8 * v42 + 8;
        if ( 8 * v37 + 8 >= v43 || v37 >= v42 )
        {
          v9 = (__m128i *)__cxa_allocate_exception(0x28u);
          v49 = v51;
          v10 = v9;
          v11 = (char *)operator new(0x2Bu);
          strcpy(v11, "Overflow encountered when expanding vector");
          v10->m128i_i64[1] = (__int64)v11;
          v10->m128i_i64[0] = (__int64)off_1C63128;
          v10[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
          v49 = v51;
          v50 = 0;
          v51[0] = 0;
          sub_233E40((__int64)&v49);
          __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v44 = (unsigned int *)sub_186B300(v14 - 2, v43);
        *v44 = v42;
        v14 = v44 + 2;
        v36 = v44[1];
      }
      v38 = v36;
      v15 = v36 + 1;
      *(_QWORD *)&v14[2 * v38] = v33;
      *(v14 - 1) = v15;
    }
  }
LABEL_8:
  v18 = 1;
LABEL_9:
  v52[0] = &off_1C62200;
  if ( v55 )
    sub_186B220(v55);
  if ( v53 )
    sub_186B220(v53);
  sub_186B220(v14 - 2);
  return v18;
}

