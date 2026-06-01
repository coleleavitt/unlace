__int64 __fastcall sub_395F40(__int64 a1, __int64 a2, char **a3)
{
  unsigned int v4; // ebx
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  const char *v11; // rdi
  __int64 i; // rax
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 v15; // r15
  int v16; // eax
  __int64 *v17; // rax
  __int64 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // r15
  __int64 v21; // r14
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // r13
  void *v26; // rcx
  void *v27; // r14
  __int64 v28; // rax
  char v29; // al
  __m128i *v30; // rsi
  __m128i v31; // xmm0
  void *v32; // rdi
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // r15
  __int64 v36; // r13
  void *v37; // rax
  __m128i v38; // xmm0
  __int64 v39; // rcx
  __int64 v40; // r13
  __int64 v41; // r15
  int v42; // eax
  __int64 v43; // rax
  __m128i *v44; // rsi
  __m128i v45; // xmm0
  __m128i *v46; // rsi
  __m128i si128; // xmm0
  const void *v48; // r14
  __int64 v49; // rax
  __int64 v50; // rax
  __m128i *v51; // rsi
  __m128i v52; // xmm0
  const void *v53; // r14
  void *v54; // rax
  __int64 v55; // r15
  __int64 v56; // rbx
  __int64 v57; // r13
  __int64 v58; // rax
  __int64 v59; // rax
  const void *v60; // r14
  void *v61; // rax
  __int64 *v62; // [rsp+0h] [rbp-A0h]
  __int64 *v63; // [rsp+10h] [rbp-90h]
  __int64 v64; // [rsp+10h] [rbp-90h]
  __int64 v65; // [rsp+10h] [rbp-90h]
  __int64 v66; // [rsp+10h] [rbp-90h]
  __int64 v68; // [rsp+20h] [rbp-80h] BYREF
  __int64 *v69; // [rsp+28h] [rbp-78h]
  void *ptr; // [rsp+30h] [rbp-70h] BYREF
  __m128i v71; // [rsp+38h] [rbp-68h]
  _DWORD v72[1]; // [rsp+50h] [rbp-50h] BYREF
  char v73; // [rsp+54h] [rbp-4Ch] BYREF
  char v74; // [rsp+58h] [rbp-48h] BYREF
  char v75; // [rsp+5Ch] [rbp-44h] BYREF
  unsigned __int64 v76; // [rsp+68h] [rbp-38h]

  v76 = __readfsqword(0x28u);
  v68 = 0;
  v69 = nullptr;
  if ( !(unsigned int)parse_json_string(&v68, a2, 0, 0) && (_DWORD)v68 == 3 )
  {
    ptr = nullptr;
    v71 = 0;
    v6 = v69[1];
    v63 = v69;
    if ( !v6 )
      goto LABEL_40;
    v7 = *v69;
    v8 = 0;
    while ( !*(_QWORD *)(v7 + 8) || strcmp(*(const char **)v7, "lid") )
    {
      ++v8;
      v7 += 40;
      if ( v6 == v8 )
        goto LABEL_40;
    }
    if ( *(_DWORD *)(v7 + 24) == 2
      && ((v9 = *(_QWORD *)(v7 + 32), (void **)v9 == &ptr)
       || (v10 = *(_QWORD *)(v9 + 8), v10 <= 1)
       || (v48 = *(const void **)v9,
           ptr = (void *)qvector_reserve(&ptr, 0, *(_QWORD *)(v9 + 8), 1),
           v71.m128i_i64[0] = v10,
           memmove(ptr, v48, v10 - 1),
           *((char *)ptr + v10 - 1) = 0,
           !v71.m128i_i64[0])
        ? (v11 = haystack)
        : (const char *)(LODWORD(v11) = (_DWORD)ptr),
          (unsigned int)qsscanf(
                          (_DWORD)v11,
                          (unsigned int)"%02X-%02X%02X-%02X%02X-%02X",
                          (unsigned int)v72,
                          (unsigned int)&v73,
                          (unsigned int)&v74,
                          (unsigned int)&v75) == 6) )
    {
      for ( i = 0; i != 6; ++i )
        *(_BYTE *)(a1 + i + 88) = v72[i];
      if ( ptr )
      {
        v71.m128i_i64[0] = 0;
        qfree(ptr);
      }
      v13 = v63[1];
      if ( !v13 )
        goto LABEL_65;
      v14 = *v63;
      v15 = 0;
      while ( 1 )
      {
        if ( *(_QWORD *)(v14 + 8) )
        {
          v64 = v13;
          v16 = strcmp(*(const char **)v14, "licsrc");
          v13 = v64;
          if ( !v16 )
            break;
        }
        ++v15;
        v14 += 40;
        if ( v13 == v15 )
          goto LABEL_65;
      }
      if ( *(_DWORD *)(v14 + 24) != 3 )
      {
LABEL_65:
        v46 = (__m128i *)*a3;
        if ( (unsigned __int64)a3[2] <= 0x14 )
        {
          v50 = qvector_reserve(a3, v46, 21, 1);
          *a3 = (char *)v50;
          v46 = (__m128i *)v50;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A7720);
        a3[1] = (_BYTE *)(&dword_14 + 1);
        v46[1].m128i_i32[0] = 576942707;
        *v46 = si128;
        (*a3)[20] = 0;
        goto LABEL_4;
      }
      v17 = *(__int64 **)(v14 + 32);
      ptr = nullptr;
      v71 = 0;
      v18 = v17[1];
      v62 = v17;
      if ( !v18 )
        goto LABEL_72;
      v19 = 0;
      v20 = *v17;
      v21 = *v17;
      while ( 1 )
      {
        if ( *(_QWORD *)(v21 + 8) )
        {
          v65 = v19;
          v22 = strcmp(*(const char **)v21, "path");
          v19 = v65;
          if ( !v22 )
            break;
        }
        ++v19;
        v21 += 40;
        if ( v18 == v19 )
          goto LABEL_44;
      }
      if ( *(_DWORD *)(v21 + 24) == 2 )
      {
        v23 = *(_QWORD *)(v21 + 32);
        if ( (void **)v23 == &ptr )
        {
          v25 = 0;
          v24 = 0;
          v26 = nullptr;
        }
        else
        {
          v24 = *(_QWORD *)(v23 + 8);
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v24 == 1 )
            {
              v24 = 0;
              v26 = nullptr;
            }
            else
            {
              v53 = *(const void **)v23;
              v54 = (void *)qvector_reserve(&ptr, 0, *(_QWORD *)(v23 + 8), 1);
              v71.m128i_i64[0] = v24;
              ptr = v54;
              memmove(v54, v53, v24 - 1);
              *((_BYTE *)ptr + v25) = 0;
              v26 = ptr;
              v25 = v71.m128i_i64[1];
              v24 = v71.m128i_i64[0];
            }
          }
          else
          {
            v25 = 0;
            v26 = nullptr;
          }
        }
        v27 = *(void **)(a1 + 40);
        v28 = *(_QWORD *)(a1 + 56);
        *(_QWORD *)(a1 + 40) = v26;
        *(_QWORD *)(a1 + 48) = v24;
        *(_QWORD *)(a1 + 56) = v25;
        ptr = v27;
        v71.m128i_i64[1] = v28;
        v29 = 0;
LABEL_37:
        *(_BYTE *)(a1 + 32) = v29;
        if ( v27 )
        {
          v71.m128i_i64[0] = 0;
          qfree(v27);
        }
        v4 = 1;
        goto LABEL_5;
      }
LABEL_44:
      v33 = 0;
      while ( !*(_QWORD *)(v20 + 8) || strcmp(*(const char **)v20, "host") )
      {
        ++v33;
        v20 += 40;
        if ( v18 == v33 )
          goto LABEL_72;
      }
      if ( *(_DWORD *)(v20 + 24) == 2 )
      {
        v34 = *(_QWORD *)(v20 + 32);
        if ( (void **)v34 == &ptr )
        {
          v36 = 0;
          v35 = 0;
          v37 = nullptr;
        }
        else
        {
          v35 = *(_QWORD *)(v34 + 8);
          if ( v35 )
          {
            v36 = v35 - 1;
            if ( v35 == 1 )
            {
              v35 = 0;
              v37 = nullptr;
            }
            else
            {
              v60 = *(const void **)v34;
              v61 = (void *)qvector_reserve(&ptr, 0, *(_QWORD *)(v34 + 8), 1);
              v71.m128i_i64[0] = v35;
              ptr = v61;
              memmove(v61, v60, v35 - 1);
              *((_BYTE *)ptr + v36) = 0;
              v37 = ptr;
              v36 = v71.m128i_i64[1];
              v35 = v71.m128i_i64[0];
            }
          }
          else
          {
            v36 = 0;
            v37 = nullptr;
          }
        }
        v38 = _mm_loadu_si128((const __m128i *)(a1 + 8));
        v27 = *(void **)a1;
        *(_QWORD *)a1 = v37;
        *(_QWORD *)(a1 + 8) = v35;
        *(_QWORD *)(a1 + 16) = v36;
        ptr = v27;
        v71 = v38;
        v39 = v62[1];
        if ( v39 )
        {
          v40 = *v62;
          v41 = 0;
          while ( 1 )
          {
            if ( *(_QWORD *)(v40 + 8) )
            {
              v66 = v39;
              v42 = strcmp(*(const char **)v40, "port");
              v39 = v66;
              if ( !v42 )
                break;
            }
            ++v41;
            v40 += 40;
            if ( v39 == v41 )
              goto LABEL_60;
          }
          if ( *(_DWORD *)(v40 + 24) == 1 )
          {
            v43 = *(_QWORD *)(v40 + 32);
            if ( (unsigned int)v43 <= 0xFFFF )
            {
              *(_WORD *)(a1 + 24) = v43;
              v55 = v62[1];
              if ( v55 )
              {
                v56 = *v62;
                v57 = 0;
                while ( !*(_QWORD *)(v56 + 8) || strcmp(*(const char **)v56, "tls") )
                {
                  ++v57;
                  v56 += 40;
                  if ( v55 == v57 )
                    goto LABEL_85;
                }
                if ( *(_DWORD *)(v56 + 24) == 5 )
                  *(_BYTE *)(a1 + 26) = *(_BYTE *)(v56 + 32);
              }
LABEL_85:
              v29 = 1;
              goto LABEL_37;
            }
          }
        }
LABEL_60:
        v44 = (__m128i *)*a3;
        if ( (unsigned __int64)a3[2] <= 0x12 )
        {
          v58 = qvector_reserve(a3, v44, 19, 1);
          *a3 = (char *)v58;
          v44 = (__m128i *)v58;
        }
        v45 = _mm_load_si128((const __m128i *)&xmmword_23A7740);
        a3[1] = (_BYTE *)(&word_12 + 1);
        v44[1].m128i_i16[0] = 8820;
        *v44 = v45;
        (*a3)[18] = 0;
      }
      else
      {
LABEL_72:
        v51 = (__m128i *)*a3;
        if ( (unsigned __int64)a3[2] <= 0x12 )
        {
          v59 = qvector_reserve(a3, v51, 19, 1);
          *a3 = (char *)v59;
          v51 = (__m128i *)v59;
        }
        v52 = _mm_load_si128((const __m128i *)&xmmword_23A7730);
        a3[1] = (_BYTE *)(&word_12 + 1);
        v51[1].m128i_i16[0] = 8820;
        *v51 = v52;
        (*a3)[18] = 0;
      }
      v32 = ptr;
      if ( !ptr )
        goto LABEL_4;
    }
    else
    {
LABEL_40:
      v30 = (__m128i *)*a3;
      if ( (unsigned __int64)a3[2] <= 0x11 )
      {
        v49 = qvector_reserve(a3, v30, 18, 1);
        *a3 = (char *)v49;
        v30 = (__m128i *)v49;
      }
      v31 = _mm_load_si128((const __m128i *)&xmmword_23A7710);
      a3[1] = (char *)&word_12;
      v30[1].m128i_i8[0] = 34;
      *v30 = v31;
      (*a3)[17] = 0;
      v32 = ptr;
      if ( !ptr )
        goto LABEL_4;
    }
    v71.m128i_i64[0] = 0;
    qfree(v32);
    goto LABEL_4;
  }
  sub_35A790(a3);
LABEL_4:
  v4 = 0;
LABEL_5:
  jvalue_t_clear(&v68);
  return v4;
}
