__int64 __fastcall clang_saveTranslationUnit(__m128i *a1, const char *a2, int a3)
{
  _BYTE *v6; // r12
  bool v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  void *v10; // rdx
  __m128i si128; // xmm0
  _BYTE *v12; // rax
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 (*v17)(); // rsi
  __int64 v18; // rcx
  __int64 v19; // r15
  _BYTE *v20; // rax
  __int64 v21; // rdx
  size_t v22; // rax
  void *v23; // rdi
  bool v24; // zf
  __int64 v25; // r14
  __int64 v26; // rax
  unsigned int v27; // r15d
  char v28; // al
  unsigned int v29; // ebx
  __int64 v31; // r13
  size_t v32; // rax
  _BYTE *v33; // rbx
  char v34; // bp
  pthread_mutex_t *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // [rsp+0h] [rbp-98h]
  size_t v40; // [rsp+0h] [rbp-98h]
  unsigned int v41; // [rsp+1Ch] [rbp-7Ch] BYREF
  _BYTE v42[32]; // [rsp+20h] [rbp-78h] BYREF
  void *v43[3]; // [rsp+40h] [rbp-58h] BYREF
  int v44; // [rsp+58h] [rbp-40h]

  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  v6 = (_BYTE *)qword_4AD21C8;
  v7 = 0;
  if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
  {
    v7 = *v6 == 50;
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
    goto LABEL_13;
  v43[0] = &qword_18 + 1;
  v8 = operator new(0xC0u);
  *(_DWORD *)v8 = 0;
  *(_QWORD *)(v8 + 8) = v8 + 24;
  v9 = std::string::_M_create();
  v10 = v43[0];
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E400);
  *(_QWORD *)(v8 + 8) = v9;
  *(_QWORD *)(v8 + 24) = v10;
  *(__m128i *)v9 = si128;
  *(__m128i *)(v9 + 9) = _mm_load_si128((const __m128i *)&xmmword_3C7E3F0);
  v12 = v43[0];
  v13 = *(_QWORD *)(v8 + 8);
  v14 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
  *(void **)(v8 + 16) = v43[0];
  v12[v13] = 0;
  *(_QWORD *)(v8 + 48) = v8 + 72;
  *(_BYTE *)(v8 + 40) = v7;
  *(_DWORD *)(v8 + 144) = 2;
  *(_QWORD *)(v8 + 136) = &off_49DA340;
  *(_QWORD *)(v8 + 184) = v8 + 48;
  *(_BYTE *)(v8 + 176) = 0;
  *(_DWORD *)(v8 + 180) = 1;
  *(_QWORD *)(v8 + 168) = 0;
  *(__m128i *)(v8 + 56) = v14;
  *(_OWORD *)(v8 + 152) = 0;
  sub_2623850(v8 + 136, 0, 0, 0, v15, v16);
  ++*(_DWORD *)v8;
  v17 = (__int64 (*)())a1;
  v19 = sub_60BBA0(v8, (__int64)a1);
  v39 = v19 + 136;
  v20 = *(_BYTE **)(v19 + 168);
  if ( (unsigned __int64)v20 >= *(_QWORD *)(v19 + 160) )
  {
    v17 = (__int64 (*)())&qword_20;
    sub_26239D0(v39, 32);
  }
  else
  {
    v21 = (__int64)(v20 + 1);
    *(_QWORD *)(v19 + 168) = v20 + 1;
    *v20 = 32;
  }
  if ( a2 )
  {
    v22 = strlen(a2);
    v23 = *(void **)(v19 + 168);
    v21 = v22;
    if ( *(_QWORD *)(v19 + 160) - (_QWORD)v23 < v22 )
    {
      v17 = (__int64 (*)())a2;
      sub_26240F0(v39, a2, v22);
    }
    else if ( v22 )
    {
      v17 = (__int64 (*)())a2;
      v40 = v22;
      memcpy(v23, a2, v22);
      v21 = v40;
      *(_QWORD *)(v19 + 168) += v40;
    }
  }
  v24 = (*(_DWORD *)v8)-- == 1;
  if ( v24 )
  {
    sub_60C330((pthread_mutex_t *)v8, v17, v21, v18);
    operator delete((void *)v8, 0xC0u);
    if ( a1 )
      goto LABEL_14;
  }
  else
  {
LABEL_13:
    if ( a1 )
    {
LABEL_14:
      v25 = a1->m128i_i64[1];
      nullsub_173(v25 + 2048);
      if ( *(_QWORD *)(v25 + 232) )
      {
        v43[1] = a1;
        v43[0] = &v41;
        v43[2] = (void *)a2;
        v44 = a3;
        v26 = *(_QWORD *)(v25 + 16);
        if ( *(_BYTE *)(v26 + 194) || *(_BYTE *)(v26 + 195) )
        {
          sub_25A16F0(v42);
          v27 = dword_4A8D900;
          if ( !dword_4A8D900 || getenv("LIBCLANG_NOTHREADS") )
            v28 = sub_25A1A00(v42, sub_5F8BD0, v43);
          else
            v28 = sub_25A1AD0(v42, sub_5F8BD0, v43, v27);
          if ( v28 )
          {
            if ( getenv("LIBCLANG_RESOURCE_USAGE") )
              sub_623D20(a1);
            v29 = v41;
          }
          else
          {
            fwrite("libclang: crash detected during AST saving: {\n", 1u, 0x2Eu, stderr);
            fprintf(stderr, "  'filename' : '%s'\n", a2);
            fprintf(stderr, "  'options' : %d,\n", a3);
            v29 = 1;
            fwrite("}\n", 1u, 2u, stderr);
          }
          sub_25A1710(v42);
        }
        else
        {
          if ( (*(_BYTE *)(a1->m128i_i64[0] + 4) & 1) != 0 && !getenv("LIBCLANG_BGPRIO_DISABLE") )
            sub_2648970(1);
          v31 = a1->m128i_i64[1];
          v32 = 0;
          if ( a2 )
            v32 = strlen(a2);
          v41 = (unsigned __int8)sub_FF1DF0(v31, a2, v32);
          if ( getenv("LIBCLANG_RESOURCE_USAGE") )
            sub_623D20(a1);
          v29 = v41;
        }
      }
      else
      {
        v29 = 3;
      }
      nullsub_174(v25 + 2048);
      return v29;
    }
  }
  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  v33 = (_BYTE *)qword_4AD21C8;
  v34 = 0;
  if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
    v34 = *v33 == 50;
  sub_5FF1E0((__int64 *)v43, "clang_saveTranslationUnit", 0x19u, v34);
  v35 = (pthread_mutex_t *)v43[0];
  if ( v43[0] )
  {
    v36 = *((_QWORD *)v43[0] + 21);
    if ( (unsigned __int64)(*((_QWORD *)v43[0] + 20) - v36) <= 0x15 )
    {
      sub_26240F0((char *)v43[0] + 136, "called with a bad TU: ", 22);
    }
    else
    {
      *(__m128i *)v36 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
      *(_QWORD *)(v36 + 14) = 0x203A555420646162LL;
      *(&v35[4].__align + 1) += 22;
    }
    sub_5FF0F0((__int64)(&v35[3].__align + 2), "<NULL TU>");
    v24 = v35->__lock-- == 1;
    if ( v24 )
    {
      sub_60C330(v35, (__int64 (*)())"<NULL TU>", v37, v38);
      operator delete(v35, 0xC0u);
    }
  }
  return 3;
}

