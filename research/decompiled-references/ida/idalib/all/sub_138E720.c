void __fastcall sub_138E720(__int64 a1)
{
  _BYTE *v1; // rdx
  __m128i *v2; // rdx
  unsigned __int64 v3; // rax
  void *v4; // rdx
  unsigned __int8 **v5; // rbx
  unsigned __int8 **v6; // r14
  unsigned __int8 **v7; // rsi
  void *v8; // rdx
  _QWORD *v9; // rdx
  __int64 v10; // rbx
  void *v11; // rdi
  unsigned __int64 v12; // r12
  void *v13; // rsi
  __int64 (__fastcall ***v14)(); // rax
  char *v15; // rcx
  unsigned __int8 *v16; // rbx
  __int64 v17; // r15
  _BYTE *v18; // rcx
  unsigned __int8 *j; // r15
  __int64 v20; // rsi
  __int64 (__fastcall ***v21)(); // rax
  char *v22; // rcx
  unsigned __int8 *v23; // rbx
  __int64 v24; // r15
  _BYTE *v25; // rcx
  unsigned __int8 *i; // r15
  __int64 v27; // rsi
  __m128i v28; // xmm0
  _BYTE *v29; // rax
  _BYTE *v30; // rax
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  __int64 (__fastcall **v33)(); // [rsp+0h] [rbp-298h] BYREF
  int v34; // [rsp+8h] [rbp-290h]
  __int128 v35; // [rsp+10h] [rbp-288h]
  _BYTE *v36; // [rsp+20h] [rbp-278h]
  char v37; // [rsp+28h] [rbp-270h]
  int v38; // [rsp+2Ch] [rbp-26Ch]
  void **p_ptr; // [rsp+30h] [rbp-268h]
  void *ptr; // [rsp+40h] [rbp-258h] BYREF
  __m128i si128; // [rsp+48h] [rbp-250h]
  _BYTE v42[576]; // [rsp+58h] [rbp-240h] BYREF

  v34 = 2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8EA0);
  ptr = v42;
  v37 = 0;
  v38 = 1;
  v33 = &off_2BEBEE0;
  v36 = nullptr;
  v35 = 0;
  p_ptr = &ptr;
  sub_227B8B0(&v33, 0, 0, 0);
  v1 = v36;
  if ( *((_QWORD *)&v35 + 1) - (_QWORD)v36 > 6u )
  {
    *(_DWORD *)v36 = 1667851324;
    *((_WORD *)v1 + 2) = 15988;
    v1[6] = 10;
    v2 = (__m128i *)(v36 + 7);
    v36 += 7;
  }
  else
  {
    sub_227BF10(&v33, "<dict>\n", 7);
    v2 = (__m128i *)v36;
  }
  v3 = *((_QWORD *)&v35 + 1) - (_QWORD)v2;
  if ( *(_QWORD *)(a1 + 1048) )
  {
    if ( v3 > 0x16 )
    {
      v31 = _mm_load_si128((const __m128i *)&xmmword_23AA1C0);
      v2[1].m128i_i32[0] = 1701523260;
      v2[1].m128i_i16[2] = 15993;
      *v2 = v31;
      v2[1].m128i_i8[6] = 10;
      v22 = v36 + 23;
      v21 = &v33;
      v36 += 23;
    }
    else
    {
      v21 = (__int64 (__fastcall ***)())sub_227BF10(&v33, "  <key>main-file</key>\n", 23);
      v22 = (char *)v21[4];
    }
    if ( (unsigned __int64)((char *)v21[3] - v22) > 1 )
    {
      *(_WORD *)v22 = 8224;
      v21[4] = (__int64 (__fastcall **)())((char *)v21[4] + 2);
    }
    else
    {
      sub_227BF10(v21, "  ", 2);
    }
    v23 = *(unsigned __int8 **)(a1 + 1040);
    v24 = *(_QWORD *)(a1 + 1048);
    if ( *((_QWORD *)&v35 + 1) - (_QWORD)v36 > 7u )
    {
      *(_QWORD *)v36 = 0x3E676E697274733CLL;
      v25 = v36 + 8;
      v36 += 8;
    }
    else
    {
      sub_227BF10(&v33, "<string>", 8);
      v25 = v36;
    }
    for ( i = &v23[v24]; i != v23; ++v23 )
    {
      v27 = *v23;
      switch ( (char)v27 )
      {
        case '"':
          if ( *((_QWORD *)&v35 + 1) - (_QWORD)v25 > 5u )
          {
            *(_DWORD *)v25 = 1869967654;
            *((_WORD *)v25 + 2) = 15220;
            v25 = v36 + 6;
            v36 += 6;
          }
          else
          {
            sub_227BF10(&v33, "&quot;", 6);
            v25 = v36;
          }
          break;
        case '&':
          if ( *((_QWORD *)&v35 + 1) - (_QWORD)v25 > 4u )
          {
            *(_DWORD *)v25 = 1886216486;
            v25[4] = 59;
            v25 = v36 + 5;
            v36 += 5;
          }
          else
          {
            sub_227BF10(&v33, "&amp;", 5);
            v25 = v36;
          }
          break;
        case '\'':
          if ( *((_QWORD *)&v35 + 1) - (_QWORD)v25 > 5u )
          {
            *(_DWORD *)v25 = 1869635878;
            *((_WORD *)v25 + 2) = 15219;
            v25 = v36 + 6;
            v36 += 6;
          }
          else
          {
            sub_227BF10(&v33, "&apos;", 6);
            v25 = v36;
          }
          break;
        case '<':
          if ( *((_QWORD *)&v35 + 1) - (_QWORD)v25 > 3u )
          {
            *(_DWORD *)v25 = 997485606;
            v25 = v36 + 4;
            v36 += 4;
          }
          else
          {
            sub_227BF10(&v33, "&lt;", 4);
            v25 = v36;
          }
          break;
        case '>':
          if ( *((_QWORD *)&v35 + 1) - (_QWORD)v25 > 3u )
          {
            *(_DWORD *)v25 = 997484326;
            v25 = v36 + 4;
            v36 += 4;
          }
          else
          {
            sub_227BF10(&v33, "&gt;", 4);
            v25 = v36;
          }
          break;
        default:
          if ( (unsigned __int64)v25 >= *((_QWORD *)&v35 + 1) )
          {
            sub_227BA10(&v33, v27);
          }
          else
          {
            v36 = v25 + 1;
            *v25 = v27;
          }
          v25 = v36;
          break;
      }
    }
    if ( *((_QWORD *)&v35 + 1) - (_QWORD)v25 > 8u )
    {
      v25[8] = 62;
      *(_QWORD *)v25 = 0x676E697274732F3CLL;
      v30 = v36 + 9;
      v36 += 9;
    }
    else
    {
      sub_227BF10(&v33, "</string>", 9);
      v30 = v36;
    }
    if ( *((_QWORD *)&v35 + 1) <= (unsigned __int64)v30 )
    {
      sub_227BA10(&v33, 10);
    }
    else
    {
      v36 = v30 + 1;
      *v30 = 10;
    }
    v2 = (__m128i *)v36;
    v3 = *((_QWORD *)&v35 + 1) - (_QWORD)v36;
  }
  if ( *(_QWORD *)(a1 + 1080) )
  {
    if ( v3 > 0x1E )
    {
      v32 = _mm_load_si128((const __m128i *)&xmmword_23AA1D0);
      qmemcpy(&v2[1], "ug-flags</key>\n", 15);
      *v2 = v32;
      v15 = v36 + 31;
      v14 = &v33;
      v36 += 31;
    }
    else
    {
      v14 = (__int64 (__fastcall ***)())sub_227BF10(&v33, "  <key>dwarf-debug-flags</key>\n", 31);
      v15 = (char *)v14[4];
    }
    if ( (unsigned __int64)((char *)v14[3] - v15) > 1 )
    {
      *(_WORD *)v15 = 8224;
      v14[4] = (__int64 (__fastcall **)())((char *)v14[4] + 2);
    }
    else
    {
      sub_227BF10(v14, "  ", 2);
    }
    v16 = *(unsigned __int8 **)(a1 + 1072);
    v17 = *(_QWORD *)(a1 + 1080);
    if ( *((_QWORD *)&v35 + 1) - (_QWORD)v36 > 7u )
    {
      *(_QWORD *)v36 = 0x3E676E697274733CLL;
      v18 = v36 + 8;
      v36 += 8;
    }
    else
    {
      sub_227BF10(&v33, "<string>", 8);
      v18 = v36;
    }
    for ( j = &v16[v17]; j != v16; ++v16 )
    {
      v20 = *v16;
      switch ( (char)v20 )
      {
        case '"':
          if ( *((_QWORD *)&v35 + 1) - (_QWORD)v18 > 5u )
          {
            *(_DWORD *)v18 = 1869967654;
            *((_WORD *)v18 + 2) = 15220;
            v18 = v36 + 6;
            v36 += 6;
          }
          else
          {
            sub_227BF10(&v33, "&quot;", 6);
            v18 = v36;
          }
          break;
        case '&':
          if ( *((_QWORD *)&v35 + 1) - (_QWORD)v18 > 4u )
          {
            *(_DWORD *)v18 = 1886216486;
            v18[4] = 59;
            v18 = v36 + 5;
            v36 += 5;
          }
          else
          {
            sub_227BF10(&v33, "&amp;", 5);
            v18 = v36;
          }
          break;
        case '\'':
          if ( *((_QWORD *)&v35 + 1) - (_QWORD)v18 > 5u )
          {
            *(_DWORD *)v18 = 1869635878;
            *((_WORD *)v18 + 2) = 15219;
            v18 = v36 + 6;
            v36 += 6;
          }
          else
          {
            sub_227BF10(&v33, "&apos;", 6);
            v18 = v36;
          }
          break;
        case '<':
          if ( *((_QWORD *)&v35 + 1) - (_QWORD)v18 > 3u )
          {
            *(_DWORD *)v18 = 997485606;
            v18 = v36 + 4;
            v36 += 4;
          }
          else
          {
            sub_227BF10(&v33, "&lt;", 4);
            v18 = v36;
          }
          break;
        case '>':
          if ( *((_QWORD *)&v35 + 1) - (_QWORD)v18 > 3u )
          {
            *(_DWORD *)v18 = 997484326;
            v18 = v36 + 4;
            v36 += 4;
          }
          else
          {
            sub_227BF10(&v33, "&gt;", 4);
            v18 = v36;
          }
          break;
        default:
          if ( *((_QWORD *)&v35 + 1) <= (unsigned __int64)v18 )
          {
            sub_227BA10(&v33, v20);
          }
          else
          {
            v36 = v18 + 1;
            *v18 = v20;
          }
          v18 = v36;
          break;
      }
    }
    if ( *((_QWORD *)&v35 + 1) - (_QWORD)v18 > 8u )
    {
      v18[8] = 62;
      *(_QWORD *)v18 = 0x676E697274732F3CLL;
      v29 = v36 + 9;
      v36 += 9;
    }
    else
    {
      sub_227BF10(&v33, "</string>", 9);
      v29 = v36;
    }
    if ( *((_QWORD *)&v35 + 1) <= (unsigned __int64)v29 )
    {
      sub_227BA10(&v33, 10);
    }
    else
    {
      v36 = v29 + 1;
      *v29 = 10;
    }
    v2 = (__m128i *)v36;
    v3 = *((_QWORD *)&v35 + 1) - (_QWORD)v36;
  }
  if ( v3 > 0x18 )
  {
    v28 = _mm_load_si128((const __m128i *)&xmmword_23AA1E0);
    v2[1].m128i_i8[8] = 10;
    v2[1].m128i_i64[0] = 0x3E79656B2F3C7363LL;
    *v2 = v28;
    v4 = v36 + 25;
    v36 += 25;
  }
  else
  {
    sub_227BF10(&v33, "  <key>diagnostics</key>\n", 25);
    v4 = v36;
  }
  if ( *((_QWORD *)&v35 + 1) - (_QWORD)v4 > 9u )
  {
    qmemcpy(v4, "  <array>\n", 10);
    v36 += 10;
  }
  else
  {
    sub_227BF10(&v33, "  <array>\n", 10);
  }
  v5 = *(unsigned __int8 ***)(a1 + 64);
  v6 = &v5[15 * *(unsigned int *)(a1 + 72)];
  while ( v6 != v5 )
  {
    v7 = v5;
    v5 += 15;
    sub_138D310((__int64)&v33, v7);
  }
  v8 = v36;
  if ( *((_QWORD *)&v35 + 1) - (_QWORD)v36 > 0xAu )
  {
    v36[10] = 10;
    qmemcpy(v8, "  </array>", 10);
    v9 = v36 + 11;
    v36 = v9;
    if ( *((_QWORD *)&v35 + 1) - (_QWORD)v9 <= 7u )
      goto LABEL_13;
  }
  else
  {
    sub_227BF10(&v33, "  </array>\n", 11);
    v9 = v36;
    if ( *((_QWORD *)&v35 + 1) - (_QWORD)v36 <= 7u )
    {
LABEL_13:
      sub_227BF10(&v33, "</dict>\n", 8);
      goto LABEL_14;
    }
  }
  *v9 = 0xA3E746369642F3CLL;
  v36 += 8;
LABEL_14:
  v10 = *(_QWORD *)(a1 + 16);
  v11 = *(void **)(v10 + 32);
  v12 = (unsigned __int64)p_ptr[1];
  v13 = *p_ptr;
  if ( v12 > *(_QWORD *)(v10 + 24) - (_QWORD)v11 )
  {
    sub_227BF10(v10, v13, p_ptr[1]);
  }
  else if ( v12 )
  {
    memcpy(v11, v13, (size_t)p_ptr[1]);
    *(_QWORD *)(v10 + 32) += v12;
  }
  v33 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v33);
  if ( ptr != v42 )
    free(ptr);
}
