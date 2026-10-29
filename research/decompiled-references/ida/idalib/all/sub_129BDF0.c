char *__fastcall sub_129BDF0(char *a1, __int64 a2)
{
  __int64 *v2; // rbp
  __m128i *v3; // rax
  __m128i v4; // xmm0
  char *result; // rax
  bool v6; // zf
  const char *v7; // r12
  size_t v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // rbp
  const char *v11; // r12
  unsigned int v12; // ebp
  unsigned int v13; // ebp
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __m128i *v17; // rax
  __m128i si128; // xmm0
  __m128i *v19; // rax
  __m128i v20; // xmm0
  __m128i *v21; // rax
  __m128i v22; // xmm0
  __m128i *v23; // rax
  __m128i v24; // xmm0
  __m128i *v25; // rax
  __m128i v26; // xmm0

  v2 = (__int64 *)(a1 + 16);
  switch ( *(_DWORD *)(a2 + 32) )
  {
    case 1:
    case 0x23:
      v6 = *(_DWORD *)(a2 + 44) == 39;
      *(_QWORD *)a1 = v2;
      v7 = "arm-liteos-ohos";
      if ( !v6 )
        v7 = "arm-linux-ohos";
      v8 = strlen(v7);
      v9 = (unsigned __int64)(a1 + 24) & 0xFFFFFFFFFFFFFFF8LL;
      *((_QWORD *)a1 + 2) = *(_QWORD *)v7;
      *(__int64 *)((char *)v2 + (unsigned int)v8 - 8) = *(_QWORD *)&v7[(unsigned int)v8 - 8];
      v10 = (__int64)v2 - v9;
      v11 = &v7[-v10];
      v12 = (v8 + v10) & 0xFFFFFFF8;
      if ( v12 >= 8 )
      {
        v13 = v12 & 0xFFFFFFF8;
        v14 = 0;
        do
        {
          v15 = v14;
          v14 += 8;
          *(_QWORD *)(v9 + v15) = *(_QWORD *)&v11[v15];
        }
        while ( v14 < v13 );
      }
      v16 = *(_QWORD *)a1;
      *((_QWORD *)a1 + 1) = v8;
      *(_BYTE *)(v16 + v8) = 0;
      goto LABEL_3;
    case 3:
      *(_QWORD *)a1 = v2;
      v17 = (__m128i *)operator new(0x13u);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A9EE0);
      *((_QWORD *)a1 + 2) = 18;
      *(_QWORD *)a1 = v17;
      *v17 = si128;
      strcpy(v17[1].m128i_i8, "os");
      *((_QWORD *)a1 + 1) = 18;
      result = a1;
      break;
    case 0xE:
      *(_QWORD *)a1 = v2;
      v19 = (__m128i *)operator new(0x17u);
      v20 = _mm_load_si128((const __m128i *)&xmmword_23A9EF0);
      *((_QWORD *)a1 + 2) = 22;
      strcpy(v19[1].m128i_i8, "x-ohos");
      *v19 = v20;
      *(_QWORD *)a1 = v19;
      *((_QWORD *)a1 + 1) = 22;
      result = a1;
      break;
    case 0x11:
      *(_QWORD *)a1 = v2;
      v21 = (__m128i *)operator new(0x12u);
      v22 = _mm_load_si128((const __m128i *)&xmmword_23A9EC0);
      *((_QWORD *)a1 + 2) = 17;
      *(_QWORD *)a1 = v21;
      *v21 = v22;
      v21[1].m128i_i8[0] = 115;
      *((_QWORD *)a1 + 1) = 17;
      v21[1].m128i_i8[1] = 0;
      result = a1;
      break;
    case 0x1B:
      *(_QWORD *)a1 = v2;
      v23 = (__m128i *)operator new(0x13u);
      v24 = _mm_load_si128((const __m128i *)&xmmword_23A9EA0);
      *((_QWORD *)a1 + 2) = 18;
      *(_QWORD *)a1 = v23;
      *v23 = v24;
      strcpy(v23[1].m128i_i8, "os");
      *((_QWORD *)a1 + 1) = 18;
      result = a1;
      break;
    case 0x1C:
      *(_QWORD *)a1 = v2;
      v25 = (__m128i *)operator new(0x13u);
      v26 = _mm_load_si128((const __m128i *)&xmmword_23A9EB0);
      *((_QWORD *)a1 + 2) = 18;
      *(_QWORD *)a1 = v25;
      *v25 = v26;
      strcpy(v25[1].m128i_i8, "os");
      *((_QWORD *)a1 + 1) = 18;
      result = a1;
      break;
    case 0x25:
      *(_QWORD *)a1 = v2;
      strcpy(a1 + 16, "i686-linux-ohos");
      *((_QWORD *)a1 + 1) = 15;
      result = a1;
      break;
    case 0x26:
      *(_QWORD *)a1 = v2;
      v3 = (__m128i *)operator new(0x12u);
      v4 = _mm_load_si128((const __m128i *)&xmmword_23A9ED0);
      *((_QWORD *)a1 + 2) = 17;
      *(_QWORD *)a1 = v3;
      *v3 = v4;
      v3[1].m128i_i8[0] = 115;
      *((_QWORD *)a1 + 1) = 17;
      v3[1].m128i_i8[1] = 0;
LABEL_3:
      result = a1;
      break;
    default:
      *(_QWORD *)a1 = v2;
      sub_129A5D0(a1, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
      result = a1;
      break;
  }
  return result;
}
