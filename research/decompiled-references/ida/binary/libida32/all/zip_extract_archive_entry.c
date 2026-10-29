__int64 __fastcall zip_extract_archive_entry(
        __int64 a1,
        const char *a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64, _QWORD *, _QWORD),
        char **a7)
{
  __m128i *v9; // rax
  __m128i *v10; // rbx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // r14d
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  int v20; // [rsp-8118h] [rbp-8120h]
  int v21; // [rsp-8118h] [rbp-8120h]
  int v22; // [rsp-8118h] [rbp-8120h]
  __m128i v23[3]; // [rsp-8110h] [rbp-8118h] BYREF
  _BOOL8 (__fastcall *v24)(__int64); // [rsp-80E0h] [rbp-80E8h]
  __int64 v25; // [rsp-80D8h] [rbp-80E0h]
  __m128i v26; // [rsp-80D0h] [rbp-80D8h] BYREF
  char v27; // [rsp-80C0h] [rbp-80C8h]
  _QWORD v28[4105]; // [rsp-8040h] [rbp-8048h] BYREF

  v28[4097] = __readfsqword(0x28u);
  v23[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B12C60), (__m128i)(unsigned __int64)sub_812410);
  v25 = a1;
  v24 = sub_812380;
  v23[1] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B12C68), (__m128i)(unsigned __int64)sub_8123E0);
  v23[2] = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_2B12C70), (__m128i)(unsigned __int64)sub_812280);
  v9 = (__m128i *)sub_733970((__int64)&byte_22CD811, v23);
  if ( !v9 )
    return 1;
  v10 = v9;
  v11 = sub_733AC0(v9, a2, 2 - a4);
  v12 = v11;
  if ( v11 )
  {
    if ( !a7 )
      goto LABEL_6;
    v20 = v11;
    sub_3573A0(a7);
    goto LABEL_5;
  }
  v12 = sub_733090((__int64)v10, &v26, 0, 0, 0, 0, 0, 0);
  if ( v12 )
    goto LABEL_23;
  if ( (v27 & 1) != 0 )
  {
    if ( !a3 )
    {
      if ( a7 )
LABEL_26:
        sub_3573A0(a7);
LABEL_27:
      v13 = 3;
      goto LABEL_8;
    }
    v15 = sub_734850(v10, a3);
  }
  else
  {
    v15 = sub_734840(v10);
  }
  v12 = v15;
  if ( v15 )
  {
LABEL_23:
    if ( !a7 )
    {
LABEL_6:
      v13 = -v12;
      if ( v12 < 0 )
        goto LABEL_8;
      goto LABEL_7;
    }
    v20 = v12;
    sub_3573A0(a7);
LABEL_5:
    v12 = v20;
    goto LABEL_6;
  }
  do
  {
    v17 = sub_733DE0((__int64)v10, (__int64)v28, 0x8000u);
    v22 = v17;
    if ( v17 < 0 )
    {
      if ( a7 )
        sub_3573A0(a7);
      goto LABEL_21;
    }
    if ( !v17 )
    {
      v22 = sub_734100((__int64)v10);
      if ( v22 != -105 )
      {
        if ( v22 >= 0 )
        {
LABEL_7:
          v13 = 0;
          goto LABEL_8;
        }
LABEL_21:
        v13 = -v22;
        goto LABEL_8;
      }
      if ( a7 )
        goto LABEL_26;
      goto LABEL_27;
    }
    v21 = v17;
  }
  while ( a6(a5, v28, v17) == v17 );
  if ( a7 )
  {
    qstrerror(0xFFFFFFFFLL, v28, v16, v21);
    sub_3573A0(a7);
  }
  v13 = 778;
LABEL_8:
  sub_7341B0(v10);
  return v13;
}

