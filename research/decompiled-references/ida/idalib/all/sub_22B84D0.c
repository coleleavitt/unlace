__int64 __fastcall sub_22B84D0(_BYTE *a1, size_t a2)
{
  unsigned int v2; // r12d
  __int64 result; // rax
  int v4; // [rsp+Ch] [rbp-3Ch] BYREF
  _QWORD v5[2]; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v6; // [rsp+20h] [rbp-28h]
  int v7; // [rsp+24h] [rbp-24h]

  v5[0] = a1;
  v5[1] = a2;
  v2 = sub_22B4290(a1, a2);
  v7 = 0;
  v4 = 3;
  sub_11EA430((__int64)v5, &v4, "aarch64", 7);
  v4 = 4;
  sub_11EA430((__int64)v5, &v4, "aarch64_be", 10);
  v4 = 5;
  sub_11EA430((__int64)v5, &v4, "aarch64_32", 10);
  v4 = 6;
  sub_11EA430((__int64)v5, &v4, "arc", 3);
  v4 = 3;
  sub_11EA430((__int64)v5, &v4, "arm64", 5);
  v4 = 5;
  sub_11EA430((__int64)v5, &v4, "arm64_32", 8);
  v4 = 1;
  sub_11EA430((__int64)v5, &v4, "arm", 3);
  v4 = 2;
  sub_11EA430((__int64)v5, &v4, "armeb", 5);
  v4 = 7;
  sub_11EA430((__int64)v5, &v4, "avr", 3);
  if ( !(_BYTE)v7 && sub_9C7D00((__int64)v5, "bpf", 3u) )
  {
    v6 = v2;
    LOBYTE(v7) = 1;
  }
  v4 = 15;
  sub_11EA430((__int64)v5, &v4, "m68k", 4);
  v4 = 16;
  sub_11EA430((__int64)v5, &v4, "mips", 4);
  v4 = 17;
  sub_11EA430((__int64)v5, &v4, "mipsel", 6);
  v4 = 18;
  sub_11EA430((__int64)v5, &v4, "mips64", 6);
  v4 = 19;
  sub_11EA430((__int64)v5, &v4, "mips64el", 8);
  v4 = 20;
  sub_11EA430((__int64)v5, &v4, "msp430", 6);
  v4 = 23;
  sub_11EA430((__int64)v5, &v4, "ppc64", 5);
  v4 = 21;
  sub_11EA430((__int64)v5, &v4, "ppc32", 5);
  v4 = 21;
  sub_11EA430((__int64)v5, &v4, "ppc", 3);
  v4 = 22;
  sub_11EA430((__int64)v5, &v4, "ppc32le", 7);
  v4 = 22;
  sub_11EA430((__int64)v5, &v4, "ppcle", 5);
  v4 = 24;
  sub_11EA430((__int64)v5, &v4, "ppc64le", 7);
  v4 = 25;
  sub_11EA430((__int64)v5, &v4, "r600", 4);
  v4 = 26;
  sub_11EA430((__int64)v5, &v4, "amdgcn", 6);
  v4 = 27;
  sub_11EA430((__int64)v5, &v4, "riscv32", 7);
  v4 = 28;
  sub_11EA430((__int64)v5, &v4, "riscv64", 7);
  v4 = 12;
  sub_11EA430((__int64)v5, &v4, "hexagon", 7);
  v4 = 29;
  sub_11EA430((__int64)v5, &v4, "sparc", 5);
  v4 = 31;
  sub_11EA430((__int64)v5, &v4, "sparcel", 7);
  v4 = 30;
  sub_11EA430((__int64)v5, &v4, "sparcv9", 7);
  v4 = 32;
  sub_11EA430((__int64)v5, &v4, "s390x", 5);
  v4 = 32;
  sub_11EA430((__int64)v5, &v4, "systemz", 7);
  v4 = 33;
  sub_11EA430((__int64)v5, &v4, "tce", 3);
  v4 = 34;
  sub_11EA430((__int64)v5, &v4, "tcele", 5);
  v4 = 35;
  sub_11EA430((__int64)v5, &v4, "thumb", 5);
  v4 = 36;
  sub_11EA430((__int64)v5, &v4, "thumbeb", 7);
  v4 = 37;
  sub_11EA430((__int64)v5, &v4, "x86", 3);
  v4 = 37;
  sub_11EA430((__int64)v5, &v4, "i386", 4);
  v4 = 38;
  sub_11EA430((__int64)v5, &v4, "x86-64", 6);
  v4 = 39;
  sub_11EA430((__int64)v5, &v4, "xcore", 5);
  v4 = 41;
  sub_11EA430((__int64)v5, &v4, "nvptx", 5);
  v4 = 42;
  sub_11EA430((__int64)v5, &v4, "nvptx64", 7);
  v4 = 43;
  sub_11EA430((__int64)v5, &v4, "amdil", 5);
  v4 = 44;
  sub_11EA430((__int64)v5, &v4, "amdil64", 7);
  v4 = 45;
  sub_11EA430((__int64)v5, &v4, "hsail", 5);
  v4 = 46;
  sub_11EA430((__int64)v5, &v4, "hsail64", 7);
  v4 = 47;
  sub_11EA430((__int64)v5, &v4, "spir", 4);
  v4 = 48;
  sub_11EA430((__int64)v5, &v4, "spir64", 6);
  v4 = 49;
  sub_11EA430((__int64)v5, &v4, "spirv", 5);
  v4 = 50;
  sub_11EA430((__int64)v5, &v4, "spirv32", 7);
  v4 = 51;
  sub_11EA430((__int64)v5, &v4, "spirv64", 7);
  v4 = 52;
  sub_11EA430((__int64)v5, &v4, "kalimba", 7);
  v4 = 54;
  sub_11EA430((__int64)v5, &v4, "lanai", 5);
  v4 = 53;
  sub_11EA430((__int64)v5, &v4, "shave", 5);
  v4 = 55;
  sub_11EA430((__int64)v5, &v4, "wasm32", 6);
  v4 = 56;
  sub_11EA430((__int64)v5, &v4, "wasm64", 6);
  v4 = 57;
  sub_11EA430((__int64)v5, &v4, "renderscript32", 14);
  v4 = 58;
  sub_11EA430((__int64)v5, &v4, "renderscript64", 14);
  v4 = 59;
  sub_11EA430((__int64)v5, &v4, "ve", 2);
  v4 = 10;
  sub_11EA430((__int64)v5, &v4, "csky", 4);
  v4 = 13;
  sub_11EA430((__int64)v5, &v4, "loongarch32", 11);
  v4 = 14;
  sub_11EA430((__int64)v5, &v4, "loongarch64", 11);
  v4 = 11;
  sub_11EA430((__int64)v5, &v4, "dxil", 4);
  v4 = 40;
  sub_11EA430((__int64)v5, &v4, "xtensa", 6);
  result = 0;
  if ( (_BYTE)v7 )
    return v6;
  return result;
}
