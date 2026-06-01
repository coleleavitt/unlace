void *__fastcall clang_getFileContents(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rax
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  _QWORD *v12; // r13
  char v13; // dl
  _BYTE *v14; // rbx
  char v15; // bp
  pthread_mutex_t *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *v21; // rdi
  __int64 v22; // rcx
  _DWORD *v23; // rax
  _DWORD *v24; // rcx
  void *v25[4]; // [rsp+0h] [rbp-58h] BYREF
  char v26; // [rsp+20h] [rbp-38h]

  if ( !a1 )
  {
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    v14 = (_BYTE *)qword_4AD21C8;
    v15 = 0;
    if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
      v15 = *v14 == 50;
    sub_5FF1E0((__int64 *)v25, "clang_getFileContents", 0x15u, v15);
    v16 = (pthread_mutex_t *)v25[0];
    if ( v25[0] )
    {
      v17 = *((_QWORD *)v25[0] + 21);
      if ( (unsigned __int64)(*((_QWORD *)v25[0] + 20) - v17) <= 0x15 )
      {
        sub_26240F0((char *)v25[0] + 136, "called with a bad TU: ", 22);
      }
      else
      {
        *(__m128i *)v17 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
        *(_QWORD *)(v17 + 14) = 0x203A555420646162LL;
        *(&v16[4].__align + 1) += 22;
      }
      sub_5FF0F0((__int64)(&v16[3].__align + 2), "<NULL TU>");
      if ( v16->__lock-- == 1 )
      {
        sub_60C330(v16, (__int64 (*)())"<NULL TU>", v18, v19);
        operator delete(v16, 0xC0u);
        return nullptr;
      }
    }
    return nullptr;
  }
  v4 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 32LL);
  v5 = *(_QWORD *)(a2 + 8);
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v5 & 4) == 0 || !v6 )
        break;
      v5 = *(_QWORD *)(v6 + 8);
      if ( !v5 )
        goto LABEL_14;
    }
  }
  else
  {
LABEL_14:
    v6 = 0;
  }
  v7 = sub_CAB500(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), v6);
  LOBYTE(v25[0]) = 0;
  if ( (unsigned int)(v7 + 1) <= 1 )
    goto LABEL_21;
  if ( v7 >= 0 )
  {
    v8 = v4[23] + 24LL * v7;
    goto LABEL_7;
  }
  v10 = (unsigned int)(-2 - v7);
  v11 = *(_QWORD *)(v4[32] + 8LL * ((unsigned int)(-2 - v7) >> 6));
  if ( _bittest64(&v11, v10) )
  {
    v12 = (_QWORD *)(v4[26] + 8 * ((unsigned __int64)(int)v10 >> 5));
    if ( *v12 )
    {
      v8 = *v12 + 24 * (v10 & 0x1F);
      goto LABEL_7;
    }
    v21 = (__int64 *)(v4[28] & 0xFFFFFFFFFFFFFFF8LL);
    v22 = *v21;
    v21[10] += 768;
    v23 = (_DWORD *)((v22 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v21[1] >= (unsigned __int64)(v23 + 192) && v22 )
    {
      *v21 = (__int64)(v23 + 192);
      v13 = 0;
    }
    else
    {
      v23 = (_DWORD *)sub_5F8390((__int64)v21, 768, 3);
      v13 = (char)v25[0];
    }
    *v12 = v23;
    v24 = v23 + 192;
    do
    {
      *v23 = 0;
      v23 += 6;
      *((_OWORD *)v23 - 1) = 0;
    }
    while ( v23 != v24 );
    v8 = *v12 + 24 * (v10 & 0x1F);
  }
  else
  {
    v8 = sub_CA9380(v4, (unsigned int)v10, v25);
    v13 = (char)v25[0];
  }
  if ( v13 || !v8 )
  {
LABEL_21:
    if ( a3 )
      *a3 = 0;
    return nullptr;
  }
LABEL_7:
  if ( *(char *)(v8 + 3) < 0 )
    goto LABEL_21;
  sub_CA8030(v25, *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL, v4[1], v4[2], 0);
  if ( !v26 )
    goto LABEL_21;
  if ( a3 )
    *a3 = v25[1];
  return v25[0];
}

