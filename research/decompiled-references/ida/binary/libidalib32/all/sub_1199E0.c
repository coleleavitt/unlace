__int64 sub_1199E0()
{
  __m128i v0; // xmm0
  int *v1; // rbx
  char v2; // dl
  __int64 v3; // rax
  const char *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __m128i *v10; // rbx
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rbx
  _QWORD *v14; // rbp
  _QWORD *v15; // rax
  unsigned int v16; // edx
  __m128i v18; // [rsp+0h] [rbp-128h] BYREF
  __int64 (__fastcall **v19)(); // [rsp+10h] [rbp-118h] BYREF
  __int64 v20; // [rsp+18h] [rbp-110h]
  __int128 v21; // [rsp+20h] [rbp-108h]
  __int64 v22; // [rsp+30h] [rbp-F8h]
  const char *v23; // [rsp+38h] [rbp-F0h]
  int v24; // [rsp+40h] [rbp-E8h]
  __m128i v25; // [rsp+48h] [rbp-E0h] BYREF
  int v26; // [rsp+58h] [rbp-D0h]
  char v27; // [rsp+60h] [rbp-C8h] BYREF
  char v28; // [rsp+A8h] [rbp-80h] BYREF
  int v29; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v30; // [rsp+C8h] [rbp-60h]
  __int128 v31; // [rsp+D0h] [rbp-58h]
  __int64 v32; // [rsp+E0h] [rbp-48h]
  __int128 v33; // [rsp+E8h] [rbp-40h]
  unsigned __int64 v34; // [rsp+F8h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  v0 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_231008), (__m128i)(unsigned __int64)off_231000);
  if ( !byte_252E40 )
  {
    v18 = v0;
    v11 = qalloc_or_throw();
    v12 = _mm_load_si128(&v18);
    v13 = v11;
    *(_QWORD *)v11 = &stru_235898;
    v14 = (_QWORD *)(v11 + 176);
    *(_QWORD *)(v11 + 32) = 0;
    *(_DWORD *)(v11 + 48) = 1;
    *(_DWORD *)(v11 + 72) = -1;
    *(_QWORD *)(v11 + 8) = 0x20F04FF000004LL;
    *(_QWORD *)(v11 + 40) = "Recent scripts";
    v15 = (_QWORD *)(v11 + 80);
    *(__m128i *)(v13 + 56) = v12;
    *(_OWORD *)(v13 + 16) = -1;
    do
    {
      *v15 = 0;
      v15 += 3;
      *((_OWORD *)v15 - 1) = 0;
    }
    while ( v14 != v15 );
    *(_DWORD *)(v13 + 176) = 0;
    v16 = *(_DWORD *)(v13 + 12);
    if ( ((v16 >> 19) & 0x3F) != 0 )
    {
      if ( *(_BYTE *)(v13 + 11) != 0xFF )
      {
        if ( under_debugger )
          goto LABEL_41;
        interr();
        goto LABEL_39;
      }
      *(_BYTE *)(v13 + 11) = ((v16 >> 19) & 0x3F) - 1;
      *(_DWORD *)(v13 + 12) = v16 & 0xFE07FFFF;
    }
    *(_QWORD *)(v13 + 184) = 0;
    *(_QWORD *)v13 = off_230D58;
    *(_QWORD *)(v13 + 208) = 0;
    *(_DWORD *)(v13 + 72) = 64;
    *(_OWORD *)(v13 + 192) = 0;
    *(_OWORD *)(v13 + 216) = 0;
    sub_198260(v13, &qword_251E20);
    return 1;
  }
  v24 = 1;
  v19 = (__int64 (__fastcall **)())&stru_235898;
  v22 = 0;
  v1 = (int *)&v27;
  v26 = -1;
  v20 = 0x20F07FF000004LL;
  v23 = "Recent scripts";
  v25 = v0;
  v21 = -1;
  do
  {
    *(_QWORD *)v1 = 0;
    v1 += 6;
    *((_OWORD *)v1 - 1) = 0;
  }
  while ( v1 != &v29 );
  v29 = 0;
  v2 = BYTE4(v20);
  if ( ((HIDWORD(v20) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v20) == 0xFF )
    {
      v2 = BYTE4(v20);
      BYTE3(v20) = ((HIDWORD(v20) >> 19) & 0x3F) - 1;
      HIDWORD(v20) &= 0xFE07FFFF;
      goto LABEL_7;
    }
LABEL_39:
    if ( !under_debugger )
      interr();
LABEL_41:
    BUG();
  }
LABEL_7:
  v30 = 0;
  v19 = off_230D58;
  v32 = 0;
  v26 = 64;
  v31 = 0;
  v33 = 0;
  if ( (v2 & 1) == 0 )
  {
    if ( !under_debugger )
      interr();
    goto LABEL_41;
  }
  v3 = sub_198260(&v19, &qword_251E20);
  if ( v3 >= 0 && v3 < (unsigned __int64)v31 )
  {
    v4 = s1;
    v5 = v30 + 24 * v3;
    if ( *(_QWORD *)(v5 + 8) )
      v4 = *(const char **)v5;
    if ( v4 )
      sub_1185D0(v4);
  }
  v19 = off_230D58;
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree();
  }
  v6 = v30;
  if ( v30 )
  {
    v7 = v31;
    if ( (_QWORD)v31 )
    {
      v8 = 0;
      do
      {
        v9 = (_QWORD *)(v6 + 24 * v8);
        if ( *v9 )
        {
          v9[1] = 0;
          qfree();
          v6 = v30;
        }
        ++v8;
      }
      while ( v7 != v8 );
    }
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  v19 = (__int64 (__fastcall **)())&stru_235898;
  v10 = (__m128i *)&v28;
  do
  {
    if ( v10->m128i_i64[0] )
    {
      v10->m128i_i64[1] = 0;
      qfree();
    }
    v10 = (__m128i *)((char *)v10 - 24);
  }
  while ( &v25 != v10 );
  return 1;
}

