__int64 __fastcall sub_8FCAD0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v5; // r12d
  _DWORD *v6; // rbx
  void *v7; // rdi
  void *v9; // [rsp+0h] [rbp-378h] BYREF
  __int128 v10; // [rsp+8h] [rbp-370h]
  void *v11; // [rsp+18h] [rbp-360h]
  __int128 v12; // [rsp+20h] [rbp-358h] BYREF
  __int64 v13; // [rsp+30h] [rbp-348h]
  __int64 v14; // [rsp+38h] [rbp-340h]
  __int128 v15; // [rsp+40h] [rbp-338h] BYREF
  void (__fastcall *v16)(__int128 *, __int128 *, __int64, double, double); // [rsp+50h] [rbp-328h]
  __int64 v17; // [rsp+58h] [rbp-320h]
  _DWORD v18[84]; // [rsp+60h] [rbp-318h] BYREF
  __int128 v19; // [rsp+1B0h] [rbp-1C8h]
  void *v20; // [rsp+250h] [rbp-128h]
  __int128 v21; // [rsp+258h] [rbp-120h]
  __m128i si128; // [rsp+268h] [rbp-110h]
  int v23; // [rsp+278h] [rbp-100h]
  __int128 v24; // [rsp+280h] [rbp-F8h]
  void *ptr[2]; // [rsp+290h] [rbp-E8h]
  __int128 v26; // [rsp+2A0h] [rbp-D8h]
  __int128 v27; // [rsp+2B0h] [rbp-C8h]
  __int64 v28; // [rsp+2C0h] [rbp-B8h]
  __int64 v29; // [rsp+2C8h] [rbp-B0h]
  __int64 v30; // [rsp+2D0h] [rbp-A8h]
  __int128 v31; // [rsp+2D8h] [rbp-A0h]
  _BYTE v32[88]; // [rsp+2E8h] [rbp-90h] BYREF
  __int64 v33; // [rsp+340h] [rbp-38h]
  char v34; // [rsp+348h] [rbp-30h]
  __int16 v35; // [rsp+350h] [rbp-28h]
  char v36; // [rsp+352h] [rbp-26h]
  unsigned __int64 v37; // [rsp+358h] [rbp-20h]

  v37 = __readfsqword(0x28u);
  v10 = 0;
  v12 = 0;
  v16 = nullptr;
  v9 = nullptr;
  v11 = nullptr;
  v13 = 0;
  memset(v18, 0, sizeof(v18));
  v14 = 0;
  v17 = 0;
  v18[10] = 2;
  v18[24] = 2;
  v18[38] = 2;
  v18[52] = 2;
  v18[66] = 2;
  v18[80] = 2;
  v20 = nullptr;
  v23 = 64;
  v15 = 0;
  v19 = 0;
  v21 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7C00);
  v24 = 0;
  memset(v32, 0, sizeof(v32));
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 256;
  v36 = 0;
  *(_OWORD *)ptr = 0;
  v26 = 0;
  v27 = 0;
  v31 = 0;
  v5 = 0;
  if ( !(unsigned __int8)sub_72D910((__int64)&v9, 0, a1, a2, a3) )
  {
    set_error_string(0, a4);
    v5 = 55;
  }
  sub_72AFB0((__int64)&v9);
  if ( ptr[1] )
  {
    *(_QWORD *)&v26 = 0;
    qfree(ptr[1]);
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  v6 = &v18[70];
  do
  {
    v7 = *((void **)v6 + 4);
    v6 -= 14;
    close_linput(v7);
  }
  while ( (_DWORD *)((char *)&v12 + 8) != v6 );
  if ( v16 )
    v16(&v15, &v15, 3, 0.0, 0.0);
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11);
  }
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  return v5;
}
