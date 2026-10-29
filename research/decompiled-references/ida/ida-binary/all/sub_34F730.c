__int64 __fastcall sub_34F730(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        unsigned int a11,
        __int64 a12,
        __int64 *a13,
        __int64 *a14,
        __int64 a15)
{
  unsigned int v18; // ebp
  unsigned __int64 v20; // r15
  const char *v21; // rsi
  __int64 v22; // rdi
  unsigned int v23; // r15d
  __int64 server_connection2; // rax
  __int64 v25; // rax
  __m128i v26; // xmm0
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rax
  __m128i v31; // xmm0
  __m128 v32; // xmm0
  const char *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __m128 v38; // xmm4
  __m128 v39; // xmm5
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __m128 v45; // xmm4
  __m128 v46; // xmm5
  __int64 v47; // rax
  const char *v48; // rdi
  unsigned __int64 v49; // rbp
  unsigned __int64 v50; // rbp
  const char *v51; // rdx
  __int64 v52; // rax
  __m128i v53; // xmm0
  __int64 v54; // rax
  __m128i v55; // xmm0
  __int64 v56; // rax
  __m128i v57; // xmm0
  __int64 v58; // rax
  const char *v59; // rdi
  const char *v60; // r15
  void *v61; // rdi
  const char *v62; // rbx
  void *v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rax
  char v66; // [rsp+0h] [rbp-68h]
  char v67; // [rsp+7h] [rbp-61h]
  const char *v68; // [rsp+10h] [rbp-58h] BYREF
  __int128 v69; // [rsp+18h] [rbp-50h]
  unsigned __int64 v70; // [rsp+28h] [rbp-40h]

  v18 = a11;
  v67 = a11;
  v70 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a10 + 16) )
  {
    v20 = *(_QWORD *)(a12 + 8);
    v21 = *(const char **)(a10 + 8);
    if ( !v20 )
    {
      if ( *v21 )
        goto LABEL_4;
      goto LABEL_36;
    }
  }
  else
  {
    v20 = *(_QWORD *)(a12 + 8);
    v21 = &s1;
    if ( !v20 )
    {
LABEL_36:
      if ( *(_WORD *)(a12 + 24) != *(_WORD *)(a10 + 32) )
        goto LABEL_4;
      v20 = 0;
LABEL_30:
      if ( (_BYTE)v18 )
        return v18;
      v47 = a13[1];
      if ( *(_QWORD *)(a10 + 48) )
      {
        v21 = *(const char **)(a10 + 40);
        v48 = &s1;
        if ( !v47 )
          goto LABEL_33;
      }
      else
      {
        v21 = &s1;
        if ( !v47 )
          goto LABEL_55;
      }
      v48 = (const char *)*a13;
LABEL_33:
      if ( strcmp(v48, v21) )
        goto LABEL_34;
LABEL_55:
      v58 = a14[1];
      if ( *(_QWORD *)(a15 + 8) )
      {
        v21 = *(const char **)a15;
        v59 = &s1;
        if ( !v58 )
          goto LABEL_58;
      }
      else
      {
        v21 = &s1;
        if ( !v58 )
          return 1;
      }
      v59 = (const char *)*a14;
LABEL_58:
      if ( strcmp(v59, v21) )
      {
LABEL_34:
        if ( v20 <= 1 )
          goto LABEL_4;
        goto LABEL_26;
      }
      return 1;
    }
  }
  if ( !strcmp(*(const char **)a12, v21) && *(_WORD *)(a12 + 24) == *(_WORD *)(a10 + 32) )
    goto LABEL_30;
  if ( v20 == 1 || (_BYTE)v18 )
    goto LABEL_4;
LABEL_26:
  if ( (unsigned __int64)a13[1] <= 1 || (unsigned __int64)a14[1] <= 1 )
  {
    v18 = 0;
    sub_169630(
      (int)"Please set a username and password for your private server.",
      (__int64)v21,
      v41,
      v42,
      v43,
      v44,
      a1,
      a2,
      a3,
      a4,
      v45,
      v46,
      a7,
      a8,
      v66);
    return v18;
  }
