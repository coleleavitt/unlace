_QWORD *__fastcall sub_F71C30(_QWORD *a1, unsigned __int64 *a2)
{
  _QWORD v3[2]; // [rsp+0h] [rbp-388h] BYREF
  _QWORD v4[11]; // [rsp+10h] [rbp-378h] BYREF
  char v5; // [rsp+69h] [rbp-31Fh]

  sub_FEA220(v4);
  v3[1] = 0;
  BYTE1(v3[0]) = (BYTE1(v4[0]) >> 2) & 2 | BYTE1(v3[0]) & 0xFD;
  BYTE2(v3[0]) = (BYTE3(v4[0]) >> 2 << 7) | BYTE2(v3[0]) & 0x7F;
  BYTE3(v3[0]) = ((((BYTE1(v4[0]) >> 4) ^ 1) & 1) << 6)
               | (32 * (((BYTE1(v4[0]) >> 3) ^ 1) & 1)) & 0xBF
               | (8 * LOBYTE(v4[0])) & 0x10
               | (8 * ((v4[0] & 0x1000LL) != 0)) & 0x8F
               | (4 * (v4[0] & 1)) & 0x8F
               | (BYTE1(v4[0]) >> 2) & 2
               | ((v4[0] & 0x1008) != 0)
               | BYTE3(v3[0]) & 0x80;
  BYTE4(v3[0]) = (4 * ((v4[0] & 0x10000080) == 128)) | (BYTE3(v4[0]) >> 2) & 2 | BYTE4(v3[0]) & 0xF9;
  BYTE5(v3[0]) = (v5 << 7) | BYTE5(v3[0]) & 0x7F;
  v3[0] = v3[0] & 0xFFFF80067F800200LL | 0x660800442002LL;
  sub_F71960(a1, a2, (__int64)v3);
  sub_9985E0(v4);
  return a1;
}
