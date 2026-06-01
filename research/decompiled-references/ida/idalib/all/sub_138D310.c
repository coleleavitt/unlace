__int64 __fastcall sub_138D310(__int64 a1, unsigned __int8 **a2)
{
  void *v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  char *v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r13
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rcx
  char *v12; // r13
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  _BYTE *v15; // rax
  __m128i *v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r12
  void *v22; // rdx
  _BYTE *v23; // rax
  __m128i *v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rdx
  unsigned __int8 *v30; // r12
  unsigned __int8 *v31; // rbp
  unsigned __int64 v32; // rdx
  unsigned __int8 *k; // rbp
  __int64 v34; // rsi
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rdx
  unsigned __int8 *v39; // r13
  unsigned __int8 *v40; // r12
  unsigned __int64 v41; // rdx
  unsigned __int8 *j; // r12
  __int64 v43; // rsi
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r12
  void *v49; // rdx
  _BYTE *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r12
  void *v55; // rdx
  _BYTE *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  _QWORD *v59; // rdx
  unsigned __int8 *v60; // r13
  unsigned __int8 *v61; // r12
  unsigned __int64 v62; // rdx
  unsigned __int8 *i; // r12
  __int64 v64; // rsi
  unsigned __int64 v65; // rax
  __m128i v66; // xmm0
  __m128i si128; // xmm0
  __int64 v68; // rdx
  _BYTE *v69; // rax
  _BYTE *v70; // rax
  _BYTE *v71; // rax
  __m128i v72; // xmm0
  __m128i v73; // xmm0
  __m128i v74; // xmm0
  __m128i v75; // xmm0
  __m128i v76; // xmm0

  v3 = *(void **)(a1 + 32);
  if ( *(_QWORD *)(a1 + 24) - (_QWORD)v3 > 0xAu )
  {
    qmemcpy(v3, "    <dict>\n", 11);
    v4 = *(_QWORD *)(a1 + 32) + 11LL;
    *(_QWORD *)(a1 + 32) = v4;
  }
  else
  {
    sub_227BF10(a1, "    <dict>\n", 11);
    v4 = *(_QWORD *)(a1 + 32);
  }
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) - v4) > 0x16 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA150);
    *(_DWORD *)(v4 + 16) = 1701523260;
    *(_WORD *)(v4 + 20) = 15993;
    *(__m128i *)v4 = si128;
    *(_BYTE *)(v4 + 22) = 10;
    v6 = *(_QWORD *)(a1 + 32) + 23LL;
    v5 = a1;
    v68 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 32) = v6;
    if ( (unsigned __int64)(v68 - v6) <= 5 )
      goto LABEL_5;
  }
  else
  {
    v5 = sub_227BF10(a1, "      <key>level</key>\n", 23);
    v6 = *(_QWORD *)(v5 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v5 + 24) - v6) <= 5 )
    {
LABEL_5:
      sub_227BF10(v5, "      ", 6);
      goto LABEL_6;
    }
  }
  *(_DWORD *)v6 = 538976288;
  *(_WORD *)(v6 + 4) = 8224;
  *(_QWORD *)(v5 + 32) += 6LL;
