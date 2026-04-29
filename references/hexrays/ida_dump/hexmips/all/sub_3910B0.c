__int64 __fastcall sub_3910B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  int *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rsi
  unsigned int v12; // r13d
  __m128i *v13; // rbx
  __int64 v14; // rdi
  __int64 (__fastcall **v16)(); // [rsp+0h] [rbp-118h] BYREF
  __int64 v17; // [rsp+8h] [rbp-110h]
  __int128 v18; // [rsp+10h] [rbp-108h]
  __int64 v19; // [rsp+20h] [rbp-F8h]
  const char *v20; // [rsp+28h] [rbp-F0h]
  int v21; // [rsp+30h] [rbp-E8h]
  __m128i v22; // [rsp+38h] [rbp-E0h] BYREF
  int v23; // [rsp+48h] [rbp-D0h]
  char v24; // [rsp+50h] [rbp-C8h] BYREF
  char v25; // [rsp+98h] [rbp-80h] BYREF
  int v26; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-60h]
  __int64 v28; // [rsp+C0h] [rbp-58h]
  __int128 v29; // [rsp+C8h] [rbp-50h]
  __int64 v30; // [rsp+D8h] [rbp-40h]
  __int64 v31; // [rsp+E0h] [rbp-38h]
  unsigned __int64 v32; // [rsp+E8h] [rbp-30h]

  v32 = __readfsqword(0x28u);
  if ( a2 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    v18 = -1;
    v17 = 0x3FF000004LL;
    v20 = "Select a variable to unmap";
    v16 = (__int64 (__fastcall **)())&unk_4CBCC8;
    v8 = (int *)&v24;
    v19 = 0;
    v21 = 1;
    v23 = -1;
    v22 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4C73D8), (__m128i)(unsigned __int64)off_4C73D0);
    do
    {
      *(_QWORD *)v8 = 0;
      v8 += 6;
      *((_OWORD *)v8 - 1) = 0;
    }
    while ( v8 != &v26 );
    v26 = 0;
    v9 = HIDWORD(v17);
    v10 = ((HIDWORD(v17) >> 19) & 0x3F) - 1;
    if ( ((HIDWORD(v17) >> 19) & 0x3F) != 0 )
    {
      if ( BYTE3(v17) != 0xFF )
      {
        if ( !under_debugger )
          interr(3449, v7, a2, HIDWORD(v17), v10);
        BUG();
      }
      v9 = HIDWORD(v17) & 0xFE07FFFF;
      BYTE3(v17) = ((HIDWORD(v17) >> 19) & 0x3F) - 1;
      HIDWORD(v17) &= 0xFE07FFFF;
    }
    v27 = v7;
    v30 = v7 + 1280;
    v28 = 0;
    v16 = off_4C6E70;
    v31 = a2;
    v29 = 0;
    v11 = sub_386710(&v16, 0, a2, v9, v10, a6);
    if ( v11 )
      v12 = sub_391030(a1, v11, 0, 0.0);
    else
      v12 = 0;
    v16 = off_4C6DA0;
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(v28);
    }
    v16 = (__int64 (__fastcall **)())&unk_4CBCC8;
    v13 = (__m128i *)&v25;
    do
    {
      v14 = v13->m128i_i64[0];
      if ( v13->m128i_i64[0] )
      {
        v13->m128i_i64[1] = 0;
        qfree(v14);
      }
      v13 = (__m128i *)((char *)v13 - 24);
    }
    while ( &v22 != v13 );
  }
  else
  {
    return 0;
  }
  return v12;
}
