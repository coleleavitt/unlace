__int64 __fastcall sub_206D550(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        char a16,
        char a17,
        int a18,
        char a19,
        __int64 a20,
        __int64 a21,
        unsigned int a22)
{
  __m128 v23; // xmm0
  char v24; // r14
  char v25; // r13
  char v26; // r12
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v30; // [rsp-10h] [rbp-C8h]
  double v31[2]; // [rsp+10h] [rbp-A8h] BYREF
  _OWORD v32[5]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v33; // [rsp+70h] [rbp-48h]

  *(_QWORD *)&v31[0] = a4;
  *(_QWORD *)&v31[1] = a3;
  v23 = _mm_loadh_ps(v31);
  *(_QWORD *)&v31[0] = a6;
  v24 = a16;
  v32[0] = v23;
  v25 = a17;
  v26 = a19;
  v33 = a21;
  v32[1] = _mm_loadh_ps((const double *)&a8);
  v32[2] = _mm_loadh_ps((const double *)&a11);
  v32[3] = _mm_loadh_ps((const double *)&a13);
  v32[4] = _mm_loadh_ps((const double *)&a20);
  v27 = sub_20B4330(48, 11, a22);
  sub_20B2FD0(v27, a1, 17, a22, (unsigned int)v32, 11, 0, 0);
  *(_DWORD *)(v27 + 16) = a2;
  *(_WORD *)(v27 + 2) = 17;
  *(_BYTE *)(v27 + 40) = a5;
  *(_DWORD *)(v27 + 20) = a7;
  v28 = a15;
  *(_BYTE *)(v27 + 41) = v24;
  *(_QWORD *)(v27 + 24) = v28;
  LODWORD(v28) = a9;
  *(_BYTE *)(v27 + 42) = v25;
  *(_DWORD *)(v27 + 32) = v28;
  LODWORD(v28) = a18;
  *(_BYTE *)(v27 + 43) = v26;
  *(_DWORD *)(v27 + 36) = v28;
  if ( a22 == 1 )
    sub_20AC2A0(v27, a1, v30);
  return v27;
}
