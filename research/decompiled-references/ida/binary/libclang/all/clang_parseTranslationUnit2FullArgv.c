__int64 __fastcall clang_parseTranslationUnit2FullArgv(
        __int64 a1,
        const char *a2,
        const char **a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        __m128i **a8)
{
  bool v11; // r14
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  char *v15; // rsi
  __m128i si128; // xmm0
  __m128i v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  size_t v22; // rdx
  _WORD *v23; // r14
  __int64 v24; // r12
  unsigned __int64 v25; // r12
  size_t v26; // rax
  __int64 v27; // rcx
  const char **v28; // rbx
  const char **v29; // r12
  const char *v30; // r14
  _BYTE *v31; // r13
  _BYTE *v32; // rbp
  unsigned int v34; // r14d
  unsigned int v36; // r14d
  char v37; // al
  const char **v38; // r15
  const char **v39; // rbp
  unsigned int v40; // ebp
  __int64 v41; // rax
  __int64 v42; // r12
  _BYTE *v43; // [rsp+0h] [rbp-E8h]
  __int64 v44; // [rsp+0h] [rbp-E8h]
  size_t v46; // [rsp+20h] [rbp-C8h]
  size_t v47; // [rsp+20h] [rbp-C8h]
  const char **v48; // [rsp+28h] [rbp-C0h]
  int v50; // [rsp+34h] [rbp-B4h]
  __int64 v51; // [rsp+38h] [rbp-B0h]
  int v52; // [rsp+4Ch] [rbp-9Ch] BYREF
  _BYTE v53[32]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v54[4]; // [rsp+70h] [rbp-78h] BYREF
  int v55; // [rsp+90h] [rbp-58h]
  __int64 v56; // [rsp+98h] [rbp-50h]
  int v57; // [rsp+A0h] [rbp-48h]
  int v58; // [rsp+A4h] [rbp-44h]
  __m128i **v59; // [rsp+A8h] [rbp-40h]

  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  v11 = 0;
  if ( qword_4AD21C8 && (v43 = (_BYTE *)qword_4AD21C8, strlen((const char *)qword_4AD21C8) == 1) )
  {
    v11 = *v43 == 50;
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
  v54[0] = 35;
  v12 = operator new(0xC0u);
  *(_DWORD *)v12 = 0;
  *(_QWORD *)(v12 + 8) = v12 + 24;
  v13 = std::string::_M_create();
  v14 = v54[0];
  v15 = nullptr;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E410);
  *(_QWORD *)(v12 + 8) = v13;
  *(_QWORD *)(v12 + 24) = v14;
  *(__m128i *)v13 = si128;
  *(__m128i *)(v13 + 16) = _mm_load_si128((const __m128i *)&xmmword_3C7E420);
  v17 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
  *(_DWORD *)(v13 + 31) = 1986490945;
  v18 = v54[0];
  v19 = *(_QWORD *)(v12 + 8);
  *(_QWORD *)(v12 + 16) = v54[0];
  *(_BYTE *)(v19 + v18) = 0;
  *(_QWORD *)(v12 + 48) = v12 + 72;
  *(_BYTE *)(v12 + 40) = v11;
  *(__m128i *)(v12 + 56) = v17;
  *(_QWORD *)(v12 + 136) = &off_49DA340;
  *(_QWORD *)(v12 + 184) = v12 + 48;
  *(_DWORD *)(v12 + 144) = 2;
  *(_BYTE *)(v12 + 176) = 0;
  *(_DWORD *)(v12 + 180) = 1;
  *(_QWORD *)(v12 + 168) = 0;
  *(_OWORD *)(v12 + 152) = 0;
  v44 = v12 + 136;
  sub_2623850(v12 + 136, 0, 0, 0, v20, v21);
  v23 = *(_WORD **)(v12 + 168);
  v24 = *(_QWORD *)(v12 + 160);
  ++*(_DWORD *)v12;
  v25 = v24 - (_QWORD)v23;
  if ( a2 )
  {
    v26 = strlen(a2);
    v22 = v26;
    if ( v25 < v26 )
    {
      v15 = (char *)a2;
      sub_26240F0(v44, a2, v26);
      v23 = *(_WORD **)(v12 + 168);
      if ( *(_QWORD *)(v12 + 160) - (_QWORD)v23 > 1u )
        goto LABEL_11;
LABEL_40:
      v15 = ": ";
      sub_26240F0(v44, ": ", 2);
      goto LABEL_12;
    }
    if ( v26 )
    {
      v15 = (char *)a2;
      v47 = v26;
      memcpy(v23, a2, v26);
      v42 = *(_QWORD *)(v12 + 160);
      v22 = *(_QWORD *)(v12 + 168) + v47;
      *(_QWORD *)(v12 + 168) = v22;
      v23 = (_WORD *)v22;
      v25 = v42 - v22;
    }
  }
  if ( v25 <= 1 )
    goto LABEL_40;
LABEL_11:
  v27 = 8250;
  *v23 = 8250;
  *(_QWORD *)(v12 + 168) += 2LL;
LABEL_12:
  if ( a4 )
  {
    v51 = a5;
    v28 = a3;
    v48 = a3;
    v29 = &a3[a4];
    v50 = a4;
    do
    {
      while ( 1 )
      {
        v30 = *v28;
        v31 = *(_BYTE **)(v12 + 160);
        v32 = *(_BYTE **)(v12 + 168);
        if ( *v28 )
        {
          v22 = strlen(*v28);
          if ( v31 - v32 < v22 )
          {
            v15 = (char *)v30;
            sub_26240F0(v44, v30, v22);
            v31 = *(_BYTE **)(v12 + 160);
            v32 = *(_BYTE **)(v12 + 168);
          }
          else if ( v22 )
          {
            v15 = (char *)v30;
            v46 = v22;
            memcpy(v32, v30, v22);
            v22 = *(_QWORD *)(v12 + 168) + v46;
            *(_QWORD *)(v12 + 168) = v22;
            v31 = *(_BYTE **)(v12 + 160);
            v32 = (_BYTE *)v22;
          }
        }
        if ( v31 == v32 )
          break;
        ++v28;
        *v32 = 32;
        ++*(_QWORD *)(v12 + 168);
        if ( v28 == v29 )
          goto LABEL_21;
      }
      v15 = " ";
      ++v28;
      sub_26240F0(v44, " ", 1);
    }
    while ( v28 != v29 );
LABEL_21:
    a3 = v48;
    a4 = v50;
    a5 = v51;
  }
  if ( (*(_DWORD *)v12)-- == 1 )
  {
    sub_60C330((pthread_mutex_t *)v12, (__int64 (*)())v15, v22, v27);
    operator delete((void *)v12, 0xC0u);
  }
LABEL_24:
  if ( !a6 || (v34 = 3, a5) )
  {
    v52 = 1;
    v54[0] = &v52;
    v54[3] = a3;
    v54[1] = a1;
    v55 = a4;
    v54[2] = a2;
    v56 = a5;
    v57 = a6;
    v58 = a7;
    v59 = a8;
    sub_25A16F0(v53);
    v36 = dword_4A8D900;
    if ( !dword_4A8D900 || getenv("LIBCLANG_NOTHREADS") )
      v37 = sub_25A1A00(v53, sub_627A40, v54);
    else
      v37 = sub_25A1AD0(v53, sub_627A40, v54, v36);
    if ( v37 )
    {
      if ( getenv("LIBCLANG_RESOURCE_USAGE") && a8 )
        sub_623D20(*a8);
      v34 = v52;
    }
    else
    {
      fwrite("libclang: crash detected during parsing: {\n", 1u, 0x2Bu, stderr);
      fprintf(stderr, "  'source_filename' : '%s'\n", a2);
      fwrite("  'command_line_args' : [", 1u, 0x19u, stderr);
      if ( a4 )
      {
        fprintf(stderr, "'%s'", *a3);
        if ( a4 != 1 )
        {
          v38 = a3 + 1;
          v39 = &a3[a4];
          do
          {
            ++v38;
            fwrite(", ", 1u, 2u, stderr);
            fprintf(stderr, "'%s'", *(v38 - 1));
          }
          while ( v38 != v39 );
        }
      }
      fwrite("],\n", 1u, 3u, stderr);
      fwrite("  'unsaved_files' : [", 1u, 0x15u, stderr);
      if ( a6 )
      {
        fprintf(stderr, "('%s', '...', %ld)", *(const char **)a5, *(_QWORD *)(a5 + 16));
        if ( a6 != 1 )
        {
          v40 = 1;
          do
          {
            fwrite(", ", 1u, 2u, stderr);
            v41 = 3LL * v40++;
            fprintf(stderr, "('%s', '...', %ld)", *(const char **)(a5 + 8 * v41), *(_QWORD *)(a5 + 8 * v41 + 16));
          }
          while ( a6 != v40 );
        }
      }
      fwrite("],\n", 1u, 3u, stderr);
      fprintf(stderr, "  'options' : %d,\n", a7);
      v34 = 2;
      fwrite("}\n", 1u, 2u, stderr);
    }
    sub_25A1710(v53);
  }
  return v34;
}

