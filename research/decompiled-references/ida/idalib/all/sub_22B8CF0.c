__int64 __fastcall sub_22B8CF0(__int128 a1)
{
  unsigned int v1; // ebp
  size_t v3; // rax
  int v4; // r13d
  int v5; // eax
  int v6; // r12d
  __int64 v7; // rax
  __m128i v8; // rax
  int v9; // ebx
  int v10; // eax
  size_t v11; // rax
  size_t v12; // rax
  size_t v13; // rax
  size_t v14; // rax
  size_t v15; // rax
  __int64 v16; // rax
  __m128i n; // [rsp+0h] [rbp-68h] BYREF
  int v18; // [rsp+1Ch] [rbp-4Ch] BYREF
  __m128i v19; // [rsp+20h] [rbp-48h] BYREF
  int v20; // [rsp+30h] [rbp-38h]
  int v21; // [rsp+34h] [rbp-34h]

  n = (__m128i)a1;
  v19 = (__m128i)a1;
  v21 = 0;
  v18 = 37;
  if ( !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "i386", 4)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "i486", 4)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "i586", 4) )
  {
    sub_11EA430((__int64)&v19, &v18, "i686", 4);
  }
  v18 = 37;
  if ( !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "i786", 4)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "i886", 4) )
  {
    sub_11EA430((__int64)&v19, &v18, "i986", 4);
  }
  v18 = 38;
  if ( !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "amd64", 5)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "x86_64", 6) )
  {
    sub_11EA430((__int64)&v19, &v18, "x86_64h", 7);
  }
  v18 = 21;
  if ( !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "powerpc", 7)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "powerpcspe", 10)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "ppc", 3) )
  {
    sub_11EA430((__int64)&v19, &v18, "ppc32", 5);
  }
  v18 = 22;
  if ( !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "powerpcle", 9)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "ppcle", 5) )
  {
    sub_11EA430((__int64)&v19, &v18, "ppc32le", 7);
  }
  v18 = 23;
  if ( !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "powerpc64", 9)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "ppu", 3) )
  {
    sub_11EA430((__int64)&v19, &v18, "ppc64", 5);
  }
  v18 = 24;
  if ( !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "powerpc64le", 11) )
    sub_11EA430((__int64)&v19, &v18, "ppc64le", 7);
  v18 = 1;
  sub_11EA430((__int64)&v19, &v18, "xscale", 6);
  v18 = 2;
  sub_11EA430((__int64)&v19, &v18, "xscaleeb", 8);
  v18 = 3;
  sub_11EA430((__int64)&v19, &v18, "aarch64", 7);
  v18 = 4;
  sub_11EA430((__int64)&v19, &v18, "aarch64_be", 10);
  v18 = 5;
  sub_11EA430((__int64)&v19, &v18, "aarch64_32", 10);
  v18 = 6;
  sub_11EA430((__int64)&v19, &v18, "arc", 3);
  v18 = 3;
  sub_11EA430((__int64)&v19, &v18, "arm64", 5);
  v18 = 5;
  sub_11EA430((__int64)&v19, &v18, "arm64_32", 8);
  v18 = 3;
  sub_11EA430((__int64)&v19, &v18, "arm64e", 6);
  v18 = 3;
  sub_11EA430((__int64)&v19, &v18, "arm64ec", 7);
  v18 = 1;
  sub_11EA430((__int64)&v19, &v18, "arm", 3);
  v18 = 2;
  sub_11EA430((__int64)&v19, &v18, "armeb", 5);
  v18 = 35;
  sub_11EA430((__int64)&v19, &v18, "thumb", 5);
  v18 = 36;
  sub_11EA430((__int64)&v19, &v18, "thumbeb", 7);
  v18 = 7;
  sub_11EA430((__int64)&v19, &v18, "avr", 3);
  v18 = 15;
  sub_11EA430((__int64)&v19, &v18, "m68k", 4);
  v18 = 20;
  sub_11EA430((__int64)&v19, &v18, "msp430", 6);
  v18 = 16;
  if ( !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "mips", 4)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "mipseb", 6)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "mipsallegrex", 12)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "mipsisa32r6", 11) )
  {
    sub_11EA430((__int64)&v19, &v18, "mipsr6", 6);
  }
  v18 = 17;
  if ( !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "mipsel", 6)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "mipsallegrexel", 14)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "mipsisa32r6el", 13) )
  {
    sub_11EA430((__int64)&v19, &v18, "mipsr6el", 8);
  }
  v18 = 18;
  if ( !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "mips64", 6)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "mips64eb", 8)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "mipsn32", 7)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "mipsisa64r6", 11)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "mips64r6", 8) )
  {
    sub_11EA430((__int64)&v19, &v18, "mipsn32r6", 9);
  }
  v18 = 19;
  if ( !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "mips64el", 8)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "mipsn32el", 9)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "mipsisa64r6el", 13)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "mips64r6el", 10) )
  {
    sub_11EA430((__int64)&v19, &v18, "mipsn32r6el", 11);
  }
  v18 = 25;
  sub_11EA430((__int64)&v19, &v18, "r600", 4);
  v18 = 26;
  sub_11EA430((__int64)&v19, &v18, "amdgcn", 6);
  v18 = 27;
  sub_11EA430((__int64)&v19, &v18, "riscv32", 7);
  v18 = 28;
  sub_11EA430((__int64)&v19, &v18, "riscv64", 7);
  v18 = 12;
  sub_11EA430((__int64)&v19, &v18, "hexagon", 7);
  v18 = 32;
  if ( !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "s390x", 5) )
    sub_11EA430((__int64)&v19, &v18, "systemz", 7);
  v18 = 29;
  sub_11EA430((__int64)&v19, &v18, "sparc", 5);
  v18 = 31;
  sub_11EA430((__int64)&v19, &v18, "sparcel", 7);
  v18 = 30;
  if ( !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "sparcv9", 7) )
    sub_11EA430((__int64)&v19, &v18, "sparc64", 7);
  v18 = 33;
  sub_11EA430((__int64)&v19, &v18, "tce", 3);
  v18 = 34;
  sub_11EA430((__int64)&v19, &v18, "tcele", 5);
  v18 = 39;
  sub_11EA430((__int64)&v19, &v18, "xcore", 5);
  v18 = 41;
  sub_11EA430((__int64)&v19, &v18, "nvptx", 5);
  v18 = 42;
  sub_11EA430((__int64)&v19, &v18, "nvptx64", 7);
  v18 = 43;
  sub_11EA430((__int64)&v19, &v18, "amdil", 5);
  v18 = 44;
  sub_11EA430((__int64)&v19, &v18, "amdil64", 7);
  v18 = 45;
  sub_11EA430((__int64)&v19, &v18, "hsail", 5);
  v18 = 46;
  sub_11EA430((__int64)&v19, &v18, "hsail64", 7);
  v18 = 47;
  sub_11EA430((__int64)&v19, &v18, "spir", 4);
  v18 = 48;
  sub_11EA430((__int64)&v19, &v18, "spir64", 6);
  v18 = 49;
  if ( !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "spirv", 5)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "spirv1.5", 8) )
  {
    sub_11EA430((__int64)&v19, &v18, "spirv1.6", 8);
  }
  v18 = 50;
  if ( !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "spirv32", 7)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "spirv32v1.0", 11)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "spirv32v1.1", 11)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "spirv32v1.2", 11)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "spirv32v1.3", 11)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "spirv32v1.4", 11)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "spirv32v1.5", 11) )
  {
    sub_11EA430((__int64)&v19, &v18, "spirv32v1.6", 11);
  }
  v18 = 51;
  if ( !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "spirv64", 7)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "spirv64v1.0", 11)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "spirv64v1.1", 11)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "spirv64v1.2", 11)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "spirv64v1.3", 11)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "spirv64v1.4", 11)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "spirv64v1.5", 11) )
  {
    sub_11EA430((__int64)&v19, &v18, "spirv64v1.6", 11);
  }
  if ( !(_BYTE)v21 && sub_9C7D00((__int64)&v19, "kalimba", 7u) )
  {
    v20 = 52;
    LOBYTE(v21) = 1;
  }
  v18 = 54;
  sub_11EA430((__int64)&v19, &v18, "lanai", 5);
  v18 = 57;
  sub_11EA430((__int64)&v19, &v18, "renderscript32", 14);
  v18 = 58;
  sub_11EA430((__int64)&v19, &v18, "renderscript64", 14);
  v18 = 53;
  sub_11EA430((__int64)&v19, &v18, "shave", 5);
  v18 = 59;
  sub_11EA430((__int64)&v19, &v18, "ve", 2);
  v18 = 55;
  sub_11EA430((__int64)&v19, &v18, "wasm32", 6);
  v18 = 56;
  sub_11EA430((__int64)&v19, &v18, "wasm64", 6);
  v18 = 10;
  sub_11EA430((__int64)&v19, &v18, "csky", 4);
  v18 = 13;
  sub_11EA430((__int64)&v19, &v18, "loongarch32", 11);
  v18 = 14;
  sub_11EA430((__int64)&v19, &v18, "loongarch64", 11);
  v18 = 11;
  if ( !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "dxil", 4)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "dxilv1.0", 8)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "dxilv1.1", 8)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "dxilv1.2", 8)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "dxilv1.3", 8)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "dxilv1.4", 8)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "dxilv1.5", 8)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "dxilv1.6", 8)
    && !(unsigned __int8)sub_11EA430((__int64)&v19, &v18, "dxilv1.7", 8) )
  {
    sub_11EA430((__int64)&v19, &v18, "dxilv1.8", 8);
  }
  v18 = 40;
  sub_11EA430((__int64)&v19, &v18, "xtensa", 6);
  if ( (_BYTE)v21 )
  {
    v1 = v20;
    if ( v20 )
      return v1;
  }
  v3 = j__strlen("arm");
  if ( !sub_9C7D00((__int64)&n, "arm", v3) )
  {
    v11 = j__strlen("thumb");
    if ( !sub_9C7D00((__int64)&n, "thumb", v11) )
    {
      v12 = j__strlen("aarch64");
      if ( !sub_9C7D00((__int64)&n, "aarch64", v12) )
      {
        v13 = j__strlen("bpf");
        if ( sub_9C7D00((__int64)&n, "bpf", v13) )
          return (unsigned int)sub_22B4290(n.m128i_i64[0], n.m128i_u64[1]);
        return 0;
      }
    }
  }
  v19 = _mm_load_si128(&n);
  v4 = sub_229C520(n.m128i_i64[0], v19.m128i_u64[1]);
  v5 = sub_229C5A0(v19.m128i_i64[0], v19.m128i_u64[1]);
  v6 = v5;
  if ( v5 == 1 )
  {
    v16 = (unsigned int)(v4 - 1);
    v1 = 0;
    if ( (unsigned int)v16 <= 2 )
      v1 = dword_26FCCD0[v16];
  }
  else
  {
    v1 = 0;
    if ( v5 == 2 )
    {
      v7 = (unsigned int)(v4 - 1);
      v1 = 0;
      if ( (unsigned int)v7 <= 2 )
        v1 = dword_26FCCC0[v7];
    }
  }
  v8.m128i_i64[0] = (__int64)sub_229C150(v19.m128i_i64[0], v19.m128i_u64[1]);
  v19 = v8;
  if ( !v8.m128i_i64[1] )
    return 0;
  if ( v4 == 2 )
  {
    v14 = j__strlen("v2");
    if ( sub_9C7D00((__int64)&v19, "v2", v14) )
      return 0;
    v15 = j__strlen("v3");
    if ( sub_9C7D00((__int64)&v19, "v3", v15) )
      return 0;
  }
  v9 = sub_229CC10(v19.m128i_i64[0], v19.m128i_u64[1]);
  v10 = sub_229CB60(v19.m128i_i64[0], v19.m128i_u64[1]);
  if ( v9 != 3 || v10 != 6 )
    return v1;
  return (unsigned int)(v6 == 2) + 35;
}
