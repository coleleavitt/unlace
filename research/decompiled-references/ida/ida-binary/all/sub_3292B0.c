unsigned __int64 __fastcall sub_3292B0(
        char a1,
        _QWORD *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __m128 v14; // xmm0
  __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned __int64 v17; // rax
  const char *v18; // rsi
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rbp
  __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // r15
  bool v26; // r14
  unsigned __int64 v27; // r13
  int v28; // ebx
  int v29; // r12d
  __int64 v30; // rax
  __int64 v31; // rbp
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rsi
  char *v35; // rbp
  size_t v36; // rax
  __int64 v37; // r8
  size_t v38; // r9
  size_t v39; // r10
  __int64 v40; // rsi
  size_t v41; // rdx
  __int64 v42; // rbp
  unsigned __int64 v43; // r12
  __int64 v44; // rsi
  unsigned __int64 v45; // rax
  const char *encoding_name; // rax
  char *v47; // rcx
  __int64 v48; // r8
  const char *v49; // rdx
  char *v50; // rax
  const char *v51; // rsi
  __int64 v53; // [rsp+0h] [rbp-B8h]
  size_t v54; // [rsp+8h] [rbp-B0h]
  __int64 v55; // [rsp+8h] [rbp-B0h]
  __int64 v56; // [rsp+10h] [rbp-A8h]
  __int64 v57; // [rsp+10h] [rbp-A8h]
  size_t v58; // [rsp+18h] [rbp-A0h]
  size_t v59; // [rsp+20h] [rbp-98h]
  unsigned __int64 v60; // [rsp+28h] [rbp-90h]
  const char *v63; // [rsp+40h] [rbp-78h] BYREF
  __int128 v64; // [rsp+48h] [rbp-70h]
  char s[24]; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v66; // [rsp+78h] [rbp-40h]

  v14 = 0;
  v15 = a2[1];
  v66 = __readfsqword(0x28u);
  v64 = 0;
  v63 = nullptr;
  if ( 160 * v15 )
  {
    v63 = (const char *)qvector_reserve(&v63, 0, 160 * v15, 1);
    v18 = v63;
    v16 = v64;
    if ( a2[1] )
    {
      v17 = *((_QWORD *)&v64 + 1);
      goto LABEL_3;
    }
    if ( (_QWORD)v64 )
      goto LABEL_55;
LABEL_59:
    v18 = &s1;
    goto LABEL_55;
  }
  v16 = 0;
  v17 = 0;
  v18 = nullptr;
  if ( !v15 )
    goto LABEL_59;
LABEL_3:
  v60 = 0;
  while ( 1 )
  {
    v19 = 2;
    if ( v16 )
      v19 = v16-- + 1;
    if ( v17 < v19 )
    {
      v63 = (const char *)qvector_reserve(&v63, v18, v19, 1);
      v18 = v63;
    }
    *(_QWORD *)&v64 = v19;
    v20 = 2;
    v18[v16] = 10;
    v63[v16 + 1] = 0;
    v21 = v64;
    if ( (_QWORD)v64 )
    {
      v20 = v64 + 1;
      v21 = v64 - 1;
    }
    v22 = (__int64)v63;
    if ( *((_QWORD *)&v64 + 1) < v20 )
    {
      v63 = (const char *)qvector_reserve(&v63, v63, v20, 1);
      v22 = (__int64)v63;
    }
    *(_QWORD *)&v64 = v20;
    *(_BYTE *)(v22 + v21) = 9;
    v63[v21 + 1] = 0;
    v23 = *a2 + 80 * v60;
    if ( a2[1] > 1u )
    {
      if ( *(_QWORD *)(v23 + 56) )
      {
        v24 = *(unsigned int *)(v23 + 72);
        if ( (int)v24 > 0 )
        {
          encoding_name = (const char *)get_encoding_name(v24);
          sub_16FAA0((__int64 *)&v63, (__int64)"%15s: ", encoding_name);
        }
      }
    }
    v25 = *(_QWORD *)(v23 + 24);
    v26 = 0;
    v27 = *(_QWORD *)(v23 + 8);
    v53 = *(_QWORD *)v23;
    if ( v25 )
      v26 = *(_QWORD *)(v23 + 32) != 0;
    v28 = 0;
    if ( v27 )
    {
      while ( 1 )
      {
        if ( v28 <= 0 )
          goto LABEL_20;
        v42 = v64;
        v43 = 2;
        if ( (_QWORD)v64 )
        {
          v43 = v64 + 1;
          v42 = v64 - 1;
        }
        v44 = (__int64)v63;
        if ( *((_QWORD *)&v64 + 1) < v43 )
        {
          v63 = (const char *)qvector_reserve(&v63, v63, v43, 1);
          v44 = (__int64)v63;
        }
        *(_QWORD *)&v64 = v43;
        *(_BYTE *)(v44 + v42) = 32;
        v63[v42 + 1] = 0;
        if ( v28 <= 31 )
        {
LABEL_20:
          v29 = v28;
          v30 = v28;
          if ( !v26 )
            goto LABEL_40;
        }
        else
        {
          v29 = v27 - 1;
          v30 = (int)v27 - 1;
          if ( !v26 )
            goto LABEL_40;
        }
        if ( !*(_BYTE *)(v25 + v30) )
        {
          strcpy(s, "??");
          goto LABEL_23;
        }
LABEL_40:
        *(double *)v14.m128_u64 = qsnprintf(s, 16, "%02X", *(unsigned __int8 *)(v53 + v30));
LABEL_23:
        if ( v28 > 31 )
        {
          v31 = v64;
          if ( (_QWORD)v64 )
          {
            v32 = v64 + 5;
            v33 = v64 + 6;
            v34 = (__int64)v63;
            v31 = v64 - 1;
            if ( *((_QWORD *)&v64 + 1) >= (unsigned __int64)(v64 + 6) )
            {
LABEL_26:
              *(_QWORD *)&v64 = v33;
              *(_BYTE *)(v34 + v32) = 0;
              v35 = (char *)&v63[v31];
              *(_DWORD *)v35 = 774778408;
              *((_WORD *)v35 + 2) = 8233;
              goto LABEL_27;
            }
          }
          else
          {
            v34 = (__int64)v63;
            v33 = 7;
            v32 = 6;
            if ( *((_QWORD *)&v64 + 1) >= 7u )
              goto LABEL_26;
          }
          v57 = v32;
          v55 = v33;
          v63 = (const char *)qvector_reserve(&v63, v34, v33, 1);
          v32 = v57;
          v34 = (__int64)v63;
          v33 = v55;
          goto LABEL_26;
        }
LABEL_27:
        v36 = strlen(s);
        v37 = v64;
        v38 = v36;
        v39 = v36;
        if ( (_QWORD)v64 )
        {
          v37 = v64 - 1;
          v39 = v36 + v64 - 1;
        }
        v40 = (__int64)v63;
        v41 = v39 + 1;
        if ( *((_QWORD *)&v64 + 1) < v39 + 1 )
        {
          v59 = v36;
          v58 = v39;
          v56 = v37;
          v54 = v39 + 1;
          v63 = (const char *)qvector_reserve(&v63, v63, v41, 1);
          v38 = v59;
          v40 = (__int64)v63;
          v39 = v58;
          v37 = v56;
          v41 = v54;
        }
        *(_QWORD *)&v64 = v41;
        *(_BYTE *)(v40 + v39) = 0;
        memmove((void *)&v63[v37], s, v38);
        if ( v28 <= 31 )
        {
          v28 = v29 + 1;
          if ( v29 + 1 < v27 )
            continue;
        }
        break;
      }
    }
    ++v60;
    v16 = v64;
    v45 = a2[1];
    if ( v60 >= v45 )
      break;
    v17 = *((_QWORD *)&v64 + 1);
    v18 = v63;
  }
  v18 = &s1;
  if ( (_QWORD)v64 )
  {
    v18 = v63;
    v47 = "s";
    if ( v45 > 1 )
      goto LABEL_47;
  }
  else
  {
    v47 = "s";
    if ( v45 > 1 )
      goto LABEL_47;
  }
LABEL_55:
  v47 = (char *)&unk_5C2F25;
LABEL_47:
  v48 = (__int64)v18;
  v49 = "CASE-INSENSITIVELY";
  if ( (a1 & 4) != 0 )
    v49 = "CASE-SENSITIVELY";
  v50 = "up";
  if ( (a1 & 1) != 0 )
    v50 = "down";
  v51 = v50;
  sub_169700(
    (int)"Searching %s %s for binary pattern%s:%s\n",
    (__int64)v50,
    (__int64)v49,
    (__int64)v47,
    v48,
    a14,
    v14,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    v53);
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree(v63, v51);
  }
  return v66 - __readfsqword(0x28u);
}
