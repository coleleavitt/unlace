__int64 __fastcall sub_8FBD90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // r15
  __int64 v12; // r12
  int v13; // eax
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _OWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _OWORD *v20; // rax
  _OWORD *v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rax
  __m128 v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // r15
  _QWORD *v27; // rbp
  _QWORD *v28; // rax
  _OWORD *v29; // rax
  _QWORD *v30; // rax
  _OWORD *v31; // rax
  __int64 v32; // rax
  void *v33; // r12
  __int64 v34; // rbp
  __int64 v35; // rcx
  unsigned int v36; // eax
  __int64 result; // rax
  void *v38; // [rsp+0h] [rbp-98h]
  int v39[2]; // [rsp+58h] [rbp-40h] BYREF

  *(_QWORD *)a1 = &off_1C55B90;
  sub_B63DB0();
  *(_QWORD *)(a1 + 104) = a2;
  *(_QWORD *)(a1 + 112) = a3;
  sub_1858590(a1 + 120, a4);
  *(_OWORD *)(a1 + 128) = 0;
  sub_AAD720(a1 + 144, a1, a3);
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL);
  *(_OWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 184) = v7;
  *(_QWORD *)(a1 + 192) = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)(a1 + 144));
  *(_BYTE *)(a1 + 208) = 1;
  sub_C11640(a1 + 216, a2, a3, a4);
  *(_QWORD *)v39 = 0;
  sub_14B7810(a1 + 7456, a2, (int)v39, v8, v9, v10, v38);
  sub_18572D0(v39);
  v11 = sub_186B270(0x10u);
  sub_955AA0(v11, a1, a3, a4);
  *(_QWORD *)(a1 + 7472) = v11;
  v12 = sub_186B270(0x68u);
  sub_A6D880(v12, a2);
  *(_QWORD *)(a1 + 7480) = v12;
  *(_QWORD *)(a1 + 7488) = sub_918E00(a1);
  v13 = *(_DWORD *)(a3 + 484);
  *(_QWORD *)(a1 + 7496) = 0;
  *(_DWORD *)(a1 + 7504) = v13;
  *(_BYTE *)(a1 + 7508) = 0;
  *(_DWORD *)(a1 + 7512) = 0;
  *(_QWORD *)(a1 + 7520) = 0;
  *(_DWORD *)(a1 + 7528) = 0;
  sub_AEA150(a1 + 7536, a1);
  sub_180C0A0(a1 + 8400);
  *(_QWORD *)(a1 + 8440) = a1 + 8400;
  v14 = (_QWORD *)sub_186B270(0x80u);
  v14[1] = 0;
  v14[3] = 0;
  v14[5] = 0;
  v14[7] = 0;
  v14[9] = 0;
  v14[11] = 0;
  v14[13] = 0;
  v14[15] = 0;
  *(_QWORD *)(a1 + 8448) = v14;
  *(_QWORD *)(a1 + 8456) = 8;
  *(_DWORD *)(a1 + 8464) = 0;
  *(_QWORD *)(a1 + 8472) = 0;
  *(_QWORD *)(a1 + 8480) = a2;
  *(_QWORD *)(a1 + 8488) = 0;
  *(_QWORD *)(a1 + 8496) = 0;
  *(_QWORD *)(a1 + 8504) = 0;
  *(_QWORD *)(a1 + 8512) = 0;
  *(_DWORD *)(a1 + 8520) = 0;
  *(_QWORD *)(a1 + 8528) = 0;
  *(_DWORD *)(a1 + 8536) = 0;
  *(_QWORD *)(a1 + 8544) = 0;
  *(_QWORD *)(a1 + 8552) = a2;
  *(_QWORD *)(a1 + 8560) = 0;
  *(_QWORD *)(a1 + 8568) = a2;
  *(_QWORD *)(a1 + 8576) = 0;
  *(_QWORD *)(a1 + 8584) = a2;
  *(_QWORD *)(a1 + 8592) = 0;
  *(_QWORD *)(a1 + 8600) = 0;
  *(_DWORD *)(a1 + 8608) = 0;
  *(_BYTE *)(a1 + 8612) = 0;
  *(_QWORD *)(a1 + 8616) = 0;
  *(_DWORD *)(a1 + 8624) = 0;
  *(_BYTE *)(a1 + 8628) = 0;
  *(_DWORD *)(a1 + 8632) = 0;
  *(_QWORD *)(a1 + 8704) = 0;
  *(_OWORD *)(a1 + 8656) = 0;
  *(_OWORD *)(a1 + 8672) = 0;
  *(_OWORD *)(a1 + 8688) = 0;
  sub_979340(a1 + 8712, a2);
  *(_OWORD *)(a1 + 8760) = 0;
  *(_OWORD *)(a1 + 8776) = 0;
  sub_B39840(a1 + 8792);
  *(_QWORD *)(a1 + 8936) = 0;
  *(_BYTE *)(a1 + 8968) = 1;
  *(_QWORD *)(a1 + 8960) = 0x3FF0000000000000LL;
  v15 = qword_1C7EC50;
  *(_BYTE *)(a1 + 8976) = 0;
  *(_DWORD *)(a1 + 8944) = 0;
  *(_QWORD *)(a1 + 8952) = 0;
  *(_DWORD *)(a1 + 8972) = 0;
  *(_QWORD *)(a1 + 8984) = v15;
  *(_DWORD *)(a1 + 8992) = -2;
  *(_OWORD *)(a1 + 8824) = 0;
  *(_OWORD *)(a1 + 8840) = 0;
  *(_OWORD *)(a1 + 8856) = 0;
  *(_OWORD *)(a1 + 8872) = 0;
  *(_OWORD *)(a1 + 8888) = 0;
  *(_OWORD *)(a1 + 8904) = 0;
  *(_OWORD *)(a1 + 8920) = 0;
  *(_QWORD *)(a1 + 9000) = sub_983010(a2, a1, a1 + 9080, a3, a1 + 8920, a1 + 8856);
  *(_QWORD *)(a1 + 9008) = 0;
  *(_QWORD *)(a1 + 9016) = a2;
  *(_QWORD *)(a1 + 9024) = 0;
  v16 = sub_186B270(0x80u);
  *(_QWORD *)v16 = 0;
  *(_DWORD *)(v16 + 8) = 0;
  *(_QWORD *)(v16 + 16) = 0;
  *(_DWORD *)(v16 + 24) = 0;
  *(_QWORD *)(v16 + 32) = 0;
  *(_DWORD *)(v16 + 40) = 0;
  *(_QWORD *)(v16 + 48) = 0;
  *(_DWORD *)(v16 + 56) = 0;
  *(_QWORD *)(v16 + 64) = 0;
  *(_DWORD *)(v16 + 72) = 0;
  *(_QWORD *)(v16 + 80) = 0;
  *(_DWORD *)(v16 + 88) = 0;
  *(_QWORD *)(v16 + 96) = 0;
  *(_DWORD *)(v16 + 104) = 0;
  *(_QWORD *)(v16 + 112) = 0;
  *(_DWORD *)(v16 + 120) = 0;
  *(_QWORD *)(a1 + 9032) = v16;
  *(_QWORD *)(a1 + 9040) = 8;
  *(_DWORD *)(a1 + 9048) = 0;
  v17 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 9056) = v17;
  *(_QWORD *)(a1 + 9064) = 8;
  *(_DWORD *)(a1 + 9072) = 0;
  *v17 = 0;
  v17[1] = 0;
  v17[2] = 0;
  v17[3] = 0;
  sub_957940(a1 + 9080, a1, a3 + 72);
  *(_QWORD *)(a1 + 9336) = 0;
  *(_QWORD *)(a1 + 9328) = "unknown";
  *(_OWORD *)(a1 + 9312) = 0;
  v18 = (_QWORD *)sub_186B270(0xC0u);
  *v18 = 0;
  v18[3] = 0;
  v18[6] = 0;
  v18[9] = 0;
  v18[12] = 0;
  v18[15] = 0;
  v18[18] = 0;
  v18[21] = 0;
  *(_QWORD *)(a1 + 9344) = v18;
  *(_QWORD *)(a1 + 9352) = 8;
  *(_DWORD *)(a1 + 9360) = 0;
  *(_QWORD *)(a1 + 9368) = a2;
  *(_QWORD *)(a1 + 9376) = 0;
  *(_DWORD *)(a1 + 9384) = 0;
  *(_QWORD *)(a1 + 9408) = 0;
  *(_OWORD *)(a1 + 9392) = 0;
  v19 = (_QWORD *)sub_186B270(0xC0u);
  *v19 = 0;
  v19[2] = 0;
  v19[3] = 0;
  v19[5] = 0;
  v19[6] = 0;
  v19[8] = 0;
  v19[9] = 0;
  v19[11] = 0;
  v19[12] = 0;
  v19[14] = 0;
  v19[15] = 0;
  v19[17] = 0;
  v19[18] = 0;
  v19[20] = 0;
  v19[21] = 0;
  v19[23] = 0;
  *(_QWORD *)(a1 + 9416) = v19;
  *(_QWORD *)(a1 + 9424) = 8;
  *(_DWORD *)(a1 + 9432) = 0;
  *(_QWORD *)(a1 + 9440) = 0;
  *(_BYTE *)(a1 + 9448) = 0;
  *(_QWORD *)(a1 + 9456) = 0;
  *(_QWORD *)(a1 + 9464) = 0;
  *(_DWORD *)(a1 + 9472) = 0;
  *(_DWORD *)(a1 + 9496) = 0;
  *(_QWORD *)(a1 + 9520) = 0;
  *(_OWORD *)(a1 + 9480) = 0;
  *(_OWORD *)(a1 + 9504) = 0;
  v20 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 9528) = v20;
  *v20 = 0;
  v20[1] = 0;
  v20[2] = 0;
  v20[3] = 0;
  v20[4] = 0;
  v20[5] = 0;
  v20[6] = 0;
  v20[7] = 0;
  *(_QWORD *)(a1 + 9552) = off_1C55AA0;
  *(_QWORD *)(a1 + 9568) = off_1C55AC8;
  *(_QWORD *)(a1 + 9536) = 8;
  *(_DWORD *)(a1 + 9544) = 0;
  *(_QWORD *)(a1 + 9560) = a1;
  *(_QWORD *)(a1 + 9576) = a1;
  *(_QWORD *)(a1 + 9584) = off_1C55AF0;
  *(_QWORD *)(a1 + 9592) = a1;
  *(_QWORD *)(a1 + 9600) = a2;
  v21 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 9608) = v21;
  *v21 = 0;
  v21[1] = 0;
  v21[2] = 0;
  v21[3] = 0;
  *(_QWORD *)(a1 + 9616) = 8;
  *(_DWORD *)(a1 + 9624) = 0;
  *(_QWORD *)(a1 + 9632) = qword_1C7A350;
  sub_16511B0(a1 + 9640);
  *(_QWORD *)(a1 + 9688) = a2;
  *(_QWORD *)(a1 + 9632) = &off_1C63D10;
  sub_16669D0(a1 + 9696, a2);
  sub_16744A0(a1 + 9712, a2);
  sub_1684300(a1 + 9736, a2);
  sub_15C5470(a1 + 9752, a2);
  *(_QWORD *)(a1 + 9816) = a2;
  sub_180C5A0(v39, "seq");
  v22 = sub_15DA4C0(a2 + 560, v39);
  v23 = sub_15D2690(a2, v22);
  *(__m128 *)(a1 + 9824) = _mm_loadh_ps((const double *)(v23 + 88));
  LODWORD(v23) = *(_DWORD *)(v23 + 16);
  *(_QWORD *)(a1 + 9896) = 0;
  v24 = _mm_loadh_ps((const double *)(a1 + 9816));
  *(_DWORD *)(a1 + 9840) = v23;
  *(_DWORD *)(a1 + 9864) = v23;
  *(_DWORD *)(a1 + 9888) = v23;
  v25 = *(_QWORD *)(a1 + 9816);
  *(_QWORD *)(a1 + 9912) = 0;
  *(_QWORD *)(a1 + 9904) = v25;
  *(_QWORD *)(a1 + 9920) = 0;
  *(_QWORD *)(a1 + 9928) = 0;
  *(_QWORD *)(a1 + 9936) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 9944) = 0;
  *(__m128 *)(a1 + 9848) = v24;
  *(__m128 *)(a1 + 9872) = v24;
  sub_15F01E0(a1 + 9952, a2);
  sub_1624F90(a1 + 9976, a2);
  *(_QWORD *)(a1 + 10016) = 0;
  *(_DWORD *)(a1 + 10008) = 0;
  *(_QWORD *)(a1 + 10032) = 0;
  *(_DWORD *)(a1 + 10024) = 0;
  *(_QWORD *)(a1 + 10048) = 0;
  *(_DWORD *)(a1 + 10040) = 0;
  *(_QWORD *)(a1 + 10064) = 0;
  *(_QWORD *)(a1 + 10072) = 0;
  *(_QWORD *)(a1 + 10080) = a2;
  *(_QWORD *)(a1 + 10088) = 0;
  *(_QWORD *)(a1 + 10096) = 0;
  sub_15C0990(a1 + 10104, a2);
  *(_BYTE *)(a1 + 10320) = 0;
  *(_QWORD *)(a1 + 10304) = 0x100000000LL;
  *(_QWORD *)(a1 + 10312) = 0;
  *(_BYTE *)(a1 + 10372) = 1;
  *(_QWORD *)(a1 + 10376) = 0;
  *(_QWORD *)(a1 + 10384) = &off_1C62200;
  *(_QWORD *)(a1 + 10400) = 0;
  *(_QWORD *)(a1 + 10408) = 0;
  *(_QWORD *)(a1 + 10424) = 0;
  *(_QWORD *)(a1 + 10432) = 0;
  *(_BYTE *)(a1 + 10440) = 1;
  v26 = sub_186B270(0x140u);
  v27 = (_QWORD *)v26;
  do
  {
    *v27 = 0;
    v28 = (_QWORD *)sub_186B270(0x60u);
    v27[2] = v28;
    v27 += 5;
    *(v27 - 2) = 8;
    *((_DWORD *)v27 - 2) = 0;
    *v28 = 0;
    *(_QWORD *)((char *)v28 + 12) = 0;
    v28[3] = 0;
    *(_QWORD *)((char *)v28 + 36) = 0;
    v28[6] = 0;
    *(_QWORD *)((char *)v28 + 60) = 0;
    v28[9] = 0;
    *(_QWORD *)((char *)v28 + 84) = 0;
  }
  while ( v27 != (_QWORD *)(v26 + 320) );
  *(_QWORD *)(a1 + 10448) = v26;
  *(_QWORD *)(a1 + 10456) = 8;
  *(_DWORD *)(a1 + 10464) = 0;
  v29 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 10472) = v29;
  *(_QWORD *)(a1 + 10480) = 8;
  *(_DWORD *)(a1 + 10488) = 0;
  *v29 = 0;
  v29[1] = 0;
  v29[2] = 0;
  v29[3] = 0;
  v29[4] = 0;
  v29[5] = 0;
  v29[6] = 0;
  v29[7] = 0;
  v30 = (_QWORD *)sub_186B270(0xC0u);
  *v30 = 0;
  v30[3] = 0;
  v30[6] = 0;
  v30[9] = 0;
  v30[12] = 0;
  v30[15] = 0;
  v30[18] = 0;
  v30[21] = 0;
  *(_QWORD *)(a1 + 10496) = v30;
  *(_QWORD *)(a1 + 10504) = 8;
  *(_DWORD *)(a1 + 10512) = 0;
  v31 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 10520) = v31;
  *(_QWORD *)(a1 + 10528) = 8;
  *(_DWORD *)(a1 + 10536) = 0;
  *v31 = 0;
  v31[1] = 0;
  v31[2] = 0;
  v31[3] = 0;
  v31[4] = 0;
  v31[5] = 0;
  v31[6] = 0;
  v31[7] = 0;
  v32 = sub_B43BE0(a1, a3);
  v33 = *(void **)(a1 + 8952);
  v34 = v32;
  if ( (void *)v32 != v33 )
  {
    if ( v33 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v33 + 120LL))(*(_QWORD *)(a1 + 8952));
      sub_186B220(v33);
    }
    *(_QWORD *)(a1 + 8952) = v34;
  }
  sub_14B5FE0(a1 + 7456, a1 + 232);
  sub_8ED430(a1);
  v35 = *(_QWORD *)(a1 + 112);
  v36 = *(_DWORD *)(v35 + 476);
  if ( v36 > *(_DWORD *)(a1 + 184) )
    v36 = *(_DWORD *)(a1 + 184);
  if ( !v36 )
    *(_BYTE *)(v35 + 480) = 0;
  result = *(_QWORD *)(a1 + 7480);
  *(_QWORD *)(result + 8) = a1;
  return result;
}

