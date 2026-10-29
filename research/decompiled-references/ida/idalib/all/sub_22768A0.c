void __fastcall sub_22768A0(__m128 ***a1, __m128 **a2)
{
  __m128 *v2; // r15
  __m128i si128; // xmm0
  __m128 *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __m128 **v9; // rcx
  size_t v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rbp
  size_t v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128 *v28; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v29; // [rsp+10h] [rbp-B8h]
  const __m128i *v30[4]; // [rsp+20h] [rbp-A8h] BYREF
  __int16 v31; // [rsp+40h] [rbp-88h]
  char *v32; // [rsp+50h] [rbp-78h] BYREF
  char *v33; // [rsp+58h] [rbp-70h]
  void *v34; // [rsp+68h] [rbp-60h]
  _BYTE v35[80]; // [rsp+78h] [rbp-50h] BYREF

  v2 = (__m128 *)(a1 + 15);
  a1[3] = (__m128 **)(a1 + 5);
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  a1[4] = (__m128 **)0x400000000LL;
  *a1 = a2;
  v4 = (__m128 *)(a1 + 15);
  a1[9] = (__m128 **)(a1 + 11);
  a1[1] = nullptr;
  a1[2] = nullptr;
  a1[10] = nullptr;
  a1[13] = nullptr;
  *((_DWORD *)a1 + 30) = 0;
  a1[16] = nullptr;
  a1[17] = (__m128 **)(a1 + 15);
  a1[18] = (__m128 **)(a1 + 15);
  a1[19] = nullptr;
  *(__m128i *)(a1 + 11) = si128;
  v32 = "!";
  v33 = (_BYTE *)(&dword_0 + 1);
  v30[0] = (const __m128i *)&v32;
  v5 = sub_2276310(a1 + 14, a1 + 15, v30);
  v9 = a1[16];
  *(_QWORD *)(v5 + 48) = "!";
  *(_QWORD *)(v5 + 56) = 1;
  v32 = "!!";
  v33 = (_BYTE *)(&dword_0 + 2);
  if ( !v9 )
  {
LABEL_17:
    v4 = v2;
    v30[0] = (const __m128i *)&v32;
    v2 = (__m128 *)sub_2276310(a1 + 14, v2, v30);
    goto LABEL_18;
  }
  do
  {
    while ( 1 )
    {
      v12 = (unsigned __int64)v9[5];
      if ( !v12 )
      {
LABEL_9:
        v9 = (__m128 **)v9[3];
        goto LABEL_10;
      }
      v10 = 2;
      v4 = (__m128 *)"!!";
      if ( v12 <= 2 )
        v10 = (size_t)v9[5];
      v29 = (unsigned __int64)v9[5];
      v28 = (__m128 *)v9;
      v11 = memcmp(v9[4], "!!", v10);
      v9 = (__m128 **)v28;
      if ( v11 )
        break;
      if ( v29 <= 1 )
        goto LABEL_9;
LABEL_7:
      v2 = v28;
      v9 = (__m128 **)v28[1].m128_u64[0];
      if ( !v9 )
        goto LABEL_11;
    }
    if ( v11 >= 0 )
      goto LABEL_7;
    v9 = (__m128 **)v28[1].m128_u64[1];
LABEL_10:
    ;
  }
  while ( v9 );
LABEL_11:
  if ( a1 + 15 == (__m128 ***)v2 )
    goto LABEL_17;
  v13 = v2[2].m128_u64[1];
  if ( !v13 )
    goto LABEL_18;
  v14 = 2;
  v4 = (__m128 *)v2[2].m128_u64[0];
  if ( v13 <= 2 )
    v14 = v2[2].m128_u64[1];
  v15 = memcmp("!!", v4, v14);
  if ( v15 )
  {
    if ( v15 >= 0 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( v13 > 2 )
    goto LABEL_17;
LABEL_18:
  v2[3].m128_u64[1] = 18;
  v2[3].m128_u64[0] = (unsigned __int64)"tag:yaml.org,2002:";
  if ( !(unsigned __int8)sub_2276730((__int64 **)a1, v4, v6, v9, v7, v8) )
    goto LABEL_19;
  v4 = **a1;
  sub_2273D80((__int64)&v32, v4, v16, v17, v18, v19);
  if ( (_DWORD)v32 != 5 )
  {
    v4 = (__m128 *)v30;
    v30[0] = (const __m128i *)"Unexpected token";
    v31 = 259;
    sub_226E270((__int64)**a1, (__int64)v30, v33);
  }
  if ( v34 == v35 )
  {
LABEL_19:
    if ( *(_DWORD *)sub_2273810((__int64)**a1, v4, v16, v17, v18, v19) == 5 )
    {
LABEL_27:
      sub_2273D80((__int64)&v32, **a1, v20, v21, v22, v23);
      if ( v34 != v35 )
        operator delete(v34);
    }
  }
  else
  {
    operator delete(v34);
    if ( *(_DWORD *)sub_2273810((__int64)**a1, v4, v24, v25, v26, v27) == 5 )
      goto LABEL_27;
  }
}
