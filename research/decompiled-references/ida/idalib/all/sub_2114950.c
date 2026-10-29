_BYTE *__fastcall sub_2114950(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  void *v9; // rdx
  int v10; // ecx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  _BYTE *v13; // rax
  int v14; // edx
  unsigned __int64 v15; // rcx
  int v16; // edx
  _BYTE *v17; // rax
  _BYTE *v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  unsigned __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rax
  _BYTE *result; // rax
  _BYTE *v26; // rdx
  int v27; // ecx
  __int64 v28; // rdi
  void *v29; // rdx
  __int64 v30; // rdi
  int v31; // edx
  _BYTE *v32; // rax
  __int64 v33; // r12
  void *v34; // rdi
  const void *v35; // rsi
  size_t v36; // rbp
  unsigned __int64 v37; // rdx
  __int64 v38; // rdi
  unsigned __int64 v39; // rax
  size_t *v40; // rsi
  size_t v41; // rdx
  void *v42; // rsi
  __int64 v43; // rax
  size_t *v44; // rsi
  size_t v45; // rdx
  void *v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rdx
  _BYTE *v49; // rax
  __int64 v50; // rax
  __m128i si128; // xmm0
  __m128i v52; // xmm0
  __m128i v53; // xmm0
  __int64 v54; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v55[4]; // [rsp+10h] [rbp-58h] BYREF
  __int16 v56; // [rsp+30h] [rbp-38h]

  if ( *(_DWORD *)(a1 + 180) == -1
    && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 56LL))(
         a2,
         *(_QWORD *)(a1 + 152),
         *(_QWORD *)(a1 + 160)) )
  {
    v32 = *(_BYTE **)(a4 + 32);
    if ( *(_QWORD *)(a4 + 24) <= (unsigned __int64)v32 )
    {
      v33 = sub_227BA10(a4, 9);
    }
    else
    {
      v33 = a4;
      *(_QWORD *)(a4 + 32) = v32 + 1;
      *v32 = 9;
    }
    v34 = *(void **)(v33 + 32);
    v35 = *(const void **)(a1 + 152);
    v36 = *(_QWORD *)(a1 + 160);
    if ( v36 > *(_QWORD *)(v33 + 24) - (_QWORD)v34 )
    {
      sub_227BF10(v33, v35, v36);
    }
    else if ( v36 )
    {
      memcpy(v34, v35, v36);
      *(_QWORD *)(v33 + 32) += v36;
    }
    result = *(_BYTE **)(a4 + 32);
    v37 = *(_QWORD *)(a4 + 24);
    if ( a5 )
    {
      if ( v37 <= (unsigned __int64)result )
      {
        v38 = sub_227BA10(a4, 9);
      }
      else
      {
        v38 = a4;
        *(_QWORD *)(a4 + 32) = result + 1;
        *result = 9;
      }
      sub_227B910(v38, a5);
      result = *(_BYTE **)(a4 + 32);
      v37 = *(_QWORD *)(a4 + 24);
    }
    if ( v37 <= (unsigned __int64)result )
      return (_BYTE *)sub_227BA10(a4, 10);
LABEL_128:
    *(_QWORD *)(a4 + 32) = result + 1;
    *result = 10;
    return result;
  }
  v9 = *(void **)(a4 + 32);
  if ( *(_QWORD *)(a4 + 24) - (_QWORD)v9 > 9u )
  {
    qmemcpy(v9, "\t.section\t", 10);
    *(_QWORD *)(a4 + 32) += 10LL;
  }
  else
  {
    sub_227BF10(a4, "\t.section\t", 10);
  }
  sub_21146E0(a4, *(void **)(a1 + 152), *(_QWORD *)(a1 + 160));
  if ( *(_BYTE *)(a2 + 233) )
  {
    v10 = *(_DWORD *)(a1 + 176);
    v11 = *(_QWORD *)(a4 + 24);
    v12 = *(_QWORD *)(a4 + 32);
    if ( (v10 & 0x10) == 0 )
    {
      if ( (v10 & 2) != 0 )
      {
        if ( v11 - v12 > 6 )
        {
          *(_DWORD *)v12 = 1818305324;
          *(_WORD *)(v12 + 4) = 28524;
          *(_BYTE *)(v12 + 6) = 99;
          v12 = *(_QWORD *)(a4 + 32) + 7LL;
          *(_QWORD *)(a4 + 32) = v12;
        }
        else
        {
          sub_227BF10(a4, ",#alloc", 7);
          v12 = *(_QWORD *)(a4 + 32);
        }
        v10 = *(_DWORD *)(a1 + 176);
        v11 = *(_QWORD *)(a4 + 24);
      }
      if ( (v10 & 4) != 0 )
      {
        if ( v11 - v12 > 0xA )
        {
          qmemcpy((void *)v12, ",#execinstr", 11);
          v12 = *(_QWORD *)(a4 + 32) + 11LL;
          *(_QWORD *)(a4 + 32) = v12;
        }
        else
        {
          sub_227BF10(a4, ",#execinstr", 11);
          v12 = *(_QWORD *)(a4 + 32);
        }
        v10 = *(_DWORD *)(a1 + 176);
        v11 = *(_QWORD *)(a4 + 24);
      }
      if ( (v10 & 1) != 0 )
      {
        if ( v11 - v12 > 6 )
        {
          *(_DWORD *)v12 = 1920410412;
          *(_WORD *)(v12 + 4) = 29801;
          *(_BYTE *)(v12 + 6) = 101;
          v12 = *(_QWORD *)(a4 + 32) + 7LL;
          *(_QWORD *)(a4 + 32) = v12;
        }
        else
        {
          sub_227BF10(a4, ",#write", 7);
          v12 = *(_QWORD *)(a4 + 32);
        }
        v10 = *(_DWORD *)(a1 + 176);
        v11 = *(_QWORD *)(a4 + 24);
      }
      if ( v10 < 0 )
      {
        if ( v11 - v12 > 8 )
        {
          *(_BYTE *)(v12 + 8) = 101;
          *(_QWORD *)v12 = 0x64756C637865232CLL;
          v12 = *(_QWORD *)(a4 + 32) + 9LL;
          *(_QWORD *)(a4 + 32) = v12;
        }
        else
        {
          sub_227BF10(a4, ",#exclude", 9);
          v12 = *(_QWORD *)(a4 + 32);
        }
        v10 = *(_DWORD *)(a1 + 176);
        v11 = *(_QWORD *)(a4 + 24);
      }
      if ( (v10 & 0x400) != 0 )
      {
        if ( v11 - v12 > 4 )
        {
          *(_DWORD *)v12 = 1819550508;
          *(_BYTE *)(v12 + 4) = 115;
          v12 = *(_QWORD *)(a4 + 32) + 5LL;
          *(_QWORD *)(a4 + 32) = v12;
        }
        else
        {
          sub_227BF10(a4, ",#tls", 5);
          v12 = *(_QWORD *)(a4 + 32);
        }
        v11 = *(_QWORD *)(a4 + 24);
      }
      if ( v11 <= v12 )
        return (_BYTE *)sub_227BA10(a4, 10);
      *(_QWORD *)(a4 + 32) = v12 + 1;
      *(_BYTE *)v12 = 10;
      return (_BYTE *)(v12 + 1);
    }
    if ( v11 - v12 <= 1 )
      goto LABEL_8;
  }
  else
  {
    v12 = *(_QWORD *)(a4 + 32);
    if ( *(_QWORD *)(a4 + 24) - v12 <= 1 )
    {
LABEL_8:
      sub_227BF10(a4, ",\"", 2);
      v13 = *(_BYTE **)(a4 + 32);
      goto LABEL_9;
    }
  }
  *(_WORD *)v12 = 8748;
  v13 = (_BYTE *)(*(_QWORD *)(a4 + 32) + 2LL);
  *(_QWORD *)(a4 + 32) = v13;
