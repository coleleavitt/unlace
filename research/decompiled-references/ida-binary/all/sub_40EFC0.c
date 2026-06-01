__int64 __fastcall sub_40EFC0(__int64 a1, void **a2, char a3, __int64 a4)
{
  unsigned __int64 v8; // rbp
  int flags; // eax
  unsigned __int8 byte; // al
  unsigned __int8 v11; // bl
  unsigned int str_type; // eax
  unsigned __int64 v13; // rdx
  size_t v14; // rax
  const char *v15; // rbx
  __m128i v16; // xmm0
  double v17; // xmm0_8
  __m128i v18; // xmm0
  double v19; // xmm0_8
  const __m128i *v20; // rax
  __int64 v21; // rdx
  QT::QChar *v22; // rdi
  const char *v23; // [rsp+0h] [rbp-118h] BYREF
  __int128 v24; // [rsp+8h] [rbp-110h]
  QT::QChar *v25[2]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v26; // [rsp+30h] [rbp-E8h]
  __m128i v27; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-C8h]
  void *v29[4]; // [rsp+60h] [rbp-B8h] BYREF
  void *v30[4]; // [rsp+80h] [rbp-98h] BYREF
  void *v31[4]; // [rsp+A0h] [rbp-78h] BYREF
  void *ptr[11]; // [rsp+C0h] [rbp-58h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( !(unsigned __int8)is_mapped(a2) )
  {
LABEL_2:
    *(_QWORD *)(a1 + 16) = 0;
    *(_OWORD *)a1 = 0;
    return a1;
  }
  v8 = 0;
  flags = get_flags_ex(a2, 0);
  if ( (flags & 0x600) != 0x400 || (flags & 0xF0000000) != 0x50000000 )
  {
    while ( (unsigned __int8)is_mapped((char *)a2 + v8) )
    {
      byte = get_byte((char *)a2 + v8);
      v11 = byte;
      if ( !byte )
      {
        if ( !v8 )
          goto LABEL_2;
        goto LABEL_14;
      }
      if ( (unsigned int)(char)byte <= 0x7F
        && (isprint(byte) || (unsigned __int8)(v11 - 9) <= 1u || v11 == 13)
        && ++v8 != 512 )
      {
        continue;
      }
      goto LABEL_2;
    }
    goto LABEL_2;
  }
  v8 = get_item_end(a2) - (_QWORD)a2;
LABEL_14:
  v23 = nullptr;
  v24 = 0;
  if ( v8 > 0x200 )
    v8 = 512;
  str_type = get_str_type(a2);
  if ( get_strlit_contents(&v23, a2, v8, str_type, 0, 0) > 0 )
  {
    if ( (_QWORD)v24 )
    {
      v14 = v24 - 1;
      v15 = v23;
      v13 = (unsigned __int64)(v24 - 1) >> 63;
    }
    else
    {
      LOBYTE(v13) = 0;
      v14 = 0;
      v15 = &s1;
    }
    if ( !v15 || (_BYTE)v13 )
    {
      v14 = 0;
      if ( v15 )
        v14 = strlen(v15);
    }
    *(double *)v16.m128i_i64 = QT::QString::fromUtf8(v25, v14, v15);
    if ( v26 > 50 )
    {
      QT::QString::QString((QT::QString *)ptr, v25[1], 47);
      v20 = (const __m128i *)QT::QString::append(ptr, "...", 3);
      v16 = _mm_loadu_si128(v20);
      v21 = v20[1].m128i_i64[0];
      v20[1].m128i_i64[0] = 0;
      *v20 = 0;
      v22 = v25[0];
      v26 = v21;
      *(__m128i *)v25 = v16;
      if ( v22 && !_InterlockedSub((volatile signed __int32 *)v22, 1u) )
        free(v22);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
    if ( (a3 & 1) != 0 )
    {
      v17 = QT::QString::fromUtf8(
              v29,
              72,
              "<span style=\"font-family: monospace\"><font color=\"%1\">\"%2\"</font></span>",
              *(double *)v16.m128i_i64);
      sub_40BAA0((__int64)v30, 11, a4);
      QT::QString::arg(v31, v29, v30, 0, 32, v17);
      QT::QString::toHtmlEscaped((QT::QString *)ptr);
      a2 = v31;
      QT::QString::arg(&v27, v31, ptr, 0, 32, v17);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( v31[0] && !_InterlockedSub((volatile signed __int32 *)v31[0], 1u) )
        free(v31[0]);
      if ( v30[0] && !_InterlockedSub((volatile signed __int32 *)v30[0], 1u) )
        free(v30[0]);
      if ( v29[0] && !_InterlockedSub((volatile signed __int32 *)v29[0], 1u) )
        free(v29[0]);
      v18 = _mm_load_si128(&v27);
      *(_QWORD *)(a1 + 16) = v28;
      *(__m128i *)a1 = v18;
    }
    else
    {
      v19 = QT::QString::fromUtf8(ptr, 4, "\"%1\"", *(double *)v16.m128i_i64);
      a2 = ptr;
      QT::QString::arg(a1, ptr, v25, 0, 32, v19);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
    if ( v25[0] && !_InterlockedSub((volatile signed __int32 *)v25[0], 1u) )
      free(v25[0]);
  }
  else
  {
    *(_QWORD *)(a1 + 16) = 0;
    *(_OWORD *)a1 = 0;
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23, (const char *)a2);
  }
  return a1;
}
