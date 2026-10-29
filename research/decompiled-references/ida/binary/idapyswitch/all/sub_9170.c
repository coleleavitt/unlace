unsigned __int64 __fastcall sub_9170(
        __int64 a1,
        int a2,
        void *a3,
        unsigned int a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  size_t v15; // rax
  size_t v16; // r13
  size_t v17; // r15
  const char *v18; // rsi
  char *v19; // rcx
  char *v20; // r14
  __int64 v21; // r13
  const char *v22; // rbp
  const char *v23; // rdx
  char *v24; // rbx
  const char *v25; // r12
  const char *v26; // rdi
  char *v27; // r15
  int v28; // eax
  __int64 v29; // rdx
  char *v30; // rcx
  __int64 v31; // rax
  char *v32; // rdi
  const char *v33; // rax
  int v34; // eax
  _DWORD *v35; // r15
  __int64 v36; // rdi
  __int64 v37; // r15
  double v38; // xmm4_8
  double v39; // xmm5_8
  char *v40; // r12
  _QWORD *v41; // r13
  __int64 v42; // r14
  _QWORD *v43; // rbp
  const char *v44; // rcx
  const char *v45; // r15
  _QWORD *v46; // r12
  const char *v47; // rsi
  const char *v48; // rdi
  int v49; // eax
  _QWORD *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  void *v53; // rdx
  _QWORD *v54; // rdi
  const char *v55; // rax
  const char *v56; // rdi
  int v57; // eax
  _QWORD *v58; // rax
  char *v59; // r15
  const char *v61; // [rsp+0h] [rbp-A8h]
  void *v62; // [rsp+0h] [rbp-A8h]
  char *s1a; // [rsp+10h] [rbp-98h]
  char *s1; // [rsp+10h] [rbp-98h]
  char *v66; // [rsp+20h] [rbp-88h]
  __int64 v67; // [rsp+20h] [rbp-88h]
  char *v68; // [rsp+28h] [rbp-80h]
  _QWORD *v69; // [rsp+28h] [rbp-80h]
  void *src; // [rsp+30h] [rbp-78h]
  _DWORD n[3]; // [rsp+3Ch] [rbp-6Ch] BYREF
  void **p_ptr; // [rsp+48h] [rbp-60h] BYREF
  void *ptr; // [rsp+50h] [rbp-58h] BYREF
  __int128 v74; // [rsp+58h] [rbp-50h]
  unsigned __int64 v75; // [rsp+68h] [rbp-40h]

  v75 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 5128) )
    return v75 - __readfsqword(0x28u);
  ptr = nullptr;
  v74 = 0;
  v15 = strlen((const char *)(a1 + 5128));
  v16 = v15 + 1;
  v17 = v15;
  v18 = (const char *)(a1 + 5128);
  ptr = (void *)sub_11430(&ptr, 0, v15 + 1, 1);
  *(_QWORD *)&v74 = v16;
  memmove(ptr, (const void *)(a1 + 5128), v17);
  *((_BYTE *)ptr + v17) = 0;
  v19 = *(char **)(a1 + 5720);
  v20 = v19 + 8;
  if ( !*((_QWORD *)v19 + 2) )
    goto LABEL_23;
  v21 = v74;
  v22 = (const char *)ptr;
  src = a3;
  v23 = ::s1;
  n[0] = a4;
  v24 = *((char **)v19 + 2);
  if ( (_QWORD)v74 )
    v23 = (const char *)ptr;
  v66 = *(char **)(a1 + 5720);
  v68 = v19 + 8;
  v25 = v23;
  while ( 1 )
  {
    v31 = *((_QWORD *)v24 + 5);
    if ( !v21 )
      break;
    if ( v31 )
      goto LABEL_16;
    v26 = ::s1;
    v27 = v24;
    v18 = v22;
LABEL_9:
    v28 = strcmp(v26, v18);
    v30 = *((char **)v24 + 2);
    v24 = *((char **)v24 + 3);
    if ( v28 >= 0 )
    {
      v20 = v27;
      v24 = v30;
    }
    if ( !v24 )
    {
      v19 = v66;
      v32 = v68;
      a3 = src;
      a4 = n[0];
      goto LABEL_18;
    }
  }
  if ( v31 )
  {
LABEL_16:
    v26 = *((const char **)v24 + 4);
    v27 = v24;
    v18 = v25;
    goto LABEL_9;
  }
  while ( 1 )
  {
    v29 = *((_QWORD *)v24 + 2);
    if ( !v29 )
      break;
    v20 = v24;
    v24 = *((char **)v24 + 2);
    if ( *(_QWORD *)(v29 + 40) )
      goto LABEL_16;
  }
  v59 = v24;
  v19 = v66;
  v32 = v68;
  a3 = src;
  a4 = n[0];
  v20 = v59;
