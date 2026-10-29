__int64 __fastcall sub_DC8530(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v16[4]; // [rsp+40h] [rbp-1E8h] BYREF
  _QWORD v17[4]; // [rsp+60h] [rbp-1C8h] BYREF
  _QWORD v18[4]; // [rsp+80h] [rbp-1A8h] BYREF
  _QWORD v19[4]; // [rsp+A0h] [rbp-188h] BYREF
  __int64 v20[4]; // [rsp+C0h] [rbp-168h] BYREF
  _QWORD v21[4]; // [rsp+E0h] [rbp-148h] BYREF
  __int64 v22[4]; // [rsp+100h] [rbp-128h] BYREF
  unsigned __int64 v23; // [rsp+120h] [rbp-108h] BYREF
  __int64 v24; // [rsp+128h] [rbp-100h]
  unsigned __int64 v25; // [rsp+140h] [rbp-E8h] BYREF
  __int64 v26; // [rsp+148h] [rbp-E0h]
  _BYTE v27[48]; // [rsp+160h] [rbp-C8h] BYREF
  _BYTE v28[48]; // [rsp+190h] [rbp-98h] BYREF
  __int64 v29[13]; // [rsp+1C0h] [rbp-68h] BYREF

  v1 = a1[22];
  sub_DFDA20(v1, 48);
  sub_DFF520(v28);
  sub_DFDA50(v1, 48);
  v2 = a1[22];
  sub_DFDA20(v2, 48);
  sub_DFF520(v27);
  sub_DFDA50(v2, 48);
  v3 = sub_DFDA20(a1[22], 48);
  sub_CDA6F0((__int64)v29, (__int64)v27, 0);
  v4 = sub_CEA540((__int64)v29);
  sub_CDADA0((__int64)v16, v4);
  sub_DFF560(v29);
  sub_CDA6F0((__int64)v29, (__int64)v27, 1);
  v5 = sub_CEA540((__int64)v29);
  sub_CDADA0((__int64)v17, v5);
  sub_DFF560(v29);
  sub_CDA6F0((__int64)v29, (__int64)v28, 0);
  v6 = sub_CEA540((__int64)v29);
  sub_CDADA0((__int64)v18, v6);
  sub_DFF560(v29);
  sub_CDA6F0((__int64)v29, (__int64)v28, 1);
  v7 = sub_CEA540((__int64)v29);
  sub_CDADA0((__int64)v19, v7);
  sub_DFF560(v29);
  v8 = v16[0];
  v10 = sub_21D5390(v29, v7, v9);
  if ( v8 == v10 )
    sub_21DBE90(v20, v10);
  else
    sub_21D7CC0(v20, v8);
  if ( v16[0] == v10 )
    sub_21DBE90(v21, v10);
  else
    sub_21D7CC0(v21, v16[0]);
  if ( v19[0] == v10 )
    sub_21DC120(v29, v19);
  else
    sub_21D5A60(v29, v19);
  if ( v18[0] == v10 )
    sub_21DC120(&v25, v18);
  else
    sub_21D5A60(&v25, v18);
  if ( v17[0] == v10 )
    sub_21DC120(&v23, v17);
  else
    sub_21D5A60(&v23, v17);
  if ( v16[0] == v10 )
    sub_21DC120(v22, v16);
  else
    sub_21D5A60(v22, v16);
  sub_BFD6F0(v22, &v23, (__int64)&v25, v29, v20, (__int64)v21);
  sub_971860(v22);
  sub_971860(&v23);
  sub_971860(&v25);
  sub_971860(v29);
  v23 = sub_D1E4A0(a1, v16[0]);
  v24 = v11;
  sub_CDAFD0((__int64)&v23, v20);
  sub_CDA6F0((__int64)v29, v3, 0);
  v12 = sub_CEA540((__int64)v29);
  *(_QWORD *)v12 = v23;
  *(_DWORD *)(v12 + 8) = v24;
  sub_DFF560(v29);
  sub_CDA6F0((__int64)v29, v3, 0);
  sub_E00FC0(v29);
  sub_DFF560(v29);
  v25 = sub_D1E4A0(a1, v16[0]);
  v26 = v13;
  sub_CDAFD0((__int64)&v25, v21);
  sub_CDA6F0((__int64)v29, v3, 1);
  v14 = sub_CEA540((__int64)v29);
  *(_QWORD *)v14 = v25;
  *(_DWORD *)(v14 + 8) = v26;
  sub_DFF560(v29);
  sub_CDA6F0((__int64)v29, v3, 1);
  sub_E00FC0(v29);
  sub_DFF560(v29);
  sub_E00FC0(v3);
  sub_971860(v21);
  sub_971860(v20);
  sub_971860(v19);
  sub_971860(v18);
  sub_971860(v17);
  sub_971860(v16);
  sub_DFF560(v27);
  sub_DFF560(v28);
  return 1;
}

