__int64 __fastcall sub_1233A90(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rdx
  __int64 v5; // r12
  __m128i v6; // rax
  __m128i v7; // xmm0
  __int64 result; // rax
  size_t v9; // r14
  size_t v10; // rdx
  _BYTE *v11; // rbp
  int v12; // r15d
  size_t v13; // rdx
  const void *v14; // rsi
  bool v15; // r8
  __int64 v16; // r15
  size_t v17; // r13
  size_t v18; // rdx
  int v19; // eax
  size_t v20; // r8
  size_t v21; // rdx
  const void *v22; // rsi
  int v23; // eax
  __int64 v24; // rdi
  void *v25; // rdi
  int v26; // eax
  __int64 v27; // r15
  __int64 v28; // r13
  size_t v29; // r9
  size_t v30; // rdx
  int v31; // eax
  size_t v32; // r8
  size_t v33; // rdx
  int v34; // eax
  __int64 v35; // rax
  void *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rdi
  __int64 v39; // r14
  _QWORD *v40; // rax
  __int64 v41; // r14
  char v42; // [rsp+8h] [rbp-F0h]
  size_t v43; // [rsp+8h] [rbp-F0h]
  size_t v44; // [rsp+8h] [rbp-F0h]
  _QWORD *v45; // [rsp+8h] [rbp-F0h]
  _QWORD *v46; // [rsp+8h] [rbp-F0h]
  bool v47; // [rsp+18h] [rbp-E0h]
  __int64 v48; // [rsp+18h] [rbp-E0h]
  size_t v49; // [rsp+18h] [rbp-E0h]
  __m128i v50; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v51; // [rsp+40h] [rbp-B8h]
  __int64 v52; // [rsp+50h] [rbp-A8h] BYREF
  char v53; // [rsp+58h] [rbp-A0h]
  void *s1; // [rsp+60h] [rbp-98h] BYREF
  size_t n; // [rsp+68h] [rbp-90h]
  char v56; // [rsp+70h] [rbp-88h]
  __m128i v57; // [rsp+80h] [rbp-78h] BYREF
  __m128i v58; // [rsp+90h] [rbp-68h] BYREF
  __m128i v59; // [rsp+A0h] [rbp-58h] BYREF
  _BYTE v60[72]; // [rsp+B0h] [rbp-48h] BYREF

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
  v5 = v4;
  v6.m128i_i64[0] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
  v58.m128i_i64[1] = v5;
  v57 = v6;
  v7 = _mm_load_si128(&v57);
  v58.m128i_i64[0] = v3;
  v50 = v7;
  result = v7.m128i_i64[0];
  v51 = _mm_load_si128(&v58);
  if ( v51.m128i_i64[0] == v7.m128i_i64[0] )
    return result;
  do
  {
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(*(_QWORD *)v50.m128i_i64[1] + 40LL))(
      &v52,
      v50.m128i_i64[1],
      v50.m128i_i64[0]);
    if ( (v53 & 1) != 0 )
    {
      v35 = v52;
      v52 = 0;
      v59.m128i_i64[0] = v35;
      sub_1232E70(a1, v59.m128i_i64);
      if ( v59.m128i_i64[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v59.m128i_i64[0] + 8LL))(v59.m128i_i64[0]);
      goto LABEL_11;
    }
    (*(void (__fastcall **)(void **, __int64, __int64))(*(_QWORD *)v50.m128i_i64[1] + 80LL))(
      &s1,
      v50.m128i_i64[1],
      v50.m128i_i64[0]);
    v42 = v56 & 1;
    if ( (v56 & 1) != 0 )
    {
      v36 = s1;
      s1 = nullptr;
      v59.m128i_i64[0] = (__int64)v36;
      sub_1232E70(a1, v59.m128i_i64);
      if ( v59.m128i_i64[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v59.m128i_i64[0] + 8LL))(v59.m128i_i64[0]);
      goto LABEL_10;
    }
    v9 = n;
    v10 = *(_QWORD *)(a1 + 224);
    v11 = s1;
    v12 = v52 & 1;
    if ( v10 > n )
    {
      v13 = *(_QWORD *)(a1 + 256);
      if ( n < v13 )
        goto LABEL_10;
      v14 = *(const void **)(a1 + 248);
      v15 = 0;
      if ( v13 )
      {
LABEL_7:
        v47 = v15;
        if ( memcmp(v11, v14, v13) )
        {
          if ( v12 )
          {
            if ( !v47 )
              goto LABEL_10;
            goto LABEL_17;
          }
          if ( !v47 )
            goto LABEL_10;
          goto LABEL_92;
        }
        if ( v12 )
        {
          if ( !v47 )
            goto LABEL_45;
          v42 = 1;
          goto LABEL_17;
        }
        v40 = (_QWORD *)(a1 + 168);
        if ( v47 )
          goto LABEL_92;
      }
      else
      {
        if ( (v52 & 1) != 0 )
          goto LABEL_45;
        v40 = (_QWORD *)(a1 + 168);
        if ( !s1 )
        {
          v59.m128i_i64[1] = 0;
          v60[0] = 0;
          v59.m128i_i64[0] = (__int64)v60;
          sub_12334C0((_QWORD *)(a1 + 168), (__int64)&v59);
          if ( (_BYTE *)v59.m128i_i64[0] != v60 )
            operator delete((void *)v59.m128i_i64[0]);
          v60[0] = 0;
          v59.m128i_i64[1] = 0;
          v59.m128i_i64[0] = (__int64)v60;
          goto LABEL_101;
        }
      }
LABEL_103:
      v41 = (__int64)&v11[v9];
      v46 = v40;
      v59.m128i_i64[0] = (__int64)v60;
      sub_1232590(&v59, v11, v41);
      sub_12334C0(v46, (__int64)&v59);
      if ( (_BYTE *)v59.m128i_i64[0] != v60 )
        operator delete((void *)v59.m128i_i64[0]);
      v59.m128i_i64[0] = (__int64)v60;
      sub_1232590(&v59, v11, v41);
LABEL_101:
      v38 = (_QWORD *)(a1 + 72);
      goto LABEL_89;
    }
    if ( v10 )
    {
      v26 = memcmp(s1, *(const void **)(a1 + 216), v10);
      v13 = *(_QWORD *)(a1 + 256);
      if ( v13 > v9 )
      {
        if ( v12 )
        {
          if ( v26 )
            goto LABEL_10;
          goto LABEL_17;
        }
        if ( v26 )
          goto LABEL_10;
        v37 = (_QWORD *)(a1 + 120);
        goto LABEL_93;
      }
      v14 = *(const void **)(a1 + 248);
      v15 = v26 == 0;
      if ( v13 )
        goto LABEL_7;
      if ( !v12 )
      {
        if ( v26 )
        {
          v40 = (_QWORD *)(a1 + 168);
          goto LABEL_103;
        }
LABEL_92:
        v37 = (_QWORD *)(a1 + 120);
LABEL_93:
        v39 = (__int64)&v11[v9];
        v45 = v37;
        v59.m128i_i64[0] = (__int64)v60;
        sub_1232590(&v59, v11, v39);
        sub_12334C0(v45, (__int64)&v59);
        if ( (_BYTE *)v59.m128i_i64[0] != v60 )
          operator delete((void *)v59.m128i_i64[0]);
        v59.m128i_i64[0] = (__int64)v60;
        sub_1232590(&v59, v11, v39);
LABEL_88:
        v38 = (_QWORD *)(a1 + 24);
LABEL_89:
        sub_1233970(v38, (__int64)&v59);
        v25 = (void *)v59.m128i_i64[0];
        if ( (_BYTE *)v59.m128i_i64[0] == v60 )
          goto LABEL_10;
        goto LABEL_90;
      }
      if ( v26 )
        goto LABEL_45;
      goto LABEL_16;
    }
    v13 = *(_QWORD *)(a1 + 256);
    if ( n >= v13 )
    {
      v14 = *(const void **)(a1 + 248);
      v15 = 1;
      if ( v13 )
        goto LABEL_7;
      if ( (v52 & 1) == 0 )
        goto LABEL_84;
LABEL_16:
      v42 = 1;
      goto LABEL_17;
    }
    if ( (v52 & 1) == 0 )
    {
LABEL_84:
      v37 = (_QWORD *)(a1 + 120);
      if ( s1 )
        goto LABEL_93;
      v59.m128i_i64[1] = 0;
      v60[0] = 0;
      v59.m128i_i64[0] = (__int64)v60;
      sub_12334C0((_QWORD *)(a1 + 120), (__int64)&v59);
      if ( (_BYTE *)v59.m128i_i64[0] != v60 )
        operator delete((void *)v59.m128i_i64[0]);
      v60[0] = 0;
      v59.m128i_i64[1] = 0;
      v59.m128i_i64[0] = (__int64)v60;
      goto LABEL_88;
    }
LABEL_17:
    v16 = *(_QWORD *)(a1 + 136);
    if ( !v16 )
      goto LABEL_35;
    v48 = a1 + 128;
    do
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(v16 + 40);
        v18 = v17;
        if ( v9 <= v17 )
          v18 = v9;
        if ( v18 )
        {
          v19 = memcmp(*(const void **)(v16 + 32), v11, v18);
          if ( v19 )
            break;
        }
        if ( v9 == v17 || v9 <= v17 )
        {
          v48 = v16;
          v16 = *(_QWORD *)(v16 + 16);
          goto LABEL_27;
        }
LABEL_19:
        v16 = *(_QWORD *)(v16 + 24);
        if ( !v16 )
          goto LABEL_28;
      }
      if ( v19 < 0 )
        goto LABEL_19;
      v48 = v16;
      v16 = *(_QWORD *)(v16 + 16);
