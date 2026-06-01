__int64 __fastcall sub_21BCFE0(__int64 a1, __int64 a2, _BYTE *a3, size_t a4, int a5, int a6)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned int *v9; // rbx
  __int64 v10; // r12
  __int64 v12; // r8
  unsigned int *v13; // rcx
  __int64 v14; // r15
  const char *v15; // rdi
  unsigned int v16; // eax
  unsigned __int64 v17; // rsi
  size_t v18; // rax
  const char *v19; // rbp
  unsigned int *v20; // rbp
  size_t v21; // rax
  char *v22; // r15
  _BYTE *v23; // r15
  size_t v24; // rax
  _BYTE *v25; // rdi
  size_t v26; // r9
  unsigned __int64 v27; // rdx
  _BYTE *v28; // rdi
  _QWORD *v29; // r15
  size_t v30; // r15
  size_t v31; // rax
  unsigned __int64 v32; // rcx
  __m128i *v33; // rcx
  bool v34; // r15
  size_t v35; // rdx
  _QWORD *v36; // rdi
  __m128i v37; // xmm1
  size_t v38; // rax
  int v39; // eax
  unsigned int *v40; // [rsp+0h] [rbp-120h]
  unsigned int *v41; // [rsp+0h] [rbp-120h]
  unsigned __int64 v42; // [rsp+8h] [rbp-118h]
  __int64 v43; // [rsp+10h] [rbp-110h]
  __int64 v44; // [rsp+10h] [rbp-110h]
  __int64 v45; // [rsp+18h] [rbp-108h]
  __int64 v46; // [rsp+18h] [rbp-108h]
  unsigned int *v47; // [rsp+20h] [rbp-100h]
  size_t v50; // [rsp+40h] [rbp-E0h]
  size_t v51; // [rsp+40h] [rbp-E0h]
  __m128i *v52; // [rsp+40h] [rbp-E0h]
  size_t v53; // [rsp+40h] [rbp-E0h]
  void *s1; // [rsp+68h] [rbp-B8h] BYREF
  size_t v58; // [rsp+70h] [rbp-B0h]
  _QWORD v59[2]; // [rsp+78h] [rbp-A8h] BYREF
  void *v60; // [rsp+88h] [rbp-98h] BYREF
  size_t v61; // [rsp+90h] [rbp-90h]
  __m128i v62; // [rsp+98h] [rbp-88h] BYREF
  __int16 v63; // [rsp+A8h] [rbp-78h]
  _OWORD *v64; // [rsp+B8h] [rbp-68h] BYREF
  size_t v65; // [rsp+C0h] [rbp-60h]
  __m128i v66; // [rsp+C8h] [rbp-58h] BYREF
  __int16 v67; // [rsp+D8h] [rbp-48h]

  *(_OWORD *)a1 = 0;
  v6 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 16) = 0;
  v7 = *(unsigned int *)(a2 + 72);
  v42 = v6;
  if ( v7 < v6 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = (unsigned int *)(*(_QWORD *)(a2 + 32) + 80 * v7);
        v10 = *v9;
        if ( !(_DWORD)v10 )
          goto LABEL_5;
        if ( *((_QWORD *)v9 + 1) || *((_WORD *)v9 + 28) )
          break;
        if ( ++v7 >= v42 )
          return a1;
      }
      if ( (a5 & v9[13]) == 0 || (a6 & v9[12]) != 0 )
        goto LABEL_5;
      v12 = *(_QWORD *)(a2 + 16);
      v13 = (unsigned int *)(v12 + 4LL * (unsigned int)(v10 + 1));
      v14 = **(_QWORD **)(a2 + 8);
      v15 = (const char *)(v14 + *v13);
      if ( v15 )
        break;
      v17 = 0;
      v19 = (const char *)(v14 + v9[1]);
      if ( v19 )
        goto LABEL_13;
      v17 = 0;
      v18 = 0;
LABEL_15:
      v44 = v18 - v17;
      v18 = v17;
