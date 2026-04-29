__int64 __fastcall sub_32D720(const char *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  const char *v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int *v9; // rax
  int *v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __int64 v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // rbp
  _QWORD *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v24; // [rsp+0h] [rbp-130h] BYREF
  __int64 v25; // [rsp+8h] [rbp-128h] BYREF
  __int128 v26; // [rsp+10h] [rbp-120h]
  __int64 (__fastcall **v27)(); // [rsp+28h] [rbp-108h] BYREF
  __int64 v28; // [rsp+30h] [rbp-100h]
  __int128 v29; // [rsp+38h] [rbp-F8h]
  __int64 v30; // [rsp+48h] [rbp-E8h]
  const char *v31; // [rsp+50h] [rbp-E0h]
  int v32; // [rsp+58h] [rbp-D8h]
  __m128i v33; // [rsp+60h] [rbp-D0h]
  int v34; // [rsp+70h] [rbp-C0h]
  _BYTE v35[72]; // [rsp+78h] [rbp-B8h] BYREF
  int v36; // [rsp+D8h] [rbp-58h] BYREF
  __int64 *v37; // [rsp+E0h] [rbp-50h]
  unsigned __int64 v38; // [rsp+F0h] [rbp-40h]

  v4 = a1;
  v38 = __readfsqword(0x28u);
  v26 = 0;
  v25 = 0;
  v6 = sub_32D190(&v25, a2, a3, a4, 0);
  v30 = 0;
  if ( !a1 )
    v4 = "Choose union field";
  v32 = 2;
  v28 = 0x3FF000004LL;
  v29 = -1;
  v27 = (__int64 (__fastcall **)())&unk_4B7C88;
  v9 = (int *)v35;
  v34 = -1;
  v31 = v4;
  v10 = &v36;
  v33 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_4B0360), (__m128i)(unsigned __int64)&off_4B02F0);
  do
  {
    *(_QWORD *)v9 = 0;
    v9 += 6;
    *((_OWORD *)v9 - 1) = 0;
  }
  while ( v9 != &v36 );
  v36 = 0;
  if ( ((HIDWORD(v28) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v28) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, ((HIDWORD(v28) >> 19) & 0x3F) - 1, v6, HIDWORD(v28), v7);
      BUG();
    }
    BYTE3(v28) = ((HIDWORD(v28) >> 19) & 0x3F) - 1;
    HIDWORD(v28) &= 0xFE07FFFF;
  }
  v27 = off_4AFEE0;
  v24 = (int)v6;
  v37 = &v25;
  v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(16, 0, &v27, &v24, &callui, v8);
  if ( v11 < 0 || v11 >= (unsigned __int64)v26 )
  {
    v15 = -1;
  }
  else
  {
    v12 = (_QWORD *)(v25 + (v11 << 6));
    v13 = *(_QWORD *)a4;
    v14 = _mm_loadu_si128((const __m128i *)(a4 + 8));
    *(_QWORD *)a4 = v12[4];
    *(_QWORD *)(a4 + 8) = v12[5];
    *(_QWORD *)(a4 + 16) = v12[6];
    v15 = *v12;
    v12[4] = v13;
    *(__m128i *)(v12 + 5) = v14;
  }
  v27 = (__int64 (__fastcall **)())&unk_4B7C88;
  do
  {
    v16 = *((_QWORD *)v10 - 3);
    v10 -= 6;
    if ( v16 )
    {
      *((_QWORD *)v10 + 1) = 0;
      qfree(v16);
    }
  }
  while ( v10 != (int *)v35 );
  v17 = v25;
  if ( v25 )
  {
    v18 = v26;
    if ( (_QWORD)v26 )
    {
      v19 = 0;
      do
      {
        v20 = (_QWORD *)(v17 + (v19 << 6));
        clear_tinfo_t(v20 + 7);
        v21 = v20[4];
        if ( v21 )
        {
          v20[5] = 0;
          qfree(v21);
        }
        v22 = v20[1];
        if ( v22 )
        {
          v20[2] = 0;
          qfree(v22);
        }
        ++v19;
        v17 = v25;
      }
      while ( v18 != v19 );
    }
    *(_QWORD *)&v26 = 0;
    qfree(v17);
  }
  return v15;
}