LABEL_6:
  v7 = sub_138D290(*((_DWORD *)a2 + 28));
  v9 = v8;
  v10 = *(_QWORD **)(a1 + 32);
  if ( *(_QWORD *)(a1 + 24) - (_QWORD)v10 > 7u )
  {
    *v10 = 0x3E676E697274733CLL;
    v11 = *(_QWORD *)(a1 + 32) + 8LL;
    *(_QWORD *)(a1 + 32) = v11;
  }
  else
  {
    sub_227BF10(a1, "<string>", 8);
    v11 = *(_QWORD *)(a1 + 32);
  }
  v12 = &v7[v9];
  if ( v12 == v7 )
  {
LABEL_12:
    if ( *(_QWORD *)(a1 + 24) - v11 > 8 )
      goto LABEL_45;
LABEL_13:
    sub_227BF10(a1, "</string>", 9);
    v15 = *(_BYTE **)(a1 + 32);
    if ( *(_QWORD *)(a1 + 24) <= (unsigned __int64)v15 )
      goto LABEL_46;
    goto LABEL_14;
  }
  while ( 2 )
  {
    v13 = (unsigned __int8)*v7;
    v14 = *(_QWORD *)(a1 + 24);
    switch ( (char)v13 )
    {
      case '"':
        if ( v14 - v11 > 5 )
        {
          *(_DWORD *)v11 = 1869967654;
          *(_WORD *)(v11 + 4) = 15220;
          v11 = *(_QWORD *)(a1 + 32) + 6LL;
          *(_QWORD *)(a1 + 32) = v11;
        }
        else
        {
          sub_227BF10(a1, "&quot;", 6);
          v11 = *(_QWORD *)(a1 + 32);
        }
        goto LABEL_43;
      case '&':
        if ( v14 - v11 > 4 )
        {
          *(_DWORD *)v11 = 1886216486;
          *(_BYTE *)(v11 + 4) = 59;
          v11 = *(_QWORD *)(a1 + 32) + 5LL;
          *(_QWORD *)(a1 + 32) = v11;
        }
        else
        {
          sub_227BF10(a1, "&amp;", 5);
          v11 = *(_QWORD *)(a1 + 32);
        }
        goto LABEL_43;
      case '\'':
        if ( v14 - v11 > 5 )
        {
          *(_DWORD *)v11 = 1869635878;
          *(_WORD *)(v11 + 4) = 15219;
          v11 = *(_QWORD *)(a1 + 32) + 6LL;
          *(_QWORD *)(a1 + 32) = v11;
        }
        else
        {
          sub_227BF10(a1, "&apos;", 6);
          v11 = *(_QWORD *)(a1 + 32);
        }
        goto LABEL_43;
      case '<':
        if ( v14 - v11 > 3 )
        {
          *(_DWORD *)v11 = 997485606;
          v11 = *(_QWORD *)(a1 + 32) + 4LL;
          *(_QWORD *)(a1 + 32) = v11;
        }
        else
        {
          sub_227BF10(a1, "&lt;", 4);
          v11 = *(_QWORD *)(a1 + 32);
        }
        goto LABEL_43;
      case '>':
        if ( v14 - v11 <= 3 )
        {
          ++v7;
          sub_227BF10(a1, "&gt;", 4);
          v11 = *(_QWORD *)(a1 + 32);
          if ( v12 == v7 )
            goto LABEL_12;
          continue;
        }
        *(_DWORD *)v11 = 997484326;
        v11 = *(_QWORD *)(a1 + 32) + 4LL;
        *(_QWORD *)(a1 + 32) = v11;
LABEL_43:
        if ( v12 != ++v7 )
          continue;
        if ( *(_QWORD *)(a1 + 24) - v11 <= 8 )
          goto LABEL_13;
LABEL_45:
        *(_BYTE *)(v11 + 8) = 62;
        *(_QWORD *)v11 = 0x676E697274732F3CLL;
        v15 = (_BYTE *)(*(_QWORD *)(a1 + 32) + 9LL);
        *(_QWORD *)(a1 + 32) = v15;
        if ( *(_QWORD *)(a1 + 24) > (unsigned __int64)v15 )
        {
LABEL_14:
          *(_QWORD *)(a1 + 32) = v15 + 1;
          *v15 = 10;
          goto LABEL_15;
        }
LABEL_46:
        sub_227BA10(a1, 10);
LABEL_15:
        v16 = *(__m128i **)(a1 + 32);
        v17 = *(_QWORD *)(a1 + 24) - (_QWORD)v16;
        if ( a2[5] )
        {
          if ( v17 > 0x19 )
          {
            v75 = _mm_load_si128((const __m128i *)&xmmword_23AA160);
            qmemcpy(&v16[1], "ame</key>\n", 10);
            *v16 = v75;
            v58 = *(_QWORD *)(a1 + 32) + 26LL;
            v57 = a1;
            *(_QWORD *)(a1 + 32) = v58;
          }
          else
          {
            v57 = sub_227BF10(a1, "      <key>filename</key>\n", 26);
            v58 = *(_QWORD *)(v57 + 32);
          }
          if ( (unsigned __int64)(*(_QWORD *)(v57 + 24) - v58) > 5 )
          {
            *(_DWORD *)v58 = 538976288;
            *(_WORD *)(v58 + 4) = 8224;
            *(_QWORD *)(v57 + 32) += 6LL;
          }
          else
          {
            sub_227BF10(v57, "      ", 6);
          }
          v59 = *(_QWORD **)(a1 + 32);
          v60 = a2[4];
          v61 = a2[5];
          if ( *(_QWORD *)(a1 + 24) - (_QWORD)v59 > 7u )
          {
            *v59 = 0x3E676E697274733CLL;
            v62 = *(_QWORD *)(a1 + 32) + 8LL;
            *(_QWORD *)(a1 + 32) = v62;
          }
          else
          {
            sub_227BF10(a1, "<string>", 8);
            v62 = *(_QWORD *)(a1 + 32);
          }
          for ( i = &v61[(_QWORD)v60]; i != v60; ++v60 )
          {
            v64 = *v60;
            v65 = *(_QWORD *)(a1 + 24);
            switch ( (char)v64 )
            {
              case '"':
                if ( v65 - v62 > 5 )
                {
                  *(_DWORD *)v62 = 1869967654;
                  *(_WORD *)(v62 + 4) = 15220;
                  v62 = *(_QWORD *)(a1 + 32) + 6LL;
                  *(_QWORD *)(a1 + 32) = v62;
                }
                else
                {
                  sub_227BF10(a1, "&quot;", 6);
                  v62 = *(_QWORD *)(a1 + 32);
                }
                break;
              case '&':
                if ( v65 - v62 > 4 )
                {
                  *(_DWORD *)v62 = 1886216486;
                  *(_BYTE *)(v62 + 4) = 59;
                  v62 = *(_QWORD *)(a1 + 32) + 5LL;
                  *(_QWORD *)(a1 + 32) = v62;
                }
                else
                {
                  sub_227BF10(a1, "&amp;", 5);
                  v62 = *(_QWORD *)(a1 + 32);
                }
                break;
              case '\'':
                if ( v65 - v62 > 5 )
                {
                  *(_DWORD *)v62 = 1869635878;
                  *(_WORD *)(v62 + 4) = 15219;
                  v62 = *(_QWORD *)(a1 + 32) + 6LL;
                  *(_QWORD *)(a1 + 32) = v62;
                }
                else
                {
                  sub_227BF10(a1, "&apos;", 6);
                  v62 = *(_QWORD *)(a1 + 32);
                }
                break;
              case '<':
                if ( v65 - v62 > 3 )
                {
                  *(_DWORD *)v62 = 997485606;
                  v62 = *(_QWORD *)(a1 + 32) + 4LL;
                  *(_QWORD *)(a1 + 32) = v62;
                }
                else
                {
                  sub_227BF10(a1, "&lt;", 4);
                  v62 = *(_QWORD *)(a1 + 32);
                }
                break;
              case '>':
                if ( v65 - v62 > 3 )
                {
                  *(_DWORD *)v62 = 997484326;
                  v62 = *(_QWORD *)(a1 + 32) + 4LL;
                  *(_QWORD *)(a1 + 32) = v62;
                }
                else
                {
                  sub_227BF10(a1, "&gt;", 4);
                  v62 = *(_QWORD *)(a1 + 32);
                }
                break;
              default:
                if ( v65 <= v62 )
                {
                  sub_227BA10(a1, v64);
                }
                else
                {
                  *(_QWORD *)(a1 + 32) = v62 + 1;
                  *(_BYTE *)v62 = v64;
                }
                v62 = *(_QWORD *)(a1 + 32);
                break;
            }
          }
          if ( *(_QWORD *)(a1 + 24) - v62 > 8 )
          {
            *(_BYTE *)(v62 + 8) = 62;
            *(_QWORD *)v62 = 0x676E697274732F3CLL;
            v71 = (_BYTE *)(*(_QWORD *)(a1 + 32) + 9LL);
            *(_QWORD *)(a1 + 32) = v71;
          }
          else
          {
            sub_227BF10(a1, "</string>", 9);
            v71 = *(_BYTE **)(a1 + 32);
          }
          if ( *(_QWORD *)(a1 + 24) <= (unsigned __int64)v71 )
          {
            sub_227BA10(a1, 10);
          }
          else
          {
            *(_QWORD *)(a1 + 32) = v71 + 1;
            *v71 = 10;
          }
          v16 = *(__m128i **)(a1 + 32);
          v17 = *(_QWORD *)(a1 + 24) - (_QWORD)v16;
        }
        if ( *((_DWORD *)a2 + 16) )
        {
          if ( v17 > 0x15 )
          {
            v74 = _mm_load_si128((const __m128i *)&xmmword_23AA170);
            v16[1].m128i_i32[0] = 2036689711;
            v16[1].m128i_i16[2] = 2622;
            *v16 = v74;
            v52 = *(_QWORD *)(a1 + 32) + 22LL;
            v51 = a1;
            *(_QWORD *)(a1 + 32) = v52;
          }
          else
          {
            v51 = sub_227BF10(a1, "      <key>line</key>\n", 22);
            v52 = *(_QWORD *)(v51 + 32);
          }
          if ( (unsigned __int64)(*(_QWORD *)(v51 + 24) - v52) > 5 )
          {
            *(_DWORD *)v52 = 538976288;
            *(_WORD *)(v52 + 4) = 8224;
            *(_QWORD *)(v51 + 32) += 6LL;
          }
          else
          {
            sub_227BF10(v51, "      ", 6);
          }
          v53 = *(_QWORD *)(a1 + 32);
          v54 = *((unsigned int *)a2 + 16);
          if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) - v53) > 8 )
          {
            *(_BYTE *)(v53 + 8) = 62;
            *(_QWORD *)v53 = 0x72656765746E693CLL;
            *(_QWORD *)(a1 + 32) += 9LL;
          }
          else
          {
            sub_227BF10(a1, "<integer>", 9);
          }
          sub_227B930(a1, v54);
          v55 = *(void **)(a1 + 32);
          if ( *(_QWORD *)(a1 + 24) - (_QWORD)v55 > 9u )
          {
            qmemcpy(v55, "</integer>", 10);
            v56 = (_BYTE *)(*(_QWORD *)(a1 + 32) + 10LL);
            *(_QWORD *)(a1 + 32) = v56;
          }
          else
          {
            sub_227BF10(a1, "</integer>", 10);
            v56 = *(_BYTE **)(a1 + 32);
          }
          if ( *(_QWORD *)(a1 + 24) <= (unsigned __int64)v56 )
          {
            sub_227BA10(a1, 10);
          }
          else
          {
            *(_QWORD *)(a1 + 32) = v56 + 1;
            *v56 = 10;
          }
          v16 = *(__m128i **)(a1 + 32);
          v17 = *(_QWORD *)(a1 + 24) - (_QWORD)v16;
        }
        if ( *((_DWORD *)a2 + 17) )
        {
          if ( v17 > 0x17 )
          {
            v73 = _mm_load_si128((const __m128i *)&xmmword_23AA180);
            v16[1].m128i_i64[0] = 0xA3E79656B2F3C6ELL;
            *v16 = v73;
            v46 = *(_QWORD *)(a1 + 32) + 24LL;
            v45 = a1;
            *(_QWORD *)(a1 + 32) = v46;
          }
          else
          {
            v45 = sub_227BF10(a1, "      <key>column</key>\n", 24);
            v46 = *(_QWORD *)(v45 + 32);
          }
          if ( (unsigned __int64)(*(_QWORD *)(v45 + 24) - v46) > 5 )
          {
            *(_DWORD *)v46 = 538976288;
            *(_WORD *)(v46 + 4) = 8224;
            *(_QWORD *)(v45 + 32) += 6LL;
          }
          else
          {
            sub_227BF10(v45, "      ", 6);
          }
          v47 = *(_QWORD *)(a1 + 32);
          v48 = *((unsigned int *)a2 + 17);
          if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) - v47) > 8 )
          {
            *(_BYTE *)(v47 + 8) = 62;
            *(_QWORD *)v47 = 0x72656765746E693CLL;
            *(_QWORD *)(a1 + 32) += 9LL;
          }
          else
          {
            sub_227BF10(a1, "<integer>", 9);
          }
          sub_227B930(a1, v48);
          v49 = *(void **)(a1 + 32);
          if ( *(_QWORD *)(a1 + 24) - (_QWORD)v49 > 9u )
          {
            qmemcpy(v49, "</integer>", 10);
            v50 = (_BYTE *)(*(_QWORD *)(a1 + 32) + 10LL);
            *(_QWORD *)(a1 + 32) = v50;
          }
          else
          {
            sub_227BF10(a1, "</integer>", 10);
            v50 = *(_BYTE **)(a1 + 32);
          }
          if ( *(_QWORD *)(a1 + 24) <= (unsigned __int64)v50 )
          {
            sub_227BA10(a1, 10);
          }
          else
          {
            *(_QWORD *)(a1 + 32) = v50 + 1;
            *v50 = 10;
          }
          v16 = *(__m128i **)(a1 + 32);
          v17 = *(_QWORD *)(a1 + 24) - (_QWORD)v16;
        }
        if ( a2[1] )
        {
          if ( v17 > 0x18 )
          {
            v76 = _mm_load_si128((const __m128i *)&xmmword_23AA190);
            v16[1].m128i_i8[8] = 10;
            v16[1].m128i_i64[0] = 0x3E79656B2F3C6567LL;
            *v16 = v76;
            v37 = *(_QWORD *)(a1 + 32) + 25LL;
            v36 = a1;
            *(_QWORD *)(a1 + 32) = v37;
          }
          else
          {
            v36 = sub_227BF10(a1, "      <key>message</key>\n", 25);
            v37 = *(_QWORD *)(v36 + 32);
          }
          if ( (unsigned __int64)(*(_QWORD *)(v36 + 24) - v37) > 5 )
          {
            *(_DWORD *)v37 = 538976288;
            *(_WORD *)(v37 + 4) = 8224;
            *(_QWORD *)(v36 + 32) += 6LL;
          }
          else
          {
            sub_227BF10(v36, "      ", 6);
          }
          v38 = *(_QWORD **)(a1 + 32);
          v39 = *a2;
          v40 = a2[1];
          if ( *(_QWORD *)(a1 + 24) - (_QWORD)v38 > 7u )
          {
            *v38 = 0x3E676E697274733CLL;
            v41 = *(_QWORD *)(a1 + 32) + 8LL;
            *(_QWORD *)(a1 + 32) = v41;
          }
          else
          {
            sub_227BF10(a1, "<string>", 8);
            v41 = *(_QWORD *)(a1 + 32);
          }
          for ( j = &v40[(_QWORD)v39]; j != v39; ++v39 )
          {
            v43 = *v39;
            v44 = *(_QWORD *)(a1 + 24);
            switch ( (char)v43 )
            {
              case '"':
                if ( v44 - v41 > 5 )
                {
                  *(_DWORD *)v41 = 1869967654;
                  *(_WORD *)(v41 + 4) = 15220;
                  v41 = *(_QWORD *)(a1 + 32) + 6LL;
                  *(_QWORD *)(a1 + 32) = v41;
                }
                else
                {
                  sub_227BF10(a1, "&quot;", 6);
                  v41 = *(_QWORD *)(a1 + 32);
                }
                break;
              case '&':
                if ( v44 - v41 > 4 )
                {
                  *(_DWORD *)v41 = 1886216486;
                  *(_BYTE *)(v41 + 4) = 59;
                  v41 = *(_QWORD *)(a1 + 32) + 5LL;
                  *(_QWORD *)(a1 + 32) = v41;
                }
                else
                {
                  sub_227BF10(a1, "&amp;", 5);
                  v41 = *(_QWORD *)(a1 + 32);
                }
                break;
              case '\'':
                if ( v44 - v41 > 5 )
                {
                  *(_DWORD *)v41 = 1869635878;
                  *(_WORD *)(v41 + 4) = 15219;
                  v41 = *(_QWORD *)(a1 + 32) + 6LL;
                  *(_QWORD *)(a1 + 32) = v41;
                }
                else
                {
                  sub_227BF10(a1, "&apos;", 6);
                  v41 = *(_QWORD *)(a1 + 32);
                }
                break;
              case '<':
                if ( v44 - v41 > 3 )
                {
                  *(_DWORD *)v41 = 997485606;
                  v41 = *(_QWORD *)(a1 + 32) + 4LL;
                  *(_QWORD *)(a1 + 32) = v41;
                }
                else
                {
                  sub_227BF10(a1, "&lt;", 4);
                  v41 = *(_QWORD *)(a1 + 32);
                }
                break;
              case '>':
                if ( v44 - v41 > 3 )
                {
                  *(_DWORD *)v41 = 997484326;
                  v41 = *(_QWORD *)(a1 + 32) + 4LL;
                  *(_QWORD *)(a1 + 32) = v41;
                }
                else
                {
                  sub_227BF10(a1, "&gt;", 4);
                  v41 = *(_QWORD *)(a1 + 32);
                }
                break;
              default:
                if ( v41 >= v44 )
                {
                  sub_227BA10(a1, v43);
                }
                else
                {
                  *(_QWORD *)(a1 + 32) = v41 + 1;
                  *(_BYTE *)v41 = v43;
                }
                v41 = *(_QWORD *)(a1 + 32);
                break;
            }
          }
          if ( *(_QWORD *)(a1 + 24) - v41 > 8 )
          {
            *(_BYTE *)(v41 + 8) = 62;
            *(_QWORD *)v41 = 0x676E697274732F3CLL;
            v70 = (_BYTE *)(*(_QWORD *)(a1 + 32) + 9LL);
            *(_QWORD *)(a1 + 32) = v70;
          }
          else
          {
            sub_227BF10(a1, "</string>", 9);
            v70 = *(_BYTE **)(a1 + 32);
          }
          if ( *(_QWORD *)(a1 + 24) <= (unsigned __int64)v70 )
          {
            sub_227BA10(a1, 10);
          }
          else
          {
            *(_QWORD *)(a1 + 32) = v70 + 1;
            *v70 = 10;
          }
          v16 = *(__m128i **)(a1 + 32);
          v17 = *(_QWORD *)(a1 + 24) - (_QWORD)v16;
        }
        if ( v17 > 0x13 )
        {
          v66 = _mm_load_si128((const __m128i *)&xmmword_23AA1A0);
          v16[1].m128i_i32[0] = 171866469;
          *v16 = v66;
          v19 = *(_QWORD *)(a1 + 32) + 20LL;
          v18 = a1;
          *(_QWORD *)(a1 + 32) = v19;
        }
        else
        {
          v18 = sub_227BF10(a1, "      <key>ID</key>\n", 20);
          v19 = *(_QWORD *)(v18 + 32);
        }
        if ( (unsigned __int64)(*(_QWORD *)(v18 + 24) - v19) > 5 )
        {
          *(_DWORD *)v19 = 538976288;
          *(_WORD *)(v19 + 4) = 8224;
          *(_QWORD *)(v18 + 32) += 6LL;
        }
        else
        {
          sub_227BF10(v18, "      ", 6);
        }
        v20 = *(_QWORD *)(a1 + 32);
        v21 = *((unsigned int *)a2 + 18);
        if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) - v20) > 8 )
        {
          *(_BYTE *)(v20 + 8) = 62;
          *(_QWORD *)v20 = 0x72656765746E693CLL;
          *(_QWORD *)(a1 + 32) += 9LL;
        }
        else
        {
          sub_227BF10(a1, "<integer>", 9);
        }
        sub_227B930(a1, v21);
        v22 = *(void **)(a1 + 32);
        if ( *(_QWORD *)(a1 + 24) - (_QWORD)v22 > 9u )
        {
          qmemcpy(v22, "</integer>", 10);
          v23 = (_BYTE *)(*(_QWORD *)(a1 + 32) + 10LL);
          *(_QWORD *)(a1 + 32) = v23;
        }
        else
        {
          sub_227BF10(a1, "</integer>", 10);
          v23 = *(_BYTE **)(a1 + 32);
        }
        if ( *(_QWORD *)(a1 + 24) <= (unsigned __int64)v23 )
        {
          sub_227BA10(a1, 10);
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v23 + 1;
          *v23 = 10;
        }
        v24 = *(__m128i **)(a1 + 32);
        v25 = *(_QWORD *)(a1 + 24) - (_QWORD)v24;
        if ( a2[11] )
        {
          if ( v25 > 0x1E )
          {
            v72 = _mm_load_si128((const __m128i *)&xmmword_23AA1B0);
            qmemcpy(&v24[1], "ngOption</key>\n", 15);
            *v24 = v72;
            v28 = *(_QWORD *)(a1 + 32) + 31LL;
            v27 = a1;
            *(_QWORD *)(a1 + 32) = v28;
          }
          else
          {
            v27 = sub_227BF10(a1, "      <key>WarningOption</key>\n", 31);
            v28 = *(_QWORD *)(v27 + 32);
          }
          if ( (unsigned __int64)(*(_QWORD *)(v27 + 24) - v28) > 5 )
          {
            *(_DWORD *)v28 = 538976288;
            *(_WORD *)(v28 + 4) = 8224;
            *(_QWORD *)(v27 + 32) += 6LL;
          }
          else
          {
            sub_227BF10(v27, "      ", 6);
          }
          v29 = *(_QWORD **)(a1 + 32);
          v30 = a2[10];
          v31 = a2[11];
          if ( *(_QWORD *)(a1 + 24) - (_QWORD)v29 > 7u )
          {
            *v29 = 0x3E676E697274733CLL;
            v32 = *(_QWORD *)(a1 + 32) + 8LL;
            *(_QWORD *)(a1 + 32) = v32;
          }
          else
          {
            sub_227BF10(a1, "<string>", 8);
            v32 = *(_QWORD *)(a1 + 32);
          }
          for ( k = &v31[(_QWORD)v30]; k != v30; ++v30 )
          {
            v34 = *v30;
            v35 = *(_QWORD *)(a1 + 24);
            switch ( (char)v34 )
            {
              case '"':
                if ( v35 - v32 > 5 )
                {
                  *(_DWORD *)v32 = 1869967654;
                  *(_WORD *)(v32 + 4) = 15220;
                  v32 = *(_QWORD *)(a1 + 32) + 6LL;
                  *(_QWORD *)(a1 + 32) = v32;
                }
                else
                {
                  sub_227BF10(a1, "&quot;", 6);
                  v32 = *(_QWORD *)(a1 + 32);
                }
                break;
              case '&':
                if ( v35 - v32 > 4 )
                {
                  *(_DWORD *)v32 = 1886216486;
                  *(_BYTE *)(v32 + 4) = 59;
                  v32 = *(_QWORD *)(a1 + 32) + 5LL;
                  *(_QWORD *)(a1 + 32) = v32;
                }
                else
                {
                  sub_227BF10(a1, "&amp;", 5);
                  v32 = *(_QWORD *)(a1 + 32);
                }
                break;
              case '\'':
                if ( v35 - v32 > 5 )
                {
                  *(_DWORD *)v32 = 1869635878;
                  *(_WORD *)(v32 + 4) = 15219;
                  v32 = *(_QWORD *)(a1 + 32) + 6LL;
                  *(_QWORD *)(a1 + 32) = v32;
                }
                else
                {
                  sub_227BF10(a1, "&apos;", 6);
                  v32 = *(_QWORD *)(a1 + 32);
                }
                break;
              case '<':
                if ( v35 - v32 > 3 )
                {
                  *(_DWORD *)v32 = 997485606;
                  v32 = *(_QWORD *)(a1 + 32) + 4LL;
                  *(_QWORD *)(a1 + 32) = v32;
                }
                else
                {
                  sub_227BF10(a1, "&lt;", 4);
                  v32 = *(_QWORD *)(a1 + 32);
                }
                break;
              case '>':
                if ( v35 - v32 > 3 )
                {
                  *(_DWORD *)v32 = 997484326;
                  v32 = *(_QWORD *)(a1 + 32) + 4LL;
                  *(_QWORD *)(a1 + 32) = v32;
                }
                else
                {
                  sub_227BF10(a1, "&gt;", 4);
                  v32 = *(_QWORD *)(a1 + 32);
                }
                break;
              default:
                if ( v35 <= v32 )
                {
                  sub_227BA10(a1, v34);
                }
                else
                {
                  *(_QWORD *)(a1 + 32) = v32 + 1;
                  *(_BYTE *)v32 = v34;
                }
                v32 = *(_QWORD *)(a1 + 32);
                break;
            }
          }
          if ( *(_QWORD *)(a1 + 24) - v32 > 8 )
          {
            *(_BYTE *)(v32 + 8) = 62;
            *(_QWORD *)v32 = 0x676E697274732F3CLL;
            v69 = (_BYTE *)(*(_QWORD *)(a1 + 32) + 9LL);
            *(_QWORD *)(a1 + 32) = v69;
          }
          else
          {
            sub_227BF10(a1, "</string>", 9);
            v69 = *(_BYTE **)(a1 + 32);
          }
          if ( *(_QWORD *)(a1 + 24) <= (unsigned __int64)v69 )
          {
            sub_227BA10(a1, 10);
          }
          else
          {
            *(_QWORD *)(a1 + 32) = v69 + 1;
            *v69 = 10;
          }
          v24 = *(__m128i **)(a1 + 32);
          v25 = *(_QWORD *)(a1 + 24) - (_QWORD)v24;
        }
        if ( v25 <= 0xB )
          return sub_227BF10(a1, "    </dict>\n", 12);
        qmemcpy(v24, "    </dict>\n", 12);
        *(_QWORD *)(a1 + 32) += 12LL;
        return 0x69642F3C20202020LL;
      default:
        if ( v11 >= v14 )
        {
          sub_227BA10(a1, v13);
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v11 + 1;
          *(_BYTE *)v11 = v13;
        }
        v11 = *(_QWORD *)(a1 + 32);
        goto LABEL_43;
    }
  }
}
