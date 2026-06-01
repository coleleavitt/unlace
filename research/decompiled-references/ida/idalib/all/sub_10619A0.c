__int64 __fastcall sub_10619A0(_BYTE *a1, __int64 a2, __int64 a3)
{
  char v3; // al
  char v4; // al
  char v5; // al
  char v6; // al
  char v7; // al
  char v8; // al
  __int64 result; // rax
  char v10; // [rsp+Fh] [rbp-39h] BYREF
  _QWORD v11[2]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int8 v12; // [rsp+20h] [rbp-28h]
  unsigned __int8 v13; // [rsp+21h] [rbp-27h]

  v11[0] = a2;
  v11[1] = a3;
  v13 = 0;
  v10 = 1;
  if ( !(unsigned __int8)sub_B7E0A0((__int64)v11, &v10, "aarch64", 7)
    && !(unsigned __int8)sub_B7E0A0((__int64)v11, &v10, "arm64", 5) )
  {
    sub_B7E0A0((__int64)v11, &v10, "arm", 3);
  }
  v10 = a1[578];
  sub_B7E0A0((__int64)v11, &v10, "fmv", 3);
  v10 = a1[512] & 1;
  sub_B7E0A0((__int64)v11, &v10, "fp", 2);
  v10 = (*((_DWORD *)a1 + 128) & 2) != 0;
  if ( !(unsigned __int8)sub_B7E0A0((__int64)v11, &v10, "neon", 4) )
    sub_B7E0A0((__int64)v11, &v10, "simd", 4);
  v10 = a1[573];
  sub_B7E0A0((__int64)v11, &v10, "jscvt", 5);
  v10 = a1[574];
  sub_B7E0A0((__int64)v11, &v10, "fcma", 4);
  v10 = a1[529];
  sub_B7E0A0((__int64)v11, &v10, "rng", 3);
  v10 = a1[542];
  sub_B7E0A0((__int64)v11, &v10, "flagm", 5);
  v10 = a1[543];
  sub_B7E0A0((__int64)v11, &v10, "flagm2", 6);
  v10 = a1[524];
  sub_B7E0A0((__int64)v11, &v10, "fp16fml", 7);
  v10 = a1[523];
  sub_B7E0A0((__int64)v11, &v10, "dotprod", 7);
  v10 = a1[521];
  sub_B7E0A0((__int64)v11, &v10, "sm4", 3);
  v10 = a1[547];
  sub_B7E0A0((__int64)v11, &v10, "rdm", 3);
  v10 = a1[541];
  sub_B7E0A0((__int64)v11, &v10, "lse", 3);
  v10 = a1[516];
  sub_B7E0A0((__int64)v11, &v10, "crc", 3);
  v10 = a1[517];
  sub_B7E0A0((__int64)v11, &v10, "cssc", 4);
  v10 = a1[519];
  sub_B7E0A0((__int64)v11, &v10, "sha2", 4);
  v10 = a1[520];
  sub_B7E0A0((__int64)v11, &v10, "sha3", 4);
  v10 = a1[518];
  if ( !(unsigned __int8)sub_B7E0A0((__int64)v11, &v10, "aes", 3) )
    sub_B7E0A0((__int64)v11, &v10, "pmull", 5);
  v10 = a1[522];
  if ( !(unsigned __int8)sub_B7E0A0((__int64)v11, &v10, "fp16", 4) )
    sub_B7E0A0((__int64)v11, &v10, "fullfp16", 8);
  v10 = a1[548];
  sub_B7E0A0((__int64)v11, &v10, "dit", 3);
  v10 = a1[549];
  sub_B7E0A0((__int64)v11, &v10, "dpb", 3);
  v10 = a1[550];
  sub_B7E0A0((__int64)v11, &v10, "dpb2", 4);
  v10 = a1[546];
  sub_B7E0A0((__int64)v11, &v10, "rcpc", 4);
  v10 = a1[551];
  sub_B7E0A0((__int64)v11, &v10, "frintts", 7);
  v10 = a1[530];
  sub_B7E0A0((__int64)v11, &v10, "i8mm", 4);
  v10 = a1[531];
  sub_B7E0A0((__int64)v11, &v10, "bf16", 4);
  v10 = (*((_DWORD *)a1 + 128) & 4) != 0;
  sub_B7E0A0((__int64)v11, &v10, "sve", 3);
  v10 = a1[537];
  sub_B7E0A0((__int64)v11, &v10, "sve-b16b16", 10);
  v3 = 0;
  if ( (a1[512] & 4) != 0 )
    v3 = a1[540];
  v10 = v3;
  sub_B7E0A0((__int64)v11, &v10, "f32mm", 5);
  v4 = 0;
  if ( (a1[512] & 4) != 0 )
    v4 = a1[539];
  v10 = v4;
  sub_B7E0A0((__int64)v11, &v10, "f64mm", 5);
  v5 = 0;
  if ( (a1[512] & 4) != 0 )
    v5 = a1[532];
  v10 = v5;
  sub_B7E0A0((__int64)v11, &v10, "sve2", 4);
  v10 = a1[534];
  sub_B7E0A0((__int64)v11, &v10, "sve-aes", 7);
  v10 = a1[512] & a1[538] & 1;
  sub_B7E0A0((__int64)v11, &v10, "sve-bitperm", 11);
  v6 = 0;
  if ( (a1[512] & 4) != 0 )
    v6 = a1[535];
  v10 = v6;
  sub_B7E0A0((__int64)v11, &v10, "sve2-sha3", 9);
  v7 = 0;
  if ( (a1[512] & 4) != 0 )
    v7 = a1[536];
  v10 = v7;
  sub_B7E0A0((__int64)v11, &v10, "sve2-sm4", 8);
  v8 = 0;
  if ( (a1[512] & 4) != 0 )
    v8 = a1[533];
  v10 = v8;
  sub_B7E0A0((__int64)v11, &v10, "sve2p1", 6);
  v10 = a1[552];
  sub_B7E0A0((__int64)v11, &v10, "sme", 3);
  v10 = a1[553];
  sub_B7E0A0((__int64)v11, &v10, "sme2", 4);
  v10 = a1[558];
  sub_B7E0A0((__int64)v11, &v10, "sme2p1", 6);
  v10 = a1[554];
  sub_B7E0A0((__int64)v11, &v10, "sme-f64f64", 10);
  v10 = a1[555];
  sub_B7E0A0((__int64)v11, &v10, "sme-i16i64", 10);
  v10 = a1[581];
  sub_B7E0A0((__int64)v11, &v10, "sme-fa64", 8);
  v10 = a1[556];
  sub_B7E0A0((__int64)v11, &v10, "sme-f16f16", 10);
  v10 = a1[557];
  sub_B7E0A0((__int64)v11, &v10, "sme-b16b16", 10);
  v10 = a1[525];
  sub_B7E0A0((__int64)v11, &v10, "memtag", 6);
  v10 = a1[568];
  sub_B7E0A0((__int64)v11, &v10, "sb", 2);
  v10 = a1[569];
  sub_B7E0A0((__int64)v11, &v10, "predres", 7);
  v10 = a1[570];
  if ( !(unsigned __int8)sub_B7E0A0((__int64)v11, &v10, "ssbs", 4) )
    sub_B7E0A0((__int64)v11, &v10, "ssbs2", 5);
  v10 = a1[571];
  sub_B7E0A0((__int64)v11, &v10, "bti", 3);
  v10 = a1[528];
  if ( !(unsigned __int8)sub_B7E0A0((__int64)v11, &v10, "ls64", 4)
    && !(unsigned __int8)sub_B7E0A0((__int64)v11, &v10, "ls64_v", 6) )
  {
    sub_B7E0A0((__int64)v11, &v10, "ls64_accdata", 12);
  }
  v10 = a1[572];
  sub_B7E0A0((__int64)v11, &v10, "wfxt", 4);
  v10 = a1[580];
  sub_B7E0A0((__int64)v11, &v10, "rcpc3", 5);
  v10 = a1[559];
  sub_B7E0A0((__int64)v11, &v10, "fp8", 3);
  v10 = a1[560];
  sub_B7E0A0((__int64)v11, &v10, "fp8fma", 6);
  v10 = a1[561];
  sub_B7E0A0((__int64)v11, &v10, "fp8dot2", 7);
  v10 = a1[562];
  sub_B7E0A0((__int64)v11, &v10, "fp8dot4", 7);
  v10 = a1[563];
  sub_B7E0A0((__int64)v11, &v10, "ssve-fp8dot2", 12);
  v10 = a1[564];
  sub_B7E0A0((__int64)v11, &v10, "ssve-fp8dot4", 12);
  v10 = a1[565];
  sub_B7E0A0((__int64)v11, &v10, "ssve-fp8fma", 11);
  v10 = a1[566];
  sub_B7E0A0((__int64)v11, &v10, "sme-f8f32", 9);
  v10 = a1[567];
  sub_B7E0A0((__int64)v11, &v10, "sme-f8f16", 9);
  result = v13;
  if ( v13 )
    return v12;
  return result;
}
