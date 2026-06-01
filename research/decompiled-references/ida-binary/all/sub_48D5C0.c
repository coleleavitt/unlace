__int64 __fastcall sub_48D5C0(__int64 *a1, const char **a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rbp
  const char *v6; // rax
  __m128i v8; // xmm0
  const char *v9; // rsi
  char v10; // dl
  int v11; // ecx
  int v12; // edx
  __int64 result; // rax
  unsigned __int64 v14; // r12
  const char *v15; // rsi
  _BYTE *v16; // r14
  void *v17; // rdx
  _BYTE *v18; // rax
  __int64 v19; // r13
  size_t v20; // rbx
  size_t v21; // r10
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  __m128i v27; // xmm0
  _BYTE *v28; // r12
  _BYTE *v29; // rax
  __int64 v30; // rax
  unsigned int v31; // eax
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // r12
  __int64 v34; // rsi
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // r14
  unsigned int v40; // eax
  _BYTE *v41; // r9
  _BYTE *v42; // rax
  unsigned __int64 v43; // rbx
  __int64 *v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // r10
  size_t v48; // r8
  size_t v49; // r11
  __int64 v50; // rsi
  size_t v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rbp
  size_t v57; // rbx
  size_t v58; // r13
  __int64 v59; // rax
  __m128i v60; // xmm0
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned __int8 v63; // [rsp+8h] [rbp-A0h]
  __int64 v64; // [rsp+8h] [rbp-A0h]
  size_t v65; // [rsp+8h] [rbp-A0h]
  size_t v66; // [rsp+10h] [rbp-98h]
  size_t v67; // [rsp+10h] [rbp-98h]
  _BYTE *v68; // [rsp+18h] [rbp-90h]
  size_t v69; // [rsp+20h] [rbp-88h]
  __int64 v70; // [rsp+28h] [rbp-80h]
  void *src[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v72; // [rsp+40h] [rbp-68h] BYREF
  __m128i v73; // [rsp+48h] [rbp-60h] BYREF
  __int64 v74; // [rsp+58h] [rbp-50h]
  char v75; // [rsp+60h] [rbp-48h]
  unsigned __int64 v76; // [rsp+68h] [rbp-40h]

  v76 = __readfsqword(0x28u);
  v5 = a1[1];
  if ( v5 )
  {
    if ( !under_debugger )
      interr(40906, a2, a3, a4, a5);
    BUG();
  }
  v6 = *a2;
  v8 = (__m128i)(unsigned __int64)*a2;
  v9 = &a2[1][(_QWORD)*a2];
  *(__m128i *)src = _mm_unpacklo_epi64(v8, (__m128i)(unsigned __int64)v9);
  if ( v6 >= v9 )
  {
    *((_DWORD *)a1 + 28) = 16;
    return 0;
  }
  v10 = *v6;
  src[0] = (void *)(v6 + 1);
  v11 = v10 & 0xF0;
  *((_DWORD *)a1 + 28) = v11;
  if ( (v10 & 0xE) == 0 )
    *((_DWORD *)a1 + 28) = v11 | 0x10;
  if ( (unsigned __int8)((v10 & 0xF) - 1) > 1u )
    return 0;
  v12 = *((_DWORD *)a1 + 28);
  if ( (v12 & 0x10) == 0 )
    goto LABEL_7;
  v31 = unpack_dd(src, v9);
  v32 = a1[1];
  v33 = v31;
  if ( v31 != v32 )
  {
    v75 = 0;
    v72 = 0;
    v74 = -1;
    v73 = 0;
    if ( v31 >= v32 )
    {
      v34 = *a1;
      v35 = a1[2];
      if ( (unsigned __int64)&v72 < *a1 || (unsigned __int64)&v72 >= v34 + 40 * v35 )
      {
        if ( v35 >= v33 || (v61 = qvector_reserve(a1, v34, v33, 40), v32 = a1[1], *a1 = v61, v34 = v61, v32 < v33) )
        {
          v54 = 40 * v32;
          while ( 1 )
          {
            v55 = v34 + v54;
            ++v32;
            v54 += 40;
            *(_QWORD *)v55 = 0;
            *(_QWORD *)(v55 + 24) = -1;
            *(_BYTE *)(v55 + 32) = 0;
            *(_OWORD *)(v55 + 8) = 0;
            if ( v33 == v32 )
              break;
            v34 = *a1;
          }
        }
      }
      else if ( v35 >= v33 || (v62 = qvector_reserve(a1, v34, v33, 40), v32 = a1[1], *a1 = v62, v34 = v62, v32 < v33) )
      {
        v36 = 40 * v32;
        while ( 1 )
        {
          v37 = v34 + v36;
          ++v32;
          v36 += 40;
          *(_QWORD *)v37 = 0;
          *(_QWORD *)(v37 + 24) = -1;
          *(_BYTE *)(v37 + 32) = 0;
          *(_OWORD *)(v37 + 8) = 0;
          if ( v33 == v32 )
            break;
          v34 = *a1;
        }
      }
      a1[1] = v33;
LABEL_41:
      v38 = 0;
      while ( 1 )
      {
        v39 = *a1 + 40 * v38;
        v40 = unpack_dd(src, src[1]);
        *(_BYTE *)(v39 + 32) = v40;
        *(_BYTE *)(v39 + 32) &= 1u;
        *(_QWORD *)(v39 + 24) = v40 >> 1;
        if ( (~*((_BYTE *)a1 + 112) & 0x30) == 0 )
          break;
LABEL_42:
        if ( v33 == ++v38 )
          goto LABEL_54;
      }
      v41 = src[0];
      v42 = src[0];
      while ( v42 < src[1] )
      {
        if ( !*v42++ )
        {
          src[0] = v42;
          if ( !v41 )
            return 0;
          v46 = v42 - v41;
          v47 = *(_QWORD *)(v39 + 8);
          v48 = v46 - 1;
          v49 = v46 - 1;
          if ( v47 )
          {
            --v47;
            v49 = v48 + v47;
          }
          v50 = *(_QWORD *)v39;
          v51 = v49 + 1;
          if ( *(_QWORD *)(v39 + 16) < v49 + 1 )
          {
            v70 = v47;
            v69 = v46 - 1;
            v68 = v41;
            v67 = v49;
            v65 = v49 + 1;
            v53 = qvector_reserve(v39, v50, v51, 1);
            v47 = v70;
            v48 = v69;
            v41 = v68;
            v49 = v67;
            *(_QWORD *)v39 = v53;
            v50 = v53;
            v51 = v65;
          }
          *(_QWORD *)(v39 + 8) = v51;
          *(_BYTE *)(v50 + v49) = 0;
          memmove((void *)(v47 + *(_QWORD *)v39), v41, v48);
          goto LABEL_42;
        }
      }
      return 0;
    }
    v43 = v31;
    do
    {
      v44 = (__int64 *)(*a1 + 40 * v43);
      v45 = *v44;
      if ( *v44 )
      {
        v44[1] = 0;
        qfree(v45, v9);
      }
      ++v43;
    }
    while ( v43 < v32 );
    a1[1] = v33;
  }
  if ( v33 )
    goto LABEL_41;
LABEL_54:
  v12 = *((_DWORD *)a1 + 28);
LABEL_7:
  result = 1;
  if ( (v12 & 0x40) == 0 )
    return result;
  v14 = (unsigned int)unpack_dd(src, src[1]);
  if ( a1[5] < v14 )
  {
    v52 = qvector_reserve(a1 + 3, a1[3], v14, 24);
    v72 = 0;
    a1[3] = v52;
    v73 = 0;
  }
  else
  {
    v72 = 0;
    v73 = 0;
    if ( !v14 )
    {
      v15 = nullptr;
LABEL_28:
      v28 = src[0];
      v17 = src[1];
      v29 = src[0];
      while ( v29 < src[1] )
      {
        if ( !*v29++ )
        {
          src[0] = v29;
          if ( !v28 )
            goto LABEL_14;
          v56 = v73.m128i_i64[0];
          v57 = v29 - v28 - 1;
          v58 = v57;
          if ( v73.m128i_i64[0] )
          {
            v56 = v73.m128i_i64[0] - 1;
            v58 = v57 + v73.m128i_i64[0] - 1;
          }
          if ( v73.m128i_i64[1] < v58 + 1 )
          {
            v72 = qvector_reserve(&v72, v15, v58 + 1, 1);
            v15 = (const char *)v72;
          }
          v73.m128i_i64[0] = v58 + 1;
          v15[v58] = 0;
          memmove((void *)(v56 + v72), v28, v57);
          v59 = a1[8];
          v15 = (const char *)a1[6];
          v17 = (void *)v72;
          v60 = _mm_loadu_si128(&v73);
          v72 = (__int64)v15;
          v73.m128i_i64[1] = v59;
          result = 1;
          a1[6] = (__int64)v17;
          *(__m128i *)(a1 + 7) = v60;
          goto LABEL_15;
        }
      }
      goto LABEL_14;
    }
  }
  v15 = nullptr;
LABEL_11:
  v16 = src[0];
  v17 = src[1];
  v18 = src[0];
  while ( v18 < src[1] )
  {
    if ( !*v18++ )
    {
      src[0] = v18;
      if ( !v16 )
        break;
      v19 = v73.m128i_i64[0];
      v20 = v18 - v16 - 1;
      v21 = v20;
      if ( v73.m128i_i64[0] )
      {
        v19 = v73.m128i_i64[0] - 1;
        v21 = v20 + v73.m128i_i64[0] - 1;
      }
      v22 = v21 + 1;
      if ( v73.m128i_i64[1] < v21 + 1 )
      {
        v66 = v21;
        v64 = v21 + 1;
        v72 = qvector_reserve(&v72, v15, v22, 1);
        v21 = v66;
        v15 = (const char *)v72;
        v22 = v64;
      }
      v73.m128i_i64[0] = v22;
      v15[v21] = 0;
      memmove((void *)(v19 + v72), v16, v20);
      v23 = a1[4];
      v24 = a1[3];
      if ( a1[5] < (unsigned __int64)(v23 + 1) )
      {
        v30 = qvector_reserve(a1 + 3, v24, v23 + 1, 24);
        a1[3] = v30;
        v23 = a1[4];
        v24 = v30;
      }
      ++v5;
      v25 = v24 + 24 * v23;
      *(_OWORD *)(v25 + 8) = 0;
      *(_QWORD *)v25 = 0;
      v26 = v72;
      ++a1[4];
      v15 = *(const char **)v25;
      *(_QWORD *)v25 = v26;
      v27 = _mm_loadu_si128((const __m128i *)(v25 + 8));
      *(__m128i *)(v25 + 8) = v73;
      v72 = (__int64)v15;
      v73 = v27;
      if ( v14 != v5 )
        goto LABEL_11;
      goto LABEL_28;
    }
  }
LABEL_14:
  result = 0;
LABEL_15:
  if ( v15 )
  {
    v63 = result;
    v73.m128i_i64[0] = 0;
    qfree(v15, v15, v17);
    return v63;
  }
  return result;
}
