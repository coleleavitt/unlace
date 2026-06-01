__int64 __fastcall sub_34C790(__int64 a1, __int64 a2)
{
  int *v3; // rbx
  int *v4; // rax
  double v5; // xmm0_8
  __int64 v6; // rdx
  __int64 v7; // rcx
  const char *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v12; // [rsp+0h] [rbp-110h] BYREF
  _BYTE v13[8]; // [rsp+8h] [rbp-108h] BYREF
  __int64 v14; // [rsp+10h] [rbp-100h] BYREF
  __int64 (__fastcall **v15)(); // [rsp+18h] [rbp-F8h] BYREF
  __int64 v16; // [rsp+20h] [rbp-F0h]
  __int128 v17; // [rsp+28h] [rbp-E8h]
  __int64 v18; // [rsp+38h] [rbp-D8h]
  const char *v19; // [rsp+40h] [rbp-D0h]
  int v20; // [rsp+48h] [rbp-C8h]
  __m128i v21; // [rsp+50h] [rbp-C0h]
  int v22; // [rsp+60h] [rbp-B0h]
  _BYTE v23[96]; // [rsp+68h] [rbp-A8h] BYREF
  int v24; // [rsp+C8h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+D0h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v16 = 0x3FF000004LL;
  v19 = "Please select mapping to remove";
  v3 = &v24;
  v17 = -1;
  v4 = (int *)v23;
  v15 = (__int64 (__fastcall **)())&stru_86F6A0;
  v18 = 0;
  v20 = 4;
  v22 = -1;
  v21 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_8674D8), (__m128i)(unsigned __int64)&off_8672E0);
  v5 = 0.0;
  do
  {
    *(_QWORD *)v4 = 0;
    v4 += 6;
    *((_OWORD *)v4 - 1) = 0;
  }
  while ( &v24 != v4 );
  v24 = 0;
  v6 = HIDWORD(v16);
  v7 = ((HIDWORD(v16) >> 19) & 0x3F) - 1;
  if ( ((HIDWORD(v16) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v16) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, a2, HIDWORD(v16), v7, 0.0);
      BUG();
    }
    v6 = HIDWORD(v16) & 0xFE07FFFF;
    BYTE3(v16) = ((HIDWORD(v16) >> 19) & 0x3F) - 1;
    HIDWORD(v16) &= 0xFE07FFFF;
  }
  v14 = 0;
  v8 = (const char *)&v14;
  v15 = memmap_chooser_t___vtable;
  v9 = sub_4AED50(&v15, &v14, v6, v7);
  if ( v9 >= 0 )
  {
    if ( (unsigned __int8)get_mapping(&v12, v13, &v14, v9, 0.0) )
      del_mapping(v12);
    v8 = (_BYTE *)(&dword_0 + 1);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 64LL))(a2, 1);
  }
  v15 = (__int64 (__fastcall **)())&stru_86F6A0;
  do
  {
    v10 = *((_QWORD *)v3 - 3);
    v3 -= 6;
    if ( v10 )
    {
      *((_QWORD *)v3 + 1) = 0;
      v5 = qfree(v10, v8, v5);
    }
  }
  while ( v3 != (int *)v23 );
  return 0;
}
