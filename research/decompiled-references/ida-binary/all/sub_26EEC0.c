unsigned __int64 __fastcall sub_26EEC0(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v9; // rbx
  __int64 v10; // rax
  __m128i v11; // xmm0
  size_t v12; // rax
  char *v13; // rbp
  size_t v14; // rdx
  const char *v15; // rsi
  double v16; // xmm0_8
  void *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  const char *v21; // rsi
  _BYTE *v22; // rax
  __int64 v23; // rdx
  int v24; // r13d
  size_t v25; // r14
  __int64 v26; // rdx
  const char *v27; // rax
  void *v28; // rbp
  __int64 v29; // rax
  char *v30; // rdx
  __m128i v31; // xmm1
  __int64 v32; // rdx
  __int64 v33; // r13
  __int64 v34; // rbp
  __int64 *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  size_t v38; // rax
  char *v39; // r15
  char *v40; // r13
  size_t v41; // r11
  __int64 v42; // rdi
  __int64 v43; // r8
  __int64 v44; // rsi
  size_t v45; // rdx
  char *v46; // rax
  __int64 v47; // rsi
  bool v48; // zf
  char *v49; // r9
  char *v50; // rbp
  __int64 v51; // rax
  __int64 v52; // rax
  size_t v53; // r9
  int v54; // eax
  char *needle; // [rsp+0h] [rbp-D8h]
  size_t v56; // [rsp+18h] [rbp-C0h]
  size_t v57; // [rsp+20h] [rbp-B8h]
  size_t v58; // [rsp+28h] [rbp-B0h]
  __int64 v59; // [rsp+30h] [rbp-A8h]
  size_t v60; // [rsp+38h] [rbp-A0h]
  char *s; // [rsp+40h] [rbp-98h] BYREF
  __m128i v62; // [rsp+48h] [rbp-90h] BYREF
  __int64 v63; // [rsp+60h] [rbp-78h] BYREF
  __int128 v64; // [rsp+68h] [rbp-70h]
  void *ptr; // [rsp+80h] [rbp-58h] BYREF
  __int128 v66; // [rsp+88h] [rbp-50h]
  unsigned __int64 v67; // [rsp+98h] [rbp-40h]

  v6 = a1[3];
  v7 = a1[2];
  v67 = __readfsqword(0x28u);
  if ( a1[4] < (unsigned __int64)(v6 + 1) )
  {
    v37 = qvector_reserve(a1 + 2, v7, v6 + 1, 64);
    v6 = a1[3];
    a1[2] = v37;
    v7 = v37;
  }
  v9 = v7 + (v6 << 6);
  *(_OWORD *)(v9 + 8) = 0;
  *(_OWORD *)(v9 + 32) = 0;
  *(_QWORD *)(v9 + 24) = 0;
  *(_QWORD *)(v9 + 48) = 0;
  *(_QWORD *)(v9 + 56) = 0;
  ++a1[3];
  *(_QWORD *)v9 = a2;
  (*(void (__fastcall **)(char **, __int64, __int64))(*(_QWORD *)a3 + 64LL))(&s, a3, a2);
  v10 = v62.m128i_i64[0];
  v11.m128i_i64[0] = 0;
  if ( v62.m128i_i64[0] > 1uLL )
  {
    if ( (~a4 & 0x800800) != 0 )
    {
LABEL_5:
      v12 = v10 - 1;
      v13 = s;
      v14 = v12 >> 63;
      goto LABEL_6;
    }
    v21 = nullptr;
    v63 = 0;
    ptr = nullptr;
    v64 = 0;
    v66 = 0;
    v22 = (_BYTE *)qvector_reserve(&ptr, 0, 2, 1);
    v23 = v66;
    ptr = v22;
    if ( (unsigned __int64)v66 <= 1 )
    {
      v24 = HIWORD(a4) & 0x7F;
      v22[v66] = v24;
      v22 = ptr;
      if ( !v23 )
      {
        *((_BYTE *)ptr + 1) = v24;
        v22 = ptr;
      }
    }
    *(_QWORD *)&v66 = 2;
    v22[1] = 0;
    v25 = v66;
    if ( (_QWORD)v66 )
    {
      needle = (char *)ptr;
      v38 = strlen((const char *)ptr);
      v39 = s;
      v25 = v38;
      if ( !v62.m128i_i64[0] )
        goto LABEL_21;
      v40 = &s[v62.m128i_i64[0] - 1];
      if ( s >= v40 )
      {
LABEL_50:
        if ( v25 && needle )
        {
          if ( !v62.m128i_i64[0] || v62.m128i_i64[0] - 1 < v25 )
          {
LABEL_24:
            v28 = ptr;
LABEL_25:
            if ( v28 )
            {
              *(_QWORD *)&v66 = 0;
              qfree(v28, v21);
            }
            v29 = v63;
            v30 = s;
            v11 = _mm_loadu_si128(&v62);
            v31 = _mm_loadu_si128((const __m128i *)(v63 + 8));
            s = *(char **)v63;
            v62 = v31;
            *(_QWORD *)v63 = v30;
            v32 = v63;
            *(__m128i *)(v29 + 8) = v11;
            if ( v32 )
            {
              v33 = v64;
              if ( (_QWORD)v64 )
              {
                v34 = 0;
                do
                {
                  v35 = (__int64 *)(v32 + 24 * v34);
                  v36 = *v35;
                  if ( *v35 )
                  {
                    v35[1] = 0;
                    qfree(v36, v21);
                    v32 = v63;
                  }
                  ++v34;
                }
                while ( v33 != v34 );
              }
              *(_QWORD *)&v64 = 0;
              *(double *)v11.m128i_i64 = qfree(v32, v21);
            }
            v10 = v62.m128i_i64[0];
            goto LABEL_35;
          }
          v21 = needle;
          v54 = strncmp(&s[v62.m128i_i64[0] - 1 - v25], needle, v25);
          v28 = ptr;
          if ( v54 )
            goto LABEL_25;
        }
LABEL_21:
        v26 = v64;
        v21 = (const char *)v63;
        if ( *((_QWORD *)&v64 + 1) < (unsigned __int64)(v64 + 1) )
        {
          v63 = qvector_reserve(&v63, v63, v64 + 1, 24);
          v26 = v64;
          v21 = (const char *)v63;
        }
        v27 = &v21[24 * v26];
        *(_QWORD *)v27 = 0;
        *(_OWORD *)(v27 + 8) = 0;
        *(_QWORD *)&v64 = v64 + 1;
        goto LABEL_24;
      }
    }
    else
    {
      if ( !v62.m128i_i64[0] )
        goto LABEL_21;
      v39 = s;
      v40 = &s[v62.m128i_i64[0] - 1];
      if ( s >= v40 )
        goto LABEL_21;
      needle = (char *)&s1;
    }
    do
    {
      v46 = strstr(v39, needle);
      v47 = v63;
      v48 = v46 == nullptr;
      v49 = v46;
      v50 = v46;
      v51 = v64;
      if ( v48 )
        v49 = v40;
      v53 = v49 - v39;
      if ( *((_QWORD *)&v64 + 1) < (unsigned __int64)(v64 + 1) )
      {
        v56 = v53;
        v63 = qvector_reserve(&v63, v63, v64 + 1, 24);
        v47 = v63;
        v53 = v56;
        v51 = v64;
      }
      v41 = v53;
      v42 = v47 + 24 * v51;
      *(_OWORD *)(v42 + 8) = 0;
      *(_QWORD *)v42 = 0;
      *(_QWORD *)&v64 = v64 + 1;
      v43 = *(_QWORD *)(v42 + 8);
      if ( v43 )
      {
        --v43;
        v41 = v53 + v43;
      }
      v44 = *(_QWORD *)v42;
      v45 = v41 + 1;
      if ( v41 != -1 )
      {
        v60 = v41;
        v59 = v43;
        v58 = v53;
        v57 = v41 + 1;
        v52 = qvector_reserve(v42, v44, v45, 1);
        v41 = v60;
        v44 = v52;
        v43 = v59;
        v53 = v58;
        *(_QWORD *)v42 = v52;
        v45 = v57;
      }
      *(_QWORD *)(v42 + 8) = v45;
      *(_BYTE *)(v44 + v41) = 0;
      v21 = v39;
      memmove((void *)(*(_QWORD *)v42 + v43), v39, v53);
      if ( !v50 )
        break;
      v39 = &v50[v25];
    }
    while ( &v50[v25] < v40 );
    goto LABEL_50;
  }
LABEL_35:
  if ( v10 )
    goto LABEL_5;
  LOBYTE(v14) = 0;
  v12 = 0;
  v13 = (char *)&s1;
LABEL_6:
  if ( !v13 || (_BYTE)v14 )
  {
    v12 = 0;
    if ( v13 )
      v12 = strlen(v13);
  }
  v15 = (const char *)v12;
  v16 = QT::QString::fromUtf8(&ptr, v12, v13, *(double *)v11.m128i_i64);
  v17 = *(void **)(v9 + 8);
  *(_QWORD *)(v9 + 8) = ptr;
  ptr = v17;
  v18 = *(_QWORD *)(v9 + 16);
  *(_QWORD *)(v9 + 16) = v66;
  *(_QWORD *)&v66 = v18;
  v19 = *(_QWORD *)(v9 + 24);
  *(_QWORD *)(v9 + 24) = *((_QWORD *)&v66 + 1);
  *((_QWORD *)&v66 + 1) = v19;
  if ( v17 && !_InterlockedSub((volatile signed __int32 *)v17, 1u) )
    free(ptr);
  if ( s )
  {
    v62.m128i_i64[0] = 0;
    qfree(s, v15, v16);
  }
  return v67 - __readfsqword(0x28u);
}