LABEL_9:
  v14 = *(_DWORD *)(a1 + 176);
  v15 = *(_QWORD *)(a4 + 24);
  if ( (v14 & 2) != 0 )
  {
    if ( (unsigned __int64)v13 >= v15 )
    {
      sub_227BA10(a4, 97);
    }
    else
    {
      *(_QWORD *)(a4 + 32) = v13 + 1;
      *v13 = 97;
    }
    v14 = *(_DWORD *)(a1 + 176);
    v13 = *(_BYTE **)(a4 + 32);
    v15 = *(_QWORD *)(a4 + 24);
  }
  if ( v14 < 0 )
  {
    if ( (unsigned __int64)v13 >= v15 )
    {
      sub_227BA10(a4, 101);
    }
    else
    {
      *(_QWORD *)(a4 + 32) = v13 + 1;
      *v13 = 101;
    }
    v14 = *(_DWORD *)(a1 + 176);
    v13 = *(_BYTE **)(a4 + 32);
    v15 = *(_QWORD *)(a4 + 24);
  }
  if ( (v14 & 4) != 0 )
  {
    if ( v15 <= (unsigned __int64)v13 )
    {
      sub_227BA10(a4, 120);
    }
    else
    {
      *(_QWORD *)(a4 + 32) = v13 + 1;
      *v13 = 120;
    }
    v14 = *(_DWORD *)(a1 + 176);
    v13 = *(_BYTE **)(a4 + 32);
    v15 = *(_QWORD *)(a4 + 24);
  }
  if ( (v14 & 1) != 0 )
  {
    if ( v15 <= (unsigned __int64)v13 )
    {
      sub_227BA10(a4, 119);
    }
    else
    {
      *(_QWORD *)(a4 + 32) = v13 + 1;
      *v13 = 119;
    }
    v14 = *(_DWORD *)(a1 + 176);
    v13 = *(_BYTE **)(a4 + 32);
    v15 = *(_QWORD *)(a4 + 24);
  }
  if ( (v14 & 0x10) != 0 )
  {
    if ( (unsigned __int64)v13 >= v15 )
    {
      sub_227BA10(a4, 77);
    }
    else
    {
      *(_QWORD *)(a4 + 32) = v13 + 1;
      *v13 = 77;
    }
    v14 = *(_DWORD *)(a1 + 176);
    v13 = *(_BYTE **)(a4 + 32);
    v15 = *(_QWORD *)(a4 + 24);
  }
  if ( (v14 & 0x20) != 0 )
  {
    if ( (unsigned __int64)v13 >= v15 )
    {
      sub_227BA10(a4, 83);
    }
    else
    {
      *(_QWORD *)(a4 + 32) = v13 + 1;
      *v13 = 83;
    }
    v14 = *(_DWORD *)(a1 + 176);
    v13 = *(_BYTE **)(a4 + 32);
    v15 = *(_QWORD *)(a4 + 24);
  }
  if ( (v14 & 0x400) != 0 )
  {
    if ( v15 <= (unsigned __int64)v13 )
    {
      sub_227BA10(a4, 84);
    }
    else
    {
      *(_QWORD *)(a4 + 32) = v13 + 1;
      *v13 = 84;
    }
    v14 = *(_DWORD *)(a1 + 176);
    v13 = *(_BYTE **)(a4 + 32);
    v15 = *(_QWORD *)(a4 + 24);
  }
  if ( (v14 & 0x80u) != 0 )
  {
    if ( v15 <= (unsigned __int64)v13 )
    {
      sub_227BA10(a4, 111);
    }
    else
    {
      *(_QWORD *)(a4 + 32) = v13 + 1;
      *v13 = 111;
    }
    v14 = *(_DWORD *)(a1 + 176);
    v13 = *(_BYTE **)(a4 + 32);
    v15 = *(_QWORD *)(a4 + 24);
  }
  if ( (v14 & 0x200) != 0 )
  {
    if ( (unsigned __int64)v13 >= v15 )
    {
      sub_227BA10(a4, 71);
    }
    else
    {
      *(_QWORD *)(a4 + 32) = v13 + 1;
      *v13 = 71;
    }
    v14 = *(_DWORD *)(a1 + 176);
    v13 = *(_BYTE **)(a4 + 32);
    v15 = *(_QWORD *)(a4 + 24);
  }
  if ( (v14 & 0x200000) != 0 )
  {
    if ( (unsigned __int64)v13 >= v15 )
    {
      sub_227BA10(a4, 82);
    }
    else
    {
      *(_QWORD *)(a4 + 32) = v13 + 1;
      *v13 = 82;
    }
    v13 = *(_BYTE **)(a4 + 32);
    v15 = *(_QWORD *)(a4 + 24);
  }
  if ( *(_DWORD *)(a3 + 44) == 13 && (*(_BYTE *)(a1 + 178) & 0x10) != 0 )
  {
    if ( (unsigned __int64)v13 >= v15 )
    {
      sub_227BA10(a4, 82);
    }
    else
    {
      *(_QWORD *)(a4 + 32) = v13 + 1;
      *v13 = 82;
    }
    v13 = *(_BYTE **)(a4 + 32);
    v15 = *(_QWORD *)(a4 + 24);
  }
  v16 = *(_DWORD *)(a3 + 32);
  if ( v16 == 39 )
  {
    v31 = *(_DWORD *)(a1 + 176);
    if ( (v31 & 0x20000000) != 0 )
    {
      if ( (unsigned __int64)v13 >= v15 )
      {
        sub_227BA10(a4, 99);
      }
      else
      {
        *(_QWORD *)(a4 + 32) = v13 + 1;
        *v13 = 99;
      }
      v31 = *(_DWORD *)(a1 + 176);
      v13 = *(_BYTE **)(a4 + 32);
      v15 = *(_QWORD *)(a4 + 24);
    }
    if ( (v31 & 0x10000000) != 0 )
    {
      if ( v15 <= (unsigned __int64)v13 )
      {
        sub_227BA10(a4, 100);
      }
      else
      {
        *(_QWORD *)(a4 + 32) = v13 + 1;
        *v13 = 100;
      }
      v13 = *(_BYTE **)(a4 + 32);
      v15 = *(_QWORD *)(a4 + 24);
    }
  }
  else if ( (unsigned int)(v16 - 1) <= 1 || (unsigned int)(v16 - 35) <= 1 || (unsigned int)(v16 - 3) <= 2 )
  {
    if ( (*(_BYTE *)(a1 + 179) & 0x20) != 0 )
    {
      if ( (unsigned __int64)v13 >= v15 )
      {
        sub_227BA10(a4, 121);
      }
      else
      {
        *(_QWORD *)(a4 + 32) = v13 + 1;
        *v13 = 121;
      }
      v13 = *(_BYTE **)(a4 + 32);
      v15 = *(_QWORD *)(a4 + 24);
    }
  }
  else if ( v16 == 12 )
  {
    if ( (*(_BYTE *)(a1 + 179) & 0x10) != 0 )
    {
      if ( (unsigned __int64)v13 >= v15 )
      {
        sub_227BA10(a4, 115);
      }
      else
      {
        *(_QWORD *)(a4 + 32) = v13 + 1;
        *v13 = 115;
      }
      v13 = *(_BYTE **)(a4 + 32);
      v15 = *(_QWORD *)(a4 + 24);
    }
  }
  else if ( v16 == 38 && (*(_BYTE *)(a1 + 179) & 0x10) != 0 )
  {
    if ( (unsigned __int64)v13 >= v15 )
    {
      sub_227BA10(a4, 108);
    }
    else
    {
      *(_QWORD *)(a4 + 32) = v13 + 1;
      *v13 = 108;
    }
    v13 = *(_BYTE **)(a4 + 32);
    v15 = *(_QWORD *)(a4 + 24);
  }
  if ( (unsigned __int64)v13 >= v15 )
  {
    sub_227BA10(a4, 34);
  }
  else
  {
    *(_QWORD *)(a4 + 32) = v13 + 1;
    *v13 = 34;
  }
  v17 = *(_BYTE **)(a4 + 32);
  if ( (unsigned __int64)v17 >= *(_QWORD *)(a4 + 24) )
  {
    sub_227BA10(a4, 44);
  }
  else
  {
    *(_QWORD *)(a4 + 32) = v17 + 1;
    *v17 = 44;
  }
  v18 = *(_BYTE **)(a4 + 32);
  v19 = *(_QWORD *)(a4 + 24);
  if ( **(_BYTE **)(a2 + 48) == 64 )
  {
    if ( (unsigned __int64)v18 >= v19 )
    {
      sub_227BA10(a4, 37);
    }
    else
    {
      *(_QWORD *)(a4 + 32) = v18 + 1;
      *v18 = 37;
    }
  }
  else if ( (unsigned __int64)v18 >= v19 )
  {
    sub_227BA10(a4, 64);
  }
  else
  {
    *(_QWORD *)(a4 + 32) = v18 + 1;
    *v18 = 64;
  }
  v20 = *(_QWORD *)(a4 + 32);
  v21 = *(_DWORD *)(a1 + 172);
  v22 = *(_QWORD *)(a4 + 24) - v20;
  switch ( v21 )
  {
    case 14:
      if ( v22 <= 9 )
      {
        sub_227BF10(a4, "init_array", 10);
        result = *(_BYTE **)(a4 + 32);
        break;
      }
      v50 = 0x7272615F74696E69LL;
LABEL_232:
      *(_QWORD *)v20 = v50;
      *(_WORD *)(v20 + 8) = 31073;
      result = (_BYTE *)(*(_QWORD *)(a4 + 32) + 10LL);
      *(_QWORD *)(a4 + 32) = result;
      break;
    case 15:
      if ( v22 <= 9 )
      {
        sub_227BF10(a4, "fini_array", 10);
        result = *(_BYTE **)(a4 + 32);
        break;
      }
      v50 = 0x7272615F696E6966LL;
      goto LABEL_232;
    case 16:
      if ( v22 > 0xC )
      {
        qmemcpy((void *)v20, "preinit_array", 13);
        result = (_BYTE *)(*(_QWORD *)(a4 + 32) + 13LL);
        *(_QWORD *)(a4 + 32) = result;
      }
      else
      {
        sub_227BF10(a4, "preinit_array", 13);
        result = *(_BYTE **)(a4 + 32);
      }
      break;
    case 8:
      if ( v22 > 5 )
      {
        *(_DWORD *)v20 = 1768058734;
        *(_WORD *)(v20 + 4) = 29556;
        result = (_BYTE *)(*(_QWORD *)(a4 + 32) + 6LL);
        *(_QWORD *)(a4 + 32) = result;
      }
      else
      {
        sub_227BF10(a4, "nobits", 6);
        result = *(_BYTE **)(a4 + 32);
      }
      break;
    case 7:
      if ( v22 > 3 )
      {
        *(_DWORD *)v20 = 1702129518;
        result = (_BYTE *)(*(_QWORD *)(a4 + 32) + 4LL);
        *(_QWORD *)(a4 + 32) = result;
      }
      else
      {
        sub_227BF10(a4, "note", 4);
        result = *(_BYTE **)(a4 + 32);
      }
      break;
    case 1:
      if ( v22 > 7 )
      {
        *(_QWORD *)v20 = 0x73746962676F7270LL;
        result = (_BYTE *)(*(_QWORD *)(a4 + 32) + 8LL);
        *(_QWORD *)(a4 + 32) = result;
      }
      else
      {
        sub_227BF10(a4, "progbits", 8);
        result = *(_BYTE **)(a4 + 32);
      }
      break;
    case 1879048193:
      if ( v22 > 5 )
      {
        *(_DWORD *)v20 = 1769434741;
        *(_WORD *)(v20 + 4) = 25710;
        result = (_BYTE *)(*(_QWORD *)(a4 + 32) + 6LL);
        *(_QWORD *)(a4 + 32) = result;
      }
      else
      {
        sub_227BF10(a4, "unwind", 6);
        result = *(_BYTE **)(a4 + 32);
      }
      break;
    case 1879048222:
      if ( v22 > 9 )
      {
        qmemcpy((void *)v20, "0x7000001e", 10);
        result = (_BYTE *)(*(_QWORD *)(a4 + 32) + 10LL);
        *(_QWORD *)(a4 + 32) = result;
      }
      else
      {
        sub_227BF10(a4, "0x7000001e", 10);
        result = *(_BYTE **)(a4 + 32);
      }
      break;
    case 1879002112:
      if ( v22 > 0xA )
      {
        qmemcpy((void *)v20, "llvm_odrtab", 11);
        result = (_BYTE *)(*(_QWORD *)(a4 + 32) + 11LL);
        *(_QWORD *)(a4 + 32) = result;
      }
      else
      {
        sub_227BF10(a4, "llvm_odrtab", 11);
        result = *(_BYTE **)(a4 + 32);
      }
      break;
    case 1879002113:
      if ( v22 > 0x12 )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_23AB230);
        *(_BYTE *)(v20 + 18) = 115;
        *(_WORD *)(v20 + 16) = 28271;
        *(__m128i *)v20 = si128;
        result = (_BYTE *)(*(_QWORD *)(a4 + 32) + 19LL);
        *(_QWORD *)(a4 + 32) = result;
      }
      else
      {
        sub_227BF10(a4, "llvm_linker_options", 19);
        result = *(_BYTE **)(a4 + 32);
      }
      break;
    case 1879002121:
      if ( v22 > 0x16 )
      {
        v52 = _mm_load_si128((const __m128i *)&xmmword_23AB240);
        *(_DWORD *)(v20 + 16) = 1718579824;
        *(_WORD *)(v20 + 20) = 27753;
        *(__m128i *)v20 = v52;
        *(_BYTE *)(v20 + 22) = 101;
        result = (_BYTE *)(*(_QWORD *)(a4 + 32) + 23LL);
        *(_QWORD *)(a4 + 32) = result;
      }
      else
      {
        sub_227BF10(a4, "llvm_call_graph_profile", 23);
        result = *(_BYTE **)(a4 + 32);
      }
      break;
    case 1879002116:
      if ( v22 > 0x17 )
      {
        v53 = _mm_load_si128((const __m128i *)&xmmword_23AB250);
        *(_QWORD *)(v20 + 16) = 0x7365697261726269LL;
        *(__m128i *)v20 = v53;
        result = (_BYTE *)(*(_QWORD *)(a4 + 32) + 24LL);
        *(_QWORD *)(a4 + 32) = result;
      }
      else
      {
        sub_227BF10(a4, "llvm_dependent_libraries", 24);
        result = *(_BYTE **)(a4 + 32);
      }
      break;
    case 1879002117:
      if ( v22 > 0xB )
      {
        qmemcpy((void *)v20, "llvm_sympart", 12);
        result = (_BYTE *)(*(_QWORD *)(a4 + 32) + 12LL);
        *(_QWORD *)(a4 + 32) = result;
      }
      else
      {
        sub_227BF10(a4, "llvm_sympart", 12);
        result = *(_BYTE **)(a4 + 32);
      }
      break;
    case 1879002122:
      if ( v22 > 0xF )
      {
        *(__m128i *)v20 = _mm_load_si128((const __m128i *)&xmmword_23AB260);
        result = (_BYTE *)(*(_QWORD *)(a4 + 32) + 16LL);
        *(_QWORD *)(a4 + 32) = result;
      }
      else
      {
        sub_227BF10(a4, "llvm_bb_addr_map", 16);
        result = *(_BYTE **)(a4 + 32);
      }
      break;
    case 1879002123:
      if ( v22 > 0xE )
      {
        qmemcpy((void *)v20, "llvm_offloading", 15);
        result = (_BYTE *)(*(_QWORD *)(a4 + 32) + 15LL);
        *(_QWORD *)(a4 + 32) = result;
      }
      else
      {
        sub_227BF10(a4, "llvm_offloading", 15);
        result = *(_BYTE **)(a4 + 32);
      }
      break;
    case 1879002124:
      if ( v22 > 7 )
      {
        *(_QWORD *)v20 = 0x6F746C5F6D766C6CLL;
        *(_QWORD *)(a4 + 32) += 8LL;
      }
      else
      {
        sub_227BF10(a4, "llvm_lto", 8);
      }
