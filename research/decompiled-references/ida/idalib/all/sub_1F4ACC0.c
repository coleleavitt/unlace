__int64 __fastcall sub_1F4ACC0(__int64 a1, __int64 *a2, _BYTE *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax

  sub_1F4A860(a1, a2, (__int64)a3);
  v4 = a2[2];
  v5 = *(unsigned int *)(v4 + 24);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5);
  a3[74] = ((_BYTE)v6 << 7) | a3[74] & 0x7F;
  a3[75] = ((unsigned __int8)((unsigned int)v6 >> 7) << 7)
         | (((v6 & 0x40) != 0) << 6) & 0x7F
         | (32 * ((v6 & 0x20) != 0)) & 0x7F
         | (16 * ((v6 & 0x10) != 0)) & 0x1F
         | (4 * ((v6 & 8) != 0)) & 0x1F
         | (2 * ((v6 & 4) != 0)) & 0xB
         | ((v6 & 2) != 0)
         | a3[75] & 8;
  a3[76] = (8 * ((v6 & 0x800) != 0)) & 0xCF
         | (4 * ((v6 & 0x400) != 0)) & 0xCF
         | (2 * ((v6 & 0x200) != 0)) & 0xC3
         | BYTE1(v6) & 1
         | a3[76] & 0xC0
         | (16 * (((unsigned int)v6 >> 12) & 3));
  return a1;
}