LABEL_27:
      ;
    }
    while ( v16 );
LABEL_28:
    if ( a1 + 128 == v48 )
      goto LABEL_35;
    v20 = *(_QWORD *)(v48 + 40);
    v21 = v20;
    if ( v9 <= v20 )
      v21 = v9;
    if ( v21 )
    {
      v22 = *(const void **)(v48 + 32);
      v49 = *(_QWORD *)(v48 + 40);
      v23 = memcmp(v11, v22, v21);
      v20 = v49;
      if ( v23 )
      {
        if ( v23 >= 0 )
          goto LABEL_73;
LABEL_35:
        if ( v11 )
        {
          v59.m128i_i64[0] = (__int64)v60;
          sub_1232590(&v59, v11, (__int64)&v11[v9]);
        }
        else
        {
          v60[0] = 0;
          v59.m128i_i64[1] = 0;
          v59.m128i_i64[0] = (__int64)v60;
        }
        v24 = a1 + 24;
        goto LABEL_38;
      }
    }
    if ( v9 != v20 && v9 < v20 )
      goto LABEL_35;
LABEL_73:
    if ( !v42 )
      goto LABEL_10;
LABEL_45:
    v27 = *(_QWORD *)(a1 + 184);
    if ( !v27 )
      goto LABEL_63;
    v28 = a1 + 176;
    while ( 2 )
    {
      while ( 2 )
      {
        v29 = *(_QWORD *)(v27 + 40);
        v30 = v29;
        if ( v9 <= v29 )
          v30 = v9;
        if ( !v30 || (v43 = *(_QWORD *)(v27 + 40), v31 = memcmp(*(const void **)(v27 + 32), v11, v30), v29 = v43, !v31) )
        {
          if ( v9 == v29 || v9 <= v29 )
          {
            v28 = v27;
            v27 = *(_QWORD *)(v27 + 16);
            goto LABEL_55;
          }
          goto LABEL_47;
        }
        if ( v31 < 0 )
        {
LABEL_47:
          v27 = *(_QWORD *)(v27 + 24);
          if ( !v27 )
            goto LABEL_56;
          continue;
        }
        break;
      }
      v28 = v27;
      v27 = *(_QWORD *)(v27 + 16);
LABEL_55:
      if ( v27 )
        continue;
      break;
    }
