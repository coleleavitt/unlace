__int64 __fastcall sub_10398D0(__int64 a1, const __m128i *a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rax
  bool v5; // zf
  size_t v7; // rax

  sub_102D220(a1, a2, a3);
  *(_QWORD *)a1 = &off_2C33000;
  v3 = sub_10AFEA0(a1, "z10", 3);
  *(_BYTE *)(a1 + 34) = 64;
  *(_DWORD *)(a1 + 512) = v3;
  *(_DWORD *)(a1 + 516) = 0;
  *(_DWORD *)(a1 + 140) = 7;
  *(_DWORD *)(a1 + 168) = 7;
  *(_WORD *)(a1 + 14) = 8224;
  *(_DWORD *)(a1 + 30) = 1077952576;
  *(_WORD *)(a1 + 8) = 16448;
  *(_WORD *)(a1 + 24) = 16512;
  v4 = sub_21F90C0();
  *(_BYTE *)(a1 + 393) |= 0x10u;
  *(_WORD *)(a1 + 60) = 4160;
  v5 = a2[2].m128i_i32[3] == 16;
  *(_QWORD *)(a1 + 112) = v4;
  if ( v5 )
  {
    if ( (unsigned __int8)sub_22B7EA0(a2) )
      *(_QWORD *)(a1 + 352) = &unk_24B7F40;
    *(_BYTE *)(a1 + 273) = 0;
    *(_DWORD *)(a1 + 68) = 64;
    v7 = j__strlen("E-m:l-p1:32:32-i1:8:16-i8:8:16-i64:64-f128:64-v128:64-a:8:16-n32:64");
    sub_102D780(
      (_QWORD *)a1,
      "E-m:l-p1:32:32-i1:8:16-i8:8:16-i64:64-f128:64-v128:64-a:8:16-n32:64",
      v7,
      (__int64)&byte_22F0C30);
  }
  else
  {
    *(_BYTE *)(a1 + 279) = 1;
    *(_BYTE *)(a1 + 273) = 1;
    sub_102D780((_QWORD *)a1, "E-m:e-i1:8:16-i8:8:16-i64:64-f128:64-v128:64-a:8:16-n32:64", 58, (__int64)&byte_22F0C30);
  }
  *(_BYTE *)(a1 + 276) = 0;
  *(_BYTE *)(a1 + 285) = 1;
  *(_WORD *)(a1 + 286) = -32640;
  return 4294934656LL;
}
