__int64 __fastcall clang_indexSourceFileFullArgv(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        const char *a6,
        const char **a7,
        int a8,
        __int64 a9,
        int a10,
        __m128i **a11,
        int a12)
{
  __int64 v12; // r15
  __int64 v14; // rbp
  bool v15; // r12
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  __m128i si128; // xmm0
  __int64 v20; // rax
  __int64 v21; // rdx
  __m128i v22; // xmm0
  __int64 v23; // r8
  __int64 v24; // r9
  size_t v25; // rdx
  __int64 v26; // rcx
  _WORD *v27; // r12
  __int64 v28; // rbx
  unsigned __int64 v29; // rbx
  size_t v30; // rax
  char *v31; // rsi
  const char **v32; // rbx
  const char **v33; // rbp
  const char *v34; // r12
  _BYTE *v35; // r15
  _BYTE *v36; // r13
  unsigned int v38; // ebx
  const char **v40; // r15
  unsigned int i; // ebx
  __int64 v42; // rax
  __int64 v43; // rbx
  _BYTE *v44; // [rsp+8h] [rbp-100h]
  __int64 v45; // [rsp+8h] [rbp-100h]
  size_t v50; // [rsp+28h] [rbp-E0h]
  size_t v51; // [rsp+28h] [rbp-E0h]
  const char *v52; // [rsp+38h] [rbp-D0h]
  int v53; // [rsp+4Ch] [rbp-BCh] BYREF
  _BYTE v54[32]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v55[4]; // [rsp+70h] [rbp-98h] BYREF
  int v56; // [rsp+90h] [rbp-78h]
  int v57; // [rsp+94h] [rbp-74h]
  const char *v58; // [rsp+98h] [rbp-70h]
  const char **v59; // [rsp+A0h] [rbp-68h]
  int v60; // [rsp+A8h] [rbp-60h]
  __int64 v61; // [rsp+B0h] [rbp-58h]
  int v62; // [rsp+B8h] [rbp-50h]
  __m128i **v63; // [rsp+C0h] [rbp-48h]
  int v64; // [rsp+C8h] [rbp-40h]

  v12 = a1;
  v14 = a9;
  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  v15 = 0;
  if ( qword_4AD21C8 && (v44 = (_BYTE *)qword_4AD21C8, strlen((const char *)qword_4AD21C8) == 1) )
  {
    v15 = *v44 == 50;
    if ( (_BYTE)qword_4AD21C0 )
      goto LABEL_5;
  }
  else if ( (_BYTE)qword_4AD21C0 )
  {
    goto LABEL_5;
  }
  if ( __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
LABEL_5:
  if ( !qword_4AD21C8 )
    goto LABEL_24;
  v55[0] = 29;
  v16 = operator new(0xC0u);
  *(_DWORD *)v16 = 0;
  *(_QWORD *)(v16 + 8) = v16 + 24;
  v17 = std::string::_M_create();
  v18 = v55[0];
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E5D0);
  *(_QWORD *)(v16 + 8) = v17;
  *(_QWORD *)(v16 + 24) = v18;
  *(__m128i *)v17 = si128;
  *(__m128i *)(v17 + 13) = _mm_load_si128((const __m128i *)&xmmword_3C7E5E0);
  v20 = v55[0];
  v21 = *(_QWORD *)(v16 + 8);
  v22 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
  *(_QWORD *)(v16 + 16) = v55[0];
  *(_BYTE *)(v21 + v20) = 0;
  *(_QWORD *)(v16 + 48) = v16 + 72;
  *(_BYTE *)(v16 + 40) = v15;
  *(__m128i *)(v16 + 56) = v22;
  *(_QWORD *)(v16 + 136) = &off_49DA340;
  *(_QWORD *)(v16 + 184) = v16 + 48;
  *(_DWORD *)(v16 + 144) = 2;
  *(_BYTE *)(v16 + 176) = 0;
  *(_DWORD *)(v16 + 180) = 1;
  *(_QWORD *)(v16 + 168) = 0;
  *(_OWORD *)(v16 + 152) = 0;
  v45 = v16 + 136;
  sub_2623850(v16 + 136, 0, 0, 0, v23, v24);
  v27 = *(_WORD **)(v16 + 168);
  v28 = *(_QWORD *)(v16 + 160);
  ++*(_DWORD *)v16;
  v29 = v28 - (_QWORD)v27;
  if ( a6 )
  {
    v30 = strlen(a6);
    v25 = v30;
    if ( v29 < v30 )
    {
      sub_26240F0(v45, a6, v30);
      v27 = *(_WORD **)(v16 + 168);
      if ( *(_QWORD *)(v16 + 160) - (_QWORD)v27 > 1u )
        goto LABEL_11;
LABEL_36:
      v31 = ": ";
      sub_26240F0(v45, ": ", 2);
      goto LABEL_12;
    }
    if ( v30 )
    {
      v51 = v30;
      memcpy(v27, a6, v30);
      v43 = *(_QWORD *)(v16 + 160);
      v25 = *(_QWORD *)(v16 + 168) + v51;
      *(_QWORD *)(v16 + 168) = v25;
      v27 = (_WORD *)v25;
      v29 = v43 - v25;
    }
  }
  if ( v29 <= 1 )
    goto LABEL_36;
LABEL_11:
  v31 = (_BYTE *)(&stru_2028 + 18);
  *v27 = 8250;
  *(_QWORD *)(v16 + 168) += 2LL;
LABEL_12:
  if ( a8 )
  {
    v52 = a6;
    v32 = &a7[a8];
    v33 = a7;
    do
    {
      while ( 1 )
      {
        v34 = *v33;
        v35 = *(_BYTE **)(v16 + 160);
        v36 = *(_BYTE **)(v16 + 168);
        if ( *v33 )
        {
          v25 = strlen(*v33);
          if ( v35 - v36 < v25 )
          {
            v31 = (char *)v34;
            sub_26240F0(v45, v34, v25);
            v35 = *(_BYTE **)(v16 + 160);
            v36 = *(_BYTE **)(v16 + 168);
          }
          else if ( v25 )
          {
            v31 = (char *)v34;
            v50 = v25;
            memcpy(v36, v34, v25);
            v25 = *(_QWORD *)(v16 + 168) + v50;
            *(_QWORD *)(v16 + 168) = v25;
            v35 = *(_BYTE **)(v16 + 160);
            v36 = (_BYTE *)v25;
          }
        }
        if ( v35 == v36 )
          break;
        ++v33;
        *v36 = 32;
        ++*(_QWORD *)(v16 + 168);
        if ( v33 == v32 )
          goto LABEL_21;
      }
      v31 = " ";
      ++v33;
      sub_26240F0(v45, " ", 1);
    }
    while ( v33 != v32 );
LABEL_21:
    v12 = a1;
    a6 = v52;
    v14 = a9;
  }
  if ( (*(_DWORD *)v16)-- == 1 )
  {
    sub_60C330((pthread_mutex_t *)v16, (__int64 (*)())v31, v25, v26);
    operator delete((void *)v16, 0xC0u);
  }
LABEL_24:
  if ( !a10 || (v38 = 3, v14) )
  {
    v53 = 1;
    v55[0] = &v53;
    v55[1] = v12;
    v55[2] = a2;
    v58 = a6;
    v55[3] = a3;
    v61 = v14;
    v56 = a4;
    v57 = a5;
    v59 = a7;
    v60 = a8;
    v62 = a10;
    v63 = a11;
    v64 = a12;
    sub_25A16F0(v54);
    if ( (unsigned __int8)sub_60B400((__int64)v54, (__int64)sub_69E580, (__int64)v55, 0) )
    {
      if ( getenv("LIBCLANG_RESOURCE_USAGE") && a11 )
        sub_623D20(*a11);
      v38 = v53;
    }
    else
    {
      fwrite("libclang: crash detected during indexing source file: {\n", 1u, 0x38u, stderr);
      fprintf(stderr, "  'source_filename' : '%s'\n", a6);
      fwrite("  'command_line_args' : [", 1u, 0x19u, stderr);
      if ( a8 )
      {
        fprintf(stderr, "'%s'", *a7);
        if ( a8 != 1 )
        {
          v40 = a7 + 1;
          do
          {
            ++v40;
            fwrite(", ", 1u, 2u, stderr);
            fprintf(stderr, "'%s'", *(v40 - 1));
          }
          while ( v40 != &a7[a8] );
        }
      }
      fwrite("],\n", 1u, 3u, stderr);
      fwrite("  'unsaved_files' : [", 1u, 0x15u, stderr);
      if ( a10 )
      {
        fprintf(stderr, "('%s', '...', %ld)", *(const char **)v14, *(_QWORD *)(v14 + 16));
        if ( a10 != 1 )
        {
          for ( i = 1; i != a10; ++i )
          {
            fwrite(", ", 1u, 2u, stderr);
            v42 = 3LL * i;
            fprintf(stderr, "('%s', '...', %ld)", *(const char **)(v14 + 8 * v42), *(_QWORD *)(v14 + 8 * v42 + 16));
          }
        }
      }
      v38 = 1;
      fwrite("],\n", 1u, 3u, stderr);
      fprintf(stderr, "  'options' : %d,\n", a12);
      fwrite("}\n", 1u, 2u, stderr);
    }
    sub_25A1710(v54);
  }
  return v38;
}

