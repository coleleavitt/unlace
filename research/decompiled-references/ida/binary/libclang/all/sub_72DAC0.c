__int64 __fastcall sub_72DAC0(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int *v7; // rdx
  size_t v8; // rsi
  const char *v9; // rdx
  size_t v10; // rcx
  __int64 v11; // rax
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
  __int64 v29; // rdx
  unsigned int *v30; // rdx
  size_t v31; // rsi
  const char *v32; // rdx
  size_t v33; // rcx
  __int64 v34; // rax
  const char *v35; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  char v41; // [rsp+Fh] [rbp-39h] BYREF
  _OWORD v42[3]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *(_BYTE *)(a1 + 30);
  v41 = 1;
  if ( (~v3 & 0xF0) != 0 )
    v4 = v3 >> 4;
  else
    v4 = sub_C4A760(a1);
  if ( v4 == 1 || v4 == 2 )
  {
    sub_5FF0F0(a2, "[[clang::availability");
    v41 = 0;
    sub_5FF0F0(a2, "(");
    v5 = sub_5FF0F0(a2, &byte_3B9466E);
    v6 = *(_QWORD *)(a1 + 40);
    if ( v6 )
    {
      v7 = *(unsigned int **)(v6 + 16);
      v8 = *v7;
      v9 = (const char *)(v7 + 4);
      v10 = v8;
    }
    else
    {
      v9 = &byte_3B9466E;
      v10 = 0;
    }
    v11 = sub_722320(v5, v9, v10);
    sub_5FF0F0(v11, &byte_3B9466E);
    sub_722380(a2, &v41);
    v12 = sub_5FF0F0(a2, "introduced=");
    v42[0] = _mm_loadu_si128((const __m128i *)(a1 + 48));
    v13 = sub_25F6730(v12, v42);
    sub_5FF0F0(v13, &byte_3B9466E);
    sub_722380(a2, &v41);
    v14 = sub_5FF0F0(a2, "deprecated=");
    v42[0] = _mm_loadu_si128((const __m128i *)(a1 + 64));
    v15 = sub_25F6730(v14, v42);
    sub_5FF0F0(v15, &byte_3B9466E);
    sub_722380(a2, &v41);
    v16 = sub_5FF0F0(a2, "obsoleted=");
    v42[0] = _mm_loadu_si128((const __m128i *)(a1 + 80));
    v17 = sub_25F6730(v16, v42);
    sub_5FF0F0(v17, &byte_3B9466E);
    sub_722380(a2, &v41);
    v18 = sub_5FF0F0(a2, &byte_3B9466E);
    v19 = sub_26238C0(v18, *(unsigned __int8 *)(a1 + 96));
    sub_5FF0F0(v19, &byte_3B9466E);
    sub_722380(a2, &v41);
    v20 = sub_5FF0F0(a2, "\"");
    v21 = sub_722320(v20, *(const void **)(a1 + 104), *(unsigned int *)(a1 + 100));
    sub_5FF0F0(v21, "\"");
    sub_722380(a2, &v41);
    v22 = sub_5FF0F0(a2, &byte_3B9466E);
    v23 = sub_26238C0(v22, *(unsigned __int8 *)(a1 + 112));
    sub_5FF0F0(v23, &byte_3B9466E);
    sub_722380(a2, &v41);
    v24 = sub_5FF0F0(a2, "\"");
    v25 = sub_722320(v24, *(const void **)(a1 + 120), *(unsigned int *)(a1 + 116));
    sub_5FF0F0(v25, "\"");
    sub_722380(a2, &v41);
    v26 = sub_5FF0F0(a2, &byte_3B9466E);
    v27 = sub_26238C0(v26, *(int *)(a1 + 128));
    sub_5FF0F0(v27, &byte_3B9466E);
    sub_722380(a2, &v41);
    v28 = sub_5FF0F0(a2, &byte_3B9466E);
    v29 = *(_QWORD *)(a1 + 136);
    if ( v29 )
    {
      v30 = *(unsigned int **)(v29 + 16);
      v31 = *v30;
      v32 = (const char *)(v30 + 4);
      v33 = v31;
    }
    else
    {
      v32 = &byte_3B9466E;
      v33 = 0;
    }
    v34 = sub_722320(v28, v32, v33);
    sub_5FF0F0(v34, &byte_3B9466E);
    if ( !v41 )
      sub_5FF0F0(a2, ")");
    v35 = "]]";
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((availability");
    v37 = sub_5FF0F0(a2, "(");
    sub_722320(
      v37,
      (const void *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL) + 16LL),
      **(unsigned int **)(*(_QWORD *)(a1 + 40) + 16LL));
    if ( *(_BYTE *)(a1 + 112) )
      sub_5FF0F0(a2, ", strict");
    if ( (unsigned int)*(_QWORD *)(a1 + 48)
       | (HIDWORD(*(_QWORD *)(a1 + 56)) | (unsigned int)*(_QWORD *)(a1 + 56) | HIDWORD(*(_QWORD *)(a1 + 48)))
       & 0x7FFFFFFF )
    {
      v38 = sub_5FF0F0(a2, ", introduced=");
      v42[0] = _mm_loadu_si128((const __m128i *)(a1 + 48));
      sub_25F6730(v38, v42);
    }
    if ( (unsigned int)*(_QWORD *)(a1 + 64)
       | (HIDWORD(*(_QWORD *)(a1 + 72)) | (unsigned int)*(_QWORD *)(a1 + 72) | HIDWORD(*(_QWORD *)(a1 + 64)))
       & 0x7FFFFFFF )
    {
      v39 = sub_5FF0F0(a2, ", deprecated=");
      v42[0] = _mm_loadu_si128((const __m128i *)(a1 + 64));
      sub_25F6730(v39, v42);
    }
    if ( (unsigned int)*(_QWORD *)(a1 + 80)
       | (HIDWORD(*(_QWORD *)(a1 + 88)) | (unsigned int)*(_QWORD *)(a1 + 88) | HIDWORD(*(_QWORD *)(a1 + 80)))
       & 0x7FFFFFFF )
    {
      v40 = sub_5FF0F0(a2, ", obsoleted=");
      v42[0] = _mm_loadu_si128((const __m128i *)(a1 + 80));
      sub_25F6730(v40, v42);
    }
    if ( *(_BYTE *)(a1 + 96) )
      sub_5FF0F0(a2, ", unavailable");
    sub_5FF0F0(a2, ")");
    v35 = "))";
  }
  return sub_5FF0F0(a2, v35);
}

