__int64 __fastcall sub_319840(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  const char *v13; // rcx
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  const char *v17; // rsi
  const char *v18; // rax
  const char *v19; // rbp
  size_t v20; // rax
  size_t v21; // r12
  __int64 v23; // r15
  unsigned __int64 v24; // rbp
  const char *v25; // r12
  void *v26; // rdi
  size_t v27; // r14
  const char *v28; // rcx
  __int64 v29; // rax
  char v30; // [rsp-8h] [rbp-1098h]
  __m128i v33; // [rsp+18h] [rbp-1078h] BYREF
  const char *v34; // [rsp+28h] [rbp-1068h] BYREF
  __int128 v35; // [rsp+30h] [rbp-1060h]
  _BYTE v36[4104]; // [rsp+48h] [rbp-1048h] BYREF
  unsigned __int64 v37; // [rsp+1050h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v35 = 0;
  v34 = nullptr;
  if ( a3 )
  {
    v13 = &s1;
    if ( *(_QWORD *)(a3 + 8) )
      v13 = *(const char **)a3;
    qsnprintf(v36, 4096, "%s.%s", v13, *(const char **)(*(_QWORD *)(a3 + 24) + 24LL));
  }
  else
  {
    a6 = (__m128)(unsigned __int64)&v34;
    v33 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&browse_script, (__m128i)(unsigned __int64)&v34);
    for_all_extlangs(&v33, 0);
    v28 = &s1;
    if ( (_QWORD)v35 )
      v28 = v34;
    qsnprintf(v36, 4096, "Script files|%s", v28);
  }
  if ( unk_8D0B19 )
  {
    if ( !(_BYTE)byte_8CDAD8 && __cxa_guard_acquire(&byte_8CDAD8) )
    {
      qword_8CDAE0 = 0;
      xmmword_8CDAE8 = 0;
      __cxa_atexit((void (*)(void *))sub_176A30, &qword_8CDAE0, &off_85BC80);
      __cxa_guard_release(&byte_8CDAD8);
    }
    if ( (_QWORD)xmmword_8CDAE8 || (get_ida_subdirs(&qword_8CDAE0, "idc", 0), (_QWORD)xmmword_8CDAE8) )
    {
      v23 = 0;
      v24 = 0;
      while ( 1 )
      {
        v25 = &s1;
        if ( *(_QWORD *)(v23 + qword_8CDAE0 + 8) )
          v25 = *(const char **)(v23 + qword_8CDAE0);
        if ( (unsigned __int8)qisdir(v25) )
          break;
        ++v24;
        v23 += 24;
        if ( v24 >= (unsigned __int64)xmmword_8CDAE8 )
          goto LABEL_6;
      }
      if ( v25 )
        qstrncpy(&unk_8CDB00, v25, 4096);
    }
  }
LABEL_6:
  *(_QWORD *)a1 = 0;
  v17 = (const char *)&unk_8CDB00;
  *(_OWORD *)(a1 + 8) = 0;
  v18 = (const char *)sub_17CD60(
                        a2,
                        (int)&unk_8CDB00,
                        (int)"FILTER %s\n%s",
                        (__int64)v36,
                        a4,
                        v14,
                        (__m128)0LL,
                        a6,
                        a7,
                        a8,
                        v15,
                        v16,
                        a11,
                        a12,
                        v30);
  v19 = v18;
  if ( v18 )
  {
    v20 = strlen(v18);
    v21 = v20;
    if ( v20 )
    {
      v26 = *(void **)a1;
      v27 = v20 + 1;
      if ( *(_QWORD *)(a1 + 16) < v20 + 1 )
      {
        v29 = qvector_reserve(a1, *(_QWORD *)a1, v20 + 1, 1);
        *(_QWORD *)a1 = v29;
        v26 = (void *)v29;
      }
      *(_QWORD *)(a1 + 8) = v27;
      memmove(v26, v19, v21);
      *(_BYTE *)(*(_QWORD *)a1 + v21) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
    }
    v17 = (_BYTE *)&stru_1000;
    qdirname(&unk_8CDB00, 4096, v19);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34, v17);
  }
  return a1;
}
