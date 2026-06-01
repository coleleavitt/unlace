char *__fastcall sub_129BB50(char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbp
  __m128i *v5; // rax
  __m128i v6; // xmm0
  char *result; // rax
  bool v8; // zf
  const char *v9; // r12
  size_t v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rbp
  const char *v13; // r12
  unsigned int v14; // ebp
  unsigned int v15; // ebp
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __m128i *v19; // rax
  __m128i si128; // xmm0
  __m128i *v21; // rax
  __m128i v22; // xmm0
  __m128i *v23; // rax
  __m128i v24; // xmm0
  __m128i *v25; // rax
  __m128i v26; // xmm0
  __m128i *v27; // rax
  __m128i v28; // xmm0

  v4 = (__int64 *)(a1 + 16);
  switch ( *(_DWORD *)(a4 + 32) )
  {
    case 1:
    case 0x23:
      v8 = *(_DWORD *)(a4 + 44) == 39;
      *(_QWORD *)a1 = v4;
      v9 = "arm-liteos-ohos";
      if ( !v8 )
        v9 = "arm-linux-ohos";
      v10 = strlen(v9);
      v11 = (unsigned __int64)(a1 + 24) & 0xFFFFFFFFFFFFFFF8LL;
      *((_QWORD *)a1 + 2) = *(_QWORD *)v9;
      *(__int64 *)((char *)v4 + (unsigned int)v10 - 8) = *(_QWORD *)&v9[(unsigned int)v10 - 8];
      v12 = (__int64)v4 - v11;
      v13 = &v9[-v12];
      v14 = (v10 + v12) & 0xFFFFFFF8;
      if ( v14 >= 8 )
      {
        v15 = v14 & 0xFFFFFFF8;
        v16 = 0;
        do
        {
          v17 = v16;
          v16 += 8;
          *(_QWORD *)(v11 + v17) = *(_QWORD *)&v13[v17];
        }
        while ( v16 < v15 );
      }
      v18 = *(_QWORD *)a1;
      *((_QWORD *)a1 + 1) = v10;
      *(_BYTE *)(v18 + v10) = 0;
      goto LABEL_3;
    case 3:
      *(_QWORD *)a1 = v4;
      v19 = (__m128i *)operator new(0x13u);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A9EE0);
      *((_QWORD *)a1 + 2) = 18;
      *(_QWORD *)a1 = v19;
      *v19 = si128;
      strcpy(v19[1].m128i_i8, "os");
      *((_QWORD *)a1 + 1) = 18;
      result = a1;
      break;
    case 0xE:
      *(_QWORD *)a1 = v4;
      v21 = (__m128i *)operator new(0x17u);
      v22 = _mm_load_si128((const __m128i *)&xmmword_23A9EF0);
      *((_QWORD *)a1 + 2) = 22;
      strcpy(v21[1].m128i_i8, "x-ohos");
      *v21 = v22;
      *(_QWORD *)a1 = v21;
      *((_QWORD *)a1 + 1) = 22;
      result = a1;
      break;
    case 0x11:
      *(_QWORD *)a1 = v4;
      v23 = (__m128i *)operator new(0x12u);
      v24 = _mm_load_si128((const __m128i *)&xmmword_23A9EC0);
      *((_QWORD *)a1 + 2) = 17;
      *(_QWORD *)a1 = v23;
      *v23 = v24;
      v23[1].m128i_i8[0] = 115;
      *((_QWORD *)a1 + 1) = 17;
      v23[1].m128i_i8[1] = 0;
      result = a1;
      break;
    case 0x1B:
      *(_QWORD *)a1 = v4;
      v25 = (__m128i *)operator new(0x13u);
      v26 = _mm_load_si128((const __m128i *)&xmmword_23A9EA0);
      *((_QWORD *)a1 + 2) = 18;
      *(_QWORD *)a1 = v25;
      *v25 = v26;
      strcpy(v25[1].m128i_i8, "os");
      *((_QWORD *)a1 + 1) = 18;
      result = a1;
      break;
    case 0x1C:
      *(_QWORD *)a1 = v4;
      v27 = (__m128i *)operator new(0x13u);
      v28 = _mm_load_si128((const __m128i *)&xmmword_23A9EB0);
      *((_QWORD *)a1 + 2) = 18;
      *(_QWORD *)a1 = v27;
      *v27 = v28;
      strcpy(v27[1].m128i_i8, "os");
      *((_QWORD *)a1 + 1) = 18;
      result = a1;
      break;
    case 0x25:
      *(_QWORD *)a1 = v4;
      strcpy(a1 + 16, "i686-linux-ohos");
      *((_QWORD *)a1 + 1) = 15;
      result = a1;
      break;
    case 0x26:
      *(_QWORD *)a1 = v4;
      v5 = (__m128i *)operator new(0x12u);
      v6 = _mm_load_si128((const __m128i *)&xmmword_23A9ED0);
      *((_QWORD *)a1 + 2) = 17;
      *(_QWORD *)a1 = v5;
      *v5 = v6;
      v5[1].m128i_i8[0] = 115;
      *((_QWORD *)a1 + 1) = 17;
      v5[1].m128i_i8[1] = 0;
LABEL_3:
      result = a1;
      break;
    default:
      *(_QWORD *)a1 = v4;
      sub_129A5D0(a1, *(_BYTE **)a4, *(_QWORD *)a4 + *(_QWORD *)(a4 + 8));
      result = a1;
      break;
  }
  return result;
}
