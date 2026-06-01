void __fastcall sub_11EE9F0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // r14
  __int64 *v7; // rdx
  __int64 *v8; // rbx
  __int64 v9; // r15
  _BYTE *v10; // r13
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rax
  __int64 *v14; // r14
  __int64 v15; // r15
  _BYTE *v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rax
  _BYTE *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int8 (__fastcall *v22)(__int64, _BYTE *); // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int8 (__fastcall *v27)(__int64, char **); // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  void *v31; // rdi
  _QWORD *v32; // [rsp+8h] [rbp-2F0h] BYREF
  _BYTE *v33; // [rsp+10h] [rbp-2E8h]
  __int64 v34; // [rsp+18h] [rbp-2E0h]
  char *v35; // [rsp+20h] [rbp-2D8h] BYREF
  __int16 v36; // [rsp+40h] [rbp-2B8h]
  _QWORD v37[4]; // [rsp+50h] [rbp-2A8h] BYREF
  __int16 v38; // [rsp+70h] [rbp-288h]
  _QWORD v39[4]; // [rsp+80h] [rbp-278h] BYREF
  __int16 v40; // [rsp+A0h] [rbp-258h]
  char *v41; // [rsp+B0h] [rbp-248h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-240h]
  __int16 v43; // [rsp+D0h] [rbp-228h]
  void *ptr[3]; // [rsp+E0h] [rbp-218h] BYREF
  __int64 v45; // [rsp+F8h] [rbp-200h] BYREF
  void *v46; // [rsp+180h] [rbp-178h] BYREF
  __m128i si128; // [rsp+188h] [rbp-170h]
  _BYTE v48[136]; // [rsp+198h] [rbp-160h] BYREF
  _BYTE v49[24]; // [rsp+220h] [rbp-D8h] BYREF
  int v50; // [rsp+238h] [rbp-C0h] BYREF
  __int16 v51; // [rsp+240h] [rbp-B8h]

  v3 = a2;
  v34 = a3;
  sub_112B520((__int64)a1, a2, a3);
  *(_QWORD *)v49 = 0xBEF00000BEDLL;
  *(_DWORD *)&v49[8] = 3052;
  v4 = sub_21B6DA0(a2, v49, 3);
  v5 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)&v49[16] = 0xBEF00000BEDLL;
  v50 = 3052;
  v6 = (__int64 *)(v5 + 8LL * (unsigned int)v4);
  v7 = (__int64 *)(v5 + 8 * HIDWORD(v4));
  v32 = v7;
  *(__m128 *)v49 = _mm_loadh_ps((const double *)&v32);
  if ( v6 != v7 )
  {
    v32 = (_QWORD *)a2;
    v8 = v7;
    v33 = &v49[12];
    do
    {
      v9 = *v6;
      v10 = v49;
      if ( *v6 )
      {
        do
        {
          v11 = *((unsigned int *)v10 + 4);
          if ( !(_DWORD)v11 )
            break;
          if ( (unsigned __int8)sub_21B9810(v9, v11) )
          {
            v3 = (__int64)v32;
            v32 = v8;
            *(_QWORD *)&v49[16] = 0xBEF00000BEDLL;
            v50 = 3052;
            *(__m128 *)v49 = _mm_loadh_ps((const double *)&v32);
            if ( v8 == v6 )
              goto LABEL_9;
LABEL_16:
            v13 = *v6;
            if ( *(_QWORD *)(*v6 + 16) )
              v13 = *(_QWORD *)(*v6 + 16);
            v14 = v6 + 1;
            *(_BYTE *)(v13 + 44) |= 1u;
            for ( *(_QWORD *)v49 = v14; v8 != v14; *(_QWORD *)v49 = v14 )
            {
              v15 = *v14;
              v16 = v49;
              if ( *v14 )
              {
                do
                {
                  v17 = *((unsigned int *)v16 + 4);
                  if ( !(_DWORD)v17 )
                    break;
                  if ( (unsigned __int8)sub_21B9810(v15, v17) )
                  {
                    v6 = *(__int64 **)v49;
                    if ( v8 != *(__int64 **)v49 )
                      goto LABEL_16;
                    return;
                  }
                  v16 += 4;
                }
                while ( v16 != &v49[12] );
              }
              ++v14;
            }
            return;
          }
          v10 += 4;
        }
        while ( v10 != v33 );
      }
      *(_QWORD *)v49 = ++v6;
    }
    while ( v8 != v6 );
    v3 = (__int64)v32;
  }
