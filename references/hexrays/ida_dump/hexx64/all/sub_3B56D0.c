__int64 __fastcall sub_3B56D0(__int64 a1, __m128i *a2, const char *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rbp
  __int64 v8; // rbx
  __m128i *v9; // r14
  __m128i *v10; // r12
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __m128i *v13; // rbx
  __int64 v14; // rdi
  int *v15; // rax
  int *v16; // rbx
  __int64 v17; // r9
  const char *v18; // rax
  __int64 v19; // rax
  const char *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rbp
  unsigned int v23; // ebp
  __int64 v24; // rdi
  int v27; // [rsp+10h] [rbp-148h] BYREF
  int v28; // [rsp+14h] [rbp-144h]
  __int64 (__fastcall **v29)(); // [rsp+40h] [rbp-118h] BYREF
  __int64 v30; // [rsp+48h] [rbp-110h]
  __int128 v31; // [rsp+50h] [rbp-108h]
  __int64 v32; // [rsp+60h] [rbp-F8h]
  const char *v33; // [rsp+68h] [rbp-F0h]
  int v34; // [rsp+70h] [rbp-E8h]
  __m128i v35; // [rsp+78h] [rbp-E0h]
  int v36; // [rsp+88h] [rbp-D0h]
  _BYTE v37[96]; // [rsp+90h] [rbp-C8h] BYREF
  int v38; // [rsp+F0h] [rbp-68h] BYREF
  __int64 *v39; // [rsp+F8h] [rbp-60h]
  const char *v40; // [rsp+100h] [rbp-58h] BYREF
  __int128 v41; // [rsp+108h] [rbp-50h]
  unsigned __int64 v42; // [rsp+118h] [rbp-40h]

  v7 = (__int64 *)a2;
  v8 = 40 * a2->m128i_i64[1];
  v42 = __readfsqword(0x28u);
  v9 = (__m128i *)a2->m128i_i64[0];
  v10 = (__m128i *)(a2->m128i_i64[0] + v8);
  if ( v10 != (__m128i *)a2->m128i_i64[0] )
  {
    v11 = 0xCCCCCCCCCCCCCCCDLL * (v8 >> 3);
    if ( v11 )
    {
      _BitScanReverse64(&v12, v11);
      sub_3B4BD0((__int64)v9, v10, 2LL * (int)v12, a4, a5, a6);
      if ( v8 > 640 )
      {
        v13 = v9 + 40;
        a2 = v9 + 40;
        sub_3A9A30(v9, v9 + 40);
        do
        {
          v14 = (__int64)v13;
          v13 = (__m128i *)((char *)v13 + 40);
          sub_3A98C0(v14);
        }
        while ( v10 != v13 );
        goto LABEL_6;
      }
    }
    else
    {
      sub_3B4BD0((__int64)v9, v10, -2, a4, a5, a6);
    }
    a2 = v10;
    sub_3A9A30(v9, v10);
  }
LABEL_6:
  v32 = 0;
  v30 = 0x3FF000004LL;
  v31 = -1;
  v15 = (int *)v37;
  v29 = (__int64 (__fastcall **)())&unk_4EBE48;
  v16 = &v38;
  v33 = nullptr;
  v34 = 4;
  v36 = -1;
  v35 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_4E7570), (__m128i)(unsigned __int64)&off_4E7520);
  do
  {
    *(_QWORD *)v15 = 0;
    v15 += 6;
    *((_OWORD *)v15 - 1) = 0;
  }
  while ( &v38 != v15 );
  v38 = 0;
  if ( ((HIDWORD(v30) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v30) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, a2, HIDWORD(v30), ((HIDWORD(v30) >> 19) & 0x3F) - 1, a5);
      BUG();
    }
    BYTE3(v30) = ((HIDWORD(v30) >> 19) & 0x3F) - 1;
    HIDWORD(v30) &= 0xFE07FFFF;
  }
  v29 = off_4E7128;
  v39 = v7;
  v40 = nullptr;
  v41 = 0;
  sub_6B870((__int64 *)&v40, (__int64)"Local cross references to %s", a3);
  v18 = s1;
  if ( (_QWORD)v41 )
    v18 = v40;
  v33 = v18;
  v19 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
          16,
          0,
          &v29,
          a1 + 44,
          &callui,
          v17);
  if ( v19 < 0 )
  {
    v23 = 0;
  }
  else
  {
    sub_390A30((__int64)&v27, *(_QWORD *)(v7[3] + 8) + 8LL, (__int64 *)(*v7 + 40 * v19 + 16));
    if ( !v28 )
    {
      v20 = s1;
      v21 = *(_QWORD *)(v7[3] + 128) + 32LL * v27;
      if ( *(_QWORD *)(v21 + 8) )
        v20 = *(const char **)v21;
      v22 = tag_skipcodes(v20);
      v28 = skip_spaces(v22) - v22;
    }
    sub_395890((__int64)&v27, 1u, 0, 0);
    v23 = 1;
  }
  v29 = off_4E7128;
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40);
  }
  v29 = (__int64 (__fastcall **)())&unk_4EBE48;
  do
  {
    v24 = *((_QWORD *)v16 - 3);
    v16 -= 6;
    if ( v24 )
    {
      *((_QWORD *)v16 + 1) = 0;
      qfree(v24);
    }
  }
  while ( v16 != (int *)v37 );
  return v23;
}