LABEL_56:
    if ( a1 + 176 == v28 )
      goto LABEL_63;
    v32 = *(_QWORD *)(v28 + 40);
    v33 = v32;
    if ( v9 <= v32 )
      v33 = v9;
    if ( v33 )
    {
      v44 = *(_QWORD *)(v28 + 40);
      v34 = memcmp(v11, *(const void **)(v28 + 32), v33);
      v32 = v44;
      if ( v34 )
      {
        if ( v34 >= 0 )
          goto LABEL_10;
LABEL_63:
        if ( v11 )
        {
          v59.m128i_i64[0] = (__int64)v60;
          sub_1232590(&v59, v11, (__int64)&v11[v9]);
        }
        else
        {
          v60[0] = 0;
          v59.m128i_i64[1] = 0;
          v59.m128i_i64[0] = (__int64)v60;
        }
        v24 = a1 + 72;
LABEL_38:
        sub_11A14A0(v24, &v59);
        v25 = (void *)v59.m128i_i64[0];
        if ( (_BYTE *)v59.m128i_i64[0] == v60 )
          goto LABEL_10;
LABEL_90:
        operator delete(v25);
        goto LABEL_10;
      }
    }
    if ( v9 != v32 && v9 < v32 )
      goto LABEL_63;
LABEL_10:
    sub_111DFC0((__int64 *)&s1);
LABEL_11:
    sub_A0AE90(&v52);
    (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v50.m128i_i64[1] + 24LL))(v50.m128i_i64[1], &v50);
    result = v50.m128i_i64[0];
  }
  while ( v51.m128i_i64[0] != v50.m128i_i64[0] );
  return result;
}
