void __fastcall clang_tokenize(
        __int64 a1,
        _QWORD *a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        unsigned __int64 a8)
{
  _BYTE *v10; // r13
  bool v11; // r15
  __int64 v12; // rax
  __m128i si128; // xmm0
  pthread_mutex_t *v14; // r13
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 (*v17)(); // rsi
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // r15
  _BYTE *v22; // rax
  int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  _QWORD *v27; // rbp
  _QWORD *v28; // r13
  _BYTE *v29; // rbx
  char v30; // bp
  pthread_mutex_t *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v36; // ebp
  void *v37; // rdi
  void *v38; // rax
  _BYTE *v39; // rbx
  void *ptr; // [rsp+20h] [rbp-348h] BYREF
  __int64 v41; // [rsp+28h] [rbp-340h]
  _BYTE v42[824]; // [rsp+30h] [rbp-338h] BYREF

  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  v10 = (_BYTE *)qword_4AD21C8;
  v11 = 0;
  if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
  {
    v11 = *v10 == 50;
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
  if ( qword_4AD21C8 )
  {
    v12 = operator new(0xC0u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
    v14 = (pthread_mutex_t *)v12;
    *(_DWORD *)v12 = 0;
    *(_QWORD *)(v12 + 8) = v12 + 24;
    *(_QWORD *)(v12 + 48) = v12 + 72;
    strcpy((char *)(v12 + 24), "clang_tokenize");
    *(_QWORD *)(v12 + 136) = &off_49DA340;
    *(_BYTE *)(v12 + 40) = v11;
    *(_QWORD *)(v12 + 184) = v12 + 48;
    *(_QWORD *)(v12 + 16) = 14;
    *(_DWORD *)(v12 + 144) = 2;
    *(_BYTE *)(v12 + 176) = 0;
    *(_DWORD *)(v12 + 180) = 1;
    *(_QWORD *)(v12 + 168) = 0;
    *(__m128i *)(v12 + 56) = si128;
    *(_OWORD *)(v12 + 152) = 0;
    sub_2623850(v12 + 136, 0, 0, 0, v15, v16);
    ++v14->__lock;
    v17 = (__int64 (*)())a1;
    v21 = sub_60BBA0((__int64)v14, a1);
    v22 = *(_BYTE **)(v21 + 168);
    if ( (unsigned __int64)v22 >= *(_QWORD *)(v21 + 160) )
    {
      v17 = (__int64 (*)())&qword_20;
      sub_26239D0(v21 + 136, 32);
    }
    else
    {
      v23 = (_DWORD)v22 + 1;
      *(_QWORD *)(v21 + 168) = v22 + 1;
      *v22 = 32;
    }
    sub_60BFD0(v21, (int)v17, v23, v18, v19, v20, (__int128)_mm_loadu_si128((const __m128i *)&a7), a8);
    v26 = v14->__lock - 1;
    v14->__lock = v26;
    if ( !v26 )
    {
      sub_60C330(v14, v17, v24, v25);
      operator delete(v14, 0xC0u);
    }
  }
  if ( a2 )
    *a2 = 0;
  if ( !a3 )
  {
    if ( a1 )
      return;
    goto LABEL_26;
  }
  *a3 = 0;
  if ( !a1 )
  {
LABEL_26:
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    v29 = (_BYTE *)qword_4AD21C8;
    v30 = 0;
    if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
      v30 = *v29 == 50;
    sub_5FF1E0((__int64 *)&ptr, "clang_tokenize", 0xEu, v30);
    v31 = (pthread_mutex_t *)ptr;
    if ( ptr )
    {
      v32 = *((_QWORD *)ptr + 21);
      if ( (unsigned __int64)(*((_QWORD *)ptr + 20) - v32) <= 0x15 )
      {
        sub_26240F0((char *)ptr + 136, "called with a bad TU: ", 22);
      }
      else
      {
        *(__m128i *)v32 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
        *(_QWORD *)(v32 + 14) = 0x203A555420646162LL;
        *(&v31[4].__align + 1) += 22;
      }
      sub_5FF0F0((__int64)(&v31[3].__align + 2), "<NULL TU>");
      if ( v31->__lock-- == 1 )
      {
        sub_60C330(v31, (__int64 (*)())"<NULL TU>", v33, v34);
        operator delete(v31, 0xC0u);
      }
    }
    return;
  }
  v27 = *(_QWORD **)(a1 + 8);
  if ( v27 && a2 )
  {
    v28 = v27 + 256;
    nullsub_173(v27 + 256);
    if ( !(_DWORD)a8 || !HIDWORD(a8) )
      goto LABEL_18;
    ptr = v42;
    v41 = 0x2000000000LL;
    sub_621320(v27, a8, (__int64)&ptr);
    v36 = v41;
    if ( (_DWORD)v41 )
    {
      v38 = malloc(24LL * (unsigned int)v41);
      if ( !v38 )
        sub_25AA9F0("Allocation failed");
      *a2 = v38;
      v39 = ptr;
      memmove(v38, ptr, 24LL * v36);
      *a3 = v36;
      if ( v39 == v42 )
        goto LABEL_18;
      v37 = v39;
    }
    else
    {
      v37 = ptr;
      if ( ptr == v42 )
      {
LABEL_18:
        nullsub_174(v28);
        return;
      }
    }
    free(v37);
    goto LABEL_18;
  }
}

