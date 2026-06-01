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
  int v16; // eax
  int v19; // [rsp-8118h] [rbp-8120h]
  int v20; // [rsp-8118h] [rbp-8120h]
  __m128i v21[3]; // [rsp-8110h] [rbp-8118h] BYREF
  _BOOL8 (__fastcall *v22)(__int64); // [rsp-80E0h] [rbp-80E8h]
  __int64 v23; // [rsp-80D8h] [rbp-80E0h]
  __m128i v24; // [rsp-80D0h] [rbp-80D8h] BYREF
  char v25; // [rsp-80C0h] [rbp-80C8h]
  _QWORD v26[4105]; // [rsp-8040h] [rbp-8048h] BYREF

  v26[4097] = __readfsqword(0x28u);
  v21[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B3CC00), (__m128i)(unsigned __int64)sub_8357E0);
  v23 = a1;
  v22 = sub_835750;
  v21[1] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B3CC08), (__m128i)(unsigned __int64)sub_8357B0);
  v21[2] = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_2B3CC10), (__m128i)(unsigned __int64)sub_835650);
  v9 = (__m128i *)sub_753E40((__int64)&byte_22F0C30, v21);
  if ( !v9 )
    return 1;
  v10 = v9;
  v11 = sub_753F90(v9, a2, 2 - a4);
  v12 = v11;
  if ( v11 )
  {
    if ( !a7 )
      goto LABEL_6;
    v19 = v11;
    sub_35A790(a7);
    goto LABEL_5;
  }
  v12 = sub_753560((__int64)v10, &v24, 0, 0, 0, 0, 0, 0);
  if ( v12 )
    goto LABEL_23;
  if ( (v25 & 1) != 0 )
  {
    if ( !a3 )
    {
      if ( a7 )
LABEL_26:
        sub_35A790(a7);
LABEL_27:
      v13 = 3;
      goto LABEL_8;
    }
    v15 = sub_754D20(v10, a3);
  }
  else
  {
    v15 = sub_754D10(v10);
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
    v19 = v12;
    sub_35A790(a7);
LABEL_5:
    v12 = v19;
    goto LABEL_6;
  }
  do
  {
    v16 = sub_7542B0((__int64)v10, (__int64)v26, 0x8000u);
    v20 = v16;
    if ( v16 < 0 )
    {
      if ( a7 )
        sub_35A790(a7);
      goto LABEL_21;
    }
    if ( !v16 )
    {
      v20 = sub_7545D0((__int64)v10);
      if ( v20 != -105 )
      {
        if ( v20 >= 0 )
        {
LABEL_7:
          v13 = 0;
          goto LABEL_8;
        }
LABEL_21:
        v13 = -v20;
        goto LABEL_8;
      }
      if ( a7 )
        goto LABEL_26;
      goto LABEL_27;
    }
  }
  while ( a6(a5, v26, v16) == v16 );
  if ( a7 )
  {
    qstrerror(0xFFFFFFFFLL);
    sub_35A790(a7);
  }
  v13 = 778;
LABEL_8:
  sub_754680(v10);
  return v13;
}
