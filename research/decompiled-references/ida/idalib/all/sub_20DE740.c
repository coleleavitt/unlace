__int64 __fastcall sub_20DE740(char **a1, __int64 a2)
{
  size_t v3; // rax
  char *v4; // rbx
  size_t v5; // r12
  size_t v6; // rbp
  size_t v7; // r12
  size_t v8; // r12
  __int64 result; // rax
  char *v10; // r14
  char *v11; // rbx
  __m128i v12; // xmm0
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // r12
  char *v16; // r13
  char *v17; // r14
  unsigned __int64 v18; // r14
  void *v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rbx
  char *v22; // rax
  __int64 v23; // rax
  char *v24; // r9
  char *v25; // rdi
  char v26; // al
  void *v27; // r14
  __int64 v28; // rdx
  __int64 v29; // r12
  char *v30; // rax
  char v31; // dl
  __int64 v32; // rcx
  _OWORD *v33; // rdi
  signed __int64 v34; // rax
  __int64 v35; // rdx
  char *v36; // rcx
  signed __int64 v37; // rbx
  char v38; // cl
  size_t v39; // rax
  int v40; // esi
  char *v41; // rax
  char *v42; // rdx
  size_t v43; // rsi
  char *v44; // rcx
  __m128i v45; // xmm0
  __m128i v46; // xmm1
  __int8 v47; // dl
  __int64 v48; // rdx
  signed __int64 v49; // r9
  char *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r9
  char v53; // si
  __int64 v54; // rdx
  __int64 v55; // rcx
  char v56; // r14
  __int64 v57; // rax
  char *v58; // rax
  char *v59; // [rsp+8h] [rbp-E0h]
  __int64 v60; // [rsp+8h] [rbp-E0h]
  __m128i v61; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v62; // [rsp+20h] [rbp-C8h]
  __int64 v63; // [rsp+28h] [rbp-C0h]
  __int64 v64; // [rsp+38h] [rbp-B0h] BYREF
  char **v65; // [rsp+40h] [rbp-A8h]
  __int64 v66; // [rsp+48h] [rbp-A0h]
  void *ptr[2]; // [rsp+50h] [rbp-98h] BYREF
  __int64 *v68; // [rsp+60h] [rbp-88h]
  _OWORD v69[4]; // [rsp+68h] [rbp-80h] BYREF
  __int64 v70; // [rsp+A8h] [rbp-40h] BYREF

  if ( a2 )
    a1[84] = a1[83];
  v3 = j__strlen("Ut");
  v4 = *a1;
  v5 = v3;
  v6 = a1[1] - *a1;
  if ( !sub_20D1BF0(v6, *a1, v3, "Ut") )
  {
    v7 = j__strlen("Ul");
    if ( !sub_20D1BF0(v6, v4, v7, "Ul") )
    {
      v8 = j__strlen("Ub");
      if ( !sub_20D1BF0(v6, v4, v8, "Ub") )
        return 0;
      *a1 = &v4[v8];
      sub_20CEB80(a1, 0);
      v42 = *a1;
      result = 0;
      if ( *a1 != a1[1] && *v42 == 95 )
      {
        *a1 = v42 + 1;
        return sub_20D1380((__int64)(a1 + 102), "'block-literal'");
      }
      return result;
    }
    v65 = a1;
    v10 = a1[83];
    *a1 = &v4[v7];
    v11 = a1[84];
    v61.m128i_i64[0] = (__int64)v69;
    v12 = _mm_loadl_epi64(&v61);
    v59 = a1[98];
    v13 = (v11 - v10) >> 3;
    *(__m128i *)ptr = _mm_unpacklo_epi64(v12, v12);
    a1[98] = (char *)v13;
    v66 = v13;
    v68 = &v70;
    memset(v69, 0, sizeof(v69));
    if ( v11 != a1[85] )
      goto LABEL_9;
    v43 = 16 * v13;
    if ( v10 == (char *)(a1 + 86) )
    {
      v58 = (char *)malloc(v43);
      v44 = v58;
      if ( v58 )
      {
        if ( v10 != v11 )
          v44 = (char *)memmove(v58, v10, v11 - v10);
        a1[83] = v44;
        goto LABEL_44;
      }
    }
    else
    {
      v44 = (char *)realloc(v10, v43);
      a1[83] = v44;
      if ( v44 )
      {
LABEL_44:
        v11 = &v44[v11 - v10];
        v61.m128i_i64[0] = v43;
        v45 = (__m128i)_mm_loadh_ps((const double *)v61.m128i_i64);
        v61.m128i_i64[0] = (__int64)v44;
        v46 = _mm_loadl_epi64(&v61);
        *((__m128i *)a1 + 42) = _mm_add_epi64(v45, _mm_unpacklo_epi64(v46, v46));
LABEL_9:
        v14 = a1[3] - a1[2];
        a1[84] = v11 + 8;
        v15 = v14 >> 3;
        *(_QWORD *)v11 = ptr;
        v16 = *a1;
        v17 = a1[1];
        if ( *a1 != v17 )
        {
          v18 = v17 - v16;
          while ( *v16 == 84 )
          {
            v39 = j__strlen("yptnk");
            v40 = 0;
            if ( v18 > 1 )
              v40 = v16[1];
            if ( !v39 )
              break;
            v41 = (char *)memchr("yptnk", v40, v39);
            if ( !v41 || v41 == "" )
              break;
            result = sub_20DE150((__int64)a1, (__int64)ptr);
            v64 = result;
            if ( !result )
              goto LABEL_24;
            sub_20D8690(a1 + 2, &v64);
            v16 = *a1;
            v18 = a1[1] - *a1;
            if ( *a1 == a1[1] )
              break;
          }
        }
        v19 = sub_20CFAD0((__int64)a1, v15);
        v21 = v20;
        if ( !v20 )
          a1[84] -= 8;
        v62 = 0;
        v22 = *a1;
        if ( *a1 != a1[1] && *v22 == 81 )
        {
          v56 = *((_BYTE *)a1 + 778);
          *((_BYTE *)a1 + 778) = 1;
          *a1 = v22 + 1;
          v57 = sub_20DA8A0((__int64)a1);
          *((_BYTE *)a1 + 778) = v56;
          v62 = v57;
          if ( !v57 )
            goto LABEL_23;
        }
        v23 = j__strlen("v");
        v24 = *a1;
        v25 = a1[1];
        v61.m128i_i64[1] = v23;
        v61.m128i_i64[0] = (__int64)v24;
        if ( !sub_20D1BF0(v25 - v24, v24, v23, "v") )
        {
          while ( 1 )
          {
            result = sub_20D8F30((__int64)a1);
            v64 = result;
            if ( !result )
              goto LABEL_24;
            sub_20D8690(a1 + 2, &v64);
            if ( *a1 != a1[1] )
            {
              v26 = **a1;
              if ( v26 == 69 || v26 == 81 )
                goto LABEL_20;
            }
          }
        }
        *a1 = (char *)(v61.m128i_i64[1] + v61.m128i_i64[0]);
LABEL_20:
        v27 = sub_20CFAD0((__int64)a1, v15);
        v29 = v28;
        v30 = *a1;
        if ( *a1 == a1[1] )
          goto LABEL_23;
        v31 = *v30;
        v32 = 0;
        if ( *v30 == 81 )
        {
          v47 = *((_BYTE *)a1 + 778);
          *((_BYTE *)a1 + 778) = 1;
          *a1 = v30 + 1;
          v61.m128i_i8[0] = v47;
          v32 = sub_20DA8A0((__int64)a1);
          *((_BYTE *)a1 + 778) = v61.m128i_i8[0];
          if ( !v32 )
            goto LABEL_23;
          v30 = *a1;
          if ( *a1 == a1[1] )
            goto LABEL_23;
          v31 = *v30;
        }
        if ( v31 == 69 )
        {
          v61.m128i_i64[0] = v32;
          *a1 = v30 + 1;
          v49 = sub_20CEB80(a1, 0);
          v50 = *a1;
          if ( *a1 != a1[1] && *v50 == 95 )
          {
            v63 = v48;
            *a1 = v50 + 1;
            v61.m128i_i64[1] = v49;
            result = sub_20CF970((__int64)(a1 + 102), 80);
            v51 = v62;
            v52 = v61.m128i_i64[1];
            v53 = *(_BYTE *)(result + 10);
            *(_WORD *)(result + 8) = 16436;
            *(_QWORD *)(result + 32) = v51;
            v54 = v63;
            v55 = v61.m128i_i64[0];
            *(_QWORD *)(result + 16) = v19;
            *(_QWORD *)(result + 24) = v21;
            *(_BYTE *)(result + 10) = v53 & 0xF0 | 5;
            *(_QWORD *)(result + 40) = v27;
            *(_QWORD *)(result + 48) = v29;
            *(_QWORD *)result = off_2BE7A40;
            *(_QWORD *)(result + 56) = v55;
            *(_QWORD *)(result + 64) = v52;
            *(_QWORD *)(result + 72) = v54;
            goto LABEL_24;
          }
        }
LABEL_23:
        result = 0;
LABEL_24:
        v33 = ptr[0];
        v65[84] = &v65[83][8 * v66];
        if ( v33 != v69 )
        {
          v61.m128i_i64[0] = result;
          free(v33);
          result = v61.m128i_i64[0];
        }
        a1[98] = v59;
        return result;
      }
    }
    abort();
  }
  *a1 = &v4[v5];
  v34 = sub_20CEB80(a1, 0);
  v36 = *a1;
  v37 = v34;
  result = 0;
  if ( *a1 != a1[1] && *v36 == 95 )
  {
    v60 = v35;
    *a1 = v36 + 1;
    result = sub_20CF970((__int64)(a1 + 102), 32);
    *(_WORD *)(result + 8) = 16435;
    v38 = *(_BYTE *)(result + 10);
    *(_QWORD *)(result + 16) = v37;
    *(_QWORD *)(result + 24) = v60;
    *(_BYTE *)(result + 10) = v38 & 0xF0 | 5;
    *(_QWORD *)result = off_2BE79E0;
  }
  return result;
}