LABEL_4:
  if ( *(_BYTE *)(a10 + 172) )
  {
    v22 = 0x80000000LL;
    v23 = 0;
  }
  else
  {
    v22 = 2147483651LL;
    v23 = 3;
  }
  server_connection2 = get_server_connection2(v22);
  if ( server_connection2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)server_connection2 + 16LL))(server_connection2);
  v25 = *(_QWORD *)(a10 + 8);
  v26 = _mm_loadu_si128((const __m128i *)(a10 + 16));
  *(_QWORD *)(a10 + 8) = *(_QWORD *)a12;
  *(_QWORD *)(a10 + 16) = *(_QWORD *)(a12 + 8);
  *(_QWORD *)(a10 + 24) = *(_QWORD *)(a12 + 16);
  *(_QWORD *)a12 = v25;
  LOWORD(v25) = *(_WORD *)(a12 + 24);
  *(__m128i *)(a12 + 8) = v26;
  *(_WORD *)(a12 + 24) = *(_WORD *)(a10 + 32);
  *(_WORD *)(a10 + 32) = v25;
  v27 = *(_QWORD *)(a10 + 16);
  if ( (_BYTE)v18 )
  {
    *(_QWORD *)(a10 + 48) = 0;
    *(_QWORD *)(a10 + 72) = 0;
    v67 = 0;
  }
  else
  {
    if ( v27 <= 1 )
    {
      v32 = 0;
      *(_QWORD *)(a10 + 48) = 0;
      *(_QWORD *)(a10 + 72) = 0;
      v68 = nullptr;
      v69 = 0;
      goto LABEL_13;
    }
    v28 = *(_QWORD *)(a10 + 40);
    v67 = 1;
    v29 = _mm_loadu_si128((const __m128i *)(a10 + 48));
    *(_QWORD *)(a10 + 40) = *a13;
    *(_QWORD *)(a10 + 48) = a13[1];
    *(_QWORD *)(a10 + 56) = a13[2];
    *a13 = v28;
    *(__m128i *)(a13 + 1) = v29;
    v30 = *(_QWORD *)(a10 + 64);
    v31 = _mm_loadu_si128((const __m128i *)(a10 + 72));
    *(_QWORD *)(a10 + 64) = *a14;
    *(_QWORD *)(a10 + 72) = a14[1];
    *(_QWORD *)(a10 + 80) = a14[2];
    *a14 = v30;
    *(__m128i *)(a14 + 1) = v31;
    v27 = *(_QWORD *)(a10 + 16);
  }
  v68 = nullptr;
  v32 = 0;
  v69 = 0;
  if ( v27 > 1 && !get_server_connection2(v23) )
  {
    v51 = &s1;
    if ( *(_QWORD *)(a10 + 16) )
      v51 = *(const char **)(a10 + 8);
    v33 = "HIDECANCEL\nCannot connect to %s:%u\nUse those credentials anyway?";
    if ( (unsigned int)sub_1698A0(
                         1,
                         (int)"HIDECANCEL\nCannot connect to %s:%u\nUse those credentials anyway?",
                         v51,
                         *(unsigned __int16 *)(a10 + 32)) != 1 )
    {
      v52 = *(_QWORD *)(a10 + 8);
      v53 = _mm_loadu_si128((const __m128i *)(a10 + 16));
      *(_QWORD *)(a10 + 8) = *(_QWORD *)a12;
      *(_QWORD *)(a10 + 16) = *(_QWORD *)(a12 + 8);
      *(_QWORD *)(a10 + 24) = *(_QWORD *)(a12 + 16);
      *(_QWORD *)a12 = v52;
      LOWORD(v52) = *(_WORD *)(a12 + 24);
      *(__m128i *)(a12 + 8) = v53;
      *(_WORD *)(a10 + 32) = v52;
      if ( v67 )
      {
        v54 = *(_QWORD *)(a10 + 40);
        v55 = _mm_loadu_si128((const __m128i *)(a10 + 48));
        *(_QWORD *)(a10 + 40) = *a13;
        *(_QWORD *)(a10 + 48) = a13[1];
        *(_QWORD *)(a10 + 56) = a13[2];
        *a13 = v54;
        *(__m128i *)(a13 + 1) = v55;
        v56 = *(_QWORD *)(a10 + 64);
        v57 = _mm_loadu_si128((const __m128i *)(a10 + 72));
        *(_QWORD *)(a10 + 64) = *a14;
        *(_QWORD *)(a10 + 72) = a14[1];
        *(_QWORD *)(a10 + 80) = a14[2];
        *a14 = v56;
        *(__m128i *)(a14 + 1) = v57;
      }
      v18 = 0;
      goto LABEL_19;
    }
  }
LABEL_13:
  v33 = (const char *)&v68;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, const char **))(*(_QWORD *)a10 + 48LL))(a10, &v68) )
  {
    v33 = &s1;
    if ( (_QWORD)v69 )
      v33 = v68;
    sub_169630(
      (int)"Saving credentials failed: %s",
      (__int64)v33,
      v34,
      v35,
      v36,
      v37,
      v32,
      a2,
      a3,
      a4,
      v38,
      v39,
      a7,
      a8,
      v66);
  }
  if ( v67 )
  {
    if ( a13 != (__int64 *)(a10 + 40) )
    {
      v49 = *(_QWORD *)(a10 + 48);
      if ( v49 > 1 )
      {
        v60 = *(const char **)(a10 + 40);
        v61 = (void *)*a13;
        if ( a13[2] < v49 )
        {
          v64 = qvector_reserve(a13, *a13, *(_QWORD *)(a10 + 48), 1);
          *a13 = v64;
          v61 = (void *)v64;
        }
        a13[1] = v49;
        v33 = v60;
        memmove(v61, v60, v49 - 1);
        *(_BYTE *)(*a13 + v49 - 1) = 0;
      }
      else
      {
        a13[1] = 0;
      }
    }
    if ( a14 != (__int64 *)(a10 + 64) )
    {
      v50 = *(_QWORD *)(a10 + 72);
      if ( v50 > 1 )
      {
        v62 = *(const char **)(a10 + 64);
        v63 = (void *)*a14;
        if ( a14[2] < v50 )
        {
          v65 = qvector_reserve(a14, *a14, v50, 1);
          *a14 = v65;
          v63 = (void *)v65;
        }
        a14[1] = v50;
        v33 = v62;
        memmove(v63, v62, v50 - 1);
        *(_BYTE *)(*a14 + v50 - 1) = 0;
      }
      else
      {
        a14[1] = 0;
      }
    }
  }
  v18 = 1;
LABEL_19:
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68, v33);
  }
  return v18;
}
