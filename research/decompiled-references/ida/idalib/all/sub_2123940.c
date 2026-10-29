__int64 __fastcall sub_2123940(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  unsigned int v4; // ebp
  size_t v5; // r12
  size_t v6; // rdx
  _OWORD *v7; // rax
  __int64 v8; // r8
  size_t v9; // rdx
  _BYTE *v10; // rdi
  __int64 v11; // rcx
  __int64 v13; // r12
  char *v14; // r15
  char *v15; // r12
  __m128i *v16; // rbx
  size_t v17; // r14
  __int64 v18; // rax
  __m128i *v19; // rax
  size_t v20; // rsi
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // r14
  __int8 *v24; // rax
  __m128i *v25; // r15
  unsigned __int64 v26; // rax
  size_t v27; // rsi
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r9
  char *v30; // rdi
  __m128i *v31; // rdx
  unsigned __int64 v32; // rax
  size_t v33; // rsi
  size_t v34; // r12
  _OWORD *v35; // rax
  __int64 v36; // r8
  size_t v37; // rdx
  _BYTE *v38; // rdi
  __int64 v39; // rcx
  __m128i v40; // xmm1
  __m128i v41; // xmm2
  __m128i v42; // xmm4
  __m128i v43; // xmm3
  __m128i v44; // xmm5
  __int64 v45; // [rsp+8h] [rbp-110h] BYREF
  __m128i *v46; // [rsp+10h] [rbp-108h]
  size_t v47; // [rsp+18h] [rbp-100h]
  void *v48; // [rsp+20h] [rbp-F8h] BYREF
  size_t n; // [rsp+28h] [rbp-F0h]
  __m128i v50; // [rsp+30h] [rbp-E8h] BYREF
  void *v51; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v52; // [rsp+48h] [rbp-D0h]
  __m128i v53; // [rsp+50h] [rbp-C8h] BYREF
  void *v54; // [rsp+60h] [rbp-B8h] BYREF
  size_t v55; // [rsp+68h] [rbp-B0h]
  __m128i v56; // [rsp+70h] [rbp-A8h] BYREF
  void *v57; // [rsp+80h] [rbp-98h] BYREF
  size_t v58; // [rsp+88h] [rbp-90h]
  __m128i v59; // [rsp+90h] [rbp-88h] BYREF
  void *v60; // [rsp+A0h] [rbp-78h] BYREF
  size_t v61; // [rsp+A8h] [rbp-70h]
  __m128i v62; // [rsp+B0h] [rbp-68h] BYREF
  void *v63; // [rsp+C0h] [rbp-58h]
  size_t v64; // [rsp+C8h] [rbp-50h]
  _OWORD v65[4]; // [rsp+D0h] [rbp-48h] BYREF

  v3 = qword_2CFEF38;
  if ( !qword_2CFEF38 )
  {
    sub_99BDC0(a2, 0, a2[1], "Unable to find target for this triple (no targets are registered)", 0x41u);
    return v3;
  }
  v4 = *(_DWORD *)(a1 + 32);
  do
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(v3 + 8))(v4) )
    {
      v13 = *(_QWORD *)v3;
      if ( !*(_QWORD *)v3 )
        return v3;
      while ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(v13 + 8))(v4) )
      {
        v13 = *(_QWORD *)v13;
        if ( !v13 )
          return v3;
      }
      v14 = *(char **)(v3 + 16);
      v15 = *(char **)(v13 + 16);
      v53.m128i_i64[0] = 31;
      v16 = (__m128i *)operator new(0x20u);
      v51 = v16;
      *v16 = _mm_load_si128(xmmword_23AB3B0);
      strcpy(v16[1].m128i_i8, "tween targets \"");
      v52 = 31;
      v17 = strlen(v14);
      if ( v17 <= 0x7FFFFFFFFFFFFFE0LL )
      {
        v18 = v17 + 31;
        if ( v17 )
        {
          sub_998B30((__int64)&v51, 0x1Fu, 0, v14, v17);
          v16 = (__m128i *)v51;
          v18 = v17 + 31;
        }
        v52 = v18;
        v16[1].m128i_i8[v17 + 15] = 0;
        v19 = (__m128i *)v51;
        v54 = &v56;
        if ( v51 == &v53 )
        {
          v20 = v52;
          v41 = _mm_load_si128(&v53);
          v52 = 0;
          v53.m128i_i8[0] = 0;
          v56 = v41;
          v55 = v20;
          if ( 0x7FFFFFFFFFFFFFFFLL - v20 <= 6 )
            goto LABEL_94;
          v23 = v20 + 7;
          v19 = &v56;
          v21 = 15;
        }
        else
        {
          v20 = v52;
          v21 = v53.m128i_i64[0];
          v51 = &v53;
          v54 = v19;
          v22 = 0x7FFFFFFFFFFFFFFFLL - v52;
          v56.m128i_i64[0] = v53.m128i_i64[0];
          v55 = v52;
          v52 = 0;
          v53.m128i_i8[0] = 0;
          if ( v22 <= 6 )
            goto LABEL_94;
          v23 = v20 + 7;
          if ( v19 == &v56 )
            v21 = 15;
        }
        if ( v23 > v21 )
        {
          sub_998B30((__int64)&v54, v20, 0, "\" and \"", 7u);
        }
        else
        {
          v24 = &v19->m128i_i8[v20];
          *(_DWORD *)v24 = 1851858978;
          *((_WORD *)v24 + 2) = 8292;
          v24[6] = 34;
        }
        v55 = v23;
        *((_BYTE *)v54 + v23) = 0;
        v25 = (__m128i *)v54;
        v57 = &v59;
        v46 = &v59;
        if ( v54 == &v56 )
        {
          v27 = v55;
          v43 = _mm_load_si128(&v56);
          v55 = 0;
          v56.m128i_i8[0] = 0;
          v58 = v27;
          v45 = v27;
          v59 = v43;
          v26 = strlen(v15);
          if ( v26 > 0x7FFFFFFFFFFFFFFFLL - v27 )
            goto LABEL_94;
          v29 = v45 + v26;
          v25 = v46;
          v28 = 15;
        }
        else
        {
          v57 = v54;
          v54 = &v56;
          v58 = v55;
          v47 = v55;
          v59.m128i_i64[0] = v56.m128i_i64[0];
          v45 = v56.m128i_i64[0];
          v55 = 0;
          v56.m128i_i8[0] = 0;
          v26 = strlen(v15);
          v27 = v47;
          if ( 0x7FFFFFFFFFFFFFFFLL - v47 < v26 )
            goto LABEL_94;
          v28 = v45;
          v29 = v47 + v26;
          if ( v25 == v46 )
            v28 = 15;
        }
        if ( v29 > v28 )
        {
          v45 = v29;
          sub_998B30((__int64)&v57, v27, 0, v15, v26);
          v25 = (__m128i *)v57;
          v29 = v45;
        }
        else if ( v26 )
        {
          v30 = &v25->m128i_i8[v27];
          if ( v26 == 1 )
          {
            *v30 = *v15;
            v25 = (__m128i *)v57;
          }
          else
          {
            v45 = v29;
            memcpy(v30, v15, v26);
            v25 = (__m128i *)v57;
            v29 = v45;
          }
        }
        v58 = v29;
        v25->m128i_i8[v29] = 0;
        v31 = (__m128i *)v57;
        v60 = &v62;
        if ( v57 == &v59 )
        {
          v42 = _mm_load_si128(&v59);
          v33 = v58;
          v58 = 0;
          v59.m128i_i8[0] = 0;
          v62 = v42;
          v61 = v33;
          if ( v33 != 0x7FFFFFFFFFFFFFFFLL )
          {
            v34 = v33 + 1;
            v31 = &v62;
            v32 = 15;
            goto LABEL_46;
          }
        }
        else
        {
          v32 = v59.m128i_i64[0];
          v33 = v58;
          v57 = &v59;
          v60 = v31;
          v62.m128i_i64[0] = v59.m128i_i64[0];
          v61 = v58;
          v58 = 0;
          v59.m128i_i8[0] = 0;
          if ( v61 != 0x7FFFFFFFFFFFFFFFLL )
          {
            v34 = v33 + 1;
            if ( v31 == &v62 )
              v32 = 15;
LABEL_46:
            if ( v34 > v32 )
              sub_998B30((__int64)&v60, v33, 0, "\"", 1u);
            else
              v31->m128i_i8[v33] = 34;
            v61 = v34;
            *((_BYTE *)v60 + v34) = 0;
            v35 = v60;
            v63 = v65;
            if ( v60 == &v62 )
            {
              v37 = v61;
              v38 = (_BYTE *)*a2;
              v61 = 0;
              v44 = _mm_load_si128(&v62);
              v62.m128i_i8[0] = 0;
              v64 = v37;
              v65[0] = v44;
            }
            else
            {
              v36 = v62.m128i_i64[0];
              v37 = v61;
              v63 = v60;
              v60 = &v62;
              v38 = (_BYTE *)*a2;
              *(_QWORD *)&v65[0] = v62.m128i_i64[0];
              v64 = v61;
              v61 = 0;
              v62.m128i_i8[0] = 0;
              if ( v35 != v65 )
              {
                if ( v38 == (_BYTE *)(a2 + 2) )
                {
                  v45 = v36;
                  *a2 = v35;
                  *(__m128 *)(a2 + 1) = _mm_loadh_ps((const double *)&v45);
                }
                else
                {
                  v45 = v36;
                  v39 = a2[2];
                  *a2 = v35;
                  *(__m128 *)(a2 + 1) = _mm_loadh_ps((const double *)&v45);
                  if ( v38 )
                  {
                    v63 = v38;
                    *(_QWORD *)&v65[0] = v39;
LABEL_53:
                    v64 = 0;
                    *v38 = 0;
                    if ( v63 != v65 )
                      operator delete(v63);
                    if ( v60 != &v62 )
                      operator delete(v60);
                    if ( v57 != &v59 )
                      operator delete(v57);
                    if ( v54 != &v56 )
                      operator delete(v54);
                    if ( v51 != &v53 )
                      operator delete(v51);
                    return 0;
                  }
                }
                v38 = v65;
                v63 = v65;
                goto LABEL_53;
              }
            }
            if ( v37 )
            {
              if ( v37 == 1 )
                *v38 = v65[0];
              else
                memcpy(v38, v65, v37);
              v37 = v64;
              v38 = (_BYTE *)*a2;
            }
            a2[1] = v37;
            v38[v37] = 0;
            v38 = v63;
            goto LABEL_53;
          }
        }
      }
