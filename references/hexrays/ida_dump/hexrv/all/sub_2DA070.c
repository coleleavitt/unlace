unsigned __int64 __fastcall sub_2DA070(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rax
  int v4; // eax
  __m128i v5; // xmm0
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rbx
  bool v9; // zf
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  int v12; // eax
  int v13; // eax
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  int v16; // eax
  __int64 (__fastcall **v18)(); // [rsp+0h] [rbp-158h] BYREF
  __m128i v19; // [rsp+8h] [rbp-150h] BYREF
  __int64 v20; // [rsp+18h] [rbp-140h]
  _BYTE v21[8]; // [rsp+20h] [rbp-138h] BYREF
  __int128 v22; // [rsp+28h] [rbp-130h]
  _QWORD v23[2]; // [rsp+40h] [rbp-118h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp-108h] BYREF
  _QWORD v25[2]; // [rsp+60h] [rbp-F8h] BYREF
  int v26; // [rsp+70h] [rbp-E8h]
  int v27; // [rsp+78h] [rbp-E0h]
  char v28; // [rsp+80h] [rbp-D8h]
  __m128i v29; // [rsp+88h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+98h] [rbp-C0h]
  _BYTE v31[8]; // [rsp+A0h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+A8h] [rbp-B0h]
  _QWORD v33[2]; // [rsp+C0h] [rbp-98h] BYREF
  _QWORD v34[2]; // [rsp+D0h] [rbp-88h] BYREF
  _QWORD v35[2]; // [rsp+E0h] [rbp-78h] BYREF
  int v36; // [rsp+F0h] [rbp-68h]
  int v37; // [rsp+F8h] [rbp-60h]
  int v38; // [rsp+100h] [rbp-58h]
  __int64 v39; // [rsp+108h] [rbp-50h]
  unsigned __int64 v40; // [rsp+118h] [rbp-40h]

  v2 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v3 = *(_QWORD *)(a1 + 24);
  v40 = __readfsqword(0x28u);
  v18 = off_4B3EA0;
  v20 = v3;
  v19 = v2;
  v23[0] = 0xFFFFFFFF00000000LL;
  v23[1] = 0;
  v24[0] = 0xFFFFFFFF00000000LL;
  v24[1] = 0;
  v25[0] = 0xFFFFFFFF00000000LL;
  v25[1] = 0;
  v22 = 0;
  sub_120EE0((__int64)v21, a1 + 32);
  v4 = *(_DWORD *)(a1 + 112);
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 136));
  v33[1] = 0;
  v26 = v4;
  v6 = *(_DWORD *)(a1 + 120);
  v29 = v5;
  v27 = v6;
  LOBYTE(v6) = *(_BYTE *)(a1 + 128);
  v34[1] = 0;
  v28 = v6;
  v7 = *(_QWORD *)(a1 + 152);
  v35[1] = 0;
  v30 = v7;
  v33[0] = 0xFFFFFFFF00000000LL;
  v34[0] = 0xFFFFFFFF00000000LL;
  v35[0] = 0xFFFFFFFF00000000LL;
  v32 = 0;
  sub_120EE0((__int64)v31, a1 + 160);
  v8 = a1 - 272;
  v36 = *(_DWORD *)(a1 + 240);
  v37 = *(_DWORD *)(a1 - 272 + 520);
  v38 = *(_DWORD *)(a1 - 272 + 528);
  v18 = off_4B56F0;
  v9 = *(_QWORD *)(a2 + 16) == 0;
  v39 = *(_QWORD *)(a1 - 272 + 536);
  if ( v9 )
LABEL_6:
    std::__throw_bad_function_call();
  while ( (*(int (__fastcall **)(__int64, __int64 (__fastcall ***)(), __int64))(a2 + 24))(a2, &v18, v8) < 0 )
  {
    v10 = _mm_loadu_si128((const __m128i *)(v8 + 8));
    *(_DWORD *)(v8 + 296) = *(_DWORD *)(v8 + 24);
    *(__m128i *)(v8 + 280) = v10;
    sub_120EE0(v8 + 304, v8 + 32);
    v11 = _mm_loadu_si128((const __m128i *)(v8 + 136));
    *(_DWORD *)(v8 + 384) = *(_DWORD *)(v8 + 112);
    v12 = *(_DWORD *)(v8 + 120);
    *(__m128i *)(v8 + 408) = v11;
    *(_DWORD *)(v8 + 392) = v12;
    *(_BYTE *)(v8 + 400) = *(_BYTE *)(v8 + 128);
    *(_DWORD *)(v8 + 424) = *(_DWORD *)(v8 + 152);
    sub_120EE0(v8 + 432, v8 + 160);
    v13 = *(_DWORD *)(v8 + 240);
    v8 -= 272;
    *(_DWORD *)(v8 + 784) = v13;
    *(_DWORD *)(v8 + 792) = *(_DWORD *)(v8 + 520);
    *(_DWORD *)(v8 + 800) = *(_DWORD *)(v8 + 528);
    *(_QWORD *)(v8 + 808) = *(_QWORD *)(v8 + 536);
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_6;
  }
  v14 = _mm_loadu_si128(&v19);
  *(_DWORD *)(v8 + 296) = v20;
  *(__m128i *)(v8 + 280) = v14;
  sub_120EE0(v8 + 304, (__int64)v21);
  v15 = _mm_loadu_si128(&v29);
  *(_DWORD *)(v8 + 384) = v26;
  v16 = v27;
  *(__m128i *)(v8 + 408) = v15;
  *(_DWORD *)(v8 + 392) = v16;
  *(_BYTE *)(v8 + 400) = v28;
  *(_DWORD *)(v8 + 424) = v30;
  sub_120EE0(v8 + 432, (__int64)v31);
  v18 = off_4B3EA0;
  *(_DWORD *)(v8 + 512) = v36;
  *(_DWORD *)(v8 + 520) = v37;
  *(_DWORD *)(v8 + 528) = v38;
  *(_QWORD *)(v8 + 536) = v39;
  sub_1188E0((__int64)v35);
  sub_1188E0((__int64)v34);
  sub_1188E0((__int64)v33);
  sub_1188E0((__int64)v25);
  sub_1188E0((__int64)v24);
  sub_1188E0((__int64)v23);
  return v40 - __readfsqword(0x28u);
}
