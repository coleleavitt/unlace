__int64 __fastcall sub_21BB3D0(__int64 a1, void *a2, size_t a3, __int64 a4, unsigned int a5, int a6, __int64 a7)
{
  int v7; // eax
  __int64 v8; // rbx
  __m128i si128; // xmm0
  __int64 v10; // rdx
  unsigned int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int *v15; // r12
  size_t v17; // rbp
  __int64 v18; // rbx
  unsigned __int64 v19; // r13
  const char *v20; // rbx
  size_t v21; // rax
  bool v22; // bl
  size_t v23; // rax
  char v24; // r8
  size_t v25; // rcx
  size_t v26; // rdx
  void *v27; // r9
  size_t v28; // r13
  __int64 v29; // rcx
  __int64 v30; // r13
  _BYTE *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  unsigned int *v34; // rdx
  unsigned __int64 v35; // r12
  bool v36; // al
  unsigned int *v37; // rbx
  size_t v38; // rax
  char *v39; // r9
  size_t v40; // r13
  size_t v41; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // r8
  size_t v45; // rdx
  void *v46; // rdi
  int v47; // eax
  unsigned int v48; // r12d
  const char *v49; // rdi
  _BYTE *v50; // rdi
  __int64 v51; // rcx
  void *v52; // rsi
  void *v54; // rax
  size_t v55; // r13
  __int64 v56; // rcx
  size_t v57; // rdx
  char v58; // [rsp+0h] [rbp-168h]
  char v59; // [rsp+0h] [rbp-168h]
  char v60; // [rsp+0h] [rbp-168h]
  unsigned int *v61; // [rsp+0h] [rbp-168h]
  void *v62; // [rsp+0h] [rbp-168h]
  void *v63; // [rsp+8h] [rbp-160h] BYREF
  void *v64; // [rsp+10h] [rbp-158h]
  void **v65; // [rsp+18h] [rbp-150h]
  unsigned int *v66; // [rsp+20h] [rbp-148h]
  __int64 v67; // [rsp+28h] [rbp-140h]
  void *v68; // [rsp+30h] [rbp-138h]
  void **v69; // [rsp+38h] [rbp-130h]
  size_t v70; // [rsp+40h] [rbp-128h]
  char *v71; // [rsp+48h] [rbp-120h]
  bool v72; // [rsp+53h] [rbp-115h]
  unsigned int v73; // [rsp+54h] [rbp-114h]
  unsigned int *v74; // [rsp+58h] [rbp-110h]
  void **v75; // [rsp+60h] [rbp-108h]
  void **p_ptr; // [rsp+68h] [rbp-100h]
  void *src; // [rsp+70h] [rbp-F8h] BYREF
  size_t n; // [rsp+78h] [rbp-F0h]
  void *v79; // [rsp+80h] [rbp-E8h] BYREF
  size_t v80; // [rsp+88h] [rbp-E0h]
  void *v81; // [rsp+90h] [rbp-D8h] BYREF
  void *v82; // [rsp+A0h] [rbp-C8h] BYREF
  __m128i v83; // [rsp+A8h] [rbp-C0h]
  char v84; // [rsp+B8h] [rbp-B0h] BYREF
  void *ptr; // [rsp+D0h] [rbp-98h] BYREF
  __m128i v86; // [rsp+D8h] [rbp-90h]
  char v87; // [rsp+E8h] [rbp-80h] BYREF
  void *v88; // [rsp+100h] [rbp-68h] BYREF
  __int64 v89; // [rsp+108h] [rbp-60h]
  char *v90; // [rsp+110h] [rbp-58h]
  size_t v91; // [rsp+118h] [rbp-50h]
  __int16 v92; // [rsp+120h] [rbp-48h]

  v7 = -1;
  v8 = *(_QWORD *)(a1 + 40);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
  n = a3;
  if ( a6 != -1 )
    v7 = a6 + 1;
  v10 = *(unsigned int *)(a1 + 72);
  src = a2;
  v83 = si128;
  v11 = v7;
  v86 = si128;
  v69 = &v82;
  v82 = &v84;
  p_ptr = &ptr;
  ptr = &v87;
  v12 = 5 * v10;
  v13 = 80 * (v8 - v10);
  v14 = *(_QWORD *)(a1 + 32) + 16 * v12;
  v66 = (unsigned int *)(v14 + v13);
  if ( v14 != v14 + v13 )
  {
    v15 = (unsigned int *)v14;
    v73 = a5;
    v65 = &v88;
    v75 = &v79;
    v67 = a4;
    v68 = &v81;
    while ( 1 )
    {
      v18 = **(_QWORD **)(a1 + 8);
      if ( !*v15 )
        break;
      v19 = 0;
      v49 = (const char *)(v18 + *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4LL * (*v15 + 1)));
      if ( v49 )
        v19 = (unsigned int)strlen(v49);
      v21 = 0;
      v20 = (const char *)(v15[1] + v18);
      if ( v20 )
        goto LABEL_10;
LABEL_11:
      if ( v21 >= v19 )
      {
        v17 = v21 - v19;
        v64 = (void *)&v20[v19];
        if ( v21 - v19 == -1 )
          goto LABEL_13;
        goto LABEL_55;
      }
      v17 = 0;
LABEL_6:
      if ( v73 <= v17 )
      {
        v64 = (void *)&v20[v21];
LABEL_13:
        if ( !*(_QWORD *)(a7 + 16) )
          std::__throw_bad_function_call();
        if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned int *))(a7 + 24))(a7, v15) || !*v15 )
          goto LABEL_7;
        v22 = *((char *)v64 + v17 - 1) == 61 || *((char *)v64 + v17 - 1) == 58;
        if ( v22 )
        {
          LOBYTE(v88) = *((char *)v64 + v17 - 1);
          v58 = (char)v88;
          v23 = sub_2246AB0(&src, v65, 1, 0);
          v24 = v58;
          if ( v23 == -1 )
          {
            v27 = src;
            v28 = n;
            v70 = 0;
            v71 = nullptr;
          }
          else
          {
            v25 = n;
            v26 = v23 + 1;
            if ( v23 + 1 > n )
            {
              v70 = 0;
              v26 = n;
            }
            else
            {
              v70 = n - v26;
            }
            v27 = src;
            if ( v23 <= n )
              v25 = v23;
            v71 = (char *)src + v26;
            v28 = v25;
          }
          v86.m128i_i64[0] = 0;
          v29 = 0;
          if ( v86.m128i_i64[1] < v28 )
          {
            v63 = v27;
            sub_2236E10(p_ptr, p_ptr + 3, v28, 1);
            v27 = v63;
            v24 = v58;
            v29 = v86.m128i_i64[0];
          }
          if ( v28 )
          {
            v59 = v24;
            memcpy((char *)ptr + v29, v27, v28);
            v29 = v86.m128i_i64[0];
            v24 = v59;
          }
          v30 = v29 + v28;
          v86.m128i_i64[0] = v30;
          if ( n && (v60 = v24, v63 = src, v31 = memchr(src, v24, n), v24 = v60, v31) )
          {
            if ( v31 - (_BYTE *)v63 == v30 )
            {
              if ( (unsigned __int64)(v30 + 1) > v86.m128i_i64[1] )
              {
                sub_2236E10(p_ptr, p_ptr + 3, v30 + 1, 1);
                v30 = v86.m128i_i64[0];
                v24 = v60;
              }
LABEL_82:
              *((_BYTE *)ptr + v30) = v24;
              v30 = ++v86.m128i_i64[0];
            }
          }
          else if ( v30 == -1 )
          {
            goto LABEL_82;
          }
        }
        else
        {
          v54 = src;
          v55 = n;
          v56 = 0;
          v86.m128i_i64[0] = 0;
          if ( n > v86.m128i_i64[1] )
          {
            v62 = src;
            sub_2236E10(p_ptr, p_ptr + 3, n, 1);
            v56 = v86.m128i_i64[0];
            v54 = v62;
          }
          if ( v55 )
          {
            memcpy((char *)ptr + v56, v54, v55);
            v56 = v86.m128i_i64[0];
          }
          v70 = 0;
          v30 = v56 + v55;
          v86.m128i_i64[0] = v30;
          v71 = nullptr;
        }
        v32 = *v15;
        v33 = *(_QWORD *)(a1 + 16);
        if ( !(_DWORD)v32 )
          goto LABEL_7;
        v34 = (unsigned int *)(v33 + 4LL * (unsigned int)(v32 + 1));
        v61 = &v34[*(unsigned int *)(v33 + 4 * v32)];
        if ( v61 == v34 )
          goto LABEL_7;
        v74 = v15;
        v35 = v30;
        v36 = v22 && v70 == 0;
        v37 = v34;
        v72 = v36;
        while ( 1 )
        {
          v39 = (char *)(**(_QWORD **)(a1 + 8) + *v37);
          if ( v39 )
          {
            v63 = (void *)(**(_QWORD **)(a1 + 8) + *v37);
            v38 = strlen(v39);
            v39 = (char *)v63;
            v40 = v38;
            v41 = v38 + v17;
          }
          else
          {
            v41 = v17;
            v40 = 0;
          }
          v42 = v35 - v41;
          if ( v35 < v41 )
            v42 = v41 - v35;
          if ( v11 >= v42 )
          {
            v83.m128i_i64[0] = 0;
            v43 = 0;
            if ( v40 > v83.m128i_i64[1] )
            {
              v63 = v39;
              sub_2236E10(v69, v69 + 3, v40, 1);
              v43 = v83.m128i_i64[0];
              v39 = (char *)v63;
            }
            if ( v40 )
            {
              memcpy((char *)v82 + v43, v39, v40);
              v43 = v83.m128i_i64[0];
            }
            v44 = v40 + v43;
            v83.m128i_i64[0] = v40 + v43;
            v45 = v40 + v43 + v17;
            if ( v45 > v83.m128i_i64[1] )
            {
              sub_2236E10(v69, v69 + 3, v45, 1);
              v44 = v83.m128i_i64[0];
            }
            v46 = v82;
            if ( v17 )
            {
              memcpy((char *)v82 + v44, v64, v17);
              v46 = v82;
              v44 = v83.m128i_i64[0];
            }
            v88 = v46;
            v83.m128i_i64[0] = v17 + v44;
            v89 = v17 + v44;
            v47 = sub_2246430(v65, ptr, v86.m128i_i64[0], 1, v11);
            v48 = v47 - (!v72 - 1);
            if ( v48 < v11 )
              break;
          }
          if ( v61 == ++v37 )
            goto LABEL_63;
LABEL_47:
          v35 = v86.m128i_i64[0];
        }
        v88 = v82;
        v89 = v83.m128i_i64[0];
        v90 = v71;
        v91 = v70;
        v92 = 1285;
        sub_2253560(v75, v65);
        v50 = *(_BYTE **)v67;
        if ( v79 == v68 )
        {
          v57 = v80;
          if ( v80 )
          {
            if ( v80 == 1 )
              *v50 = (_BYTE)v81;
            else
              memcpy(v50, v68, v80);
            v57 = v80;
            v50 = *(_BYTE **)v67;
          }
          *(_QWORD *)(v67 + 8) = v57;
          v50[v57] = 0;
          v50 = v79;
        }
        else
        {
          v51 = v67;
          if ( v50 == (_BYTE *)(v67 + 16) )
          {
            v63 = v81;
            *(_QWORD *)v67 = v79;
            *(__m128 *)(v51 + 8) = _mm_loadh_ps((const double *)&v63);
          }
          else
          {
            v63 = v81;
            v52 = *(void **)(v67 + 16);
            *(_QWORD *)v67 = v79;
            *(__m128 *)(v51 + 8) = _mm_loadh_ps((const double *)&v63);
            if ( v50 )
            {
              v79 = v50;
              v81 = v52;
              goto LABEL_60;
            }
          }
          v79 = v68;
          v50 = v68;
        }
LABEL_60:
        v80 = 0;
        *v50 = 0;
        if ( v79 != v68 )
          operator delete(v79);
        v11 = v48;
        if ( v61 != ++v37 )
          goto LABEL_47;
LABEL_63:
        v15 = v74 + 20;
        if ( v66 == v74 + 20 )
        {
LABEL_64:
          if ( ptr != p_ptr + 3 )
            free(ptr);
          if ( v82 != v69 + 3 )
            free(v82);
          return v11;
        }
      }
      else
      {
LABEL_7:
        v15 += 20;
        if ( v66 == v15 )
          goto LABEL_64;
      }
    }
    v19 = 0;
    v20 = (const char *)(v15[1] + v18);
    if ( !v20 )
    {
      v19 = 0;
      v17 = 0;
LABEL_55:
      v21 = v19;
      goto LABEL_6;
    }
LABEL_10:
    v21 = strlen(v20);
    goto LABEL_11;
  }
  return v11;
}