LABEL_94:
      std::__throw_length_error("basic_string::append");
    }
    v3 = *(_QWORD *)v3;
  }
  while ( v3 );
  sub_C05100((__int64)&v48, "No available targets are compatible with triple \"", a1);
  v5 = n;
  if ( n == 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_94;
  if ( v48 == &v50 )
    v6 = 15;
  else
    v6 = v50.m128i_i64[0];
  if ( n + 1 > v6 )
    sub_998B30((__int64)&v48, n, 0, "\"", 1u);
  else
    *((_BYTE *)v48 + n) = 34;
  n = v5 + 1;
  *((_BYTE *)v48 + v5 + 1) = 0;
  v7 = v48;
  v63 = v65;
  if ( v48 == &v50 )
  {
    v9 = n;
    v40 = _mm_load_si128(&v50);
    v50.m128i_i8[0] = 0;
    n = 0;
    v10 = (_BYTE *)*a2;
    v64 = v9;
    v65[0] = v40;
    goto LABEL_65;
  }
  v8 = v50.m128i_i64[0];
  v9 = n;
  v48 = &v50;
  v63 = v7;
  v10 = (_BYTE *)*a2;
  *(_QWORD *)&v65[0] = v50.m128i_i64[0];
  v64 = n;
  n = 0;
  v50.m128i_i8[0] = 0;
  if ( v7 == v65 )
  {
LABEL_65:
    if ( v9 )
    {
      if ( v9 == 1 )
        *v10 = v65[0];
      else
        memcpy(v10, v65, v9);
      v9 = v64;
      v10 = (_BYTE *)*a2;
    }
    a2[1] = v9;
    v10[v9] = 0;
    v10 = v63;
    goto LABEL_15;
  }
  if ( v10 == (_BYTE *)(a2 + 2) )
  {
    v45 = v8;
    *a2 = v7;
    *(__m128 *)(a2 + 1) = _mm_loadh_ps((const double *)&v45);
  }
  else
  {
    v45 = v8;
    v11 = a2[2];
    *a2 = v7;
    *(__m128 *)(a2 + 1) = _mm_loadh_ps((const double *)&v45);
    if ( v10 )
    {
      v63 = v10;
      *(_QWORD *)&v65[0] = v11;
      goto LABEL_15;
    }
  }
  v10 = v65;
  v63 = v65;
LABEL_15:
  v64 = 0;
  *v10 = 0;
  if ( v63 != v65 )
    operator delete(v63);
  if ( v48 != &v50 )
    operator delete(v48);
  return v3;
}
