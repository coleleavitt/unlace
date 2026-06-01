unsigned __int64 __fastcall sub_77DB0(__int64 a1)
{
  __m128i *v1; // rax
  __m128i si128; // xmm0
  __m128i *v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // rax
  __m128i *v7; // rsi
  __m128i v8; // xmm0
  const char *v9; // rdi
  bool v10; // zf
  __int64 v11; // rdx
  size_t v12; // r8
  __int64 v13; // r9
  __m128i *v14; // [rsp+0h] [rbp-70h]
  __int64 v15; // [rsp+0h] [rbp-70h]
  __int64 v16; // [rsp+8h] [rbp-68h]
  size_t v17; // [rsp+10h] [rbp-60h]
  void *ptr; // [rsp+18h] [rbp-58h] BYREF
  __int128 v19; // [rsp+20h] [rbp-50h]
  unsigned __int64 v20; // [rsp+30h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  *(__m128i *)a1 = _mm_unpacklo_epi64(
                     _mm_loadl_epi64((const __m128i *)&off_163AB0),
                     (__m128i)(unsigned __int64)qword_164AF8);
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v1 = (__m128i *)sub_96080(a1 + 24, 0, 17, 1);
  *(_QWORD *)(a1 + 24) = v1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_130340);
  *(_QWORD *)(a1 + 32) = 17;
  *v1 = si128;
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 16LL) = 0;
  *(_DWORD *)(a1 + 48) = 2;
  *(_QWORD *)(a1 + 8) = &off_1637E8;
  *(_QWORD *)(a1 + 88) = qword_164AF8;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  v3 = (__m128i *)sub_96080(a1 + 104, 0, 17, 1);
  v4 = _mm_load_si128((const __m128i *)&xmmword_130370);
  *(_QWORD *)(a1 + 104) = v3;
  *(_QWORD *)(a1 + 112) = 17;
  *v3 = v4;
  v5 = *(_QWORD *)(a1 + 104);
  ptr = nullptr;
  *(_BYTE *)(v5 + 16) = 0;
  *(_DWORD *)(a1 + 128) = 2;
  *(_QWORD *)(a1 + 88) = &off_163810;
  *(_QWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  v19 = 0;
  if ( (unsigned __int8)sub_77CF0(a1 + 8, (__int64)&ptr) && (unsigned __int8)sub_77CF0(a1 + 88, (__int64)&ptr) )
    goto LABEL_3;
  v7 = (__m128i *)ptr;
  if ( (_QWORD)v19 )
  {
    v11 = v19 + 34;
    v12 = v19 - 1;
    v13 = v19 + 33;
    if ( *((_QWORD *)&v19 + 1) >= (unsigned __int64)(v19 + 34) )
      goto LABEL_13;
    goto LABEL_16;
  }
  if ( *((_QWORD *)&v19 + 1) <= 0x22u )
  {
    v12 = 0;
    v11 = 35;
    v13 = 34;
LABEL_16:
    v17 = v12;
    v16 = v13;
    v15 = v11;
    ptr = (void *)sub_96080(&ptr, ptr, v11, 1);
    v12 = v17;
    v7 = (__m128i *)ptr;
    v13 = v16;
    v11 = v15;
LABEL_13:
    *(_QWORD *)&v19 = v11;
    v7->m128i_i8[v13] = 0;
    v7 = (__m128i *)ptr;
    if ( v12 )
    {
      v14 = (__m128i *)ptr;
      memmove((char *)ptr + 34, ptr, v12);
      v7 = v14;
    }
    goto LABEL_9;
  }
  *(_QWORD *)&v19 = 35;
  *((_BYTE *)ptr + 34) = 0;
LABEL_9:
  v8 = _mm_load_si128((const __m128i *)&xmmword_130380);
  v9 = haystack;
  v7[2].m128i_i16[0] = 8250;
  *v7 = v8;
  v10 = (_QWORD)v19 == 0;
  v7[1] = _mm_load_si128((const __m128i *)&xmmword_130390);
  if ( !v10 )
    v9 = (const char *)ptr;
  perror(v9);
LABEL_3:
  if ( ptr )
  {
    *(_QWORD *)&v19 = 0;
    j__free(ptr);
  }
  return v20 - __readfsqword(0x28u);
}

