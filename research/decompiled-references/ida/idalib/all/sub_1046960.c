__int64 __fastcall sub_1046960(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  bool v5; // zf
  size_t v6; // rax
  unsigned int v7; // eax
  __int32 v8; // eax
  __int32 v10; // edx
  size_t v11; // rax
  size_t v12; // rax

  sub_102D220(a1, a2, a3);
  *(_QWORD *)(a1 + 520) = a1 + 536;
  *(_DWORD *)(a1 + 512) = 0;
  *(_QWORD *)(a1 + 528) = 0;
  *(_BYTE *)(a1 + 536) = 0;
  *(_DWORD *)(a1 + 556) = 0;
  *(_QWORD *)(a1 + 560) = 0;
  *(_WORD *)(a1 + 568) = 0;
  *(_BYTE *)(a1 + 570) = 0;
  *(_QWORD *)(a1 + 576) = a1 + 592;
  *(_QWORD *)(a1 + 584) = 0;
  *(_BYTE *)(a1 + 592) = 0;
  *(_WORD *)(a1 + 62) = 128;
  *(_WORD *)(a1 + 24) = -32640;
  v4 = sub_21F90D0(128, 0, v3);
  *(_BYTE *)(a1 + 393) |= 0x10u;
  v5 = a2[2].m128i_i32[3] == 20;
  *(_QWORD *)(a1 + 112) = v4;
  *(_BYTE *)(a1 + 285) = 1;
  *(_BYTE *)(a1 + 282) = 1;
  *(_QWORD *)a1 = &off_2C05DE8;
  if ( v5 )
  {
    v12 = j__strlen("E-m:a-p:32:32-Fi32-i64:64-n32");
    sub_102D780((_QWORD *)a1, "E-m:a-p:32:32-Fi32-i64:64-n32", v12, (__int64)&byte_22F0C30);
  }
  else if ( a2[2].m128i_i32[0] == 22 )
  {
    v11 = j__strlen("e-m:e-p:32:32-Fn32-i64:64-n32");
    sub_102D780((_QWORD *)a1, "e-m:e-p:32:32-Fn32-i64:64-n32", v11, (__int64)&byte_22F0C30);
  }
  else
  {
    v6 = j__strlen("E-m:e-p:32:32-Fn32-i64:64-n32");
    sub_102D780((_QWORD *)a1, "E-m:e-p:32:32-Fn32-i64:64-n32", v6, (__int64)&byte_22F0C30);
  }
  v7 = *(_DWORD *)(a1 + 260);
  if ( v7 == 7 )
    goto LABEL_14;
  if ( v7 <= 7 )
  {
    if ( v7 != 3 )
      goto LABEL_9;
LABEL_14:
    *(_DWORD *)(a1 + 136) = 6;
    *(_QWORD *)(a1 + 144) = 0x500000005LL;
    goto LABEL_9;
  }
  if ( v7 == 11 )
    goto LABEL_14;
  if ( v7 == 20 )
  {
    *(_BYTE *)(a1 + 23) = 32;
    *(_DWORD *)(a1 + 136) = 8;
    *(_QWORD *)(a1 + 144) = 0x700000007LL;
    *(_WORD *)(a1 + 24) = 8256;
    *(_QWORD *)(a1 + 112) = sub_21F90B0();
  }
LABEL_9:
  v8 = a2[2].m128i_i32[3];
  if ( (unsigned int)(v8 - 11) <= 1
    || v8 == 3
    || (v10 = a2[3].m128i_i32[0], v8 == 39 || v10 == 49)
    || (unsigned int)(v10 - 18) <= 7 )
  {
    *(_WORD *)(a1 + 24) = 16448;
    *(_QWORD *)(a1 + 112) = sub_21F90B0();
  }
  *(_WORD *)(a1 + 286) = 8224;
  return 8224;
}
