__int64 __fastcall sub_62C0D0(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  __int64 v4; // rax
  char *v5; // rbp
  char *v6; // rbx
  const char *v7; // r13
  char *v8; // rsi
  char *v9; // rax
  __int64 v10; // r13
  unsigned __int64 v11; // r15
  __int64 v12; // r9
  __int64 v13; // r11
  __int64 v14; // rdx
  char *v15; // rdi
  __m128i v16; // xmm0
  char *v17; // r12
  int v18; // edx
  unsigned int v19; // eax
  bool v20; // cc
  char *v21; // r15
  int v22; // edx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // edx
  __m128i si128; // xmm0
  unsigned int v27; // ebx
  __int64 v29; // r13
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rbx
  size_t v33; // rax
  size_t v34; // r12
  size_t v35; // r15
  size_t v36; // rdx
  int v37; // ecx
  __int64 v38; // rax
  char *v39; // rax
  __int64 v40; // rax
  const char *src; // [rsp+8h] [rbp-510h]
  int srca; // [rsp+8h] [rbp-510h]
  int srcb; // [rsp+8h] [rbp-510h]
  int srcc; // [rsp+8h] [rbp-510h]
  int srcd; // [rsp+8h] [rbp-510h]
  unsigned int v49; // [rsp+20h] [rbp-4F8h]
  __int64 v50; // [rsp+28h] [rbp-4F0h]
  __int64 v51; // [rsp+30h] [rbp-4E8h]
  __int64 v52; // [rsp+38h] [rbp-4E0h]
  _BYTE v53[24]; // [rsp+40h] [rbp-4D8h] BYREF
  int v54; // [rsp+58h] [rbp-4C0h]
  int v55; // [rsp+5Ch] [rbp-4BCh]
  int v56; // [rsp+60h] [rbp-4B8h]
  __int128 v57; // [rsp+70h] [rbp-4A8h] BYREF
  __m128i v58; // [rsp+80h] [rbp-498h]
  __int64 v59; // [rsp+90h] [rbp-488h]
  char *haystack[2]; // [rsp+98h] [rbp-480h] BYREF
  __m128i v61; // [rsp+A8h] [rbp-470h]
  void *v62; // [rsp+B8h] [rbp-460h]
  __int128 v63; // [rsp+C0h] [rbp-458h]
  int v64; // [rsp+D0h] [rbp-448h] BYREF
  _BYTE v65[1028]; // [rsp+D4h] [rbp-444h] BYREF
  unsigned __int64 v66; // [rsp+4D8h] [rbp-40h]

  v49 = a2;
  v66 = __readfsqword(0x28u);
  v4 = netnode_supval(a1, a2, &v64, 1024, 83);
  if ( v4 <= 0 )
    return 0;
  v5 = &v65[v4 - 4];
  v57 = 0;
  v58.m128i_i64[0] = 0;
  v58.m128i_i64[1] = -1;
  v59 = 0;
  v62 = nullptr;
  *(_OWORD *)haystack = 0;
  v61 = 0;
  v63 = 0;
  netnode_get_name(a1, &haystack[1]);
  v6 = nullptr;
  memset(v53, 0, sizeof(v53));
  src = ::haystack;
  if ( v61.m128i_i64[0] )
  {
    src = haystack[1];
    v6 = strstr(haystack[1], ".next");
  }
  v7 = src;
  v8 = nullptr;
  while ( v6 )
  {
    if ( v6 != v7 )
    {
      v12 = *(_QWORD *)&v53[8];
      v13 = v6 - v7;
      if ( *(_QWORD *)&v53[8] )
      {
        v12 = *(_QWORD *)&v53[8] - 1LL;
        v13 = v6 - v7 + *(_QWORD *)&v53[8] - 1LL;
      }
      v14 = v13 + 1;
      if ( *(_QWORD *)&v53[16] < (unsigned __int64)(v13 + 1) )
      {
        v52 = v12;
        v51 = v13;
        v50 = v13 + 1;
        *(_QWORD *)v53 = qvector_reserve(v53, v8, v14, 1);
        v12 = v52;
        v8 = *(char **)v53;
        v13 = v51;
        v14 = v50;
      }
      *(_QWORD *)&v53[8] = v14;
      v8[v13] = 0;
      memmove((void *)(v12 + *(_QWORD *)v53), v7, v6 - v7);
      v8 = *(char **)v53;
    }
    v10 = *(_QWORD *)&v53[8];
    v11 = 1;
    if ( *(_QWORD *)&v53[8] )
    {
      v11 = *(_QWORD *)&v53[8];
      v10 = *(_QWORD *)&v53[8] - 1LL;
    }
    if ( *(_QWORD *)&v53[16] < v11 )
    {
      *(_QWORD *)v53 = qvector_reserve(v53, v8, v11, 1);
      v8 = *(char **)v53;
    }
    *(_QWORD *)&v53[8] = v11;
    v8[v10] = 0;
    v7 = v6 + 5;
    v9 = strstr(v6 + 5, ".next");
    v8 = *(char **)v53;
    v6 = v9;
  }
  if ( v7 == src )
  {
    v15 = v8;
  }
  else
  {
    if ( *v7 && v7 )
    {
      v32 = *(_QWORD *)&v53[8];
      v33 = strlen(v7);
      v34 = v33;
      v35 = v33;
      if ( v32 )
      {
        --v32;
        v35 = v33 + v32;
      }
      v36 = v35 + 1;
      if ( *(_QWORD *)&v53[16] < v35 + 1 )
      {
        *(_QWORD *)v53 = qvector_reserve(v53, v8, v36, 1);
        v36 = v35 + 1;
        v8 = *(char **)v53;
      }
      *(_QWORD *)&v53[8] = v36;
      v8[v35] = 0;
      memmove((void *)(*(_QWORD *)v53 + v32), v7, v34);
      v8 = *(char **)v53;
    }
    v15 = haystack[1];
    haystack[1] = v8;
    v16 = _mm_loadu_si128((const __m128i *)&v53[8]);
    *(_QWORD *)v53 = v15;
    *(_QWORD *)&v53[16] = v61.m128i_i64[1];
    v61 = v16;
  }
  if ( v15 )
  {
    *(_QWORD *)&v53[8] = 0;
    qfree(v15);
  }
  if ( a3 )
  {
    v17 = (char *)&v64 + 2;
    if ( v5 < (char *)&v64 + 2 )
    {
      v18 = 0;
      v17 = (char *)&v64;
    }
    else
    {
      v18 = (__int16)v64;
    }
LABEL_26:
    v19 = a4;
    v20 = a4 <= 3;
    if ( a4 != 3 )
      goto LABEL_27;
LABEL_46:
    if ( v5 < v17 + 8 )
    {
      v29 = 0;
      v30 = 0;
    }
    else
    {
      v29 = *(_QWORD *)v17;
      if ( v5 < v17 + 16 )
      {
        v17 += 8;
        v30 = 0;
      }
      else
      {
        v30 = *((_QWORD *)v17 + 1);
        v17 += 16;
      }
    }
    srcb = v18;
    v31 = qalloc_or_throw(32);
    v22 = srcb;
    v21 = (char *)v31;
    *(_DWORD *)(v31 + 8) = srcb;
    *(_QWORD *)v31 = off_2B28210;
    *(_QWORD *)(v31 + 24) = v30;
    *(_QWORD *)(v31 + 16) = v29;
    goto LABEL_31;
  }
  v17 = v65;
  if ( v5 < v65 )
  {
    v17 = (char *)&v64;
    v18 = 0;
    goto LABEL_26;
  }
  v19 = a4;
  v18 = v64;
  v20 = a4 <= 3;
  if ( a4 == 3 )
    goto LABEL_46;
LABEL_27:
  if ( v20 )
  {
    if ( v19 == 1 )
    {
      srcc = v18;
      v21 = (char *)qalloc_or_throw(16);
      v22 = srcc;
      *(_QWORD *)v21 = off_2B2DD20;
      *((_QWORD *)v21 + 1) = 0;
      if ( v5 >= v17 + 4 )
      {
        v37 = *(_DWORD *)v17;
        v17 += 4;
        *((_DWORD *)v21 + 3) = v37;
      }
    }
    else
    {
      srca = v18;
      v21 = (char *)qalloc_or_throw(24);
      v22 = srca;
      *(_QWORD *)v21 = off_2B25850;
      if ( v5 >= v17 + 8 )
      {
        v23 = *(_QWORD *)v17;
        v17 += 8;
        *((_QWORD *)v21 + 2) = v23;
      }
    }
    goto LABEL_31;
  }
  if ( a4 == 4 )
  {
    srcd = v18;
    v38 = qalloc_or_throw(32);
    *(_QWORD *)(v38 + 8) = 0;
    v21 = (char *)v38;
    v22 = srcd;
    *(_OWORD *)(v38 + 16) = -1;
    *(_QWORD *)v38 = &off_2B32C50;
    v39 = v17 + 4;
    if ( v5 < v17 + 4 )
      v39 = v17;
    else
      *((_DWORD *)v21 + 3) = *(_DWORD *)v17;
    v17 = v39 + 8;
    if ( v5 < v39 + 8 )
    {
      v17 = v39;
      v40 = -1;
    }
    else
    {
      v40 = *(_QWORD *)v39;
      *((_QWORD *)v21 + 2) = v40;
    }
    *((_QWORD *)v21 + 3) = v40;
LABEL_31:
    *((_DWORD *)v21 + 2) = v22;
    if ( haystack[0] )
      qfree(haystack[0]);
    haystack[0] = v21;
    v56 = 0;
    if ( v5 >= v17 + 1
      && (LOBYTE(v56) = *v17, v5 >= v17 + 5)
      && v5 >= v17 + 7
      && v5 >= v17 + 9
      && ((v24 = *(_DWORD *)(v17 + 5),
           v25 = *(_DWORD *)(v17 + 1),
           memset(v53, 0, sizeof(v53)),
           v55 = v24,
           v54 = v25,
           v57 = 0,
           si128 = _mm_load_si128((const __m128i *)&v53[16]),
           LODWORD(v59) = v56,
           v58 = si128,
           v56 == 1)
       || v5 >= v17 + 17 && v5 >= v17 + 25 && v5 >= v17 + 33) )
    {
      sub_4B7210(a1, v49, (__int64)&v57, 0);
      v21 = haystack[0];
      v27 = 1;
    }
    else
    {
      v27 = 0;
    }
    goto LABEL_59;
  }
  v21 = haystack[0];
  v27 = 0;
LABEL_59:
  if ( v21 )
  {
    qfree(v21);
    haystack[0] = nullptr;
  }
  if ( haystack[1] )
  {
    v61.m128i_i64[0] = 0;
    qfree(haystack[1]);
    haystack[1] = nullptr;
    v61.m128i_i64[1] = 0;
  }
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62);
  }
  if ( haystack[1] )
  {
    v61.m128i_i64[0] = 0;
    qfree(haystack[1]);
  }
  if ( haystack[0] )
    qfree(haystack[0]);
  return v27;
}
