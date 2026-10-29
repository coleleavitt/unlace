__int64 *__fastcall sub_21AC0F0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int32 v5; // eax
  unsigned __int8 *v6; // r12
  unsigned __int8 *v7; // rax
  unsigned __int8 v8; // r14
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  const __m128i *v25; // rdx
  const __m128i *v26; // rsi
  __int64 v27; // rbx
  unsigned int v29; // eax
  _BYTE *v30; // rsi
  unsigned int v31; // r14d
  int v32; // r15d
  unsigned __int32 v33; // eax
  __int64 v34; // rsi
  __int64 v35; // rdx
  char *v36; // rsi
  __int32 v37; // edx
  char *v38; // rsi
  _BYTE *v39; // r8
  __int64 v40; // r15
  char *v41; // rax
  void *v42; // r9
  char *v43; // rcx
  char *v44; // rax
  size_t n; // [rsp+18h] [rbp-200h]
  void *src; // [rsp+20h] [rbp-1F8h]
  char *srca; // [rsp+20h] [rbp-1F8h]
  _BYTE *v48; // [rsp+28h] [rbp-1F0h]
  __m128i v49[2]; // [rsp+30h] [rbp-1E8h] BYREF
  __int16 v50; // [rsp+50h] [rbp-1C8h]
  __m128i v51[2]; // [rsp+60h] [rbp-1B8h] BYREF
  __int16 v52; // [rsp+80h] [rbp-198h]
  __m128i v53[3]; // [rsp+90h] [rbp-188h] BYREF
  __m128i v54[2]; // [rsp+C0h] [rbp-158h] BYREF
  __int16 v55; // [rsp+E0h] [rbp-138h]
  __m128i v56[3]; // [rsp+F0h] [rbp-128h] BYREF
  __m128i v57[2]; // [rsp+120h] [rbp-F8h] BYREF
  __int16 v58; // [rsp+140h] [rbp-D8h]
  __m128i v59[2]; // [rsp+150h] [rbp-C8h] BYREF
  __int16 v60; // [rsp+170h] [rbp-A8h]
  _QWORD v61[4]; // [rsp+180h] [rbp-98h] BYREF
  __int16 v62; // [rsp+1A0h] [rbp-78h]
  __m128i v63[6]; // [rsp+1B0h] [rbp-68h] BYREF

  *(_BYTE *)(a2 + 612) = 1;
  v5 = sub_21A2A40(a3);
  *(_DWORD *)(a2 + 616) = v5;
  if ( v5 != 2 )
  {
    v61[0] = ")";
    v49[0].m128i_i32[0] = v5;
    v62 = 259;
    v58 = 265;
    v54[0].m128i_i64[0] = (__int64)" (Expected: ";
    v55 = 259;
    v50 = 265;
    v51[0].m128i_i64[0] = (__int64)"unexpected metadata version: ";
    v52 = 259;
    v57[0].m128i_i32[0] = 2;
    sub_A41580(v53, v51, v49, (__int64)" (Expected: ", 259, 265);
    sub_A41580(v56, v53, v54, v16, v17, v18);
    sub_A41580(v59, v56, v57, v19, v20, v21);
    v25 = (const __m128i *)v61;
    v26 = v59;
    goto LABEL_19;
  }
  v6 = *(unsigned __int8 **)(a3 + 16);
  v7 = *(unsigned __int8 **)(a3 + 8);
  if ( v6 <= v7 )
  {
LABEL_10:
    if ( v7 == v6 )
    {
      *a1 = 0;
    }
    else
    {
      sub_21A2C10(v63[0].m128i_i64, "linking section ended prematurely");
      *a1 = v63[0].m128i_i64[0];
    }
    return a1;
  }
  while ( 1 )
  {
    *(_QWORD *)(a3 + 16) = v6;
    *(_QWORD *)(a3 + 8) = v7 + 1;
    v8 = *v7;
    v7 = (unsigned __int8 *)(*(_QWORD *)(a3 + 8) + (unsigned int)sub_21A2A40(a3));
    *(_QWORD *)(a3 + 16) = v7;
    if ( v8 == 6 )
      break;
    if ( v8 <= 6u )
    {
      if ( v8 != 5 )
      {
LABEL_32:
        *(_QWORD *)(a3 + 8) = v7;
        goto LABEL_9;
      }
      v10 = sub_21A2A40(a3);
      if ( v10 > (unsigned __int64)(0x4EC4EC4EC4EC4EC5LL
                                  * ((__int64)(*(_QWORD *)(a2 + 504) - *(_QWORD *)(a2 + 496)) >> 3)) )
      {
        sub_21A2C10(v63[0].m128i_i64, "too many segment names");
        *a1 = v63[0].m128i_i64[0];
        return a1;
      }
      if ( v10 )
      {
        v11 = 0;
        v12 = 104 * (v10 - 1 + 1LL);
        do
        {
          v13 = sub_21A2A80(a3);
          v14 = *(_QWORD *)(a2 + 496);
          *(_QWORD *)(v14 + v11 + 80) = v15;
          *(_QWORD *)(v14 + v11 + 72) = v13;
          *(_DWORD *)(*(_QWORD *)(a2 + 496) + v11 + 88) = sub_21A2A40(a3);
          *(_DWORD *)(*(_QWORD *)(a2 + 496) + v11 + 92) = sub_21A2A40(a3);
          v11 += 104;
        }
        while ( v11 != v12 );
      }
    }
    else if ( v8 == 7 )
    {
      sub_21ABC00(v63[0].m128i_i64, a2, a3);
      v9 = v63[0].m128i_i64[0];
      if ( v63[0].m128i_i64[0] )
        goto LABEL_22;
    }
    else
    {
      if ( v8 != 8 )
        goto LABEL_32;
      sub_21AAA10(v63[0].m128i_i64, a2, a3);
      v9 = v63[0].m128i_i64[0];
      if ( v63[0].m128i_i64[0] )
        goto LABEL_22;
    }
LABEL_8:
    v7 = *(unsigned __int8 **)(a3 + 16);
    if ( *(unsigned __int8 **)(a3 + 8) != v7 )
    {
      sub_21A2C10(v63[0].m128i_i64, "linking sub-section ended prematurely");
      v9 = v63[0].m128i_i64[0];
LABEL_22:
      *a1 = v9;
      return a1;
    }
LABEL_9:
    if ( v6 <= v7 )
      goto LABEL_10;
  }
  v29 = sub_21A2A40(a3);
  v30 = *(_BYTE **)(a2 + 624);
  v31 = v29;
  if ( v29 > (unsigned __int64)((__int64)(*(_QWORD *)(a2 + 640) - (_QWORD)v30) >> 3) )
  {
    v39 = *(_BYTE **)(a2 + 632);
    v40 = 8LL * v29;
    n = v39 - v30;
    if ( v29 )
    {
      v48 = *(_BYTE **)(a2 + 632);
      v41 = (char *)operator new(8LL * v29);
      v39 = v48;
      v42 = *(void **)(a2 + 624);
      v43 = v41;
    }
    else
    {
      v42 = *(void **)(a2 + 624);
      v43 = nullptr;
    }
    if ( v30 != v39 )
    {
      src = v42;
      v44 = (char *)memmove(v43, v30, n);
      v42 = src;
      v43 = v44;
    }
    if ( v42 )
    {
      srca = v43;
      operator delete(v42);
      v43 = srca;
    }
    *(_QWORD *)(a2 + 624) = v43;
    *(_QWORD *)(a2 + 640) = &v43[v40];
    *(_QWORD *)(a2 + 632) = &v43[n];
  }
  if ( !v31 )
    goto LABEL_8;
  v32 = 0;
  while ( 1 )
  {
    v57[0].m128i_i32[0] = sub_21A2A40(a3);
    v33 = sub_21A2A40(a3);
    v34 = *(_QWORD *)(a2 + 560);
    v35 = *(_QWORD *)(a2 + 568);
    v57[0].m128i_i32[1] = v33;
    if ( v33 >= 0x8E38E38E38E38E39LL * ((v35 - v34) >> 4) || *(_BYTE *)(v34 + 144LL * v33 + 16) )
      break;
    v36 = *(char **)(a2 + 632);
    if ( v36 == *(char **)(a2 + 640) )
    {
      ++v32;
      sub_21A55A0(a2 + 624, v36, v57[0].m128i_i64);
      if ( v31 == v32 )
        goto LABEL_8;
    }
    else
    {
      v37 = v57[0].m128i_i32[0];
      v38 = v36 + 8;
      *((_DWORD *)v38 - 1) = v33;
      ++v32;
      *((_DWORD *)v38 - 2) = v37;
      *(_QWORD *)(a2 + 632) = v38;
      if ( v32 == v31 )
        goto LABEL_8;
    }
  }
  v59[0].m128i_i32[0] = v33;
  v22 = 259;
  v60 = 265;
  v25 = v59;
  v61[0] = "invalid function symbol: ";
  v26 = (const __m128i *)v61;
  v62 = 259;
LABEL_19:
  sub_A41580(v63, v26, v25, v22, v23, v24);
  v27 = operator new(0x38u);
  sub_2195A00(v27, (__int64)v63, 3);
  *a1 = v27;
  return a1;
}