LABEL_16:
      v46 = (__int64)&v19[v18];
      v47 = &v13[*(unsigned int *)(v12 + 4 * v10)];
      if ( v47 != v13 )
      {
        v20 = v13;
        while ( 1 )
        {
          v21 = 0;
          v22 = (char *)(*v20 + v14);
          if ( v22 )
            v21 = strlen(v22);
          v61 = v21;
          v60 = v22;
          v62.m128i_i64[0] = v46;
          v64 = &v60;
          v62.m128i_i64[1] = v44;
          v63 = 1285;
          v66.m128i_i64[0] = (__int64)"\t";
          v65 = 0;
          v67 = 770;
          sub_2253560(&s1, &v64);
          v23 = *((_BYTE **)v9 + 1);
          if ( v23 )
          {
            v24 = strlen(*((const char **)v9 + 1));
            if ( 0x7FFFFFFFFFFFFFFFLL - v58 < v24 )
              goto LABEL_63;
            v25 = s1;
            v26 = v58 + v24;
            if ( s1 == v59 )
              v27 = 15;
            else
              v27 = v59[0];
            if ( v26 > v27 )
            {
              v51 = v58 + v24;
              sub_998B30((__int64)&s1, v58, 0, v23, v24);
              v25 = s1;
              v26 = v51;
            }
            else if ( v24 )
            {
              v28 = (char *)s1 + v58;
              if ( v24 == 1 )
              {
                *v28 = *v23;
                v25 = s1;
              }
              else
              {
                v50 = v58 + v24;
                memcpy(v28, v23, v24);
                v25 = s1;
                v26 = v50;
              }
            }
            v58 = v26;
            v25[v26] = 0;
          }
          v29 = s1;
          if ( v58 >= a4 && (!a4 || !memcmp(s1, a3, a4)) )
            break;
LABEL_47:
          if ( v29 == v59 )
          {
            if ( v47 == ++v20 )
              goto LABEL_5;
          }
          else
          {
            ++v20;
            operator delete(v29);
            if ( v47 == v20 )
              goto LABEL_5;
          }
          v14 = **(_QWORD **)(a2 + 8);
        }
        v60 = &v62;
        sub_21BA8F0(&v60, a3, (__int64)&a3[a4]);
        v30 = v61;
        if ( v61 == 0x7FFFFFFFFFFFFFFFLL )
LABEL_63:
          std::__throw_length_error("basic_string::append");
        v31 = v61 + 1;
        if ( v60 == &v62 )
          v32 = 15;
        else
          v32 = v62.m128i_i64[0];
        if ( v31 > v32 )
        {
          v53 = v61 + 1;
          sub_998B30((__int64)&v60, v61, 0, "\t", 1u);
          v31 = v53;
        }
        else
        {
          *((_BYTE *)v60 + v61) = 9;
        }
        v61 = v31;
        *((_BYTE *)v60 + v30 + 1) = 0;
        v33 = (__m128i *)v60;
        v64 = &v66;
        if ( v60 != &v62 )
        {
          v64 = v60;
          v34 = 1;
          v60 = &v62;
          v66.m128i_i64[0] = v62.m128i_i64[0];
          v35 = v58;
          v65 = v61;
          v61 = 0;
          v62.m128i_i8[0] = 0;
          if ( v58 != v65 )
            goto LABEL_41;
          goto LABEL_57;
        }
        v37 = _mm_load_si128(&v62);
        v38 = v61;
        v62.m128i_i8[0] = 0;
        v35 = v58;
        v61 = 0;
        v66 = v37;
        v65 = v38;
        if ( v38 != v58 )
          goto LABEL_45;
        v33 = &v66;
LABEL_57:
        v34 = 0;
        if ( v35 )
        {
          v52 = v33;
          v39 = memcmp(s1, v33, v35);
          v33 = v52;
          v34 = v39 != 0;
        }
LABEL_41:
        if ( v33 != &v66 )
        {
          operator delete(v33);
          if ( v60 != &v62 )
            operator delete(v60);
        }
        if ( v34 )
        {
LABEL_45:
          v36 = *(_QWORD **)(a1 + 8);
          if ( v36 != *(_QWORD **)(a1 + 16) )
          {
            *v36 = v36 + 2;
            sub_21BA9B0(v36, s1, (__int64)s1 + v58);
            *(_QWORD *)(a1 + 8) += 32LL;
            v29 = s1;
            goto LABEL_47;
          }
          sub_10BCB90((void ***)a1, *(const __m128i **)(a1 + 8), (__int64)&s1);
        }
        v29 = s1;
        goto LABEL_47;
      }
LABEL_5:
      if ( ++v7 >= v42 )
        return a1;
    }
    v43 = *(_QWORD *)(a2 + 16);
    v40 = (unsigned int *)(v12 + 4LL * (unsigned int)(v10 + 1));
    v16 = strlen(v15);
    v13 = v40;
    v17 = v16;
    v18 = 0;
    v12 = v43;
    v19 = (const char *)(v14 + v9[1]);
    if ( v19 )
    {
LABEL_13:
      v45 = v12;
      v41 = v13;
      v18 = strlen(v19);
      v12 = v45;
      v13 = v41;
    }
    v44 = 0;
    if ( v18 < v17 )
      goto LABEL_16;
    goto LABEL_15;
  }
  return a1;
}
