__int64 __fastcall sub_EAA0(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v13; // rcx
  unsigned __int64 *v14; // rsi
  unsigned int v15; // r15d
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v19; // rdi
  unsigned __int64 *v20; // rax
  unsigned __int64 *v21; // rcx
  __int64 v22; // rdx
  const char *p_src; // rsi
  __int64 v24; // r9
  __int64 v25; // r15
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rsi
  unsigned __int64 v29; // rdi
  unsigned __int64 *v30; // rax
  unsigned __int64 *v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  size_t v34; // r15
  __int64 v35; // r15
  __int64 v36; // r9
  unsigned __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // r8
  unsigned __int64 v40; // rdi
  unsigned __int64 *v41; // rax
  unsigned __int64 *v42; // rcx
  unsigned int v43; // edx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned __int64 v46; // rdx
  size_t v47; // r10
  __int64 v48; // r9
  size_t v49; // r11
  __int64 v50; // rsi
  unsigned __int64 *v51; // rax
  unsigned __int64 v52; // rdx
  __int64 v53; // rcx
  __m128i v54; // xmm0
  __int64 v55; // rdx
  __m128i v56; // xmm1
  __int64 v57; // r8
  size_t v58; // r10
  __int64 v59; // rsi
  unsigned __int64 v60; // rbx
  size_t v61; // r13
  __int64 v62; // rbp
  size_t v63; // r8
  __int64 v64; // rsi
  char v65; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v66; // [rsp+8h] [rbp-B0h]
  size_t v67; // [rsp+8h] [rbp-B0h]
  __int64 v68; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v69; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v70; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v71; // [rsp+10h] [rbp-A8h]
  __int64 v72; // [rsp+18h] [rbp-A0h]
  size_t v73; // [rsp+18h] [rbp-A0h]
  size_t v74; // [rsp+18h] [rbp-A0h]
  __int64 v75; // [rsp+20h] [rbp-98h]
  __int64 v76; // [rsp+20h] [rbp-98h]
  size_t v77; // [rsp+28h] [rbp-90h]
  _DWORD v78[2]; // [rsp+34h] [rbp-84h] BYREF
  int v79; // [rsp+3Ch] [rbp-7Ch]
  __int64 v80; // [rsp+40h] [rbp-78h] BYREF
  __m128i v81; // [rsp+48h] [rbp-70h] BYREF
  void *src; // [rsp+60h] [rbp-58h] BYREF
  __int128 v83; // [rsp+68h] [rbp-50h]
  unsigned __int64 v84; // [rsp+78h] [rbp-40h]

  v9 = 0xFFFFFFFFLL;
  v10 = (unsigned __int64 *)a1[2];
  v11 = a1[3];
  v84 = __readfsqword(0x28u);
  v13 = 8 * v11;
  v14 = &v10[v11];
  if ( 8 * v11 )
  {
    v9 = 0;
    while ( a3 >= *v10 )
    {
      ++v10;
      v13 = (unsigned int)(v9 + 1);
      if ( v14 == v10 )
        goto LABEL_7;
      v9 = (unsigned int)v13;
    }
    v9 = (unsigned int)(v9 - 1);
  }
LABEL_7:
  if ( v9 >= a1[7] )
  {
    sub_BBD0(v11, (int)v14, v9, v13, a5, a6, v65);
    goto LABEL_71;
  }
  v15 = 0;
  if ( netnode_supval(*(_QWORD *)(a1[6] + 8 * v9), a4, v78, 12, 67) <= 0 )
    return v15;
  v19 = a1[3];
  v20 = (unsigned __int64 *)a1[2];
  v80 = 0;
  v81 = 0;
  v21 = &v20[v19];
  v22 = 0;
  if ( 8 * v19 )
  {
    do
    {
      if ( a3 < *v20 )
        break;
      ++v20;
      v22 = (unsigned int)(v22 + 1);
    }
    while ( v20 != v21 );
  }
  p_src = (const char *)&v80;
  v15 = sub_E890(a1, (char *)&v80, v22, v78[0], v16, v17);
  if ( (_BYTE)v15 )
  {
    v25 = v81.m128i_i64[0];
    if ( v81.m128i_i64[0] )
    {
      v27 = v81.m128i_i64[0] + 1;
      v26 = v81.m128i_i64[0] + 2;
      v25 = v81.m128i_i64[0] - 1;
    }
    else
    {
      v26 = 3;
      v27 = 2;
    }
    v28 = v80;
    if ( v81.m128i_i64[1] < v26 )
    {
      v68 = v27;
      v66 = v26;
      v80 = qvector_reserve(&v80, v80, v26, 1);
      v27 = v68;
      v28 = v80;
      v26 = v66;
    }
    v81.m128i_i64[0] = v26;
    *(_BYTE *)(v28 + v27) = 0;
    *(_WORD *)(v80 + v25) = 8236;
    v29 = a1[3];
    v30 = (unsigned __int64 *)a1[2];
    v31 = &v30[v29];
    v32 = 0;
    if ( 8 * v29 )
    {
      do
      {
        if ( a3 < *v30 )
          break;
        ++v30;
        v32 = (unsigned int)(v32 + 1);
      }
      while ( v30 != v31 );
    }
    p_src = (const char *)&src;
    src = nullptr;
    v83 = 0;
    if ( !sub_C600((__int64)a1, (__int64)&src, v32, v78[1], v27, v24) )
      goto LABEL_51;
    v33 = v83;
    if ( (_QWORD)v83 )
    {
      v34 = v83 - 1;
      if ( (_QWORD)v83 != 1 )
      {
        v57 = v81.m128i_i64[0];
        v58 = v83 - 1;
        if ( v81.m128i_i64[0] )
        {
          v57 = v81.m128i_i64[0] - 1;
          v58 = v34 + v81.m128i_i64[0] - 1;
          v33 = v83 + v81.m128i_i64[0] - 1;
        }
        v59 = v80;
        if ( v81.m128i_i64[1] < v33 )
        {
          v75 = v57;
          v73 = v58;
          v70 = v33;
          v80 = qvector_reserve(&v80, v80, v33, 1);
          v57 = v75;
          v59 = v80;
          v58 = v73;
          v33 = v70;
        }
        v81.m128i_i64[0] = v33;
        *(_BYTE *)(v59 + v58) = 0;
        memcpy((void *)(v57 + v80), src, v34);
      }
    }
    v35 = v81.m128i_i64[0];
    if ( v81.m128i_i64[0] )
    {
      v36 = v81.m128i_i64[0] + 1;
      v37 = v81.m128i_i64[0] + 2;
      v35 = v81.m128i_i64[0] - 1;
    }
    else
    {
      v37 = 3;
      v36 = 2;
    }
    v38 = v80;
    if ( v81.m128i_i64[1] < v37 )
    {
      v72 = v36;
      v69 = v37;
      v80 = qvector_reserve(&v80, v80, v37, 1);
      v36 = v72;
      v38 = v80;
      v37 = v69;
    }
    v81.m128i_i64[0] = v37;
    *(_BYTE *)(v38 + v36) = 0;
    v39 = v35 + v80;
    *(_WORD *)(v35 + v80) = 8236;
    v40 = a1[3];
    v41 = (unsigned __int64 *)a1[2];
    v42 = &v41[v40];
    v43 = 0;
    if ( 8 * v40 )
    {
      do
      {
        if ( a3 < *v41 )
          break;
        ++v41;
        ++v43;
      }
      while ( v41 != v42 );
    }
    p_src = (const char *)&src;
    v15 = sub_E410((__int64)a1, (__int64)&src, v43, v79, v39, v36);
    if ( !(_BYTE)v15 )
    {
LABEL_51:
      v15 = 0;
LABEL_52:
      if ( src )
      {
        *(_QWORD *)&v83 = 0;
        qfree(src, p_src);
      }
      goto LABEL_54;
    }
    v46 = v83;
    if ( (_QWORD)v83 )
    {
      v47 = v83 - 1;
      if ( (_QWORD)v83 != 1 )
      {
        v48 = v81.m128i_i64[0];
        v49 = v83 - 1;
        if ( v81.m128i_i64[0] )
        {
          v48 = v81.m128i_i64[0] - 1;
          v49 = v47 + v81.m128i_i64[0] - 1;
          v46 = v83 + v81.m128i_i64[0] - 1;
        }
        v50 = v80;
        if ( v81.m128i_i64[1] < v46 )
        {
          v77 = v49;
          v76 = v48;
          v74 = v83 - 1;
          v71 = v46;
          v80 = qvector_reserve(&v80, v80, v46, 1);
          v49 = v77;
          v50 = v80;
          v48 = v76;
          v47 = v74;
          v46 = v71;
        }
        v81.m128i_i64[0] = v46;
        *(_BYTE *)(v50 + v49) = 0;
        memcpy((void *)(v48 + v80), src, v47);
      }
    }
    v11 = a1[3];
    v51 = (unsigned __int64 *)a1[2];
    v52 = 0xFFFFFFFFLL;
    v53 = 8 * v11;
    v14 = &v51[v11];
    if ( 8 * v11 )
    {
      v52 = 0;
      while ( a3 >= *v51 )
      {
        ++v51;
        v53 = (unsigned int)(v52 + 1);
        if ( v14 == v51 )
          goto LABEL_48;
        v52 = (unsigned int)v53;
      }
      v52 = (unsigned int)(v52 - 1);
    }
LABEL_48:
    if ( v52 < a1[7] )
    {
      p_src = *(const char **)(a1[6] + 8 * v52);
      if ( (unsigned __int8)sub_C8C0((__int64)&src, (__int64)p_src, a4, 0x58u) )
      {
        v60 = v83;
        if ( (_QWORD)v83 )
        {
          v61 = v83 - 1;
          if ( (_QWORD)v83 != 1 )
          {
            v62 = v81.m128i_i64[0];
            v63 = v83 - 1;
            if ( v81.m128i_i64[0] )
            {
              v62 = v81.m128i_i64[0] - 1;
              v63 = v61 + v81.m128i_i64[0] - 1;
              v60 = v83 + v81.m128i_i64[0] - 1;
            }
            v64 = v80;
            if ( v81.m128i_i64[1] < v60 )
            {
              v67 = v63;
              v80 = qvector_reserve(&v80, v80, v60, 1);
              v63 = v67;
              v64 = v80;
            }
            v81.m128i_i64[0] = v60;
            *(_BYTE *)(v64 + v63) = 0;
            p_src = (const char *)src;
            memcpy((void *)(v62 + v80), src, v61);
          }
        }
      }
      v54 = _mm_loadu_si128((const __m128i *)(a2 + 8));
      v55 = v80;
      v56 = _mm_loadu_si128(&v81);
      v80 = *(_QWORD *)a2;
      *(_QWORD *)a2 = v55;
      *(__m128i *)(a2 + 8) = v56;
      v81 = v54;
      goto LABEL_52;
    }
LABEL_71:
    sub_BBD0(v11, (int)v14, v52, v53, v44, v45, v65);
  }
LABEL_54:
  if ( v80 )
  {
    v81.m128i_i64[0] = 0;
    qfree(v80, p_src);
  }
  return v15;
}
