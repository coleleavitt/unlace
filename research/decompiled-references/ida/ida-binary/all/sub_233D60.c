__int64 __fastcall cb_fallback_t__::vfunc_2(__int64 a1, __int64 *a2, __int64 a3, const char *a4)
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
  const char *v26; // rsi
  unsigned __int64 v27; // r8
  void *v28; // r12
  __m128i v29; // xmm1
  void *v30; // rbp
  __m128i v31; // xmm0
  unsigned __int64 v32; // r13
  char *v33; // rax
  void *v34; // rdi
  char *v35; // rax
  __m128i v36; // xmm0
  void *v37; // rdx
  int v38; // edx
  __m128i v39; // [rsp+0h] [rbp-10E8h] BYREF
  __m128i v40; // [rsp+10h] [rbp-10D8h] BYREF
  int v41; // [rsp+24h] [rbp-10C4h] BYREF
  char *endptr; // [rsp+28h] [rbp-10C0h] BYREF
  unsigned __int64 v43; // [rsp+30h] [rbp-10B8h] BYREF
  void *v44; // [rsp+38h] [rbp-10B0h] BYREF
  __m128i v45; // [rsp+40h] [rbp-10A8h] BYREF
  void *v46; // [rsp+50h] [rbp-1098h] BYREF
  __m128i v47; // [rsp+58h] [rbp-1090h] BYREF
  unsigned __int64 v48; // [rsp+70h] [rbp-1078h]
  void *v49; // [rsp+78h] [rbp-1070h]
  __m128i v50; // [rsp+80h] [rbp-1068h]
  void *v51; // [rsp+90h] [rbp-1058h]
  __m128i v52; // [rsp+98h] [rbp-1050h]
  _BYTE v53[7]; // [rsp+B0h] [rbp-1038h] BYREF
  char v54; // [rsp+4AFh] [rbp-C39h]
  int v55; // [rsp+4B0h] [rbp-C38h] BYREF
  char v56; // [rsp+4B4h] [rbp-C34h]
  char v57; // [rsp+8AFh] [rbp-839h]
  char s[1024]; // [rsp+8B0h] [rbp-838h] BYREF
  _BYTE v59[7]; // [rsp+CB0h] [rbp-438h] BYREF
  char v60; // [rsp+10AFh] [rbp-39h]
  unsigned __int64 v61; // [rsp+10B8h] [rbp-30h]

  v61 = __readfsqword(0x28u);
  v5 = strtoul(a4, &endptr, 0);
  v54 = 0;
  v57 = 0;
  v6 = v5;
  s[1023] = 0;
  v60 = 0;
  v7 = qsscanf(endptr, " %1023s %1023s %1023s %1023s%n", v53, &v55, v59, s, &v41);
  if ( v7 == 4 )
  {
    if ( *(_DWORD *)v53 == 1886352499 && (v8 = 0, !v53[4])
      || (v8 = 1, *(_DWORD *)v53 == 1953722222) && *(_DWORD *)&v53[3] == (_DWORD)&unk_706F74 )
    {
      if ( v55 == (_DWORD)&unk_707061 || v55 == 1802723693 && !v56 )
      {
        if ( *(_DWORD *)v59 == (_DWORD)"th class=\"st2\" d=\"M10.9,14.6L1.8,7.8L10.9,1v3.8h4.3v5.9h-4.3V14.6z M3.5,7.8l6."
                                       "4,4.8V9.7h4.4V5.8H9.9V3L3.5,7.8z\"/>\r\n"
                                       "\t\t\t</g>\r\n"
                                       "\t\t</g>\r\n"
                                       "\t</g>\r\n"
                                       "\t<g>\r\n"
                                       "\t\t<g>\r\n"
                                       "\t\t\t<path class=\"st2\" d=\"M17.7,29.8c-0.6,0-1-0.4-1-1c0-0.6,0.4-1,1-1c5.5,0,1"
                                       "0-4.5,10-10c0-5.5-4.5-10-10-10c-0.6,0-1-0.4-1-1\r\n"
                                       "\t\t\t\ts0.4-1,1-1c6.6,0,12,5.4,12,12S24.4,29.8,17.7,29.8z\"/>\r\n"
                                       "\t\t\t<path class=\"st0\" d=\"M17.7,6.4c6.3,0,11.5,5.2,11.5,11.5s-5.2,11.5-11.5,1"
                                       "1.5c-0.3,0-0.5-0.2-0.5-0.5c0-0.3,0.2-0.5,0.5-0.5\r\n"
                                       "\t\t\t\tc5.8,0,10.5-4.7,10.5-10.5S23.5,7.4,17.7,7.4c-0.3,0-0.5-0.2-0.5-0.5C17.2,6"
                                       ".6,17.5,6.4,17.7,6.4 M17.7,5.4\r\n"
                                       "\t\t\t\tc-0.8,0-1.5,0.7-1.5,1.5c0,0.8,0.7,1.5,1.5,1.5c5.2,0,9.5,4.3,9.5,9.5s-4.3,"
                                       "9.5-9.5,9.5c-0.8,0-1.5,0.7-1.5,1.5\r\n"
                                       "\t\t\t\tc0,0.8,0.7,1.5,1.5,1.5c6.9,0,12.5-5.6,12.5-12.5S24.6,5.4,17.7,5.4L17.7,5."
                                       "4z\"/>\r\n"
                                       "\t\t</g>\r\n"
                                       "\t</g>\r\n"
                                       "\t<g>\r\n"
                                       "\t\t<path class=\"st2\" d=\"M10.7,31c-0.1,0-0.1,0-0.2,0c-0.1,0-0.2-0.1-0.3-0.3l-1"
                                       ".6-3.8l-2.5,2.5c-0.1,0.1-0.4,0.2-0.5,0.1\r\n"
                                       "\t\t\tc-0.2-0.1-0.3-0.3-0.3-0.5V16.7c0-0.2,0.1-0.4,0.3-0.5c0.2-0.1,0.4,0,0.5,0.1l"
                                       "8.6,8.6c0.1,0.1,0.2,0.4,0.1,0.5s-0.3,0.3-0.5,0.3\r\n"
                                       "\t\t\th-3.5l1.6,3.9c0.1,0.2,0,0.5-0.2,0.6l-1.2,0.6C10.8,31,10.8,31,10.7,31z M8.8,"
                                       "25.5c0,0,0.1,0,0.1,0c0.2,0,0.3,0.1,0.4,0.3l1.7,4\r\n"
                                       "\t\t\tl0.4-0.2l-1.7-4.2c-0.1-0.1-0.1-0.3,0.1-0.5c0.1-0.1,0.2-0.2,0.4-0.2h3.1l-6.9"
                                       "-6.9v9.9l2.2-2.1C8.5,25.6,8.6,25.5,8.8,25.5z\"/>\r\n"
                                       "\t</g>\r\n"
                                       "</g>\r\n"
                                       "</svg>\r\n" )
        {
          if ( v55 != 1802723693 || (v38 = 0, v56) )
            v38 = 1;
          v15 = v8 ^ 1 | (2 * (v38 ^ 1));
          goto LABEL_22;
        }
        if ( *(_DWORD *)v59 != 1852989815 || (v12 = 0, v59[4]) )
          v12 = 1;
        if ( *(_DWORD *)v59 != 1701603699 || (v13 = 0, *(_DWORD *)&v59[3] != (_DWORD)&unk_746E65) )
          v13 = 1;
        if ( !v12 || !v13 )
        {
          if ( v55 != 1802723693 || (v14 = 0, v56) )
            v14 = 1;
          v7 = 8 * (v13 ^ 1);
          v15 = v8 ^ 1 | (2 * (v14 ^ 1));
LABEL_22:
          v16 = v15 | v7;
          v17 = skip_spaces(&endptr[v41]);
          v43 = __PAIR64__(v16, v6);
          v18 = (const char *)v17;
          v44 = nullptr;
          v45 = 0;
          v19 = strlen(s);
          v20 = v19 + 1;
          v21 = v19;
          v44 = (void *)qvector_reserve(&v44, 0, v19 + 1, 1);
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
            v46 = (void *)qvector_reserve(&v46, 0, v22 + 1, 1);
            v47.m128i_i64[0] = v23;
            memmove(v46, v18, v24);
            *((_BYTE *)v46 + v24) = 0;
          }
          v25 = xmmword_8CC2F8;
          v26 = (const char *)qword_8CC2F0;
          v27 = xmmword_8CC2F8 + 1;
          if ( (unsigned __int64)&v43 < qword_8CC2F0
            || (unsigned __int64)&v43 >= qword_8CC2F0 + 56LL * *((_QWORD *)&xmmword_8CC2F8 + 1) )
          {
            if ( *((_QWORD *)&xmmword_8CC2F8 + 1) < v27 )
            {
              qword_8CC2F0 = qvector_reserve(&qword_8CC2F0, qword_8CC2F0, xmmword_8CC2F8 + 1, 56);
              v26 = (const char *)qword_8CC2F0;
              v25 = xmmword_8CC2F8;
            }
            v35 = (char *)&v26[56 * v25];
            *(_QWORD *)v35 = v43;
            v36 = _mm_load_si128(&v45);
            v37 = v44;
            v44 = nullptr;
            *((__m128i *)v35 + 1) = v36;
            *((_QWORD *)v35 + 1) = v37;
            v45 = 0;
            v31 = _mm_loadu_si128(&v47);
            *(_QWORD *)&xmmword_8CC2F8 = xmmword_8CC2F8 + 1;
            *((_QWORD *)v35 + 4) = v46;
            *(__m128i *)(v35 + 40) = v31;
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
            if ( *((_QWORD *)&xmmword_8CC2F8 + 1) < v27 )
            {
              v40 = v31;
              v39 = v29;
              qword_8CC2F0 = qvector_reserve(&qword_8CC2F0, qword_8CC2F0, xmmword_8CC2F8 + 1, 56);
              v26 = (const char *)qword_8CC2F0;
              v31 = _mm_load_si128(&v40);
              v25 = xmmword_8CC2F8;
              v29 = _mm_load_si128(&v39);
            }
            v33 = (char *)&v26[56 * v25];
            *(_QWORD *)v33 = v32;
            *((_QWORD *)v33 + 1) = v28;
            *((_QWORD *)v33 + 4) = v30;
            *((__m128i *)v33 + 1) = v29;
            v34 = v46;
            *(_QWORD *)&xmmword_8CC2F8 = xmmword_8CC2F8 + 1;
            *(__m128i *)(v33 + 40) = v31;
            if ( v34 )
            {
              v47.m128i_i64[0] = 0;
              *(double *)v31.m128i_i64 = qfree(v34, v26);
            }
          }
          if ( v44 )
          {
            v45.m128i_i64[0] = 0;
            qfree(v44, v26, *(double *)v31.m128i_i64);
          }
          return 1;
        }
      }
    }
  }
  v9 = (void *)*a2;
  if ( (unsigned __int64)a2[2] <= 0xC )
  {
    v11 = qvector_reserve(a2, v9, 13, 1);
    *a2 = v11;
    v9 = (void *)v11;
  }
  a2[1] = 13;
  qmemcpy(v9, "syntax error", 12);
  *(_BYTE *)(*a2 + 12) = 0;
  return 1;
}