LABEL_9:
  sub_11EDD40((__int64)ptr, (__int64)a1, v3);
  v12 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 608LL))(a1, v3);
  if ( !v12 )
  {
    v18 = a1[1];
    v19 = *(_BYTE **)(v18 + 104);
    v20 = *(_QWORD *)(v18 + 112);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v46 = v48;
    sub_A1FE50(&v46, v19, &v19[v20]);
    *(_QWORD *)v49 = "v1";
    v51 = 259;
    v41 = (char *)"c++";
    v39[0] = "include";
    v37[0] = "..";
    v38 = 259;
    v33 = v39;
    v43 = 259;
    v40 = 259;
    v32 = v37;
    sub_228A3B0(&v46, v37, v39, &v41, v49);
    v21 = sub_112C5D0((__int64)a1);
    v22 = *(unsigned __int8 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v21 + 96LL);
    v51 = 261;
    *(_QWORD *)v49 = v46;
    *(_QWORD *)&v49[8] = si128.m128i_i64[0];
    if ( v22(v21, v49) )
    {
      *(_QWORD *)v49 = v46;
      v51 = 261;
      *(_QWORD *)&v49[8] = si128.m128i_i64[0];
      sub_112FA80(v3, v34, (__int64)v49);
    }
    else
    {
      if ( sub_10DCD30(v3, 0xD45u) )
      {
        v23 = sub_227D6D0(v3, 3397);
        v24 = sub_995540(v23, "ignoring nonexistent directory \"");
        v25 = sub_227BF10(v24, v46, si128.m128i_i64[0]);
        sub_995540(v25, "\"\n");
      }
      *(_QWORD *)v49 = &v50;
      *(__m128i *)&v49[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      if ( ptr[1] )
        sub_9C3DB0((void **)v49, (const void **)ptr);
      v41 = "v1";
      v43 = 259;
      v39[0] = "c++";
      v40 = 259;
      v37[0] = "include";
      v38 = 259;
      v36 = 259;
      v35 = "usr";
      sub_228A3B0(v49, &v35, v32, v33, &v41);
      v26 = sub_112C5D0((__int64)a1);
      v27 = *(unsigned __int8 (__fastcall **)(__int64, char **))(*(_QWORD *)v26 + 96LL);
      v41 = *(char **)v49;
      v43 = 261;
      v42 = *(_QWORD *)&v49[8];
      if ( !v27(v26, &v41) )
      {
        if ( sub_10DCD30(v3, 0xD45u) )
        {
          v28 = sub_227D6D0(v3, 3397);
          v29 = sub_995540(v28, "ignoring nonexistent directory \"");
          v30 = sub_227BF10(v29, *(_QWORD *)v49, *(_QWORD *)&v49[8]);
          sub_995540(v30, "\"\n");
        }
        v31 = *(void **)v49;
        if ( *(int **)v49 == &v50 )
          goto LABEL_37;
        goto LABEL_36;
      }
      v43 = 261;
      v41 = *(char **)v49;
      v42 = *(_QWORD *)&v49[8];
      sub_112FA80(v3, v34, (__int64)&v41);
      v31 = *(void **)v49;
      if ( *(int **)v49 != &v50 )
LABEL_36:
        free(v31);
    }
LABEL_37:
    if ( v46 != v48 )
      free(v46);
    goto LABEL_12;
  }
  if ( v12 == 1 )
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 824LL))(a1, v3, v34);
LABEL_12:
  if ( ptr[0] != &v45 )
    free(ptr[0]);
}
