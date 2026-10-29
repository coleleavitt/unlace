__int64 sub_1355D0()
{
  int *v0; // rbx
  int *v1; // rax
  char v2; // dl
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 *v9; // r14
  __int64 v10; // [rsp+0h] [rbp-148h]
  char v11; // [rsp+Fh] [rbp-139h]
  __int64 v12; // [rsp+10h] [rbp-138h] BYREF
  __int128 v13; // [rsp+18h] [rbp-130h]
  __int64 (__fastcall **v14)(); // [rsp+30h] [rbp-118h] BYREF
  __int64 v15; // [rsp+38h] [rbp-110h]
  __int128 v16; // [rsp+40h] [rbp-108h]
  __int64 v17; // [rsp+50h] [rbp-F8h]
  __int64 v18; // [rsp+58h] [rbp-F0h]
  int v19; // [rsp+60h] [rbp-E8h]
  __m128i v20; // [rsp+68h] [rbp-E0h]
  int v21; // [rsp+78h] [rbp-D0h]
  _BYTE v22[72]; // [rsp+80h] [rbp-C8h] BYREF
  int v23; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v24; // [rsp+E8h] [rbp-60h]
  __int128 v25; // [rsp+F0h] [rbp-58h]
  unsigned __int64 v26; // [rsp+108h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v0 = &v23;
  v14 = (__int64 (__fastcall **)())&stru_236898;
  v18 = itext();
  v16 = -1;
  v1 = (int *)v22;
  v15 = 0x20A07FF000004LL;
  v17 = 0;
  v19 = 3;
  v21 = -1;
  v20 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2329B8), (__m128i)(unsigned __int64)&off_2329A0);
  do
  {
    *(_QWORD *)v1 = 0;
    v1 += 6;
    *((_OWORD *)v1 - 1) = 0;
  }
  while ( &v23 != v1 );
  v23 = 0;
  v2 = BYTE4(v15);
  if ( ((HIDWORD(v15) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v15) != 0xFF )
      goto LABEL_23;
    v2 = BYTE4(v15);
    BYTE3(v15) = ((HIDWORD(v15) >> 19) & 0x3F) - 1;
    HIDWORD(v15) &= 0xFE07FFFF;
  }
  v24 = 0;
  v14 = off_232740;
  v21 = 45;
  v25 = 0;
  if ( (v2 & 1) == 0 )
  {
    if ( under_debugger )
      goto LABEL_25;
    interr();
LABEL_23:
    if ( !under_debugger )
      interr();
LABEL_25:
    BUG();
  }
  v13 = 0;
  v12 = 0;
  v3 = qword_2450D0;
  if ( qword_2450D0 != -1 )
  {
    v11 = byte_2450D8;
    v12 = qvector_reserve();
    v4 = 16 * v13 + v12;
    *(_QWORD *)v4 = v3;
    *(_BYTE *)(v4 + 8) = v11;
    *(_QWORD *)&v13 = v13 + 1;
  }
  v5 = sub_198E60(&v14, &v12);
  if ( v12 )
  {
    v10 = v5;
    *(_QWORD *)&v13 = 0;
    qfree();
    v5 = v10;
  }
  v6 = -1;
  if ( v5 >= 0 && v5 < (unsigned __int64)v25 )
  {
    v9 = (__int64 *)(v24 + 16 * v5);
    qword_2450D0 = *v9;
    byte_2450D8 = *((_BYTE *)v9 + 8);
    get_problem_name();
    sub_8F740((__int64)"%08a: %s\n", 0.0, (const char *)*v9);
    v6 = *v9;
  }
  v14 = off_232740;
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree();
  }
  v14 = (__int64 (__fastcall **)())&stru_236898;
  do
  {
    v7 = *((_QWORD *)v0 - 3);
    v0 -= 6;
    if ( v7 )
    {
      *((_QWORD *)v0 + 1) = 0;
      qfree();
    }
  }
  while ( v0 != (int *)v22 );
  return v6;
}

