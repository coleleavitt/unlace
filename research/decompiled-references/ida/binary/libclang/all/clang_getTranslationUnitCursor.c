__int64 __fastcall clang_getTranslationUnitCursor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r13
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // r12
  __int64 v12; // r14
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  _BYTE *v17; // r14
  bool v18; // r13
  __int64 v19; // rbp
  __int64 v20; // rax
  __m128i si128; // xmm0
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v31; // rdi
  int v32; // eax

  if ( a2 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 80LL) + 2112LL) + 80LL);
    v8 = *(_QWORD *)(v7 + 72);
    v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v8 & 1) == 0 )
    {
      if ( v9 <= 3 )
      {
        v11 = nullptr;
        goto LABEL_10;
      }
      v10 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
      v11 = v10;
      if ( (v9 & 2) == 0 )
      {
LABEL_10:
        sub_639160(a1, v11, a2, 0, 1, a6);
        return a1;
      }
      v12 = v10[2275];
      if ( v12 )
      {
        v13 = v10[274];
        v10[284] += 24LL;
        v14 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v11[275] >= v14 + 24 && v13 )
          v11[274] = v14 + 24;
        else
          v14 = sub_5F8390((__int64)(v11 + 274), 24, 3);
        *(_QWORD *)v14 = v12;
        *(_DWORD *)(v14 + 8) = 0;
        *(_QWORD *)(v14 + 16) = v7;
        *(_QWORD *)(v7 + 72) = v14 | 5;
        v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
        v11 = (_QWORD *)v15;
        goto LABEL_26;
      }
      v9 = v7 & 0xFFFFFFFFFFFFFFFALL;
      v8 = v7 & 0xFFFFFFFFFFFFFFFALL | 1;
      *(_QWORD *)(v7 + 72) = v8;
    }
    v15 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    v11 = (_QWORD *)v15;
    if ( v9 && (v9 & 4) != 0 )
    {
LABEL_26:
      if ( v15 )
      {
        v31 = *v11;
        v32 = *(_DWORD *)(*v11 + 12LL);
        if ( *((_DWORD *)v11 + 2) != v32 )
        {
          *((_DWORD *)v11 + 2) = v32;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 144LL))(v31, v7);
        }
        v11 = (_QWORD *)v11[2];
      }
      goto LABEL_10;
    }
    goto LABEL_10;
  }
  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  v17 = (_BYTE *)qword_4AD21C8;
  v18 = 0;
  if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
    v18 = *v17 == 50;
  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  if ( qword_4AD21C8 )
  {
    v19 = operator new(0xC0u);
    *(_DWORD *)v19 = 0;
    *(_QWORD *)(v19 + 8) = v19 + 24;
    v20 = std::string::_M_create();
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E2C0);
    *(_QWORD *)(v19 + 8) = v20;
    *(_QWORD *)(v19 + 24) = 30;
    *(__m128i *)v20 = si128;
    *(__m128i *)(v20 + 14) = _mm_load_si128((const __m128i *)&xmmword_3C7E300);
    v22 = *(_QWORD *)(v19 + 8);
    v23 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
    *(_QWORD *)(v19 + 16) = 30;
    *(_BYTE *)(v22 + 30) = 0;
    *(_QWORD *)(v19 + 48) = v19 + 72;
    *(_BYTE *)(v19 + 40) = v18;
    *(__m128i *)(v19 + 56) = v23;
    *(_QWORD *)(v19 + 136) = &off_49DA340;
    *(_QWORD *)(v19 + 184) = v19 + 48;
    *(_DWORD *)(v19 + 144) = 2;
    *(_BYTE *)(v19 + 176) = 0;
    *(_DWORD *)(v19 + 180) = 1;
    *(_QWORD *)(v19 + 168) = 0;
    *(_OWORD *)(v19 + 152) = 0;
    sub_2623850(v19 + 136, 0, 0, 0, v24, v25);
    v26 = *(_QWORD *)(v19 + 168);
    v27 = *(_QWORD *)(v19 + 160);
    ++*(_DWORD *)v19;
    if ( (unsigned __int64)(v27 - v26) <= 0x15 )
    {
      sub_26240F0(v19 + 136, "called with a bad TU: ", 22);
    }
    else
    {
      *(__m128i *)v26 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
      *(_QWORD *)(v26 + 14) = 0x203A555420646162LL;
      *(_QWORD *)(v19 + 168) += 22LL;
    }
    sub_5FF0F0(v19 + 136, "<NULL TU>");
    if ( (*(_DWORD *)v19)-- == 1 )
    {
      sub_60C330((pthread_mutex_t *)v19, (__int64 (*)())"<NULL TU>", v28, v29);
      operator delete((void *)v19, 0xC0u);
    }
  }
  sub_638F50(a1, 70, 0);
  return a1;
}

