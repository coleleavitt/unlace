__int64 __fastcall sub_3B56D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  __m128i *v8; // r14
  __m128i *v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __m128i *v12; // rbx
  __int64 v13; // rdi
  int *v14; // rax
  int *v15; // rbx
  __int64 v16; // r9
  const char *v17; // rax
  __int64 v18; // rax
  int v19; // ebp
  unsigned int v20; // ebp
  __int64 v21; // rdi
  int v23; // [rsp+10h] [rbp-148h] BYREF
  int v24; // [rsp+14h] [rbp-144h]
  __int64 (__fastcall **v25)(); // [rsp+40h] [rbp-118h] BYREF
  __int64 v26; // [rsp+48h] [rbp-110h]
  __int128 v27; // [rsp+50h] [rbp-108h]
  __int64 v28; // [rsp+60h] [rbp-F8h]
  const char *v29; // [rsp+68h] [rbp-F0h]
  int v30; // [rsp+70h] [rbp-E8h]
  __m128i v31; // [rsp+78h] [rbp-E0h]
  int v32; // [rsp+88h] [rbp-D0h]
  _BYTE v33[96]; // [rsp+90h] [rbp-C8h] BYREF
  int v34; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v35; // [rsp+F8h] [rbp-60h]
  const char *v36; // [rsp+100h] [rbp-58h] BYREF
  __int128 v37; // [rsp+108h] [rbp-50h]
  unsigned __int64 v38; // [rsp+118h] [rbp-40h]

  v7 = 40LL * *(_QWORD *)(a2 + 8);
  v38 = __readfsqword(0x28u);
  v8 = *(__m128i **)a2;
  v9 = (__m128i *)(*(_QWORD *)a2 + v7);
  if ( v9 != *(__m128i **)a2 )
  {
    v10 = 0xCCCCCCCCCCCCCCCDLL * (v7 >> 3);
    if ( v10 )
    {
      _BitScanReverse64(&v11, v10);
      sub_3B4BD0((__int64)v8, v9, 2LL * (int)v11, a4, a5, a6);
      if ( v7 > 640 )
      {
        v12 = v8 + 40;
        sub_3A9A30(v8, v8 + 40);
        do
        {
          v13 = (__int64)v12;
          v12 = (__m128i *)((char *)v12 + 40);
          sub_3A98C0(v13);
        }
        while ( v9 != v12 );
        goto LABEL_6;
      }
    }
    else
    {
      sub_3B4BD0((__int64)v8, v9, -2, a4, a5, a6);
    }
    sub_3A9A30(v8, v9);
  }
LABEL_6:
  v28 = 0;
  v26 = 0x3FF000004LL;
  v27 = -1;
  v14 = (int *)v33;
  v25 = (__int64 (__fastcall **)())&unk_4EBE48;
  v15 = &v34;
  v29 = nullptr;
  v30 = 4;
  v32 = -1;
  v31 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_4E7570), (__m128i)(unsigned __int64)&off_4E7520);
  do
  {
    *(_QWORD *)v14 = 0;
    v14 += 6;
    *((_OWORD *)v14 - 1) = 0;
  }
  while ( &v34 != v14 );
  v34 = 0;
  if ( ((HIDWORD(v26) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v26) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    BYTE3(v26) = ((HIDWORD(v26) >> 19) & 0x3F) - 1;
    HIDWORD(v26) &= 0xFE07FFFF;
  }
  v25 = off_4E7128;
  v35 = a2;
  v36 = nullptr;
  v37 = 0;
  sub_6B870((__int64 *)&v36);
  v17 = s1;
  if ( (_QWORD)v37 )
    v17 = v36;
  v29 = v17;
  v18 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
          16,
          0,
          &v25,
          a1 + 44,
          &callui,
          v16);
  if ( v18 < 0 )
  {
    v20 = 0;
  }
  else
  {
    sub_390A30((__int64)&v23, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL) + 8LL, (__int64 *)(*(_QWORD *)a2 + 40 * v18 + 16));
    if ( !v24 )
    {
      v19 = tag_skipcodes();
      v24 = skip_spaces() - v19;
    }
    sub_395890((__int64)&v23, 1u, 0, 0);
    v20 = 1;
  }
  v25 = off_4E7128;
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree((__int64)v36);
  }
  v25 = (__int64 (__fastcall **)())&unk_4EBE48;
  do
  {
    v21 = *((_QWORD *)v15 - 3);
    v15 -= 6;
    if ( v21 )
    {
      *((_QWORD *)v15 + 1) = 0;
      qfree(v21);
    }
  }
  while ( v15 != (int *)v33 );
  return v20;
}