LABEL_78:
      result = *(_BYTE **)(a4 + 32);
      break;
    case 1879002125:
      if ( v22 > 0xC )
      {
        qmemcpy((void *)v20, "llvm_jt_sizes", 13);
        result = (_BYTE *)(*(_QWORD *)(a4 + 32) + 13LL);
        *(_QWORD *)(a4 + 32) = result;
      }
      else
      {
        sub_227BF10(a4, "llvm_jt_sizes", 13);
        result = *(_BYTE **)(a4 + 32);
      }
      break;
    default:
      if ( v22 > 1 )
      {
        v23 = a4;
        *(_WORD *)v20 = 30768;
        *(_QWORD *)(a4 + 32) += 2LL;
      }
      else
      {
        v23 = sub_227BF10(a4, "0x", 2);
      }
      v24 = *(unsigned int *)(a1 + 172);
      v55[2] = 0;
      v56 = 271;
      v54 = v24;
      v55[0] = &v54;
      sub_2254180(v55, v23);
      goto LABEL_78;
  }
  v26 = *(_BYTE **)(a4 + 24);
  if ( *(_DWORD *)(a1 + 184) )
  {
    if ( result == v26 )
    {
      v47 = sub_227BF10(a4, ",", 1);
    }
    else
    {
      *result = 44;
      v47 = a4;
      ++*(_QWORD *)(a4 + 32);
    }
    sub_227B910(v47, *(unsigned int *)(a1 + 184));
    v26 = *(_BYTE **)(a4 + 24);
    result = *(_BYTE **)(a4 + 32);
  }
  v27 = *(_DWORD *)(a1 + 176);
  if ( (v27 & 0x80u) != 0 )
  {
    if ( v26 == result )
    {
      sub_227BF10(a4, ",", 1);
    }
    else
    {
      *result = 44;
      ++*(_QWORD *)(a4 + 32);
    }
    v43 = *(_QWORD *)(a1 + 200);
    if ( v43 )
    {
      if ( (*(_BYTE *)(v43 + 8) & 1) != 0 )
      {
        v44 = *(size_t **)(v43 - 8);
        v45 = *v44;
        v46 = v44 + 3;
      }
      else
      {
        v45 = 0;
        v46 = nullptr;
      }
      sub_21146E0(a4, v46, v45);
      v27 = *(_DWORD *)(a1 + 176);
      v26 = *(_BYTE **)(a4 + 24);
      result = *(_BYTE **)(a4 + 32);
    }
    else
    {
      v49 = *(_BYTE **)(a4 + 32);
      if ( (unsigned __int64)v49 >= *(_QWORD *)(a4 + 24) )
      {
        sub_227BA10(a4, 48);
      }
      else
      {
        *(_QWORD *)(a4 + 32) = v49 + 1;
        *v49 = 48;
      }
      v27 = *(_DWORD *)(a1 + 176);
      v26 = *(_BYTE **)(a4 + 24);
      result = *(_BYTE **)(a4 + 32);
    }
  }
  if ( (v27 & 0x200) != 0 )
  {
    if ( v26 == result )
    {
      sub_227BF10(a4, ",", 1);
    }
    else
    {
      *result = 44;
      ++*(_QWORD *)(a4 + 32);
    }
    v39 = *(_QWORD *)(a1 + 192) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v39 + 8) & 1) != 0 )
    {
      v40 = *(size_t **)(v39 - 8);
      v41 = *v40;
      v42 = v40 + 3;
    }
    else
    {
      v41 = 0;
      v42 = nullptr;
    }
    sub_21146E0(a4, v42, v41);
    if ( (*(_BYTE *)(a1 + 192) & 4) != 0 )
    {
      v48 = *(_QWORD *)(a4 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(a4 + 24) - v48) > 6 )
      {
        *(_DWORD *)v48 = 1836016428;
        *(_WORD *)(v48 + 4) = 24932;
        *(_BYTE *)(v48 + 6) = 116;
        result = (_BYTE *)(*(_QWORD *)(a4 + 32) + 7LL);
        *(_QWORD *)(a4 + 32) = result;
      }
      else
      {
        sub_227BF10(a4, ",comdat", 7);
        result = *(_BYTE **)(a4 + 32);
      }
      v26 = *(_BYTE **)(a4 + 24);
    }
    else
    {
      v26 = *(_BYTE **)(a4 + 24);
      result = *(_BYTE **)(a4 + 32);
    }
  }
  if ( *(_DWORD *)(a1 + 180) != -1 )
  {
    if ( (unsigned __int64)(v26 - result) > 7 )
    {
      *(_QWORD *)result = 0x2C657571696E752CLL;
      v28 = a4;
      *(_QWORD *)(a4 + 32) += 8LL;
    }
    else
    {
      v28 = sub_227BF10(a4, ",unique,", 8);
    }
    sub_227B910(v28, *(unsigned int *)(a1 + 180));
    result = *(_BYTE **)(a4 + 32);
    v26 = *(_BYTE **)(a4 + 24);
  }
  if ( result >= v26 )
  {
    result = (_BYTE *)sub_227BA10(a4, 10);
  }
  else
  {
    *(_QWORD *)(a4 + 32) = result + 1;
    *result = 10;
  }
  if ( a5 )
  {
    v29 = *(void **)(a4 + 32);
    if ( *(_QWORD *)(a4 + 24) - (_QWORD)v29 > 0xCu )
    {
      v30 = a4;
      qmemcpy(v29, "\t.subsection\t", 13);
      *(_QWORD *)(a4 + 32) += 13LL;
    }
    else
    {
      v30 = sub_227BF10(a4, "\t.subsection\t", 13);
    }
    sub_227B910(v30, a5);
    result = *(_BYTE **)(a4 + 32);
    if ( (unsigned __int64)result >= *(_QWORD *)(a4 + 24) )
      return (_BYTE *)sub_227BA10(a4, 10);
    goto LABEL_128;
  }
  return result;
}
