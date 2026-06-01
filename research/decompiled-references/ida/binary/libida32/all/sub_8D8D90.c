__int64 __fastcall sub_8D8D90(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // r12d
  _DWORD *v4; // rbx
  void *v5; // rdi
  void *v7; // [rsp+0h] [rbp-378h] BYREF
  __int128 v8; // [rsp+8h] [rbp-370h]
  void *v9; // [rsp+18h] [rbp-360h]
  __int128 v10; // [rsp+20h] [rbp-358h] BYREF
  __int64 v11; // [rsp+30h] [rbp-348h]
  __int64 v12; // [rsp+38h] [rbp-340h]
  __int128 v13; // [rsp+40h] [rbp-338h] BYREF
  void (__fastcall *v14)(__int128 *, __int128 *, __int64, double, double); // [rsp+50h] [rbp-328h]
  __int64 v15; // [rsp+58h] [rbp-320h]
  _DWORD v16[84]; // [rsp+60h] [rbp-318h] BYREF
  __int128 v17; // [rsp+1B0h] [rbp-1C8h]
  void *v18; // [rsp+250h] [rbp-128h]
  __int128 v19; // [rsp+258h] [rbp-120h]
  __m128i si128; // [rsp+268h] [rbp-110h]
  int v21; // [rsp+278h] [rbp-100h]
  __int128 v22; // [rsp+280h] [rbp-F8h]
  void *ptr[2]; // [rsp+290h] [rbp-E8h]
  __int128 v24; // [rsp+2A0h] [rbp-D8h]
  __int128 v25; // [rsp+2B0h] [rbp-C8h]
  __int64 v26; // [rsp+2C0h] [rbp-B8h]
  __int64 v27; // [rsp+2C8h] [rbp-B0h]
  __int64 v28; // [rsp+2D0h] [rbp-A8h]
  __int128 v29; // [rsp+2D8h] [rbp-A0h]
  _BYTE v30[88]; // [rsp+2E8h] [rbp-90h] BYREF
  __int64 v31; // [rsp+340h] [rbp-38h]
  char v32; // [rsp+348h] [rbp-30h]
  __int16 v33; // [rsp+350h] [rbp-28h]
  char v34; // [rsp+352h] [rbp-26h]
  unsigned __int64 v35; // [rsp+358h] [rbp-20h]

  v35 = __readfsqword(0x28u);
  v8 = 0;
  v10 = 0;
  v14 = nullptr;
  v7 = nullptr;
  v9 = nullptr;
  v11 = 0;
  memset(v16, 0, sizeof(v16));
  v12 = 0;
  v15 = 0;
  v16[10] = 2;
  v16[24] = 2;
  v16[38] = 2;
  v16[52] = 2;
  v16[66] = 2;
  v16[80] = 2;
  v18 = nullptr;
  v21 = 64;
  v13 = 0;
  v17 = 0;
  v19 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2383BD0);
  v22 = 0;
  memset(v30, 0, sizeof(v30));
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 256;
  v34 = 0;
  *(_OWORD *)ptr = 0;
  v24 = 0;
  v25 = 0;
  v29 = 0;
  v3 = 0;
  if ( !(unsigned __int8)sub_70D3B0((__int64)&v7, 0, a1, a2, a3) )
  {
    set_error_string();
    v3 = 55;
  }
  sub_70A9D0((__int64)&v7);
  if ( ptr[1] )
  {
    *(_QWORD *)&v24 = 0;
    qfree(ptr[1]);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  v4 = &v16[70];
  do
  {
    v5 = *((void **)v4 + 4);
    v4 -= 14;
    close_linput(v5);
  }
  while ( (_DWORD *)((char *)&v10 + 8) != v4 );
  if ( v14 )
    v14(&v13, &v13, 3, 0.0, 0.0);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7);
  }
  return v3;
}

