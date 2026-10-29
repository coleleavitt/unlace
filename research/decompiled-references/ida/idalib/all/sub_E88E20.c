void __fastcall sub_E88E20(__int64 a1, __int64 a2, __int64 a3)
{
  __m128 v3; // xmm0
  __int64 v4; // rax
  bool v5; // zf
  _BYTE *v6; // rax
  __int64 v7; // [rsp+8h] [rbp-280h] BYREF
  __m128 v8; // [rsp+10h] [rbp-278h] BYREF
  __int64 v9; // [rsp+20h] [rbp-268h]
  int v10; // [rsp+28h] [rbp-260h]
  _QWORD *v11; // [rsp+30h] [rbp-258h]
  __int64 v12; // [rsp+38h] [rbp-250h]
  _QWORD v13[42]; // [rsp+40h] [rbp-248h] BYREF
  int v14; // [rsp+190h] [rbp-F8h]
  __int64 v15; // [rsp+198h] [rbp-F0h]
  __int64 v16; // [rsp+1A0h] [rbp-E8h]
  int v17; // [rsp+1A8h] [rbp-E0h]
  __int64 v18; // [rsp+1B0h] [rbp-D8h]
  __int64 v19; // [rsp+1B8h] [rbp-D0h]
  int v20; // [rsp+1C0h] [rbp-C8h]
  __int128 v21; // [rsp+1C8h] [rbp-C0h] BYREF
  _QWORD *v22; // [rsp+1D8h] [rbp-B0h]
  __int64 v23; // [rsp+1E0h] [rbp-A8h]
  _QWORD v24[6]; // [rsp+1E8h] [rbp-A0h] BYREF
  __m128i si128; // [rsp+218h] [rbp-70h] BYREF
  __int128 *v26; // [rsp+228h] [rbp-60h]
  int v27; // [rsp+238h] [rbp-50h] BYREF
  __int64 v28; // [rsp+240h] [rbp-48h]
  int *v29; // [rsp+248h] [rbp-40h]
  int *v30; // [rsp+250h] [rbp-38h]
  __int64 v31; // [rsp+258h] [rbp-30h]
  bool v32; // [rsp+260h] [rbp-28h]

  v7 = a3;
  v11 = v13;
  v12 = 0xA00000000LL;
  v3 = _mm_loadh_ps((const double *)&v7);
  v22 = v24;
  v8 = v3;
  v23 = 0x400000000LL;
  v21 = 0;
  v24[4] = &si128;
  v26 = &v21;
  v29 = &v27;
  v9 = 0;
  v10 = -1;
  v13[40] = 0;
  v13[41] = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v24[5] = 0;
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  v27 = 0;
  v28 = 0;
  v30 = &v27;
  v4 = *(_QWORD *)(a1 + 8);
  v31 = 0;
  v5 = *(_BYTE *)(*(_QWORD *)(v4 + 17448) + 8LL) == 64;
  v6 = *(_BYTE **)(a3 + 32);
  v32 = v5;
  if ( (unsigned __int64)v6 >= *(_QWORD *)(a3 + 24) )
  {
    sub_227BA10(a3, 46);
  }
  else
  {
    *(_QWORD *)(a3 + 32) = v6 + 1;
    *v6 = 46;
  }
  sub_E845E0((__int64 *)&v8, a2, nullptr, 3);
  sub_E7AB30((__int64)&v8);
}
