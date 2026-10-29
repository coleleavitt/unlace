__int64 *__fastcall sub_5FF1E0(__int64 *a1, _BYTE *a2, size_t a3, char a4)
{
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  size_t v10; // rax
  void *v11; // rdi
  __m128i si128; // xmm0
  __int64 v14; // rax

  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  if ( !qword_4AD21C8 )
  {
    *a1 = 0;
    return a1;
  }
  v7 = operator new(0xC0u);
  v10 = a3;
  v11 = (void *)(v7 + 24);
  *(_DWORD *)v7 = 0;
  *(_QWORD *)(v7 + 8) = v7 + 24;
  if ( !a2 && a3 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  if ( a3 > 0xF )
  {
    v14 = std::string::_M_create();
    *(_QWORD *)(v7 + 8) = v14;
    v11 = (void *)v14;
    *(_QWORD *)(v7 + 24) = a3;
    goto LABEL_17;
  }
  if ( a3 != 1 )
  {
    if ( !a3 )
      goto LABEL_7;
LABEL_17:
    memcpy(v11, a2, a3);
    v10 = a3;
    v11 = *(void **)(v7 + 8);
    goto LABEL_7;
  }
  *(_BYTE *)(v7 + 24) = *a2;
LABEL_7:
  *(_QWORD *)(v7 + 16) = v10;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
  *((_BYTE *)v11 + v10) = 0;
  *(_QWORD *)(v7 + 48) = v7 + 72;
  *(_BYTE *)(v7 + 40) = a4;
  *(__m128i *)(v7 + 56) = si128;
  *(_QWORD *)(v7 + 136) = &off_49DA340;
  *(_DWORD *)(v7 + 144) = 2;
  *(_BYTE *)(v7 + 176) = 0;
  *(_DWORD *)(v7 + 180) = 1;
  *(_QWORD *)(v7 + 168) = 0;
  *(_QWORD *)(v7 + 184) = v7 + 48;
  *(_OWORD *)(v7 + 152) = 0;
  sub_2623850(v7 + 136, 0, 0, 0, v8, v9);
  ++*(_DWORD *)v7;
  *a1 = v7;
  return a1;
}

