__int64 __fastcall sub_C3AB0(__int64 a1, __int64 *a2, __int64 a3, const char *a4)
{
  unsigned int v5; // eax
  unsigned int v6; // ebp
  int v7; // eax
  int v8; // ecx
  void *v9; // rsi
  __int64 v11; // rax
  int v12; // edx
  int v13; // eax
  int v14; // edx
  int v15; // edx
  int v16; // ebx
  __int64 v17; // rax
  const char *v18; // r13
  size_t v19; // rax
  __int64 v20; // rbp
  size_t v21; // rbx
  size_t v22; // rax
  __int64 v23; // rbp
  size_t v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned __int64 v27; // r8
  void *v28; // r12
  __m128i v29; // xmm1
  void *v30; // rbp
  __m128i v31; // xmm0
  unsigned __int64 v32; // r13
  __int64 v33; // rax
  void *v34; // rdi
  __int64 v35; // rax
  __m128i v36; // xmm0
  void *v37; // rdx
  __m128i v38; // xmm0
  int v39; // edx
  __m128i v40; // [rsp+0h] [rbp-10E8h] BYREF
  __m128i v41; // [rsp+10h] [rbp-10D8h] BYREF
  char *endptr; // [rsp+28h] [rbp-10C0h] BYREF
  unsigned __int64 v43; // [rsp+30h] [rbp-10B8h] BYREF
  void *v44; // [rsp+38h] [rbp-10B0h]
  __m128i v45; // [rsp+40h] [rbp-10A8h] BYREF
  void *v46; // [rsp+50h] [rbp-1098h]
  __m128i v47; // [rsp+58h] [rbp-1090h] BYREF
  unsigned __int64 v48; // [rsp+70h] [rbp-1078h]
  void *v49; // [rsp+78h] [rbp-1070h]
  __m128i v50; // [rsp+80h] [rbp-1068h]
  void *v51; // [rsp+90h] [rbp-1058h]
  __m128i v52; // [rsp+98h] [rbp-1050h]
  _BYTE v53[7]; // [rsp+B0h] [rbp-1038h]
  char v54; // [rsp+4AFh] [rbp-C39h]
  int v55; // [rsp+4B0h] [rbp-C38h]
  char v56; // [rsp+4B4h] [rbp-C34h]
  char v57; // [rsp+8AFh] [rbp-839h]
  char s[1024]; // [rsp+8B0h] [rbp-838h] BYREF
  _BYTE v59[7]; // [rsp+CB0h] [rbp-438h]
  char v60; // [rsp+10AFh] [rbp-39h]
  unsigned __int64 v61; // [rsp+10B8h] [rbp-30h]

  v61 = __readfsqword(0x28u);
  v5 = strtoul(a4, &endptr, 0);
  v54 = 0;
  v57 = 0;
  v6 = v5;
  s[1023] = 0;
  v60 = 0;
  v7 = qsscanf();
  if ( v7 == 4 )
  {
    if ( *(_DWORD *)v53 == 1886352499 && (v8 = 0, !v53[4])
      || (v8 = 1, *(_DWORD *)v53 == 1953722222) && *(_DWORD *)&v53[3] == 7368564 )
    {
      if ( v55 == 7368801 || v55 == 1802723693 && !v56 )
      {
        if ( *(_DWORD *)v59 == 6778732 )
        {
          if ( v55 != 1802723693 || (v39 = 0, v56) )
            v39 = 1;
          v15 = v8 ^ 1 | (2 * (v39 ^ 1));
          goto LABEL_22;
        }
        if ( *(_DWORD *)v59 != 1852989815 || (v12 = 0, v59[4]) )
          v12 = 1;
        if ( *(_DWORD *)v59 != 1701603699 || (v13 = 0, *(_DWORD *)&v59[3] != 7630437) )
          v13 = 1;
        if ( !v12 || !v13 )
        {
          if ( v55 != 1802723693 || (v14 = 0, v56) )
            v14 = 1;
          v7 = 8 * (v13 ^ 1);
          v15 = v8 ^ 1 | (2 * (v14 ^ 1));
LABEL_22:
          v16 = v15 | v7;
          v17 = skip_spaces();
          v43 = __PAIR64__(v16, v6);
          v18 = (const char *)v17;
          v44 = nullptr;
          v45 = 0;
          v19 = strlen(s);
          v20 = v19 + 1;
          v21 = v19;
          v44 = (void *)qvector_reserve();
          v45.m128i_i64[0] = v20;
          memmove(v44, s, v21);
          *((_BYTE *)v44 + v21) = 0;
          v46 = nullptr;
          v47 = 0;
          if ( v18 )
          {
            v22 = strlen(v18);
            v23 = v22 + 1;
            v24 = v22;
            v46 = (void *)qvector_reserve();
            v47.m128i_i64[0] = v23;
            memmove(v46, v18, v24);
            *((_BYTE *)v46 + v24) = 0;
          }
          v25 = xmmword_2512E8;
          v26 = qword_2512E0;
          v27 = xmmword_2512E8 + 1;
          if ( (unsigned __int64)&v43 < qword_2512E0
            || (unsigned __int64)&v43 >= qword_2512E0 + 56LL * *((_QWORD *)&xmmword_2512E8 + 1) )
          {
            if ( *((_QWORD *)&xmmword_2512E8 + 1) < v27 )
            {
              qword_2512E0 = qvector_reserve();
              v26 = qword_2512E0;
              v25 = xmmword_2512E8;
            }
            v35 = v26 + 56 * v25;
            *(_QWORD *)v35 = v43;
            v36 = _mm_load_si128(&v45);
            v37 = v44;
            v44 = nullptr;
            *(__m128i *)(v35 + 16) = v36;
            *(_QWORD *)(v35 + 8) = v37;
            v45 = 0;
            v38 = _mm_loadu_si128(&v47);
            *(_QWORD *)&xmmword_2512E8 = xmmword_2512E8 + 1;
            *(_QWORD *)(v35 + 32) = v46;
            *(__m128i *)(v35 + 40) = v38;
          }
          else
          {
            v28 = v44;
            v29 = _mm_load_si128(&v45);
            v44 = nullptr;
            v30 = v46;
            v31 = _mm_loadu_si128(&v47);
            v45 = 0;
            v32 = v43;
            v49 = v28;
            v51 = v46;
            v48 = v43;
            v46 = nullptr;
            v50 = v29;
            v52 = v31;
            v47 = 0;
            if ( *((_QWORD *)&xmmword_2512E8 + 1) < v27 )
            {
              v41 = v31;
              v40 = v29;
              qword_2512E0 = qvector_reserve();
              v26 = qword_2512E0;
              v31 = _mm_load_si128(&v41);
              v25 = xmmword_2512E8;
              v29 = _mm_load_si128(&v40);
            }
            v33 = v26 + 56 * v25;
            *(_QWORD *)v33 = v32;
            *(_QWORD *)(v33 + 8) = v28;
            *(_QWORD *)(v33 + 32) = v30;
            *(__m128i *)(v33 + 16) = v29;
            v34 = v46;
            *(_QWORD *)&xmmword_2512E8 = xmmword_2512E8 + 1;
            *(__m128i *)(v33 + 40) = v31;
            if ( v34 )
            {
              v47.m128i_i64[0] = 0;
              qfree();
            }
          }
          if ( v44 )
          {
            v45.m128i_i64[0] = 0;
            qfree();
          }
          return 1;
        }
      }
    }
  }
  v9 = (void *)*a2;
  if ( (unsigned __int64)a2[2] <= 0xC )
  {
    v11 = qvector_reserve();
    *a2 = v11;
    v9 = (void *)v11;
  }
  a2[1] = 13;
  qmemcpy(v9, "syntax error", 12);
  *(_BYTE *)(*a2 + 12) = 0;
  return 1;
}

