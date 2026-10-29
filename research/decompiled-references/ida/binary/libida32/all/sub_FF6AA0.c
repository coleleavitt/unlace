__m128i *__fastcall sub_FF6AA0(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        const __m128i s2,
        __int64 a8)
{
  __int64 v11; // rbx
  const char *v12; // r15
  const char *v13; // r12
  unsigned int v14; // r13d
  unsigned int v15; // r14d
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  _BYTE *v18; // rax
  __int64 v19; // rax
  _BYTE *v20; // rdx
  int v21; // eax
  int v22; // r8d
  int v23; // r9d
  void *v24; // rdx
  int v25; // eax
  int v26; // r8d
  int v27; // r9d
  __m128i v28; // xmm1
  _BYTE *v29; // rax
  __m128i si128; // xmm2
  size_t v32; // rax
  _BYTE *v33; // rdi
  size_t v34; // r15
  unsigned __int64 v35; // rax
  __m128i v36; // xmm0
  __int64 v37; // rax
  void *v38; // rdx
  __int64 v39; // rax
  _BYTE *v40; // rax
  __m128i v41; // [rsp+0h] [rbp-78h] BYREF
  __int64 v42; // [rsp+10h] [rbp-68h]
  char *s1[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v44; // [rsp+30h] [rbp-48h]

  v11 = a2;
  if ( (a4 & 0x80000000) != 0 )
  {
    v21 = sub_FFD560(a3, a4);
    sub_FF6AA0((int)s1, a2, a3, v21, v22, v23, (char *)s2.m128i_i64[0], s2.m128i_i32[2], a8);
    v24 = *(void **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)v24 > 0xAu )
    {
      qmemcpy(v24, " <Spelling=", 11);
      *(_QWORD *)(a2 + 32) += 11LL;
    }
    else
    {
      sub_22581D0(a2, " <Spelling=", 11);
    }
    v25 = sub_FFDE50(a3, a4);
    sub_FF6AA0((int)&v41, a2, a3, v25, v26, v27, s1[0], (int)s1[1], v44);
    v28 = _mm_loadu_si128(&v41);
    v44 = v42;
    v29 = *(_BYTE **)(a2 + 32);
    *(__m128i *)s1 = v28;
    if ( (unsigned __int64)v29 >= *(_QWORD *)(a2 + 24) )
    {
      sub_2257CD0(a2, 62);
    }
    else
    {
      *(_QWORD *)(a2 + 32) = v29 + 1;
      *v29 = 62;
    }
    si128 = _mm_load_si128((const __m128i *)s1);
    a1[1].m128i_i64[0] = v44;
    *a1 = si128;
  }
  else
  {
    v12 = (const char *)s2.m128i_i64[0];
    sub_FFEBC0(s1, a3, a4, 1);
    v13 = s1[0];
    v14 = HIDWORD(s1[1]);
    v15 = v44;
    if ( s1[0] )
    {
      if ( v12 && !strcmp(s1[0], v12) )
      {
        v16 = *(_QWORD *)(a2 + 32);
        v17 = *(_QWORD *)(a2 + 24) - v16;
        if ( s2.m128i_i32[3] == v14 )
        {
          if ( v17 > 2 )
          {
            *(_BYTE *)(v16 + 2) = 108;
            *(_WORD *)v16 = 28515;
            v40 = (_BYTE *)(*(_QWORD *)(a2 + 32) + 3LL);
            *(_QWORD *)(a2 + 32) = v40;
          }
          else
          {
            v11 = sub_22581D0(a2, "col", 3);
            v40 = *(_BYTE **)(v11 + 32);
          }
          if ( *(_QWORD *)(v11 + 24) <= (unsigned __int64)v40 )
          {
            v11 = sub_2257CD0(v11, 58);
          }
          else
          {
            *(_QWORD *)(v11 + 32) = v40 + 1;
            *v40 = 58;
          }
          sub_2257BD0(v11, v15);
          goto LABEL_26;
        }
        if ( v17 > 3 )
        {
          *(_DWORD *)v16 = 1701734764;
          v18 = (_BYTE *)(*(_QWORD *)(a2 + 32) + 4LL);
          *(_QWORD *)(a2 + 32) = v18;
        }
        else
        {
          v11 = sub_22581D0(a2, "line", 4);
          v18 = *(_BYTE **)(v11 + 32);
        }
        if ( *(_QWORD *)(v11 + 24) <= (unsigned __int64)v18 )
        {
          v11 = sub_2257CD0(v11, 58);
        }
        else
        {
          *(_QWORD *)(v11 + 32) = v18 + 1;
          *v18 = 58;
        }
        v19 = sub_2257BD0(v11, v14);
        v20 = *(_BYTE **)(v19 + 32);
        if ( (unsigned __int64)v20 >= *(_QWORD *)(v19 + 24) )
          goto LABEL_11;
      }
      else
      {
        v32 = strlen(v13);
        v33 = *(_BYTE **)(a2 + 32);
        v34 = v32;
        v35 = *(_QWORD *)(a2 + 24);
        if ( v34 > v35 - (unsigned __int64)v33 )
        {
          v11 = sub_22581D0(a2, v13, v34);
          v33 = *(_BYTE **)(v11 + 32);
          v35 = *(_QWORD *)(v11 + 24);
        }
        else if ( v34 )
        {
          memcpy(v33, v13, v34);
          v35 = *(_QWORD *)(a2 + 24);
          v33 = (_BYTE *)(v34 + *(_QWORD *)(a2 + 32));
          *(_QWORD *)(a2 + 32) = v33;
        }
        if ( v35 <= (unsigned __int64)v33 )
        {
          v11 = sub_2257CD0(v11, 58);
        }
        else
        {
          *(_QWORD *)(v11 + 32) = v33 + 1;
          *v33 = 58;
        }
        v19 = sub_2257BD0(v11, v14);
        v20 = *(_BYTE **)(v19 + 32);
        if ( *(_QWORD *)(v19 + 24) <= (unsigned __int64)v20 )
        {
LABEL_11:
          v19 = sub_2257CD0(v19, 58);
LABEL_25:
          sub_2257BD0(v19, v15);
LABEL_26:
          s1[0] = (char *)v13;
          HIDWORD(s1[1]) = v14;
          v36 = _mm_load_si128((const __m128i *)s1);
          LODWORD(v44) = v15;
          v37 = v44;
          *a1 = v36;
          a1[1].m128i_i64[0] = v37;
          return a1;
        }
      }
      *(_QWORD *)(v19 + 32) = v20 + 1;
      *v20 = 58;
      goto LABEL_25;
    }
    v38 = *(void **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)v38 > 0xDu )
    {
      qmemcpy(v38, "<invalid sloc>", 14);
      *(_QWORD *)(a2 + 32) += 14LL;
    }
    else
    {
      sub_22581D0(a2, "<invalid sloc>", 14);
    }
    v39 = a8;
    *a1 = _mm_loadu_si128(&s2);
    a1[1].m128i_i64[0] = v39;
  }
  return a1;
}

