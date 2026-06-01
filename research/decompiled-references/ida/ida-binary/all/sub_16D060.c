unsigned __int64 __fastcall sub_16D060(
        double a1,
        double a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  int *v10; // rax
  int *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v22; // [rsp+0h] [rbp-108h] BYREF
  __int128 v23; // [rsp+8h] [rbp-100h]
  __int64 (__fastcall **v24)(); // [rsp+20h] [rbp-E8h] BYREF
  __int64 v25; // [rsp+28h] [rbp-E0h]
  __int128 v26; // [rsp+30h] [rbp-D8h]
  __int64 v27; // [rsp+40h] [rbp-C8h]
  __int64 v28; // [rsp+48h] [rbp-C0h]
  int v29; // [rsp+50h] [rbp-B8h]
  __m128i v30; // [rsp+58h] [rbp-B0h]
  int v31; // [rsp+68h] [rbp-A0h]
  _BYTE v32[96]; // [rsp+70h] [rbp-98h] BYREF
  int v33; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 v34; // [rsp+D8h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  v25 = 0x2FF000004LL;
  v26 = -1;
  v10 = (int *)v32;
  v29 = 4;
  v11 = &v33;
  v27 = 0;
  v28 = 0;
  v31 = -1;
  v24 = (__int64 (__fastcall **)())&stru_86F6A0;
  v30 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_85BE40), (__m128i)(unsigned __int64)&off_85BE20);
  do
  {
    *(_QWORD *)v10 = 0;
    v10 += 6;
    *((_OWORD *)v10 - 1) = 0;
  }
  while ( &v33 != v10 );
  v33 = 0;
  if ( ((HIDWORD(v25) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v25) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, a10, HIDWORD(v25), ((HIDWORD(v25) >> 19) & 0x3F) - 1, 0.0);
      BUG();
    }
    BYTE3(v25) = ((HIDWORD(v25) >> 19) & 0x3F) - 1;
    HIDWORD(v25) &= 0xFE07FFFF;
  }
  v24 = addon_chooser_t___vtable;
  v27 = 80;
  v22 = 0;
  v23 = 0;
  v12 = qvector_reserve(&v22, 0, 1, 8);
  LOBYTE(v22) = v12;
  *(_QWORD *)(v12 + 8 * v23) = 0;
  *(_QWORD *)&v23 = v23 + 1;
  sub_1697D0(
    (int)"STARTITEM 3\nBUTTON CANCEL NONE\nRegistered Addons\n%/<:E3::80::>\n\n\n",
    (__int64)sub_16CCC0,
    (__int64)&v24,
    (__int64)&v22,
    v13,
    v14,
    (__m128)0LL,
    (__m128)(unsigned __int64)&off_85BE20,
    a3,
    a4,
    v15,
    v16,
    a7,
    a8,
    v22);
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22, sub_16CCC0, v17, v18, v19);
  }
  v24 = (__int64 (__fastcall **)())&stru_86F6A0;
  do
  {
    v20 = *((_QWORD *)v11 - 3);
    v11 -= 6;
    if ( v20 )
    {
      *((_QWORD *)v11 + 1) = 0;
      qfree(v20, sub_16CCC0, v17, v18, v19);
    }
  }
  while ( v11 != (int *)v32 );
  return v34 - __readfsqword(0x28u);
}
