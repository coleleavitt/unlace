__int64 __fastcall sub_8FCD70(void *a1, void *a2, _QWORD *a3, __int64 *a4, __int64 a5, __int64 a6)
{
  _QWORD *v9; // rax
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  char v12; // bl
  unsigned int v13; // r12d
  __int128 *v14; // rbx
  void *v15; // rdi
  const char *v17; // rsi
  __m128i v19; // [rsp+20h] [rbp-3B0h] BYREF
  __m128i v20; // [rsp+30h] [rbp-3A0h]
  void *v21; // [rsp+40h] [rbp-390h] BYREF
  __int128 v22; // [rsp+48h] [rbp-388h]
  void *v23; // [rsp+58h] [rbp-378h]
  __int128 v24; // [rsp+60h] [rbp-370h]
  __int64 v25; // [rsp+70h] [rbp-360h]
  __int64 v26; // [rsp+78h] [rbp-358h]
  __int128 v27; // [rsp+80h] [rbp-350h] BYREF
  void (__fastcall *v28)(__int128 *, __int128 *, __int64, double, double); // [rsp+90h] [rbp-340h]
  __int64 v29; // [rsp+98h] [rbp-338h]
  _DWORD v30[84]; // [rsp+A0h] [rbp-330h] BYREF
  __int128 v31; // [rsp+1F0h] [rbp-1E0h] BYREF
  void *v32; // [rsp+290h] [rbp-140h]
  __int128 v33; // [rsp+298h] [rbp-138h]
  __m128i si128; // [rsp+2A8h] [rbp-128h]
  int v35; // [rsp+2B8h] [rbp-118h]
  __int128 v36; // [rsp+2C0h] [rbp-110h]
  void *ptr[2]; // [rsp+2D0h] [rbp-100h]
  __int128 v38; // [rsp+2E0h] [rbp-F0h]
  __int128 v39; // [rsp+2F0h] [rbp-E0h]
  __int64 v40; // [rsp+300h] [rbp-D0h]
  __int64 v41; // [rsp+308h] [rbp-C8h]
  __int64 v42; // [rsp+310h] [rbp-C0h]
  __int128 v43; // [rsp+318h] [rbp-B8h]
  _BYTE v44[88]; // [rsp+328h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+380h] [rbp-50h]
  char v46; // [rsp+388h] [rbp-48h]
  __int16 v47; // [rsp+390h] [rbp-40h]
  char v48; // [rsp+392h] [rbp-3Eh]
  unsigned __int64 v49; // [rsp+398h] [rbp-38h]

  v49 = __readfsqword(0x28u);
  if ( !a3[1] )
  {
    if ( !under_debugger )
      interr(3342);
    BUG();
  }
  v28 = nullptr;
  memset(v30, 0, sizeof(v30));
  v21 = nullptr;
  v23 = nullptr;
  v25 = 0;
  v26 = 0;
  v29 = 0;
  v30[10] = 2;
  v30[24] = 2;
  v30[38] = 2;
  v30[52] = 2;
  v30[66] = 2;
  v30[80] = 2;
  v32 = nullptr;
  v35 = 64;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v22 = 0;
  v24 = 0;
  v27 = 0;
  v31 = 0;
  v33 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7C00);
  v36 = 0;
  *(_OWORD *)ptr = 0;
  v38 = 0;
  v39 = 0;
  v43 = 0;
  memset(v44, 0, sizeof(v44));
  v46 = 0;
  v45 = 0;
  v47 = 256;
  v48 = 0;
  v19 = 0;
  v9 = (_QWORD *)operator new(0x10u);
  v9[1] = a6;
  v19.m128i_i64[0] = (__int64)v9;
  v10 = _mm_loadl_epi64((const __m128i *)&off_2B3FF28);
  *v9 = off_2B3FF20;
  v11 = _mm_unpacklo_epi64(v10, (__m128i)(unsigned __int64)sub_8FC400);
  v20 = v11;
  v12 = sub_72F4C0((__int64 *)&v21, a2, a3, a1, a4, a5, &v19);
  if ( v20.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64, double, double))v20.m128i_i64[0])(
      &v19,
      &v19,
      3,
      *(double *)v11.m128i_i64,
      0.0);
  v13 = 0;
  if ( !v12 )
  {
    v17 = haystack;
    if ( (_QWORD)v22 )
      v17 = (const char *)v21;
    set_error_string(0, v17);
    v13 = 33;
  }
  sub_72AFB0((__int64)&v21);
  if ( ptr[1] )
  {
    *(_QWORD *)&v38 = 0;
    qfree(ptr[1]);
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  v14 = &v31;
  do
  {
    v15 = *((void **)v14 - 3);
    v14 = (__int128 *)((char *)v14 - 56);
    close_linput(v15);
  }
  while ( v14 != (__int128 *)v30 );
  if ( v28 )
    v28(&v27, &v27, 3, *(double *)v11.m128i_i64, 0.0);
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  return v13;
}
