// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall clang_reparseTranslationUnit(__int64 a1, int a2, __int64 a3, int a4)
{
  bool v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i si128; // xmm0
  __int64 v11; // rax
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v19; // r15d
  unsigned int v21; // r14d
  char v22; // al
  _BYTE *v23; // [rsp+8h] [rbp-90h]
  unsigned int v24; // [rsp+1Ch] [rbp-7Ch] BYREF
  _BYTE v25[32]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v26[3]; // [rsp+40h] [rbp-58h] BYREF
  int v27; // [rsp+58h] [rbp-40h]
  int v28; // [rsp+5Ch] [rbp-3Ch]

  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  v6 = 0;
  if ( qword_4AD21C8 && (v23 = (_BYTE *)qword_4AD21C8, strlen((const char *)qword_4AD21C8) == 1) )
  {
    v6 = *v23 == 50;
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
    v26[0] = 28;
    v7 = operator new(0xC0u);
    *(_DWORD *)v7 = 0;
    *(_QWORD *)(v7 + 8) = v7 + 24;
    v8 = std::string::_M_create();
    v9 = v26[0];
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E3E0);
    *(_QWORD *)(v7 + 8) = v8;
    *(_QWORD *)(v7 + 24) = v9;
    *(__m128i *)v8 = si128;
    *(__m128i *)(v8 + 12) = _mm_load_si128((const __m128i *)&xmmword_3C7E3F0);
    v11 = v26[0];
    v12 = *(_QWORD *)(v7 + 8);
    v13 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
    *(_QWORD *)(v7 + 16) = v26[0];
    *(_BYTE *)(v12 + v11) = 0;
    *(_QWORD *)(v7 + 48) = v7 + 72;
    *(_BYTE *)(v7 + 40) = v6;
    *(__m128i *)(v7 + 56) = v13;
    *(_QWORD *)(v7 + 136) = &off_49DA340;
    *(_QWORD *)(v7 + 184) = v7 + 48;
    *(_DWORD *)(v7 + 144) = 2;
    *(_BYTE *)(v7 + 176) = 0;
    *(_DWORD *)(v7 + 180) = 1;
    *(_QWORD *)(v7 + 168) = 0;
    *(_OWORD *)(v7 + 152) = 0;
    sub_2623850(v7 + 136, 0, 0, 0, v14, v15);
    ++*(_DWORD *)v7;
    sub_60BBA0(v7, a1);
    if ( (*(_DWORD *)v7)-- == 1 )
    {
      sub_60C330((pthread_mutex_t *)v7, (__int64 (*)())a1, v16, v17);
      operator delete((void *)v7, 0xC0u);
    }
  }
  if ( !a2 || (v19 = 3, a3) )
  {
    v26[2] = a3;
    v26[0] = &v24;
    v27 = a2;
    v28 = a4;
    v26[1] = a1;
    sub_25A16F0(v25);
    v21 = dword_4A8D900;
    if ( !dword_4A8D900 || getenv("LIBCLANG_NOTHREADS") )
      v22 = sub_25A1A00(v25, sub_627A90, v26);
    else
      v22 = sub_25A1AD0(v25, sub_627A90, v26, v21);
    if ( v22 )
    {
      if ( getenv("LIBCLANG_RESOURCE_USAGE") )
        sub_623D20((__m128i *)a1);
      v19 = v24;
    }
    else
    {
      fwrite("libclang: crash detected during reparsing\n", 1u, 0x2Au, stderr);
      if ( !a1 )
      {
        LOBYTE(elf_gnu_hash_bucket[211]) &= ~1u;
        BUG();
      }
      v19 = 2;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 2036LL) |= 1u;
    }
    sub_25A1710(v25);
  }
  return v19;
}