LABEL_18:
  if ( v32 == v20 )
    goto LABEL_23;
  if ( *((_QWORD *)v20 + 5) )
  {
    v33 = *((const char **)v20 + 4);
    if ( !v21 )
      v22 = ::s1;
LABEL_22:
    v18 = v33;
    s1a = v19;
    v34 = strcmp(v22, v33);
    v19 = s1a;
    if ( v34 < 0 )
    {
LABEL_23:
      v18 = v20;
      *(_QWORD *)&n[1] = &ptr;
      v20 = (char *)sub_8CE0(v19, v20, (__int64 *)&n[1]);
    }
  }
  else
  {
    v33 = ::s1;
    if ( v21 )
      goto LABEL_22;
  }
  v35 = *((_DWORD **)v20 + 7);
  if ( v35 )
  {
    if ( *((unsigned __int8 *)v35 + 4) == a2 && *v35 == a4 )
    {
      v18 = (const char *)a3;
      if ( !memcmp((char *)v35 + 5, a3, a4) )
      {
        if ( ptr )
        {
          *(_QWORD *)&v74 = 0;
          j__free(ptr);
        }
        return v75 - __readfsqword(0x28u);
      }
    }
    j__free(v35);
  }
  v36 = a4 + 5LL;
  v37 = sub_11300(v36, v18, v29, v19);
  if ( !v37 )
    sub_66D0((__m128)0LL, a6, a7, a8, v38, v39, a11, a12, v36, (__int64)v18);
  *(_DWORD *)v37 = a4;
  *(_BYTE *)(v37 + 4) = a2;
  memcpy((void *)(v37 + 5), a3, a4);
  v40 = *(char **)(a1 + 5720);
  v41 = *((_QWORD **)v40 + 2);
  if ( !v41 )
  {
    v43 = v40 + 8;
    goto LABEL_50;
  }
  v42 = v74;
  v67 = v37;
  v43 = v40 + 8;
  s1 = *(char **)(a1 + 5720);
  v44 = ::s1;
  v69 = v40 + 8;
  if ( (_QWORD)v74 )
    v44 = (const char *)ptr;
  v45 = (const char *)ptr;
  v61 = v44;
  while ( 2 )
  {
    v51 = v41[5];
    if ( v42 )
    {
      v46 = v41;
      if ( !v51 )
      {
        v47 = v45;
        v48 = ::s1;
        goto LABEL_35;
      }
LABEL_43:
      v48 = (const char *)v41[4];
      v47 = v61;
LABEL_35:
      v49 = strcmp(v48, v47);
      v50 = (_QWORD *)v41[2];
      v41 = (_QWORD *)v41[3];
      if ( v49 >= 0 )
      {
        v43 = v46;
        v41 = v50;
      }
      if ( !v41 )
      {
        v53 = (void *)v45;
        v40 = s1;
        v54 = v69;
        v37 = v67;
        goto LABEL_45;
      }
      continue;
    }
    break;
  }
  if ( v51 )
  {
LABEL_42:
    v46 = v41;
    goto LABEL_43;
  }
  while ( 1 )
  {
    v52 = v41[2];
    if ( !v52 )
      break;
    v43 = v41;
    v41 = (_QWORD *)v41[2];
    if ( *(_QWORD *)(v52 + 40) )
      goto LABEL_42;
  }
  v53 = (void *)v45;
  v40 = s1;
  v54 = v69;
  v43 = v41;
  v37 = v67;
LABEL_45:
  if ( v54 == v43 )
    goto LABEL_50;
  if ( v43[5] )
  {
    v55 = (const char *)v43[4];
    v56 = ::s1;
    if ( v42 )
      goto LABEL_48;
LABEL_49:
    v62 = v53;
    v57 = strcmp(v56, v55);
    v53 = v62;
    if ( v57 < 0 )
    {
LABEL_50:
      p_ptr = &ptr;
      v58 = sub_8CE0(v40, v43, (__int64 *)&p_ptr);
      v53 = ptr;
      v43 = v58;
    }
  }
  else
  {
    v55 = ::s1;
    if ( v42 )
    {
LABEL_48:
      v56 = (const char *)v53;
      goto LABEL_49;
    }
  }
  v43[7] = v37;
  *(_BYTE *)(a1 + 5640) = 1;
  if ( v53 )
  {
    *(_QWORD *)&v74 = 0;
    j__free(v53);
  }
  return v75 - __readfsqword(0x28u);
}

