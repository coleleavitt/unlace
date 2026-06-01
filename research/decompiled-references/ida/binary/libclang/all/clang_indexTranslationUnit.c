__int64 __fastcall clang_indexTranslationUnit(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 (*a6)())
{
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  __m128i si128; // xmm0
  __int64 v12; // rax
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v20; // al
  unsigned int v21; // ebp
  bool v25; // [rsp+17h] [rbp-A1h]
  _BYTE *v26; // [rsp+18h] [rbp-A0h]
  unsigned int v27; // [rsp+2Ch] [rbp-8Ch] BYREF
  _BYTE v28[32]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v29[4]; // [rsp+50h] [rbp-68h] BYREF
  int v30; // [rsp+70h] [rbp-48h]
  int v31; // [rsp+74h] [rbp-44h]
  __int64 (*v32)(); // [rsp+78h] [rbp-40h]

  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  v25 = 0;
  if ( qword_4AD21C8 && (v26 = (_BYTE *)qword_4AD21C8, strlen((const char *)qword_4AD21C8) == 1) )
  {
    v25 = *v26 == 50;
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
    v29[0] = 26;
    v8 = operator new(0xC0u);
    *(_DWORD *)v8 = 0;
    *(_QWORD *)(v8 + 8) = v8 + 24;
    v9 = std::string::_M_create();
    v10 = v29[0];
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E5B0);
    *(_QWORD *)(v8 + 8) = v9;
    *(_QWORD *)(v8 + 24) = v10;
    *(__m128i *)v9 = si128;
    *(__m128i *)(v9 + 10) = _mm_load_si128((const __m128i *)&xmmword_3C7E5F0);
    v12 = v29[0];
    v13 = *(_QWORD *)(v8 + 8);
    v14 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
    *(_QWORD *)(v8 + 16) = v29[0];
    *(_BYTE *)(v13 + v12) = 0;
    *(_DWORD *)(v8 + 144) = 2;
    *(_BYTE *)(v8 + 40) = v25;
    *(_QWORD *)(v8 + 48) = v8 + 72;
    *(_BYTE *)(v8 + 176) = 0;
    *(__m128i *)(v8 + 56) = v14;
    *(_QWORD *)(v8 + 136) = &off_49DA340;
    *(_QWORD *)(v8 + 184) = v8 + 48;
    *(_DWORD *)(v8 + 180) = 1;
    *(_QWORD *)(v8 + 168) = 0;
    *(_OWORD *)(v8 + 152) = 0;
    sub_2623850(v8 + 136, 0, 0, 0, v15, v16);
    ++*(_DWORD *)v8;
    sub_60BBA0(v8, (__int64)a6);
    if ( (*(_DWORD *)v8)-- == 1 )
    {
      sub_60C330((pthread_mutex_t *)v8, a6, v17, v18);
      operator delete((void *)v8, 0xC0u);
    }
  }
  v32 = a6;
  v29[0] = &v27;
  v29[1] = a1;
  v30 = a4;
  v29[2] = a2;
  v31 = a5;
  v29[3] = a3;
  sub_25A16F0(v28);
  v20 = sub_60B400((__int64)v28, (__int64)sub_697A80, (__int64)v29, 0);
  v21 = v27;
  if ( !v20 )
  {
    v21 = 1;
    fwrite("libclang: crash detected during indexing TU\n", 1u, 0x2Cu, stderr);
  }
  sub_25A1710(v28);
  return v21;
}

