__int64 __fastcall sub_AE8550(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  __int64 v5; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  unsigned int *v9; // rax
  size_t v10; // rdx
  const char *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // rax
  unsigned int *v31; // rax
  size_t v32; // rdx
  const char *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned int *v39; // rax
  char v40; // [rsp+Fh] [rbp-39h] BYREF
  _OWORD v41[3]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *(_BYTE *)(a1 + 34);
  v40 = 1;
  if ( (v3 & 0xF0) == 0xF0 )
    v4 = sub_F83A90(a1);
  else
    v4 = v3 >> 4;
  if ( v4 == 1 )
  {
    sub_971800(a2, "[[clang::availability");
    sub_AD7BA0(a2, &v40);
    v7 = sub_971800(a2, &byte_22CD811);
    v38 = *(_QWORD *)(a1 + 40);
    if ( v38 )
    {
      v39 = *(unsigned int **)(v38 + 16);
      v10 = *v39;
      v11 = (const char *)(v39 + 4);
      goto LABEL_16;
    }
LABEL_27:
    v11 = &byte_22CD811;
    v10 = j__strlen(&byte_22CD811);
    goto LABEL_16;
  }
  if ( !v4 )
  {
    sub_971800(a2, "__attribute__((availability");
    v5 = sub_971800(a2, "(");
    sub_9717A0(
      v5,
      (const void *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL) + 16LL),
      **(unsigned int **)(*(_QWORD *)(a1 + 40) + 16LL));
    if ( *(_BYTE *)(a1 + 112) )
      sub_971800(a2, ", strict");
    if ( (unsigned int)*(_QWORD *)(a1 + 48)
       | HIDWORD(*(_QWORD *)(a1 + 56)) & 0x7FFFFFFF
       | ((unsigned int)*(_QWORD *)(a1 + 56) | HIDWORD(*(_QWORD *)(a1 + 48))) & 0x7FFFFFFF )
    {
      v35 = sub_971800(a2, ", introduced=");
      v41[0] = _mm_loadu_si128((const __m128i *)(a1 + 48));
      sub_22339D0(v35, v41);
    }
    if ( (unsigned int)*(_QWORD *)(a1 + 64)
       | HIDWORD(*(_QWORD *)(a1 + 72)) & 0x7FFFFFFF
       | ((unsigned int)*(_QWORD *)(a1 + 72) | HIDWORD(*(_QWORD *)(a1 + 64))) & 0x7FFFFFFF )
    {
      v36 = sub_971800(a2, ", deprecated=");
      v41[0] = _mm_loadu_si128((const __m128i *)(a1 + 64));
      sub_22339D0(v36, v41);
    }
    if ( (unsigned int)*(_QWORD *)(a1 + 80)
       | HIDWORD(*(_QWORD *)(a1 + 88)) & 0x7FFFFFFF
       | ((unsigned int)*(_QWORD *)(a1 + 88) | HIDWORD(*(_QWORD *)(a1 + 80))) & 0x7FFFFFFF )
    {
      v37 = sub_971800(a2, ", obsoleted=");
      v41[0] = _mm_loadu_si128((const __m128i *)(a1 + 80));
      sub_22339D0(v37, v41);
      if ( !*(_BYTE *)(a1 + 96) )
        goto LABEL_13;
    }
    else if ( !*(_BYTE *)(a1 + 96) )
    {
LABEL_13:
      sub_971800(a2, ")");
      return sub_971800(a2, "))");
    }
    sub_971800(a2, ", unavailable");
    goto LABEL_13;
  }
  sub_971800(a2, "[[clang::availability");
  sub_AD7BA0(a2, &v40);
  v7 = sub_971800(a2, &byte_22CD811);
  v8 = *(_QWORD *)(a1 + 40);
  if ( !v8 )
    goto LABEL_27;
  v9 = *(unsigned int **)(v8 + 16);
  v10 = *v9;
  v11 = (const char *)(v9 + 4);
LABEL_16:
  v12 = sub_9717A0(v7, v11, v10);
  sub_971800(v12, &byte_22CD811);
  sub_AD7BA0(a2, &v40);
  v13 = sub_971800(a2, "introduced=");
  v41[0] = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v14 = sub_22339D0(v13, v41);
  sub_971800(v14, &byte_22CD811);
  sub_AD7BA0(a2, &v40);
  v15 = sub_971800(a2, "deprecated=");
  v41[0] = _mm_loadu_si128((const __m128i *)(a1 + 64));
  v16 = sub_22339D0(v15, v41);
  sub_971800(v16, &byte_22CD811);
  sub_AD7BA0(a2, &v40);
  v17 = sub_971800(a2, "obsoleted=");
  v41[0] = _mm_loadu_si128((const __m128i *)(a1 + 80));
  v18 = sub_22339D0(v17, v41);
  sub_971800(v18, &byte_22CD811);
  sub_AD7BA0(a2, &v40);
  v19 = sub_971800(a2, &byte_22CD811);
  v20 = sub_2257BF0(v19, *(unsigned __int8 *)(a1 + 96));
  sub_971800(v20, &byte_22CD811);
  sub_AD7BA0(a2, &v40);
  v21 = sub_971800(a2, "\"");
  v22 = sub_9717A0(v21, *(const void **)(a1 + 104), *(unsigned int *)(a1 + 100));
  sub_971800(v22, "\"");
  sub_AD7BA0(a2, &v40);
  v23 = sub_971800(a2, &byte_22CD811);
  v24 = sub_2257BF0(v23, *(unsigned __int8 *)(a1 + 112));
  sub_971800(v24, &byte_22CD811);
  sub_AD7BA0(a2, &v40);
  v25 = sub_971800(a2, "\"");
  v26 = sub_9717A0(v25, *(const void **)(a1 + 120), *(unsigned int *)(a1 + 116));
  sub_971800(v26, "\"");
  sub_AD7BA0(a2, &v40);
  v27 = sub_971800(a2, &byte_22CD811);
  v28 = sub_2257BF0(v27, *(int *)(a1 + 128));
  sub_971800(v28, &byte_22CD811);
  sub_AD7BA0(a2, &v40);
  v29 = sub_971800(a2, &byte_22CD811);
  v30 = *(_QWORD *)(a1 + 136);
  if ( v30 )
  {
    v31 = *(unsigned int **)(v30 + 16);
    v32 = *v31;
    v33 = (const char *)(v31 + 4);
  }
  else
  {
    v33 = &byte_22CD811;
    v32 = j__strlen(&byte_22CD811);
  }
  v34 = sub_9717A0(v29, v33, v32);
  sub_971800(v34, &byte_22CD811);
  if ( !v40 )
    sub_971800(a2, ")");
  return sub_971800(a2, "]]");
}

